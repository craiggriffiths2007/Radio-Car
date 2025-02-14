﻿
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlBindingInfo.g.h"

// XamlBindings

::XamlBindingInfo::XamlBindings::XamlBindings(::XamlBindingInfo::IXamlBindings* pBindings)
    : _pBindings(pBindings)
{
    _pBindings->SetOwningBindingsClass(this);
}

::XamlBindingInfo::XamlBindings::~XamlBindings()
{
    delete _pBindings;
}

void ::XamlBindingInfo::XamlBindings::Initialize()
{
    if (!this->_pBindings->IsInitialized())
    { 
        this->_pBindings->Update();
    }
}

void ::XamlBindingInfo::XamlBindings::Update()
{
    this->_pBindings->Update();
}

void ::XamlBindingInfo::XamlBindings::StopTracking()
{
    this->_pBindings->StopTracking();
}

void ::XamlBindingInfo::XamlBindings::Loading(::Windows::UI::Xaml::FrameworkElement^, ::Platform::Object^)
{
    this->Initialize();
}

void ::XamlBindingInfo::XamlBindings::DataContextChanged(::Windows::UI::Xaml::FrameworkElement^, ::Windows::UI::Xaml::DataContextChangedEventArgs^ args)
{
    if (this->_pBindings->SetDataRoot(args->NewValue))
    {
        this->Update();
    }
}

void ::XamlBindingInfo::XamlBindings::SubscribeForDataContextChanged(::Windows::UI::Xaml::FrameworkElement^ object)
{
    this->_pBindings->SubscribeForDataContextChanged(object, this);
}

void ::XamlBindingInfo::XamlBindings::DisconnectUnloadedObject(int connectionId)
{
    this->_pBindings->DisconnectUnloadedObject(connectionId);
}

void ::XamlBindingInfo::XamlBindings::Connect(int connectionId, ::Platform::Object^ target)
{
    this->_pBindings->Connect(connectionId, target);
}

bool ::XamlBindingInfo::XamlBindings::ProcessBinding(unsigned int)
{
    throw ref new ::Platform::NotImplementedException();
}

int ::XamlBindingInfo::XamlBindings::ProcessBindings(::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs^ args)
{
    int nextPhase = -1;
    int phase = static_cast<int>(args->Phase);
    if (phase < 0)
    {
        throw ref new ::Platform::InvalidArgumentException();
    }
    this->_pBindings->ProcessBindings(args->Item, args->ItemIndex, phase, &nextPhase);
    return nextPhase;
}

void ::XamlBindingInfo::XamlBindings::ResetTemplate()
{
    this->_pBindings->Recycle();
}

void ::XamlBindingInfo::XamlBindings::ProcessBindings(::Platform::Object^ item, int itemIndex, int phase, int* nextPhase)
{
    this->_pBindings->ProcessBindings(item, itemIndex, phase, nextPhase);
}

void ::XamlBindingInfo::XamlBindings::Recycle()
{
    this->_pBindings->Recycle();
}


::Windows::UI::Xaml::Markup::IComponentConnector^ ::XamlBindingInfo::XamlBindings::GetBindingConnector(int connectionId, ::Platform::Object^ target)
{
    return this->_pBindings->GetBindingConnector(connectionId, target);
}

::XamlBindingInfo::XamlBindings^ ::XamlBindingInfo::XamlBindings::GetParent()
{
    return this->_pBindings->GetParent();
}

void ::XamlBindingInfo::XamlBindings::SetParent(::XamlBindingInfo::XamlBindings^ parent)
{
    this->_pBindings->SetParent(parent);
}

bool ::XamlBindingInfo::XamlBindings::ContainsElement(int connectionId)
{
    return this->_pBindings->ContainsElement(connectionId);
}

void ::XamlBindingInfo::XamlBindings::RegisterForElementConnection(int connectionId, ::XamlBindingInfo::XamlBindings^ connector)
{
    this->_pBindings->RegisterForElementConnection(connectionId, connector);
}

// XamlBindingTrackingBase

::XamlBindingInfo::XamlBindingTrackingBase::XamlBindingTrackingBase()
{
}

void ::XamlBindingInfo::XamlBindingTrackingBase::SetListener(::XamlBindingInfo::IXamlBindingTracking* pBindings)
{
    this->_pBindingsTrackingWeakRef = pBindings;
}

