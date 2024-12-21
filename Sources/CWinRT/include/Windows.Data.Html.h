// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;

#endif // ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CData_CHtml_CIHtmlUtilities* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CData_CHtml_CIHtmlUtilities* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CData_CHtml_CIHtmlUtilities* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CData_CHtml_CIHtmlUtilities* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CData_CHtml_CIHtmlUtilities* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CData_CHtml_CIHtmlUtilities* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* ConvertToText)(__x_ABI_CWindows_CData_CHtml_CIHtmlUtilities* This,
        HSTRING html,
        HSTRING* text);

        END_INTERFACE
    } __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl;

    interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;
#endif /* !defined(____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__) */
    
