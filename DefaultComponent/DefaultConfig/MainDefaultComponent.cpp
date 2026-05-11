/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-02
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Mon, 11, May 2026  
	File Path	: DefaultComponent/DefaultConfig/MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Odbiornik.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Odbiornik * p_Odbiornik;
            p_Odbiornik = new Odbiornik;
            p_Odbiornik->startBehavior();
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_Odbiornik;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/MainDefaultComponent.cpp
*********************************************************************/
