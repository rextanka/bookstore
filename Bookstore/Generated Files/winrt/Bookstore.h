﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.180227.3"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Xaml.Data.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Bookstore.2.h"

#include "single_threaded_observable_vector.h"

namespace winrt::impl {

template <typename D> hstring consume_Bookstore_IBookSku<D>::Title() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Bookstore::IBookSku)->get_Title(put_abi(result)));
    return result;
}

template <typename D> void consume_Bookstore_IBookSku<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Bookstore::IBookSku)->put_Title(get_abi(value)));
}

template <typename D> Bookstore::BookSku consume_Bookstore_IBookstoreViewModel<D>::BookSku() const
{
    Bookstore::BookSku result{ nullptr };
    check_hresult(WINRT_SHIM(Bookstore::IBookstoreViewModel)->get_BookSku(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> consume_Bookstore_IBookstoreViewModel<D>::BookSkus() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> result{ nullptr };
    check_hresult(WINRT_SHIM(Bookstore::IBookstoreViewModel)->get_BookSkus(put_abi(result)));
    return result;
}

template <typename D> Bookstore::BookstoreViewModel consume_Bookstore_IMainPage<D>::MainViewModel() const
{
    Bookstore::BookstoreViewModel result{ nullptr };
    check_hresult(WINRT_SHIM(Bookstore::IMainPage)->get_MainViewModel(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Bookstore::IBookSku> : produce_base<D, Bookstore::IBookSku>
{
    HRESULT __stdcall get_Title(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Bookstore::IBookstoreViewModel> : produce_base<D, Bookstore::IBookstoreViewModel>
{
    HRESULT __stdcall get_BookSku(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Bookstore::BookSku>(this->shim().BookSku());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BookSkus(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable>>(this->shim().BookSkus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Bookstore::IMainPage> : produce_base<D, Bookstore::IMainPage>
{
    HRESULT __stdcall get_MainViewModel(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Bookstore::BookstoreViewModel>(this->shim().MainViewModel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Bookstore {

inline MainPage::MainPage() :
    MainPage(get_activation_factory<MainPage>().ActivateInstance<MainPage>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Bookstore::IBookSku> : winrt::impl::hash_base<winrt::Bookstore::IBookSku> {};
template<> struct hash<winrt::Bookstore::IBookstoreViewModel> : winrt::impl::hash_base<winrt::Bookstore::IBookstoreViewModel> {};
template<> struct hash<winrt::Bookstore::IMainPage> : winrt::impl::hash_base<winrt::Bookstore::IMainPage> {};
template<> struct hash<winrt::Bookstore::BookSku> : winrt::impl::hash_base<winrt::Bookstore::BookSku> {};
template<> struct hash<winrt::Bookstore::BookstoreViewModel> : winrt::impl::hash_base<winrt::Bookstore::BookstoreViewModel> {};
template<> struct hash<winrt::Bookstore::MainPage> : winrt::impl::hash_base<winrt::Bookstore::MainPage> {};

}

WINRT_WARNING_POP
