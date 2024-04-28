// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_Diagnostics_H
#define WINRT_Microsoft_UI_Composition_Diagnostics_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230706.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230706.1"
#include "winrt/Microsoft.UI.Composition.h"
#include "winrt/impl/Microsoft.UI.Composition.2.h"
#include "winrt/impl/Microsoft.UI.Composition.Diagnostics.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Microsoft_UI_Composition_Diagnostics_ICompositionDebugHeatMaps<D>::Hide(winrt::Microsoft::UI::Composition::Visual const& subtree) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps)->Hide(*(void**)(&subtree)));
    }
    template <typename D> auto consume_Microsoft_UI_Composition_Diagnostics_ICompositionDebugHeatMaps<D>::ShowMemoryUsage(winrt::Microsoft::UI::Composition::Visual const& subtree) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps)->ShowMemoryUsage(*(void**)(&subtree)));
    }
    template <typename D> auto consume_Microsoft_UI_Composition_Diagnostics_ICompositionDebugHeatMaps<D>::ShowOverdraw(winrt::Microsoft::UI::Composition::Visual const& subtree, winrt::Microsoft::UI::Composition::Diagnostics::CompositionDebugOverdrawContentKinds const& contentKinds) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps)->ShowOverdraw(*(void**)(&subtree), static_cast<uint32_t>(contentKinds)));
    }
    template <typename D> auto consume_Microsoft_UI_Composition_Diagnostics_ICompositionDebugHeatMaps<D>::ShowRedraw(winrt::Microsoft::UI::Composition::Visual const& subtree) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps)->ShowRedraw(*(void**)(&subtree)));
    }
    template <typename D> auto consume_Microsoft_UI_Composition_Diagnostics_ICompositionDebugSettings<D>::HeatMaps() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettings)->get_HeatMaps(&value));
        return winrt::Microsoft::UI::Composition::Diagnostics::CompositionDebugHeatMaps{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_UI_Composition_Diagnostics_ICompositionDebugSettingsStatics<D>::TryGetSettings(winrt::Microsoft::UI::Composition::Compositor const& compositor) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics)->TryGetSettings(*(void**)(&compositor), &result));
        return winrt::Microsoft::UI::Composition::Diagnostics::CompositionDebugSettings{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps> : produce_base<D, winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps>
    {
        int32_t __stdcall Hide(void* subtree) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hide(*reinterpret_cast<winrt::Microsoft::UI::Composition::Visual const*>(&subtree));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowMemoryUsage(void* subtree) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowMemoryUsage(*reinterpret_cast<winrt::Microsoft::UI::Composition::Visual const*>(&subtree));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowOverdraw(void* subtree, uint32_t contentKinds) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowOverdraw(*reinterpret_cast<winrt::Microsoft::UI::Composition::Visual const*>(&subtree), *reinterpret_cast<winrt::Microsoft::UI::Composition::Diagnostics::CompositionDebugOverdrawContentKinds const*>(&contentKinds));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRedraw(void* subtree) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowRedraw(*reinterpret_cast<winrt::Microsoft::UI::Composition::Visual const*>(&subtree));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettings> : produce_base<D, winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettings>
    {
        int32_t __stdcall get_HeatMaps(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::UI::Composition::Diagnostics::CompositionDebugHeatMaps>(this->shim().HeatMaps());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics> : produce_base<D, winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics>
    {
        int32_t __stdcall TryGetSettings(void* compositor, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Microsoft::UI::Composition::Diagnostics::CompositionDebugSettings>(this->shim().TryGetSettings(*reinterpret_cast<winrt::Microsoft::UI::Composition::Compositor const*>(&compositor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::Diagnostics
{
    constexpr auto operator|(CompositionDebugOverdrawContentKinds const left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        return static_cast<CompositionDebugOverdrawContentKinds>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(CompositionDebugOverdrawContentKinds& left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(CompositionDebugOverdrawContentKinds const left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        return static_cast<CompositionDebugOverdrawContentKinds>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(CompositionDebugOverdrawContentKinds& left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(CompositionDebugOverdrawContentKinds const value) noexcept
    {
        return static_cast<CompositionDebugOverdrawContentKinds>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(CompositionDebugOverdrawContentKinds const left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        return static_cast<CompositionDebugOverdrawContentKinds>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(CompositionDebugOverdrawContentKinds& left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto CompositionDebugSettings::TryGetSettings(winrt::Microsoft::UI::Composition::Compositor const& compositor)
    {
        return impl::call_factory<CompositionDebugSettings, ICompositionDebugSettingsStatics>([&](ICompositionDebugSettingsStatics const& f) { return f.TryGetSettings(compositor); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::Diagnostics::CompositionDebugHeatMaps> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::Diagnostics::CompositionDebugSettings> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
