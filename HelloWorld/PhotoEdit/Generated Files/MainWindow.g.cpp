// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

void* winrt_make_PhotoEdit_MainWindow()
{
    return winrt::detach_abi(winrt::make<winrt::PhotoEdit::factory_implementation::MainWindow>());
}
WINRT_EXPORT namespace winrt::PhotoEdit
{
    MainWindow::MainWindow() :
        MainWindow(make<PhotoEdit::implementation::MainWindow>())
    {
    }
}