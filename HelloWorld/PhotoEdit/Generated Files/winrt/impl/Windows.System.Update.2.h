// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Windows_System_Update_2_H
#define WINRT_Windows_System_Update_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Update.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Update
{
    struct WINRT_IMPL_EMPTY_BASES SystemUpdateItem : winrt::Windows::System::Update::ISystemUpdateItem
    {
        SystemUpdateItem(std::nullptr_t) noexcept {}
        SystemUpdateItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Update::ISystemUpdateItem(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemUpdateLastErrorInfo : winrt::Windows::System::Update::ISystemUpdateLastErrorInfo
    {
        SystemUpdateLastErrorInfo(std::nullptr_t) noexcept {}
        SystemUpdateLastErrorInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Update::ISystemUpdateLastErrorInfo(ptr, take_ownership_from_abi) {}
    };
    struct SystemUpdateManager
    {
        SystemUpdateManager() = delete;
        static auto IsSupported();
        [[nodiscard]] static auto State();
        static auto StateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using StateChanged_revoker = impl::factory_event_revoker<winrt::Windows::System::Update::ISystemUpdateManagerStatics, &impl::abi_t<winrt::Windows::System::Update::ISystemUpdateManagerStatics>::remove_StateChanged>;
        [[nodiscard]] static auto StateChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto StateChanged(winrt::event_token const& token);
        [[nodiscard]] static auto DownloadProgress();
        [[nodiscard]] static auto InstallProgress();
        [[nodiscard]] static auto UserActiveHoursStart();
        [[nodiscard]] static auto UserActiveHoursEnd();
        [[nodiscard]] static auto UserActiveHoursMax();
        static auto TrySetUserActiveHours(winrt::Windows::Foundation::TimeSpan const& start, winrt::Windows::Foundation::TimeSpan const& end);
        [[nodiscard]] static auto LastUpdateCheckTime();
        [[nodiscard]] static auto LastUpdateInstallTime();
        [[nodiscard]] static auto LastErrorInfo();
        static auto GetAutomaticRebootBlockIds();
        static auto BlockAutomaticRebootAsync(param::hstring const& lockId);
        static auto UnblockAutomaticRebootAsync(param::hstring const& lockId);
        [[nodiscard]] static auto ExtendedError();
        static auto GetUpdateItems();
        [[nodiscard]] static auto AttentionRequiredReason();
        static auto SetFlightRing(param::hstring const& flightRing);
        static auto GetFlightRing();
        static auto StartInstall(winrt::Windows::System::Update::SystemUpdateStartInstallAction const& action);
        static auto RebootToCompleteInstall();
        static auto StartCancelUpdates();
    };
}
#endif
