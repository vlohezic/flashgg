#ifndef FLASHgg_TTHHadronicTag_h
#define FLASHgg_TTHHadronicTag_h

#include "flashgg/DataFormats/interface/DiPhotonTagBase.h"
#include "flashgg/DataFormats/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "flashgg/DataFormats/interface/Met.h"

namespace flashgg {

    class TTHHadronicTag: public DiPhotonTagBase
    {
    public:
        TTHHadronicTag();
        TTHHadronicTag( edm::Ptr<DiPhotonCandidate>, edm::Ptr<DiPhotonMVAResult>, std::vector<edm::Ptr<flashgg::Jet> >, std::vector<edm::Ptr<flashgg::Jet> > );
        TTHHadronicTag( edm::Ptr<DiPhotonCandidate>, DiPhotonMVAResult, std::vector<edm::Ptr<flashgg::Jet> >, std::vector<edm::Ptr<flashgg::Jet> > );
        TTHHadronicTag *clone() const override { return ( new TTHHadronicTag( *this ) ); }
        ~TTHHadronicTag();

        const std::vector<edm::Ptr<flashgg::Jet> > jetVector() const {return theJetVec_;}
        const std::vector<edm::Ptr<flashgg::Jet> > bJetVector() const {return theBJetVec_; }
        const std::vector<float> jetBTagValVec() const {return theJetBTagValVec_; }
        const edm::Ptr<flashgg::Met>  met() const { return MET_;}

        float diPhoHelicity() const { return diPhoHelicity_; }

        int nJet() const {return Njet_;}
        int nBLoose() const {return Nbtagloose_;}
        int nBMedium() const {return Nbtagmedium_;}
        int nBTight() const {return Nbtagtight_;}
        float fwdjetPt() const { return fwdjetPt_; }
        float fwdjetEta() const { return fwdjetEta_; }
        float fwdjetPhi() const { return fwdjetPhi_; }
        float leadJetPt() const {return leadJetPt_;}
        float subLeadJetPt() const {return subLeadJetPt_;}
        float sumJetPt() const {return sumJetPt_;}
        float maxBTagVal() const {return maxBTagVal_;}
        float secondMaxBTagVal() const {return secondMaxBTagVal_;}
        float thirdMaxBTagVal() const {return thirdMaxBTagVal_;}
        float fourthMaxBTagVal() const {return fourthMaxBTagVal_;}
        float maxBTagVal_noBB() const { return maxBTagVal_noBB_; }
        float secondMaxBTagVal_noBB() const { return secondMaxBTagVal_noBB_; }

        std::vector<float> topTagger() const { return topTagger_; }
        float tthVSdiPhoDNN() const {return tthVSdiPhoDNN_;}
        float tthVSttggDNN() const {return tthVSttggDNN_;}
        float tthBDT() const {return tthBDT_;}

        void setDiPhoHelicity(float diPhoHelicity) { diPhoHelicity_ = diPhoHelicity; }

        void setNjet( int nb ) { Njet_ = nb; }
        void setNBLoose( int nb ) { Nbtagloose_ = nb; }
        void setNBMedium( int nb ) { Nbtagmedium_ = nb; }
        void setNBTight( int nb ) { Nbtagtight_ = nb; }
        void setFwdjetPt(float fwdjetPt) { fwdjetPt_ = fwdjetPt; }
        void setFwdjetEta(float fwdjetEta) { fwdjetEta_ = fwdjetEta; }
        void setFwdjetPhi(float fwdjetPhi) { fwdjetPhi_ = fwdjetPhi; }
        void setLeadJetPt( float dval ) { leadJetPt_ = dval;}
        void setSubLeadJetPt( float dval ) { subLeadJetPt_ = dval;}
        void setSumJetPt( float dval ) { sumJetPt_ = dval;}
        void setMaxBTagVal( float dval ) { maxBTagVal_ = dval;}
        void setSecondMaxBTagVal( float dval ) { secondMaxBTagVal_ = dval;}
        void setThirdMaxBTagVal( float dval ) { thirdMaxBTagVal_ = dval;}
        void setFourthMaxBTagVal( float dval ) { fourthMaxBTagVal_ = dval;}
        void setMaxBTagVal_noBB(float maxBTagVal_noBB) { maxBTagVal_noBB_ = maxBTagVal_noBB; }
        void setSecondMaxBTagVal_noBB(float secondMaxBTagVal_noBB) { secondMaxBTagVal_noBB_ = secondMaxBTagVal_noBB; }
        void setJetBTagValVec( std::vector<float> vec ) { theJetBTagValVec_ = vec;}
        void setMET( edm::Ptr<flashgg::Met> MET ) {MET_ = MET;}

        void setTopTagger( std::vector<float> topTagger )  { topTagger_ = topTagger; }
        void setTthVSdiPhoDNN(float tthVSdiPhoDNN) {tthVSdiPhoDNN_ = tthVSdiPhoDNN;}
        void setTthVSttggDNN(float tthVSttggDNN) {tthVSttggDNN_ = tthVSttggDNN;}
        void setTthBDT(float tthBDT) {tthBDT_ = tthBDT;}

        DiPhotonTagBase::tag_t tagEnum() const override {return DiPhotonTagBase::kTTHHadronic; }

    private:
        int Njet_;
        int Nbtagloose_;
        int Nbtagmedium_;
        int Nbtagtight_;
        std::vector<edm::Ptr<flashgg::Jet> > theJetVec_;
        std::vector<edm::Ptr<flashgg::Jet> > theBJetVec_;
        std::vector<float> theJetBTagValVec_;
        edm::Ptr<flashgg::Met> MET_;

        float diPhoHelicity_;

        float fwdjetPt_;
        float fwdjetEta_;
        float fwdjetPhi_;
        float leadJetPt_;
        float subLeadJetPt_;
        float sumJetPt_;
        float maxBTagVal_;
        float secondMaxBTagVal_;
        float thirdMaxBTagVal_;
        float fourthMaxBTagVal_;
        float maxBTagVal_noBB_;
        float secondMaxBTagVal_noBB_;

        std::vector<float> topTagger_;
        float tthVSdiPhoDNN_;
        float tthVSttggDNN_;
        float tthBDT_;
        

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

