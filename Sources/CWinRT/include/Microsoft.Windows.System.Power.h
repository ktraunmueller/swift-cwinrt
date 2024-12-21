// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics;

#endif // ____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2 __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2;

#endif // ____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode;

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode __x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerModeVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode* result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerModeVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerModeVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerModeVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerModeVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerModeVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIEventHandler_1_IInspectable __x_ABI_C__FIEventHandler_1_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIEventHandler_1_IInspectable;

    typedef struct __x_ABI_C__FIEventHandler_1_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIEventHandler_1_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIEventHandler_1_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIEventHandler_1_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIEventHandler_1_IInspectable* This,
        IInspectable* sender,
        IInspectable* args);

        END_INTERFACE
    } __x_ABI_C__FIEventHandler_1_IInspectableVtbl;

    interface __x_ABI_C__FIEventHandler_1_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIEventHandler_1_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIEventHandler_1_IInspectable_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

typedef enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CBatteryStatus __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CBatteryStatus;

typedef enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CDisplayStatus __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CDisplayStatus;

typedef enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEnergySaverStatus __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEnergySaverStatus;

typedef enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSourceKind __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSourceKind;

typedef enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSupplyStatus __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSupplyStatus;

typedef enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CSystemSuspendStatus __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CSystemSuspendStatus;

typedef enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CUserPresenceStatus __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CUserPresenceStatus;

enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CBatteryStatus
    {
        __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CBatteryStatus_NotPresent = 0,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CBatteryStatus_Discharging = 1,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CBatteryStatus_Idle = 2,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CBatteryStatus_Charging = 3,
};

enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CDisplayStatus
    {
        __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CDisplayStatus_Off = 0,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CDisplayStatus_On = 1,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CDisplayStatus_Dimmed = 2,
};

enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode
    {
        __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode_BatterySaver = 0,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode_BetterBattery = 1,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode_Balanced = 2,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode_HighPerformance = 3,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode_MaxPerformance = 4,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode_GameMode = 5,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode_MixedReality = 6,
};

enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEnergySaverStatus
    {
        __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEnergySaverStatus_Uninitialized = 0,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEnergySaverStatus_Disabled = 1,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEnergySaverStatus_Off = 2,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEnergySaverStatus_On = 3,
};

enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSourceKind
    {
        __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSourceKind_AC = 0,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSourceKind_DC = 1,
};

enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSupplyStatus
    {
        __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSupplyStatus_NotPresent = 0,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSupplyStatus_Inadequate = 1,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSupplyStatus_Adequate = 2,
};

enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CSystemSuspendStatus
    {
        __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CSystemSuspendStatus_Uninitialized = 0,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CSystemSuspendStatus_Entering = 1,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CSystemSuspendStatus_AutoResume = 2,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CSystemSuspendStatus_ManualResume = 3,
};

enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CUserPresenceStatus
    {
        __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CUserPresenceStatus_Present = 0,
    __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CUserPresenceStatus_Absent = 1,
};

#if !defined(____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_EnergySaverStatus)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEnergySaverStatus* value);
    HRESULT (STDMETHODCALLTYPE* add_EnergySaverStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_EnergySaverStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_BatteryStatus)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CBatteryStatus* value);
    HRESULT (STDMETHODCALLTYPE* add_BatteryStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_BatteryStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_PowerSupplyStatus)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSupplyStatus* value);
    HRESULT (STDMETHODCALLTYPE* add_PowerSupplyStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PowerSupplyStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_RemainingChargePercent)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* add_RemainingChargePercentChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_RemainingChargePercentChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_RemainingDischargeTime)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan* value);
    HRESULT (STDMETHODCALLTYPE* add_RemainingDischargeTimeChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_RemainingDischargeTimeChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_PowerSourceKind)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CPowerSourceKind* value);
    HRESULT (STDMETHODCALLTYPE* add_PowerSourceKindChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PowerSourceKindChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_DisplayStatus)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CDisplayStatus* value);
    HRESULT (STDMETHODCALLTYPE* add_DisplayStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_DisplayStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_SystemIdleStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_SystemIdleStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_EffectivePowerMode)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CMicrosoft__CWindows__CSystem__CPower__CEffectivePowerMode** value);
    HRESULT (STDMETHODCALLTYPE* add_EffectivePowerModeChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_EffectivePowerModeChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_UserPresenceStatus)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CUserPresenceStatus* value);
    HRESULT (STDMETHODCALLTYPE* add_UserPresenceStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_UserPresenceStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_SystemSuspendStatus)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CSystemSuspendStatus* value);
    HRESULT (STDMETHODCALLTYPE* add_SystemSuspendStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_SystemSuspendStatusChanged)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl;

    interface __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_EffectivePowerMode2)(__x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2* This,
        enum __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CEffectivePowerMode* value);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2Vtbl;

    interface __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CSystem_CPower_CIPowerManagerStatics2_INTERFACE_DEFINED__) */
    
