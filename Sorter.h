// Sorter.h: объявление CSorter

#pragma once
#include "resource.h"       // основные символы

#include "FileHandler_i.h"
#include "_ISorterEvents_CP.h"

#include <string>
#include <fstream>
#include <filesystem>
#include <algorithm>

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Однопотоковые COM-объекты не поддерживаются должным образом платформой Windows CE, например платформами Windows Mobile, в которых не предусмотрена полная поддержка DCOM. Определите _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, чтобы принудить ATL поддерживать создание однопотоковых COM-объектов и разрешить использование его реализаций однопотоковых COM-объектов. Для потоковой модели в вашем rgs-файле задано значение 'Free', поскольку это единственная потоковая модель, поддерживаемая не-DCOM платформами Windows CE."
#endif

using namespace ATL;

//тип сортировки
enum class SortType {
	//тип сортировки по возрастанию
	increase,
	//тип сортировки по убыванию
	decrease,
};
// CSorter

class ATL_NO_VTABLE CSorter :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSorter, &CLSID_Sorter>,
	public IConnectionPointContainerImpl<CSorter>,
	public CProxy_ISorterEvents<CSorter>,
	public IDispatchImpl<ISorter, &IID_ISorter, &LIBID_FileHandlerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CSorter() {}

DECLARE_REGISTRY_RESOURCEID(106)

BEGIN_COM_MAP(CSorter)
	COM_INTERFACE_ENTRY(ISorter)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CSorter)
	CONNECTION_POINT_ENTRY(__uuidof(_ISorterEvents))
END_CONNECTION_POINT_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()
	HRESULT FinalConstruct() { return S_OK;	}
	void FinalRelease() {}
public:
	STDMETHOD(SetInputFile)(BSTR str);
	STDMETHOD(SetOutputFile)(BSTR str);
	STDMETHOD(SetIncrease)();
	STDMETHOD(SetDecrease)();
	STDMETHOD(Start)(SHORT* bAbort);
	//STDMETHOD(Abort)();
	//STDMETHOD(SetAbortPointer)(BOOL* pAbort);
private:
	//BOOL* isAbort = nullptr;
	std::filesystem::path inputFlie;
	std::filesystem::path outputFlie;
	SortType sortType;
	//bool isAbort;
};

OBJECT_ENTRY_AUTO(__uuidof(Sorter), CSorter)