

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for FileHandler.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __FileHandler_i_h__
#define __FileHandler_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISorter_FWD_DEFINED__
#define __ISorter_FWD_DEFINED__
typedef interface ISorter ISorter;

#endif 	/* __ISorter_FWD_DEFINED__ */


#ifndef ___ISorterEvents_FWD_DEFINED__
#define ___ISorterEvents_FWD_DEFINED__
typedef interface _ISorterEvents _ISorterEvents;

#endif 	/* ___ISorterEvents_FWD_DEFINED__ */


#ifndef __Sorter_FWD_DEFINED__
#define __Sorter_FWD_DEFINED__

#ifdef __cplusplus
typedef class Sorter Sorter;
#else
typedef struct Sorter Sorter;
#endif /* __cplusplus */

#endif 	/* __Sorter_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISorter_INTERFACE_DEFINED__
#define __ISorter_INTERFACE_DEFINED__

/* interface ISorter */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISorter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f8de2842-0378-4605-b3db-4ac1b22ac9c4")
    ISorter : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetInputFile( 
            /* [in] */ BSTR str) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetOutputFile( 
            /* [in] */ BSTR str) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetIncrease( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetDecrease( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Start( 
            /* [in] */ SHORT *pAbort) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISorterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISorter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISorter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISorter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISorter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISorter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISorter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISorter * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetInputFile )( 
            ISorter * This,
            /* [in] */ BSTR str);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetOutputFile )( 
            ISorter * This,
            /* [in] */ BSTR str);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetIncrease )( 
            ISorter * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetDecrease )( 
            ISorter * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            ISorter * This,
            /* [in] */ SHORT *pAbort);
        
        END_INTERFACE
    } ISorterVtbl;

    interface ISorter
    {
        CONST_VTBL struct ISorterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISorter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISorter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISorter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISorter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISorter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISorter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISorter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISorter_SetInputFile(This,str)	\
    ( (This)->lpVtbl -> SetInputFile(This,str) ) 

#define ISorter_SetOutputFile(This,str)	\
    ( (This)->lpVtbl -> SetOutputFile(This,str) ) 

#define ISorter_SetIncrease(This)	\
    ( (This)->lpVtbl -> SetIncrease(This) ) 

#define ISorter_SetDecrease(This)	\
    ( (This)->lpVtbl -> SetDecrease(This) ) 

#define ISorter_Start(This,pAbort)	\
    ( (This)->lpVtbl -> Start(This,pAbort) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISorter_INTERFACE_DEFINED__ */



#ifndef __FileHandlerLib_LIBRARY_DEFINED__
#define __FileHandlerLib_LIBRARY_DEFINED__

/* library FileHandlerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_FileHandlerLib;

#ifndef ___ISorterEvents_DISPINTERFACE_DEFINED__
#define ___ISorterEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISorterEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ISorterEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ff461761-c77b-4bd5-bff3-8597eff83846")
    _ISorterEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISorterEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISorterEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISorterEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISorterEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISorterEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISorterEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISorterEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISorterEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ISorterEventsVtbl;

    interface _ISorterEvents
    {
        CONST_VTBL struct _ISorterEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISorterEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ISorterEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ISorterEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ISorterEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ISorterEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ISorterEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ISorterEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISorterEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Sorter;

#ifdef __cplusplus

class DECLSPEC_UUID("95589923-e495-4b40-b42c-08aff79a4953")
Sorter;
#endif
#endif /* __FileHandlerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


