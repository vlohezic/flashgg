#ifndef FLASHgg_TTHLeptonicTag_h
#define FLASHgg_TTHLeptonicTag_h

#include "flashgg/DataFormats/interface/DiPhotonTagBase.h"
#include "flashgg/DataFormats/interface/Muon.h"
#include "flashgg/DataFormats/interface/Electron.h"
#include "flashgg/DataFormats/interface/Jet.h"
#include "flashgg/DataFormats/interface/Met.h"

namespace flashgg {

    class TTHLeptonicTag: public DiPhotonTagBase
    {
    public:
        TTHLeptonicTag();
        TTHLeptonicTag( edm::Ptr<DiPhotonCandidate>, edm::Ptr<DiPhotonMVAResult> );
        TTHLeptonicTag( edm::Ptr<DiPhotonCandidate>, DiPhotonMVAResult );

        ~TTHLeptonicTag();

        TTHLeptonicTag *clone() const override { return ( new TTHLeptonicTag( *this ) ); }

        const std::vector<edm::Ptr<Muon> > muons() const { return Muons_;}
        const std::vector<edm::Ptr<flashgg::Electron> > electrons() const {return Electrons_;}
        const std::vector<edm::Ptr<Jet> > jets() const { return Jets_;}
        const std::vector<edm::Ptr<Jet> > bJets() const { return BJets_;}
        const edm::Ptr<flashgg::Met>  met() const { return Met_;}

        const std::vector<double>  leptonsPt() const { return lepPt_;}
        const std::vector<double>  leptonsE() const { return lepE_;}
        const std::vector<double>  leptonsPhi() const { return lepPhi_;}
        const std::vector<double>  leptonsEta() const { return lepEta_;}
        const std::vector<double>  leptonsCharge() const { return lepCharge_;}
        const std::vector<int>  leptonsType() const { return lepType_;}

        int leadPrompt() const { return leadPrompt_; }
        int subleadPrompt() const { return subleadPrompt_; }        
        int leadMad() const { return leadMad_; }
        int subleadMad() const { return subleadMad_; }
        int leadPythia() const { return leadPythia_; }
        int subleadPythia() const { return subleadPythia_; }
        int leadSimpleMomID() const { return lead_simpleMotherID_; }
        int leadSimpleMomStatus() const { return lead_simpleMotherStatus_; }
        int leadMomID() const { return lead_motherID_; }
        int leadMomMomID() const { return lead_motherMotherID_; }
        int leadPassFrix() const { return lead_passFrix_; }
        double leadSmallestDr() const { return lead_smallestDr_; }
        int subleadSimpleMomID() const { return sublead_simpleMotherID_; }
        int subleadSimpleMomStatus() const { return sublead_simpleMotherStatus_; }
        int subleadMomID() const { return sublead_motherID_; }
        int subleadMomMomID() const { return sublead_motherMotherID_; }
        int subleadPassFrix() const { return sublead_passFrix_; }
        double subleadSmallestDr() const { return sublead_smallestDr_; }

        float diPhoHelicity() const { return diPhoHelicity_; }

        int nLepTight() const { return nLepTight_; }
        int nBLoose() const { return nBLoose_; }
        int nBMedium() const { return nBMedium_; }
        int nBTight() const { return nBTight_; }
        float fwdjetPt() const { return fwdjetPt_; }
        float fwdjetEta() const { return fwdjetEta_; }
        float fwdjetPhi() const { return fwdjetPhi_; }
        float sumJetPt() const { return sumJetPt_; }
        float maxBTagVal() const { return maxBTagVal_; }
        float secondMaxBTagVal() const { return secondMaxBTagVal_; }
        float thirdMaxBTagVal() const { return thirdMaxBTagVal_; }
        float fourthMaxBTagVal() const { return fourthMaxBTagVal_; }
        float maxBTagVal_noBB() const { return maxBTagVal_noBB_; }
        float secondMaxBTagVal_noBB() const { return secondMaxBTagVal_noBB_; }
        
        void setJets( std::vector<edm::Ptr<Jet> > Jets ) { Jets_ = Jets; }
        void setBJets( std::vector<edm::Ptr<Jet> > BJets )  { BJets_ = BJets;}
        void setMuons( std::vector<edm::Ptr<Muon> > Muons ) {Muons_ = Muons;}
        void setElectrons( std::vector<edm::Ptr<Electron> > Electrons ) {Electrons_ = Electrons;}
        void setLepPt( std::vector<double> lepPt ) { lepPt_ = lepPt; }
        void setLepE( std::vector<double> lepE ) { lepE_ = lepE; }
        void setLepEta( std::vector<double> lepEta ) { lepEta_ = lepEta; }
        void setLepPhi( std::vector<double> lepPhi ) { lepPhi_ = lepPhi; }
        void setLepCharge( std::vector<double> lepCharge ) { lepCharge_ = lepCharge; }
        void setLepType( std::vector<int> lepType ) { lepType_ = lepType; }
        void setMet( edm::Ptr<flashgg::Met> Met ) {Met_ = Met;}

