// dllmain.h: объявление класса модуля.

class CFileHandlerModule : public ATL::CAtlDllModuleT< CFileHandlerModule >
{
public :
	DECLARE_LIBID(LIBID_FileHandlerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_FILEHANDLER, "{ba5b793a-7a1e-4faa-9432-181415ef7ec7}")
};

extern class CFileHandlerModule _AtlModule;
