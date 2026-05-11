/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-02
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 11, May 2026  
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "BramaWjaz.h"
//## auto_generated
#include "Odbiornik.h"
//#[ ignore
#define inverse_kierunek_SERIALIZE OM_NO_OP

#define inverse_kierunek_UNSERIALIZE OM_NO_OP

#define inverse_kierunek_CONSTRUCTOR inverse_kierunek()

#define click_SERIALIZE OM_NO_OP

#define click_UNSERIALIZE OM_NO_OP

#define click_CONSTRUCTOR click()

#define eventmessage_0_SERIALIZE OM_NO_OP

#define eventmessage_0_UNSERIALIZE OM_NO_OP

#define eventmessage_0_CONSTRUCTOR eventmessage_0()

#define otwieranie_SERIALIZE OM_NO_OP

#define otwieranie_UNSERIALIZE OM_NO_OP

#define otwieranie_CONSTRUCTOR otwieranie()

#define zamykanie_SERIALIZE OM_NO_OP

#define zamykanie_UNSERIALIZE OM_NO_OP

#define zamykanie_CONSTRUCTOR zamykanie()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event inverse_kierunek()
inverse_kierunek::inverse_kierunek() {
    NOTIFY_EVENT_CONSTRUCTOR(inverse_kierunek)
    setId(inverse_kierunek_Default_id);
}

bool inverse_kierunek::isTypeOf(const short id) const {
    return (inverse_kierunek_Default_id==id);
}

IMPLEMENT_META_EVENT_P(inverse_kierunek, Default, Default, inverse_kierunek())

//## event click()
click::click() {
    NOTIFY_EVENT_CONSTRUCTOR(click)
    setId(click_Default_id);
}

bool click::isTypeOf(const short id) const {
    return (click_Default_id==id);
}

IMPLEMENT_META_EVENT_P(click, Default, Default, click())

//## event eventmessage_0()
eventmessage_0::eventmessage_0() {
    NOTIFY_EVENT_CONSTRUCTOR(eventmessage_0)
    setId(eventmessage_0_Default_id);
}

bool eventmessage_0::isTypeOf(const short id) const {
    return (eventmessage_0_Default_id==id);
}

IMPLEMENT_META_EVENT_P(eventmessage_0, Default, Default, eventmessage_0())

//## event otwieranie()
otwieranie::otwieranie() {
    NOTIFY_EVENT_CONSTRUCTOR(otwieranie)
    setId(otwieranie_Default_id);
}

bool otwieranie::isTypeOf(const short id) const {
    return (otwieranie_Default_id==id);
}

IMPLEMENT_META_EVENT_P(otwieranie, Default, Default, otwieranie())

//## event zamykanie()
zamykanie::zamykanie() {
    NOTIFY_EVENT_CONSTRUCTOR(zamykanie)
    setId(zamykanie_Default_id);
}

bool zamykanie::isTypeOf(const short id) const {
    return (zamykanie_Default_id==id);
}

IMPLEMENT_META_EVENT_P(zamykanie, Default, Default, zamykanie())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/
