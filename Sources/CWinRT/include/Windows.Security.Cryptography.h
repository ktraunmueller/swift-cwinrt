// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding;

enum __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding
    {
        __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding_Utf8 = 0,
    __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding_Utf16LE = 1,
    __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding_Utf16BE = 2,
};

#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Compare)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* object1,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* object2,
        boolean* isEqual);
    HRESULT (STDMETHODCALLTYPE* GenerateRandom)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        UINT32 length,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer** buffer);
    HRESULT (STDMETHODCALLTYPE* GenerateRandomNumber)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* CreateFromByteArray)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        UINT32 valueLength,
        BYTE* value,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer** buffer);
    HRESULT (STDMETHODCALLTYPE* CopyToByteArray)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        UINT32* valueLength,
        BYTE** value);
    HRESULT (STDMETHODCALLTYPE* DecodeFromHexString)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        HSTRING value,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer** buffer);
    HRESULT (STDMETHODCALLTYPE* EncodeToHexString)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* DecodeFromBase64String)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        HSTRING value,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer** buffer);
    HRESULT (STDMETHODCALLTYPE* EncodeToBase64String)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* ConvertStringToBinary)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        HSTRING value,
        enum __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding encoding,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer** buffer);
    HRESULT (STDMETHODCALLTYPE* ConvertBinaryToString)(__x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics* This,
        enum __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding encoding,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        HSTRING* value);

        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl;

    interface __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_INTERFACE_DEFINED__) */
    
