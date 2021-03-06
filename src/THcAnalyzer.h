#ifndef ROOT_THcAnalyzer
#define ROOT_THcAnalyzer

//////////////////////////////////////////////////////////////////////////
//
// THcAnalyzer
// 
//////////////////////////////////////////////////////////////////////////

#include "THaAnalyzer.h"

class THcAnalyzer : public THaAnalyzer {

public:

  THcAnalyzer();
  virtual ~THcAnalyzer();

  void SetPedestalEvtype( Int_t evtype ) { fPedestalEvtype = evtype; }

protected:

  Int_t fPedestalEvtype;
    
private:
  //  THcAnalyzer( const THcAnalyzer& );
  //  THcAnalyzer& operator=( const THcAnalyzer& );
  
  ClassDef(THcAnalyzer,0)  //Hall C Analyzer Standard Event Loop

};

#endif
