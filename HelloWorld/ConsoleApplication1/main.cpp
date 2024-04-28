#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;
int main()
{
	init_apartment();

#pragma region readline writeline..
	// std::string userinput;
// Uri uri(L"http://aka.ms/cppwinrt");
// printf("Hello, %ls!\n", uri.AbsoluteUri().c_str());  
// std::cout << "请输入一些文本:" << std::endl;
// std::getline(std::cin, userinput);
// printf(userinput.c_str()); 
#pragma endregion
	Uri rssFeedUri{ L"https://blogs.windows.com/feed" };
	SyndicationClient syndicationClient;
	syndicationClient.SetRequestHeader(L"User-Agent", L"Mozilla/5.0 (compatible; MSIE 10.0; Windows NT 6.2; WOW64; Trident/6.0)");
	SyndicationFeed syndicationFeed = syndicationClient.RetrieveFeedAsync(rssFeedUri).get();

 
	for (const SyndicationItem syndicationItem : syndicationFeed.Items())
	{
		winrt::hstring titleAsHstring = syndicationItem.Title().Text();

		std::wstring titleAsStdWstring{ titleAsHstring.c_str() };
		titleAsStdWstring.erase(remove(titleAsStdWstring.begin(), titleAsStdWstring.end(), L'™'), titleAsStdWstring.end());
		titleAsHstring = titleAsStdWstring;
		std::wcout << titleAsHstring.c_str() << std::endl;
	}


#pragma region 

}
