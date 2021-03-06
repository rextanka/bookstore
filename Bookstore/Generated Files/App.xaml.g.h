﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include "XamlTypeInfo.xaml.g.h"

namespace winrt::Bookstore::implementation
{
    template <typename D, typename ... Interfaces>
    class AppT: public ::winrt::Windows::UI::Xaml::ApplicationT<D, ::winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider, Interfaces...>
    {
        using IXamlType = ::winrt::Windows::UI::Xaml::Markup::IXamlType;

    public:
        void InitializeComponent()
        {}

        IXamlType GetXamlType(::winrt::Windows::UI::Xaml::Interop::TypeName const& type)
        {
            return AppProvider()->GetXamlType(type);
        }

        IXamlType GetXamlType(::winrt::hstring const& fullName)
        {
            return AppProvider()->GetXamlType(fullName);
        }

        ::winrt::com_array<::winrt::Windows::UI::Xaml::Markup::XmlnsDefinition> GetXmlnsDefinitions()
        {
            return AppProvider()->GetXmlnsDefinitions();
        }

    private:
        bool _contentLoaded{false};
        std::shared_ptr<::winrt::XamlTypeInfo::implementation::XamlMetaDataProvider> _appProvider;
        std::shared_ptr<::winrt::XamlTypeInfo::implementation::XamlMetaDataProvider> AppProvider()
        {
            if (!_appProvider)
            {
                _appProvider = std::make_shared<::winrt::XamlTypeInfo::implementation::XamlMetaDataProvider>();
            }
            return _appProvider;
        }
    };
}

