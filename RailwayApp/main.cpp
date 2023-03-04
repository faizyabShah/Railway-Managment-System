#pragma once

#include "Signup.h"
#include "Railway.h"
#include "Login.h"
#include "Search.h"
#include "profile.h"
#include "adm_login.h"
#include "EnterTrains.h"


Railway* RailwayData;

using namespace System;
using namespace System::Windows::Forms;

[STAThread]



void main(array<String^>^ args)

{
    
    RailwayData = new Railway();

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    RailwayApp::MyForm SignupPage;
    RailwayApp::MyForm1 LoginPage;
    RailwayApp::Search SearchPage;
    RailwayApp::profile profilePage;
    RailwayApp::adm_login AdmLoginPage;
    RailwayApp::EnterTrains EnterTrainsPage;
 
 


    SignupPage.setRailwayData(RailwayData);
    Application::Run(% SignupPage);
    if (RailwayData->gettoadmlogin()) {
        AdmLoginPage.setRailwayData(RailwayData);
        Application::Run(% AdmLoginPage);
        if (RailwayData->gettoentertrains()) {
            EnterTrainsPage.setRailwayData(RailwayData);
            Application::Run(% EnterTrainsPage);
        }
    }
    if (RailwayData->gettologin()) {
        LoginPage.setRailwayData(RailwayData);
        Application::Run(% LoginPage);
    }
    
    if (RailwayData->hasLoggedin()) {
        SearchPage.setRailwayData(RailwayData);
        Application::Run(% SearchPage);
    }
    if (RailwayData->gettoprofile()) {
        profilePage.setRailwayData(RailwayData);
        Application::Run(% profilePage);
    }

}