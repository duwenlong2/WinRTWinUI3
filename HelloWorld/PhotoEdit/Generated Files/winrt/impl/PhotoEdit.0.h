// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_PhotoEdit_0_H
#define WINRT_PhotoEdit_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Markup
{
    struct IXamlMetadataProvider;
}
WINRT_EXPORT namespace winrt::PhotoEdit
{
    struct IMainWindow;
    struct MainWindow;
    struct XamlMetaDataProvider;
}
namespace winrt::impl
{
    template <> struct category<winrt::PhotoEdit::IMainWindow>{ using type = interface_category; };
    template <> struct category<winrt::PhotoEdit::MainWindow>{ using type = class_category; };
    template <> struct category<winrt::PhotoEdit::XamlMetaDataProvider>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::PhotoEdit::MainWindow> = L"PhotoEdit.MainWindow";
    template <> inline constexpr auto& name_v<winrt::PhotoEdit::XamlMetaDataProvider> = L"PhotoEdit.XamlMetaDataProvider";
    template <> inline constexpr auto& name_v<winrt::PhotoEdit::IMainWindow> = L"PhotoEdit.IMainWindow";
    template <> inline constexpr guid guid_v<winrt::PhotoEdit::IMainWindow>{ 0x1AF414A6,0x0CA7,0x5C31,{ 0x90,0x94,0x68,0x4B,0xE8,0xBD,0xEB,0x36 } }; // 1AF414A6-0CA7-5C31-9094-684BE8BDEB36
    template <> struct default_interface<winrt::PhotoEdit::MainWindow>{ using type = winrt::PhotoEdit::IMainWindow; };
    template <> struct default_interface<winrt::PhotoEdit::XamlMetaDataProvider>{ using type = winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider; };
    template <> struct abi<winrt::PhotoEdit::IMainWindow>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_MyProperty(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MyProperty(int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_PhotoEdit_IMainWindow
    {
        [[nodiscard]] auto MyProperty() const;
        auto MyProperty(int32_t value) const;
    };
    template <> struct consume<winrt::PhotoEdit::IMainWindow>
    {
        template <typename D> using type = consume_PhotoEdit_IMainWindow<D>;
    };
}
#endif