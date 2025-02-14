﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class SwapChainPanel;
                ref class Grid;
                ref class TextBlock;
                ref class TextBox;
                ref class ListView;
                ref class Image;
                ref class CheckBox;
            }
        }
    }
}

namespace Simple3DGame
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class DirectXPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        void UnloadObject(::Windows::UI::Xaml::DependencyObject^ dependencyObject);
        void DisconnectUnloadedObject(int connectionId);
    
    private:
        bool _contentLoaded;
    
        class DirectXPage_obj22_Bindings;
        class DirectXPage_obj28_Bindings;
        class DirectXPage_obj59_Bindings;
        class DirectXPage_obj1_Bindings;
    
        private: ::Windows::UI::Xaml::Controls::SwapChainPanel^ swapChainPanel;
        private: ::Windows::UI::Xaml::Controls::Grid^ start_box_grid;
        private: ::Windows::UI::Xaml::Controls::Grid^ right_chooser;
        private: ::Windows::UI::Xaml::Controls::Grid^ game_hud;
        private: ::Windows::UI::Xaml::Controls::Grid^ settings_area;
        private: ::Windows::UI::Xaml::Controls::Grid^ quit_quest;
        private: ::Windows::UI::Xaml::Controls::Grid^ pause_area;
        private: ::Windows::UI::Xaml::Controls::Grid^ choose_name_screen;
        private: ::Windows::UI::Xaml::Controls::Grid^ name_enter_screen;
        private: ::Windows::UI::Xaml::Controls::Grid^ start_screen;
        private: ::Windows::UI::Xaml::Controls::Grid^ game_title;
        private: ::Windows::UI::Xaml::Controls::Grid^ fade_screen;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ GameTitle;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ continue_button;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ new_player_button;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ textBlock1;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ textBlock1a;
        private: ::Windows::UI::Xaml::Controls::TextBox^ player_name;
        private: ::Windows::UI::Xaml::Controls::ListView^ names_list;
        private: ::Windows::UI::Xaml::Controls::ListView^ MyList;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ full_game_button;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ pause_player_name;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ controls_on;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ music_on;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ shader_type;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ TimeText;
        private: ::Windows::UI::Xaml::Controls::Grid^ optionsbox;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ textBlock;
        private: ::Windows::UI::Xaml::Controls::Image^ button_menu;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ title;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ points_box;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ rockets_box;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ rings_box;
        private: ::Windows::UI::Xaml::Controls::Image^ button_respot;
        private: ::Windows::UI::Xaml::Controls::Image^ button_level_back;
        private: ::Windows::UI::Xaml::Controls::Image^ button_for_back;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ time_text;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ itempo_check;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ cont_check;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ grid_check;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ cam_check;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ ray_check;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ rotate_check;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ fix_height;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ player_pos;
        private: ::Windows::UI::Xaml::Controls::ListView^ items_list;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ high_score;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ start_box;
    };
}

