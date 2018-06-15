﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data {

struct PropertyChangedEventHandler;

}

WINRT_EXPORT namespace winrt::Bookstore {

struct IBookSku;
struct IBookstoreViewModel;
struct IMainPage;
struct BookSku;
struct BookstoreViewModel;
struct MainPage;

}

namespace winrt::impl {

template <> struct category<Bookstore::IBookSku>{ using type = interface_category; };
template <> struct category<Bookstore::IBookstoreViewModel>{ using type = interface_category; };
template <> struct category<Bookstore::IMainPage>{ using type = interface_category; };
template <> struct category<Bookstore::BookSku>{ using type = class_category; };
template <> struct category<Bookstore::BookstoreViewModel>{ using type = class_category; };
template <> struct category<Bookstore::MainPage>{ using type = class_category; };
template <> struct name<Bookstore::IBookSku>{ static constexpr auto & value{ L"Bookstore.IBookSku" }; };
template <> struct name<Bookstore::IBookstoreViewModel>{ static constexpr auto & value{ L"Bookstore.IBookstoreViewModel" }; };
template <> struct name<Bookstore::IMainPage>{ static constexpr auto & value{ L"Bookstore.IMainPage" }; };
template <> struct name<Bookstore::BookSku>{ static constexpr auto & value{ L"Bookstore.BookSku" }; };
template <> struct name<Bookstore::BookstoreViewModel>{ static constexpr auto & value{ L"Bookstore.BookstoreViewModel" }; };
template <> struct name<Bookstore::MainPage>{ static constexpr auto & value{ L"Bookstore.MainPage" }; };
template <> struct guid<Bookstore::IBookSku>{ static constexpr GUID value{ 0x491D9B3E,0xFDA8,0x5BE2,{ 0x8D,0xAF,0x85,0x39,0xCF,0x39,0x54,0xB0 } }; };
template <> struct guid<Bookstore::IBookstoreViewModel>{ static constexpr GUID value{ 0xDC4FA358,0x2432,0x5BAA,{ 0x9C,0x19,0xD8,0xB3,0xC7,0x90,0x03,0x40 } }; };
template <> struct guid<Bookstore::IMainPage>{ static constexpr GUID value{ 0xA5FE0C62,0x3D69,0x5513,{ 0xB1,0xA6,0x33,0x0A,0x1B,0x56,0xB5,0x97 } }; };
template <> struct default_interface<Bookstore::BookSku>{ using type = Bookstore::IBookSku; };
template <> struct default_interface<Bookstore::BookstoreViewModel>{ using type = Bookstore::IBookstoreViewModel; };
template <> struct default_interface<Bookstore::MainPage>{ using type = Bookstore::IMainPage; };

template <typename D>
struct consume_Bookstore_IBookSku
{
    hstring Title() const;
    void Title(param::hstring const& value) const;
};
template <> struct consume<Bookstore::IBookSku> { template <typename D> using type = consume_Bookstore_IBookSku<D>; };

template <typename D>
struct consume_Bookstore_IBookstoreViewModel
{
    Bookstore::BookSku BookSku() const;
};
template <> struct consume<Bookstore::IBookstoreViewModel> { template <typename D> using type = consume_Bookstore_IBookstoreViewModel<D>; };

template <typename D>
struct consume_Bookstore_IMainPage
{
    Bookstore::BookstoreViewModel MainViewModel() const;
};
template <> struct consume<Bookstore::IMainPage> { template <typename D> using type = consume_Bookstore_IMainPage<D>; };

template <> struct abi<Bookstore::IBookSku>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* result) noexcept = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) noexcept = 0;
};};

template <> struct abi<Bookstore::IBookstoreViewModel>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_BookSku(void** result) noexcept = 0;
};};

template <> struct abi<Bookstore::IMainPage>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_MainViewModel(void** result) noexcept = 0;
};};

}