        void setLeadPrompt(int leadPrompt) { leadPrompt_ = leadPrompt; }
        void setSubleadPrompt(int subleadPrompt) { subleadPrompt_ = subleadPrompt; }
        void setLeadMad(int leadMad) { leadMad_ = leadMad; }
        void setSubleadMad(int subleadMad) { subleadMad_ = subleadMad; }
        void setLeadPythia(int leadPythia) { leadPythia_ = leadPythia; }
        void setSubleadPythia(int subleadPythia) { subleadPythia_ = subleadPythia; }
        void setLeadSimpleMomID(int lead_simpleMotherID) { lead_simpleMotherID_ = lead_simpleMotherID; }
        void setLeadSimpleMomStatus(int lead_simpleMotherStatus) { lead_simpleMotherStatus_ = lead_simpleMotherStatus; }
        void setLeadMomID(int lead_motherID) { lead_motherID_ = lead_motherID; }
        void setLeadMomMomID(int lead_motherMotherID) { lead_motherMotherID_ = lead_motherMotherID; }
        void setLeadPassFrix(int lead_passFrix) { lead_passFrix_ = lead_passFrix; }
        void setLeadSmallestDr(double lead_smallestDr) { lead_smallestDr_ = lead_smallestDr; }
        void setSubleadSimpleMomID(int sublead_simpleMotherID) { sublead_simpleMotherID_ = sublead_simpleMotherID; }
        void setSubleadSimpleMomStatus(int sublead_simpleMotherStatus) { sublead_simpleMotherStatus_ = sublead_simpleMotherStatus; }
        void setSubleadMomID(int sublead_motherID) { sublead_motherID_ = sublead_motherID; }
        void setSubleadMomMomID(int sublead_motherMotherID) { sublead_motherMotherID_ = sublead_motherMotherID; }
        void setSubleadPassFrix(int sublead_passFrix) { sublead_passFrix_ = sublead_passFrix; }
        void setSubleadSmallestDr(double sublead_smallestDr) { sublead_smallestDr_ = sublead_smallestDr; }

        void setDiPhoHelicity(float diPhoHelicity) { diPhoHelicity_ = diPhoHelicity; }

        void setNLepTight(float nLepTight) { nLepTight_ = nLepTight; }
        void setNBLoose(int nBLoose) { nBLoose_ = nBLoose; }
        void setNBMedium(int nBMedium) { nBMedium_ = nBMedium; }
        void setNBTight(int nBTight) { nBTight_ = nBTight; }
        void setFwdjetPt(float fwdjetPt) { fwdjetPt_ = fwdjetPt; }
        void setFwdjetEta(float fwdjetEta) { fwdjetEta_ = fwdjetEta; }
        void setFwdjetPhi(float fwdjetPhi) { fwdjetPhi_ = fwdjetPhi; }
        void setSumJetPt(float sumJetPt) { sumJetPt_ = sumJetPt; }
        void setMaxBTagVal(float maxBTagVal) { maxBTagVal_ = maxBTagVal; }
        void setSecondMaxBTagVal(float secondMaxBTagVal) { secondMaxBTagVal_ = secondMaxBTagVal; }
        void setThirdMaxBTagVal(float thirdMaxBTagVal) { thirdMaxBTagVal_ = thirdMaxBTagVal; }
        void setFourthMaxBTagVal(float fourthMaxBTagVal) { fourthMaxBTagVal_ = fourthMaxBTagVal; }
        void setMaxBTagVal_noBB(float maxBTagVal_noBB) { maxBTagVal_noBB_ = maxBTagVal_noBB; }
        void setSecondMaxBTagVal_noBB(float secondMaxBTagVal_noBB) { secondMaxBTagVal_noBB_ = secondMaxBTagVal_noBB; }

        DiPhotonTagBase::tag_t tagEnum() const override {return DiPhotonTagBase::kTTHLeptonic; }

        void setMvaRes(float mvaRes) {mvaRes_ = mvaRes;}
        float mvaRes() const {return mvaRes_;}

        private:
        std::vector<edm::Ptr<Muon> > Muons_;
        std::vector<edm::Ptr<Electron> > Electrons_;
        std::vector<edm::Ptr<Jet> > Jets_;
        std::vector<edm::Ptr<Jet> > BJets_;
        edm::Ptr<flashgg::Met> Met_;

        std::vector<double> lepPt_;
        std::vector<double> lepE_;
        std::vector<double> lepEta_;
        std::vector<double> lepPhi_;
        std::vector<double> lepCharge_;
        std::vector<int>    lepType_;

        int leadPrompt_;
        int subleadPrompt_;
        int leadMad_;
        int subleadMad_;
        int leadPythia_;
        int subleadPythia_;
        int lead_simpleMotherID_;
        int lead_simpleMotherStatus_;
        int lead_motherID_;
        int lead_motherMotherID_;
        int lead_passFrix_;
        double lead_smallestDr_;
        int sublead_simpleMotherID_;
        int sublead_simpleMotherStatus_;
        int sublead_motherID_;
        int sublead_motherMotherID_;
        int sublead_passFrix_;
        double sublead_smallestDr_;

        float diPhoHelicity_;

        int nLepTight_;
        int nBLoose_;
        int nBMedium_;
        int nBTight_;
        float fwdjetPt_;
        float fwdjetEta_;
        float fwdjetPhi_;
        float sumJetPt_;
        float maxBTagVal_;
        float secondMaxBTagVal_;
        float thirdMaxBTagVal_;
        float fourthMaxBTagVal_;
        float maxBTagVal_noBB_;
        float secondMaxBTagVal_noBB_;

        float mvaRes_;
    };
}

#endif
// Local Variables:
// mode:c++
// indent-tabs-mode:nil
// tab-width:4
// c-basic-offset:4
// End:
// vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4