void ::XamlBindingInfo::XamlBindingTrackingBase::PropertyChanged(Platform::Object^ sender, ::Windows::UI::Xaml::Data::PropertyChangedEventArgs^ e)
{
    if (this->_pBindingsTrackingWeakRef != nullptr)
    {
        this->_pBindingsTrackingWeakRef->PropertyChanged(sender, e);
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::CollectionChanged(::Platform::Object^ sender, ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs^ e)
{
    if (this->_pBindingsTrackingWeakRef != nullptr)
    {
        this->_pBindingsTrackingWeakRef->CollectionChanged(sender, e);
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::DependencyPropertyChanged(::Windows::UI::Xaml::DependencyObject^ sender, ::Windows::UI::Xaml::DependencyProperty^ prop)
{
    if (this->_pBindingsTrackingWeakRef != nullptr)
    {
        this->_pBindingsTrackingWeakRef->DependencyPropertyChanged(sender, prop);
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::VectorChanged(::Platform::Object^ sender, ::Windows::Foundation::Collections::IVectorChangedEventArgs^ e)
{
    if (this->_pBindingsTrackingWeakRef != nullptr)
    {
        this->_pBindingsTrackingWeakRef->VectorChanged(sender, e);
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::MapChanged(::Platform::Object^ sender, ::Windows::Foundation::Collections::IMapChangedEventArgs<::Platform::String^>^ e)
{
    if (this->_pBindingsTrackingWeakRef != nullptr)
    {
        this->_pBindingsTrackingWeakRef->MapChanged(sender, e);
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::UpdatePropertyChangedListener(::Windows::UI::Xaml::Data::INotifyPropertyChanged^ obj, ::Windows::UI::Xaml::Data::INotifyPropertyChanged^* pCache, ::Windows::Foundation::EventRegistrationToken* pToken)
{
    if (*pCache != nullptr && !(*pCache)->Equals(obj))
    {
        (*pCache)->PropertyChanged -= *pToken;
        *pCache = nullptr;
    }

    if (*pCache == nullptr && obj != nullptr)
    {
        *pCache = obj;
        *pToken = obj->PropertyChanged += ref new ::Windows::UI::Xaml::Data::PropertyChangedEventHandler(
            this, &::XamlBindingInfo::XamlBindingTrackingBase::PropertyChanged);
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::UpdatePropertyChangedListener(::Windows::UI::Xaml::Data::INotifyPropertyChanged^ obj, ::Platform::WeakReference& cacheRef, ::Windows::Foundation::EventRegistrationToken* pToken)
{
    ::Windows::UI::Xaml::Data::INotifyPropertyChanged^ cache = cacheRef.Resolve<::Windows::UI::Xaml::Data::INotifyPropertyChanged>();
    if (cache != nullptr && !cache->Equals(obj))
    {
        cache->PropertyChanged -= *pToken;
        cache = nullptr;
        cacheRef = nullptr;
    }

    if (cache == nullptr && obj != nullptr)
    {
        cacheRef = cache = obj;
        *pToken = obj->PropertyChanged += ref new ::Windows::UI::Xaml::Data::PropertyChangedEventHandler(
            this, &::XamlBindingInfo::XamlBindingTrackingBase::PropertyChanged);
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::UpdateCollectionChangedListener(::Windows::UI::Xaml::Interop::INotifyCollectionChanged^ obj, ::Windows::UI::Xaml::Interop::INotifyCollectionChanged^* pCache, ::Windows::Foundation::EventRegistrationToken* pToken)
{
    if (*pCache != nullptr && !(*pCache)->Equals(obj))
    {
        (*pCache)->CollectionChanged -= *pToken;
        *pCache = nullptr;
    }

    if (*pCache == nullptr && obj != nullptr)
    {
        *pCache = obj;
        *pToken = obj->CollectionChanged += ref new ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler(
            this, &::XamlBindingInfo::XamlBindingTrackingBase::CollectionChanged);
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::UpdateDependencyPropertyChangedListener(::Windows::UI::Xaml::DependencyObject^ obj, ::Windows::UI::Xaml::DependencyProperty^ property, ::Windows::UI::Xaml::DependencyObject^* pCache, __int64* pToken)
{
    if (*pCache != nullptr && !(*pCache)->Equals(obj))
    {
        (*pCache)->UnregisterPropertyChangedCallback(property, *pToken);
        *pCache = nullptr;
    }

    if (*pCache == nullptr && obj != nullptr)
    {
        *pCache = obj;
        *pToken = obj->RegisterPropertyChangedCallback(property, ref new ::Windows::UI::Xaml::DependencyPropertyChangedCallback(
            this, &::XamlBindingInfo::XamlBindingTrackingBase::DependencyPropertyChanged));
    }
}

void ::XamlBindingInfo::XamlBindingTrackingBase::UpdateDependencyPropertyChangedListener(::Windows::UI::Xaml::DependencyObject^ obj, ::Windows::UI::Xaml::DependencyProperty^ property, ::Platform::WeakReference& cacheRef, __int64* pToken)
{
    ::Windows::UI::Xaml::DependencyObject^ cache = cacheRef.Resolve<::Windows::UI::Xaml::DependencyObject>();
    if (cache != nullptr && !cache->Equals(obj))
    {
        cache->UnregisterPropertyChangedCallback(property, *pToken);
        cache = nullptr;
        cacheRef = nullptr;
    }

    if (cache == nullptr && obj != nullptr)
    {
        cacheRef = cache = obj;
        *pToken = obj->RegisterPropertyChangedCallback(property, ref new ::Windows::UI::Xaml::DependencyPropertyChangedCallback(
            this, &::XamlBindingInfo::XamlBindingTrackingBase::DependencyPropertyChanged));
    }
}

