/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-02
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Odbiornik
//!	Generated Date	: Mon, 11, May 2026  
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.h
*********************************************************************/

#ifndef Odbiornik_H
#define Odbiornik_H

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
//## link itsBramaWjaz
#include "BramaWjaz.h"
//#[ ignore
#define OMAnim_Default_Odbiornik_click_ARGS_DECLARATION

#define OMAnim_Default_Odbiornik_inverse_kierunek_ARGS_DECLARATION
//#]

//## package Default

//## class Odbiornik
class Odbiornik : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOdbiornik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Odbiornik(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Odbiornik();
    
    ////    Operations    ////
    
    //## operation click()
    void click();
    
    //## operation inverse_kierunek()
    void inverse_kierunek();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getKierunek() const;
    
    //## auto_generated
    void setKierunek(int p_kierunek);
    
    //## auto_generated
    BramaWjaz* getItsBramaWjaz() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int kierunek;		//## attribute kierunek
    
    ////    Relations and components    ////
    
    BramaWjaz itsBramaWjaz;		//## link itsBramaWjaz
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
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
    
    // StanBramy:
    //## statechart_method
    inline bool StanBramy_IN() const;
    
    // OtwieranieBramy:
    //## statechart_method
    inline bool OtwieranieBramy_IN() const;
    
    // Oczekiwanie:
    //## statechart_method
    inline bool Oczekiwanie_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Odbiornik_Enum {
        OMNonState = 0,
        ZamykanieBramy = 1,
        StanBramy = 2,
        OtwieranieBramy = 3,
        Oczekiwanie = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Default_Odbiornik_click)

DECLARE_OPERATION_CLASS(Default_Odbiornik_inverse_kierunek)

//#[ ignore
class OMAnimatedOdbiornik : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Odbiornik, OMAnimatedOdbiornik)
    
    DECLARE_META_OP(Default_Odbiornik_click)
    
    DECLARE_META_OP(Default_Odbiornik_inverse_kierunek)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ZamykanieBramy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StanBramy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void OtwieranieBramy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Oczekiwanie_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Odbiornik::rootState_IN() const {
    return true;
}

inline bool Odbiornik::ZamykanieBramy_IN() const {
    return rootState_subState == ZamykanieBramy;
}

inline bool Odbiornik::StanBramy_IN() const {
    return rootState_subState == StanBramy;
}

inline bool Odbiornik::OtwieranieBramy_IN() const {
    return rootState_subState == OtwieranieBramy;
}

inline bool Odbiornik::Oczekiwanie_IN() const {
    return rootState_subState == Oczekiwanie;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.h
*********************************************************************/
