/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-02
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BramaWjaz
//!	Generated Date	: Mon, 11, May 2026  
	File Path	: DefaultComponent/DefaultConfig/BramaWjaz.h
*********************************************************************/

#ifndef BramaWjaz_H
#define BramaWjaz_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//#[ ignore
#define OMAnim_Default_BramaWjaz_get_pozycja_ARGS_DECLARATION

#define OMAnim_Default_BramaWjaz_otwieranie_ARGS_DECLARATION

#define OMAnim_Default_BramaWjaz_otworz_ARGS_DECLARATION

#define OMAnim_Default_BramaWjaz_set_pozycja_int_ARGS_DECLARATION int new_pozycja;

#define OMAnim_Default_BramaWjaz_zamknij_ARGS_DECLARATION

#define OMAnim_Default_BramaWjaz_zamykanie_ARGS_DECLARATION
//#]

//## package Default

//## class BramaWjaz
class BramaWjaz : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBramaWjaz;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    BramaWjaz(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~BramaWjaz();
    
    ////    Operations    ////
    
    //## operation get_pozycja()
    int get_pozycja();
    
    //## operation otwieranie()
    void otwieranie();
    
    //## operation otworz()
    void otworz();
    
    //## operation set_pozycja(int)
    void set_pozycja(int new_pozycja);
    
    //## operation zamknij()
    void zamknij();
    
    //## operation zamykanie()
    void zamykanie();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getPozycja() const;
    
    //## auto_generated
    void setPozycja(int p_pozycja);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int pozycja;		//## attribute pozycja
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // ZamykanieBramy:
    //## statechart_method
    inline bool ZamykanieBramy_IN() const;
    
    // OtwieranieBramy:
    //## statechart_method
    inline bool OtwieranieBramy_IN() const;
    
    // oczekiwanie:
    //## statechart_method
    inline bool oczekiwanie_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum BramaWjaz_Enum {
        OMNonState = 0,
        ZamykanieBramy = 1,
        OtwieranieBramy = 2,
        oczekiwanie = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Default_BramaWjaz_get_pozycja)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_otwieranie)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_otworz)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_set_pozycja_int)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_zamknij)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_zamykanie)

//#[ ignore
class OMAnimatedBramaWjaz : virtual public AOMInstance {
    DECLARE_REACTIVE_META(BramaWjaz, OMAnimatedBramaWjaz)
    
    DECLARE_META_OP(Default_BramaWjaz_get_pozycja)
    
    DECLARE_META_OP(Default_BramaWjaz_otwieranie)
    
    DECLARE_META_OP(Default_BramaWjaz_otworz)
    
    DECLARE_META_OP(Default_BramaWjaz_set_pozycja_int)
    
    DECLARE_META_OP(Default_BramaWjaz_zamknij)
    
    DECLARE_META_OP(Default_BramaWjaz_zamykanie)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ZamykanieBramy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void OtwieranieBramy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void oczekiwanie_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool BramaWjaz::rootState_IN() const {
    return true;
}

inline bool BramaWjaz::ZamykanieBramy_IN() const {
    return rootState_subState == ZamykanieBramy;
}

inline bool BramaWjaz::OtwieranieBramy_IN() const {
    return rootState_subState == OtwieranieBramy;
}

inline bool BramaWjaz::oczekiwanie_IN() const {
    return rootState_subState == oczekiwanie;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/BramaWjaz.h
*********************************************************************/
