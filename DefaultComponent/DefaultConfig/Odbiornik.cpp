/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-02
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Odbiornik
//!	Generated Date	: Mon, 11, May 2026  
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Odbiornik.h"
//#[ ignore
#define Default_Odbiornik_Odbiornik_SERIALIZE OM_NO_OP

#define Default_Odbiornik_click_SERIALIZE OM_NO_OP

#define OMAnim_Default_Odbiornik_click_UNSERIALIZE_ARGS

#define OMAnim_Default_Odbiornik_click_SERIALIZE_RET_VAL

#define Default_Odbiornik_inverse_kierunek_SERIALIZE OM_NO_OP

#define OMAnim_Default_Odbiornik_inverse_kierunek_UNSERIALIZE_ARGS

#define OMAnim_Default_Odbiornik_inverse_kierunek_SERIALIZE_RET_VAL
//#]

//## package Default

//## class Odbiornik
Odbiornik::Odbiornik(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Odbiornik, Odbiornik(), 0, Default_Odbiornik_Odbiornik_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsBramaWjaz.setShouldDelete(false);
        }
    }
    initStatechart();
}

Odbiornik::~Odbiornik() {
    NOTIFY_DESTRUCTOR(~Odbiornik, true);
}

void Odbiornik::click() {
    NOTIFY_OPERATION(click, click(), 0, Default_Odbiornik_click_SERIALIZE);
    //#[ operation click()
    //#]
}

void Odbiornik::inverse_kierunek() {
    NOTIFY_OPERATION(inverse_kierunek, inverse_kierunek(), 0, Default_Odbiornik_inverse_kierunek_SERIALIZE);
    //#[ operation inverse_kierunek()
    int pozycja = itsBramaWjaz.get_pozycja();
    
    if(pozycja == -1) this->kierunek=1;
    else this->kierunek=-1;
    //#]
}

int Odbiornik::getKierunek() const {
    return kierunek;
}

void Odbiornik::setKierunek(int p_kierunek) {
    kierunek = p_kierunek;
}

BramaWjaz* Odbiornik::getItsBramaWjaz() const {
    return (BramaWjaz*) &itsBramaWjaz;
}

bool Odbiornik::startBehavior() {
    bool done = true;
    done &= itsBramaWjaz.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Odbiornik::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Odbiornik::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsBramaWjaz.setActiveContext(theActiveContext, false);
    }
}

void Odbiornik::destroy() {
    itsBramaWjaz.destroy();
    OMReactive::destroy();
}

void Odbiornik::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("4");
        NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
        rootState_subState = Oczekiwanie;
        rootState_active = Oczekiwanie;
        NOTIFY_TRANSITION_TERMINATED("4");
    }
}

IOxfReactive::TakeEventStatus Odbiornik::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Oczekiwanie
        case Oczekiwanie:
        {
            if(IS_EVENT_TYPE_OF(click_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Oczekiwanie");
                    NOTIFY_STATE_ENTERED("ROOT.StanBramy");
                    pushNullTransition();
                    rootState_subState = StanBramy;
                    rootState_active = StanBramy;
                    //#[ state StanBramy.(Entry) 
                    this->inverse_kierunek();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State StanBramy
        case StanBramy:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 2 
                    if(this->kierunek==1)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_TRANSITION_STARTED("2");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.StanBramy");
                            //#[ transition 2 
                            itsBramaWjaz.otworz();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.OtwieranieBramy");
                            pushNullTransition();
                            rootState_subState = OtwieranieBramy;
                            rootState_active = OtwieranieBramy;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 3 
                            if(this->kierunek==-1)
                                {
                                    NOTIFY_TRANSITION_STARTED("1");
                                    NOTIFY_TRANSITION_STARTED("3");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.StanBramy");
                                    //#[ transition 3 
                                    itsBramaWjaz.zamknij();
                                    //#]
                                    NOTIFY_STATE_ENTERED("ROOT.ZamykanieBramy");
                                    pushNullTransition();
                                    rootState_subState = ZamykanieBramy;
                                    rootState_active = ZamykanieBramy;
                                    NOTIFY_TRANSITION_TERMINATED("3");
                                    NOTIFY_TRANSITION_TERMINATED("1");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        // State OtwieranieBramy
        case OtwieranieBramy:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.OtwieranieBramy");
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                    rootState_subState = Oczekiwanie;
                    rootState_active = Oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ZamykanieBramy
        case ZamykanieBramy:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ZamykanieBramy");
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                    rootState_subState = Oczekiwanie;
                    rootState_active = Oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("6");
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
void OMAnimatedOdbiornik::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("kierunek", x2String(myReal->kierunek));
}

void OMAnimatedOdbiornik::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsBramaWjaz", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsBramaWjaz);
}

void OMAnimatedOdbiornik::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Odbiornik::Oczekiwanie:
        {
            Oczekiwanie_serializeStates(aomsState);
        }
        break;
        case Odbiornik::StanBramy:
        {
            StanBramy_serializeStates(aomsState);
        }
        break;
        case Odbiornik::OtwieranieBramy:
        {
            OtwieranieBramy_serializeStates(aomsState);
        }
        break;
        case Odbiornik::ZamykanieBramy:
        {
            ZamykanieBramy_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedOdbiornik::ZamykanieBramy_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ZamykanieBramy");
}

void OMAnimatedOdbiornik::StanBramy_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.StanBramy");
}

void OMAnimatedOdbiornik::OtwieranieBramy_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OtwieranieBramy");
}

void OMAnimatedOdbiornik::Oczekiwanie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Oczekiwanie");
}
//#]

IMPLEMENT_REACTIVE_META_P(Odbiornik, Default, Default, false, OMAnimatedOdbiornik)

IMPLEMENT_META_OP(OMAnimatedOdbiornik, Default_Odbiornik_click, "click", FALSE, "click()", 0)

IMPLEMENT_OP_CALL(Default_Odbiornik_click, Odbiornik, click(), NO_OP())

IMPLEMENT_META_OP(OMAnimatedOdbiornik, Default_Odbiornik_inverse_kierunek, "inverse_kierunek", FALSE, "inverse_kierunek()", 0)

IMPLEMENT_OP_CALL(Default_Odbiornik_inverse_kierunek, Odbiornik, inverse_kierunek(), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.cpp
*********************************************************************/
