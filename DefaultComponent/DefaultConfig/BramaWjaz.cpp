/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-02
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BramaWjaz
//!	Generated Date	: Mon, 11, May 2026  
	File Path	: DefaultComponent/DefaultConfig/BramaWjaz.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "BramaWjaz.h"
//#[ ignore
#define Default_BramaWjaz_BramaWjaz_SERIALIZE OM_NO_OP

#define Default_BramaWjaz_get_pozycja_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_get_pozycja_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_get_pozycja_SERIALIZE_RET_VAL OP_SET_RET_VAL(animRetVal)

#define Default_BramaWjaz_otwieranie_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_otwieranie_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_otwieranie_SERIALIZE_RET_VAL

#define Default_BramaWjaz_otworz_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_otworz_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_otworz_SERIALIZE_RET_VAL

#define Default_BramaWjaz_set_pozycja_SERIALIZE aomsmethod->addAttribute("new_pozycja", x2String(new_pozycja));

#define OMAnim_Default_BramaWjaz_set_pozycja_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,new_pozycja)

#define OMAnim_Default_BramaWjaz_set_pozycja_int_SERIALIZE_RET_VAL

#define Default_BramaWjaz_zamknij_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_zamknij_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_zamknij_SERIALIZE_RET_VAL

#define Default_BramaWjaz_zamykanie_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_zamykanie_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_zamykanie_SERIALIZE_RET_VAL
//#]

//## package Default

//## class BramaWjaz
BramaWjaz::BramaWjaz(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(BramaWjaz, BramaWjaz(), 0, Default_BramaWjaz_BramaWjaz_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

BramaWjaz::~BramaWjaz() {
    NOTIFY_DESTRUCTOR(~BramaWjaz, true);
}

int BramaWjaz::get_pozycja() {
    NOTIFY_OPERATION(get_pozycja, get_pozycja(), 0, Default_BramaWjaz_get_pozycja_SERIALIZE);
    //#[ operation get_pozycja()
    return this->pozycja;
    //#]
}

void BramaWjaz::otwieranie() {
    NOTIFY_OPERATION(otwieranie, otwieranie(), 0, Default_BramaWjaz_otwieranie_SERIALIZE);
    //#[ operation otwieranie()
    //#]
}

void BramaWjaz::otworz() {
    NOTIFY_OPERATION(otworz, otworz(), 0, Default_BramaWjaz_otworz_SERIALIZE);
    //#[ operation otworz()
    if(this->pozycja == 1)
    {
    	std::cout<<"Brama jest juz otwarta!\n";\
    }else
    {
    	std::cout << "Otworzono brame!\n";
    	this->pozycja = 1;
    }
    //#]
}

void BramaWjaz::set_pozycja(int new_pozycja) {
    NOTIFY_OPERATION(set_pozycja, set_pozycja(int), 1, Default_BramaWjaz_set_pozycja_SERIALIZE);
    //#[ operation set_pozycja(int)
    if (new_pozycja == 1) this->pozycja = 1;
    else if (new_pozycja == -1) this->pozycja = -1;
    //#]
}

void BramaWjaz::zamknij() {
    NOTIFY_OPERATION(zamknij, zamknij(), 0, Default_BramaWjaz_zamknij_SERIALIZE);
    //#[ operation zamknij()
    if (this->pozycja == -1)
    {
    	std::cout <<"Brama jest  zamknieta!\n";
    }else {
    	std::cout << "Zamknieto brame!\n";
    	this->pozycja = -1;
    }
    //#]
}

void BramaWjaz::zamykanie() {
    NOTIFY_OPERATION(zamykanie, zamykanie(), 0, Default_BramaWjaz_zamykanie_SERIALIZE);
    //#[ operation zamykanie()
    //#]
}

int BramaWjaz::getPozycja() const {
    return pozycja;
}

void BramaWjaz::setPozycja(int p_pozycja) {
    pozycja = p_pozycja;
}

bool BramaWjaz::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void BramaWjaz::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void BramaWjaz::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.oczekiwanie");
        rootState_subState = oczekiwanie;
        rootState_active = oczekiwanie;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus BramaWjaz::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State oczekiwanie
        case oczekiwanie:
        {
            if(IS_EVENT_TYPE_OF(zamykanie_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.oczekiwanie");
                    //#[ transition 2 
                    this->zamknij();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.ZamykanieBramy");
                    pushNullTransition();
                    rootState_subState = ZamykanieBramy;
                    rootState_active = ZamykanieBramy;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(otwieranie_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.oczekiwanie");
                    //#[ transition 1 
                    this->otworz();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.OtwieranieBramy");
                    pushNullTransition();
                    rootState_subState = OtwieranieBramy;
                    rootState_active = OtwieranieBramy;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State OtwieranieBramy
        case OtwieranieBramy:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.OtwieranieBramy");
                    NOTIFY_STATE_ENTERED("ROOT.oczekiwanie");
                    rootState_subState = oczekiwanie;
                    rootState_active = oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ZamykanieBramy
        case ZamykanieBramy:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ZamykanieBramy");
                    NOTIFY_STATE_ENTERED("ROOT.oczekiwanie");
                    rootState_subState = oczekiwanie;
                    rootState_active = oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBramaWjaz::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pozycja", x2String(myReal->pozycja));
}

void OMAnimatedBramaWjaz::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case BramaWjaz::oczekiwanie:
        {
            oczekiwanie_serializeStates(aomsState);
        }
        break;
        case BramaWjaz::OtwieranieBramy:
        {
            OtwieranieBramy_serializeStates(aomsState);
        }
        break;
        case BramaWjaz::ZamykanieBramy:
        {
            ZamykanieBramy_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedBramaWjaz::ZamykanieBramy_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ZamykanieBramy");
}

void OMAnimatedBramaWjaz::OtwieranieBramy_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OtwieranieBramy");
}

void OMAnimatedBramaWjaz::oczekiwanie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.oczekiwanie");
}
//#]

IMPLEMENT_REACTIVE_META_P(BramaWjaz, Default, Default, false, OMAnimatedBramaWjaz)

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_get_pozycja, "get_pozycja", FALSE, "get_pozycja()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_get_pozycja, BramaWjaz, get_pozycja(), int animRetVal = )

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_otwieranie, "otwieranie", FALSE, "otwieranie()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_otwieranie, BramaWjaz, otwieranie(), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_otworz, "otworz", FALSE, "otworz()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_otworz, BramaWjaz, otworz(), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_set_pozycja_int, "set_pozycja", FALSE, "set_pozycja(int)", 1)

IMPLEMENT_OP_CALL(Default_BramaWjaz_set_pozycja_int, BramaWjaz, set_pozycja(new_pozycja), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_zamknij, "zamknij", FALSE, "zamknij()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_zamknij, BramaWjaz, zamknij(), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_zamykanie, "zamykanie", FALSE, "zamykanie()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_zamykanie, BramaWjaz, zamykanie(), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/BramaWjaz.cpp
*********************************************************************/
