{
//=========Macro generated from canvas: canvas875/EffectiveMass_after_alphaT_55_all/cannameEffectiveMass_after_alphaT_55_all
//=========  (Thu May 10 12:24:15 2012) by ROOT version5.32/00
   TCanvas *canvas875/EffectiveMass_after_alphaT_55_all = new TCanvas("canvas875/EffectiveMass_after_alphaT_55_all", "cannameEffectiveMass_after_alphaT_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas875/EffectiveMass_after_alphaT_55_all->SetHighLightColor(2);
   canvas875/EffectiveMass_after_alphaT_55_all->Range(0,0,1,1);
   canvas875/EffectiveMass_after_alphaT_55_all->SetFillColor(0);
   canvas875/EffectiveMass_after_alphaT_55_all->SetBorderMode(0);
   canvas875/EffectiveMass_after_alphaT_55_all->SetBorderSize(2);
   canvas875/EffectiveMass_after_alphaT_55_all->SetTickx(1);
   canvas875/EffectiveMass_after_alphaT_55_all->SetTicky(1);
   canvas875/EffectiveMass_after_alphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-205,-0.5713943,1845,2.132249);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3193[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3193);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,6);
   EffectiveMass_after_alphaT_55_all->SetBinContent(42,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(46,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(47,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(48,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(50,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(57,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,2.68);
   EffectiveMass_after_alphaT_55_all->SetBinError(42,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(46,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(47,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(48,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(50,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(57,1);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0.5);
   EffectiveMass_after_alphaT_55_all->SetMaximum(72.75864);
   EffectiveMass_after_alphaT_55_all->SetEntries(7);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(2);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->SetMarkerSize(1.5);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_after_alphaT_55_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_213 = new TH1F("_stack_213","",75,0,3000);
   _stack_213->SetMinimum(0.002910346);
   _stack_213->SetMaximum(11.64138);
   _stack_213->SetDirectory(0);
   _stack_213->SetStats(0);
   _stack_213->GetXaxis()->SetLabelFont(42);
   _stack_213->GetXaxis()->SetLabelOffset(0.007);
   _stack_213->GetXaxis()->SetLabelSize(0.05);
   _stack_213->GetXaxis()->SetTitleSize(0.05);
   _stack_213->GetYaxis()->SetLabelFont(42);
   _stack_213->GetYaxis()->SetLabelOffset(0.007);
   _stack_213->GetYaxis()->SetLabelSize(0.05);
   _stack_213->GetZaxis()->SetLabelFont(42);
   _stack_213->GetZaxis()->SetLabelOffset(0.007);
   _stack_213->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_213);
   
   Double_t xAxis3194[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3194);
   EffectiveMass_after_alphaT_55_all->SetEntries(1);
   EffectiveMass_after_alphaT_55_all->SetFillColor(6);
   EffectiveMass_after_alphaT_55_all->SetLineColor(6);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis3195[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3195);
   EffectiveMass_after_alphaT_55_all->SetBinContent(33,0.001844542);
   EffectiveMass_after_alphaT_55_all->SetBinContent(40,0.01655682);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,0.04446682);
   EffectiveMass_after_alphaT_55_all->SetBinContent(46,0.01245296);
   EffectiveMass_after_alphaT_55_all->SetBinContent(51,0.01545703);
   EffectiveMass_after_alphaT_55_all->SetBinError(33,0.001844542);
   EffectiveMass_after_alphaT_55_all->SetBinError(40,0.01655682);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,0.2036849);
   EffectiveMass_after_alphaT_55_all->SetBinError(46,0.01245296);
   EffectiveMass_after_alphaT_55_all->SetBinError(51,0.01545703);
   EffectiveMass_after_alphaT_55_all->SetEntries(5);
   EffectiveMass_after_alphaT_55_all->SetFillColor(44);
   EffectiveMass_after_alphaT_55_all->SetLineColor(44);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis3196[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3196);
   EffectiveMass_after_alphaT_55_all->SetBinContent(38,0.08714326);
   EffectiveMass_after_alphaT_55_all->SetBinContent(39,0.1005176);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,0.2717595);
   EffectiveMass_after_alphaT_55_all->SetBinContent(56,0.06379247);
   EffectiveMass_after_alphaT_55_all->SetBinError(38,0.08714326);
   EffectiveMass_after_alphaT_55_all->SetBinError(39,0.1005176);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,0.5035391);
   EffectiveMass_after_alphaT_55_all->SetBinError(56,0.06379247);
   EffectiveMass_after_alphaT_55_all->SetEntries(6);
   EffectiveMass_after_alphaT_55_all->SetFillColor(7);
   EffectiveMass_after_alphaT_55_all->SetLineColor(7);
   EffectiveMass_after_alphaT_55_all->SetLineStyle(10);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis3197[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3197);
   EffectiveMass_after_alphaT_55_all->SetBinContent(36,0.04120891);
   EffectiveMass_after_alphaT_55_all->SetBinContent(37,0.1062134);
   EffectiveMass_after_alphaT_55_all->SetBinContent(38,0.0162774);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,0.2965133);
   EffectiveMass_after_alphaT_55_all->SetBinContent(42,0.1537464);
   EffectiveMass_after_alphaT_55_all->SetBinContent(62,0.07869551);
   EffectiveMass_after_alphaT_55_all->SetBinContent(68,0.003058331);
   EffectiveMass_after_alphaT_55_all->SetBinError(36,0.04120891);
   EffectiveMass_after_alphaT_55_all->SetBinError(37,0.07302903);
   EffectiveMass_after_alphaT_55_all->SetBinError(38,0.0162774);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,0.5259723);
   EffectiveMass_after_alphaT_55_all->SetBinError(42,0.08878075);
   EffectiveMass_after_alphaT_55_all->SetBinError(62,0.07869551);
   EffectiveMass_after_alphaT_55_all->SetBinError(68,0.003058331);
   EffectiveMass_after_alphaT_55_all->SetEntries(12);
   EffectiveMass_after_alphaT_55_all->SetFillColor(40);
   EffectiveMass_after_alphaT_55_all->SetLineColor(40);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis3198[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3198);
   EffectiveMass_after_alphaT_55_all->SetBinContent(35,0.4015594);
   EffectiveMass_after_alphaT_55_all->SetBinContent(38,0.1393525);
   EffectiveMass_after_alphaT_55_all->SetBinContent(39,0.2655538);
   EffectiveMass_after_alphaT_55_all->SetBinContent(40,0.3583431);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,0.3583431);
   EffectiveMass_after_alphaT_55_all->SetBinError(35,0.3214762);
   EffectiveMass_after_alphaT_55_all->SetBinError(38,0.1393525);
   EffectiveMass_after_alphaT_55_all->SetBinError(39,0.2046738);
   EffectiveMass_after_alphaT_55_all->SetBinError(40,0.2929646);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,0.5782163);
   EffectiveMass_after_alphaT_55_all->SetEntries(9);
   EffectiveMass_after_alphaT_55_all->SetFillColor(2);
   EffectiveMass_after_alphaT_55_all->SetLineColor(2);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis3199[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3199);
   EffectiveMass_after_alphaT_55_all->SetBinContent(33,0.3411731);
   EffectiveMass_after_alphaT_55_all->SetBinContent(34,0.1690299);
   EffectiveMass_after_alphaT_55_all->SetBinContent(35,0.196059);
   EffectiveMass_after_alphaT_55_all->SetBinContent(36,0.3503901);
   EffectiveMass_after_alphaT_55_all->SetBinContent(37,0.6136148);
   EffectiveMass_after_alphaT_55_all->SetBinContent(38,0.3963283);
   EffectiveMass_after_alphaT_55_all->SetBinContent(39,0.1823306);
   EffectiveMass_after_alphaT_55_all->SetBinContent(40,0.353937);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,2.240163);
   EffectiveMass_after_alphaT_55_all->SetBinContent(42,0.3273844);
   EffectiveMass_after_alphaT_55_all->SetBinContent(43,0.219514);
   EffectiveMass_after_alphaT_55_all->SetBinContent(44,0.07793774);
   EffectiveMass_after_alphaT_55_all->SetBinContent(45,0.1453311);
   EffectiveMass_after_alphaT_55_all->SetBinContent(46,0.003397991);
   EffectiveMass_after_alphaT_55_all->SetBinContent(47,0.05645457);
   EffectiveMass_after_alphaT_55_all->SetBinContent(48,0.1126651);
   EffectiveMass_after_alphaT_55_all->SetBinContent(49,0.05645457);
   EffectiveMass_after_alphaT_55_all->SetBinContent(50,0.1138888);
   EffectiveMass_after_alphaT_55_all->SetBinContent(51,0.03351695);
   EffectiveMass_after_alphaT_55_all->SetBinContent(52,0.05281258);
   EffectiveMass_after_alphaT_55_all->SetBinContent(53,0.05870356);
   EffectiveMass_after_alphaT_55_all->SetBinContent(55,0.1761107);
   EffectiveMass_after_alphaT_55_all->SetBinContent(57,0.05281258);
   EffectiveMass_after_alphaT_55_all->SetBinContent(58,0.08784045);
   EffectiveMass_after_alphaT_55_all->SetBinContent(60,0.06097319);
   EffectiveMass_after_alphaT_55_all->SetBinError(33,0.1588084);
   EffectiveMass_after_alphaT_55_all->SetBinError(34,0.09140738);
   EffectiveMass_after_alphaT_55_all->SetBinError(35,0.1116905);
   EffectiveMass_after_alphaT_55_all->SetBinError(36,0.1343808);
   EffectiveMass_after_alphaT_55_all->SetBinError(37,0.1809432);
   EffectiveMass_after_alphaT_55_all->SetBinError(38,0.1508966);
   EffectiveMass_after_alphaT_55_all->SetBinError(39,0.1120583);
   EffectiveMass_after_alphaT_55_all->SetBinError(40,0.1309226);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,1.445708);
   EffectiveMass_after_alphaT_55_all->SetBinError(42,0.1452223);
   EffectiveMass_after_alphaT_55_all->SetBinError(43,0.1109626);
   EffectiveMass_after_alphaT_55_all->SetBinError(44,0.05937793);
   EffectiveMass_after_alphaT_55_all->SetBinError(45,0.08318328);
   EffectiveMass_after_alphaT_55_all->SetBinError(46,0.003397991);
   EffectiveMass_after_alphaT_55_all->SetBinError(47,0.05645457);
   EffectiveMass_after_alphaT_55_all->SetBinError(48,0.07738109);
   EffectiveMass_after_alphaT_55_all->SetBinError(49,0.05645457);
   EffectiveMass_after_alphaT_55_all->SetBinError(50,0.0820632);
   EffectiveMass_after_alphaT_55_all->SetBinError(51,0.03351695);
   EffectiveMass_after_alphaT_55_all->SetBinError(52,0.05281258);
   EffectiveMass_after_alphaT_55_all->SetBinError(53,0.05870356);
   EffectiveMass_after_alphaT_55_all->SetBinError(55,0.1016776);
   EffectiveMass_after_alphaT_55_all->SetBinError(57,0.05281258);
   EffectiveMass_after_alphaT_55_all->SetBinError(58,0.08784045);
   EffectiveMass_after_alphaT_55_all->SetBinError(60,0.06097319);
   EffectiveMass_after_alphaT_55_all->SetEntries(97);
   EffectiveMass_after_alphaT_55_all->SetFillColor(4);
   EffectiveMass_after_alphaT_55_all->SetLineColor(4);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis3200[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3200);
   EffectiveMass_after_alphaT_55_all->SetBinContent(33,0.2124318);
   EffectiveMass_after_alphaT_55_all->SetBinContent(34,0.1883473);
   EffectiveMass_after_alphaT_55_all->SetBinContent(35,0.1267451);
   EffectiveMass_after_alphaT_55_all->SetBinContent(36,0.4836468);
   EffectiveMass_after_alphaT_55_all->SetBinContent(37,0.5832609);
   EffectiveMass_after_alphaT_55_all->SetBinContent(38,0.2488289);
   EffectiveMass_after_alphaT_55_all->SetBinContent(39,0.2727882);
   EffectiveMass_after_alphaT_55_all->SetBinContent(40,0.3368047);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,4.064619);
   EffectiveMass_after_alphaT_55_all->SetBinContent(42,0.3766945);
   EffectiveMass_after_alphaT_55_all->SetBinContent(43,0.174851);
   EffectiveMass_after_alphaT_55_all->SetBinContent(44,0.3214339);
   EffectiveMass_after_alphaT_55_all->SetBinContent(45,0.2947736);
   EffectiveMass_after_alphaT_55_all->SetBinContent(46,0.1459372);
   EffectiveMass_after_alphaT_55_all->SetBinContent(47,0.4088281);
   EffectiveMass_after_alphaT_55_all->SetBinContent(48,0.2676453);
   EffectiveMass_after_alphaT_55_all->SetBinContent(49,0.191083);
   EffectiveMass_after_alphaT_55_all->SetBinContent(50,0.1773046);
   EffectiveMass_after_alphaT_55_all->SetBinContent(51,0.1904102);
   EffectiveMass_after_alphaT_55_all->SetBinContent(53,0.1083401);
   EffectiveMass_after_alphaT_55_all->SetBinContent(55,0.1083401);
   EffectiveMass_after_alphaT_55_all->SetBinContent(56,0.06632246);
   EffectiveMass_after_alphaT_55_all->SetBinContent(57,0.1516381);
   EffectiveMass_after_alphaT_55_all->SetBinContent(69,0.06896457);
   EffectiveMass_after_alphaT_55_all->SetBinContent(70,0.02124635);
   EffectiveMass_after_alphaT_55_all->SetBinError(33,0.1324142);
   EffectiveMass_after_alphaT_55_all->SetBinError(34,0.1127284);
   EffectiveMass_after_alphaT_55_all->SetBinError(35,0.08755149);
   EffectiveMass_after_alphaT_55_all->SetBinError(36,0.1817996);
   EffectiveMass_after_alphaT_55_all->SetBinError(37,0.2013948);
   EffectiveMass_after_alphaT_55_all->SetBinError(38,0.1441979);
   EffectiveMass_after_alphaT_55_all->SetBinError(39,0.1339097);
   EffectiveMass_after_alphaT_55_all->SetBinError(40,0.1401742);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,1.821607);
   EffectiveMass_after_alphaT_55_all->SetBinError(42,0.159422);
   EffectiveMass_after_alphaT_55_all->SetBinError(43,0.09574373);
   EffectiveMass_after_alphaT_55_all->SetBinError(44,0.1425203);
   EffectiveMass_after_alphaT_55_all->SetBinError(45,0.1341533);
   EffectiveMass_after_alphaT_55_all->SetBinError(46,0.09778306);
   EffectiveMass_after_alphaT_55_all->SetBinError(47,0.1613012);
   EffectiveMass_after_alphaT_55_all->SetBinError(48,0.1319804);
   EffectiveMass_after_alphaT_55_all->SetBinError(49,0.09707387);
   EffectiveMass_after_alphaT_55_all->SetBinError(50,0.1051791);
   EffectiveMass_after_alphaT_55_all->SetBinError(51,0.1099889);
   EffectiveMass_after_alphaT_55_all->SetBinError(53,0.07941373);
   EffectiveMass_after_alphaT_55_all->SetBinError(55,0.07941373);
   EffectiveMass_after_alphaT_55_all->SetBinError(56,0.06632246);
   EffectiveMass_after_alphaT_55_all->SetBinError(57,0.1073878);
   EffectiveMass_after_alphaT_55_all->SetBinError(69,0.06896457);
   EffectiveMass_after_alphaT_55_all->SetBinError(70,0.02124635);
   EffectiveMass_after_alphaT_55_all->SetEntries(119);
   EffectiveMass_after_alphaT_55_all->SetFillColor(5);
   EffectiveMass_after_alphaT_55_all->SetLineColor(5);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   ->Draw("histsame");
   
   TLegend *leg = new TLegend(0.68,0.53,0.9,0.75,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis3201[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3201);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,6);
   EffectiveMass_after_alphaT_55_all->SetBinContent(42,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(46,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(47,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(48,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(50,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(57,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,2.68);
   EffectiveMass_after_alphaT_55_all->SetBinError(42,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(46,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(47,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(48,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(50,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(57,1);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0.5);
   EffectiveMass_after_alphaT_55_all->SetMaximum(72.75864);
   EffectiveMass_after_alphaT_55_all->SetEntries(7);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(2);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->SetMarkerSize(1.5);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_after_alphaT_55_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"875    Jet Multiplicity=all");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6,0.85,"CMS Preliminary 2012, 7TeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6,0.79,"\int L dt = 5.0 fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   u->Modified();
   canvas875/EffectiveMass_after_alphaT_55_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-205,-0.25,1845,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis3202[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3202);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,0.8246443);
   EffectiveMass_after_alphaT_55_all->SetBinContent(42,1.165739);
   EffectiveMass_after_alphaT_55_all->SetBinContent(46,6.180921);
   EffectiveMass_after_alphaT_55_all->SetBinContent(47,2.149231);
   EffectiveMass_after_alphaT_55_all->SetBinContent(48,2.629431);
   EffectiveMass_after_alphaT_55_all->SetBinContent(50,3.434143);
   EffectiveMass_after_alphaT_55_all->SetBinContent(57,4.891155);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,0.5646138);
   EffectiveMass_after_alphaT_55_all->SetBinError(42,1.036296);
   EffectiveMass_after_alphaT_55_all->SetBinError(46,1.171176);
   EffectiveMass_after_alphaT_55_all->SetBinError(47,1.065319);
   EffectiveMass_after_alphaT_55_all->SetBinError(48,1.077883);
   EffectiveMass_after_alphaT_55_all->SetBinError(50,1.099948);
   EffectiveMass_after_alphaT_55_all->SetBinError(57,1.158712);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0);
   EffectiveMass_after_alphaT_55_all->SetMaximum(2);
   EffectiveMass_after_alphaT_55_all->SetEntries(3.136873);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(2);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->SetMarkerSize(1.5);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetNdivisions(505);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   EffectiveMass_after_alphaT_55_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(75);
   gre->SetName("Graph_from_EffectiveMass_after_alphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,20,1);
   gre->SetPointError(0,20,0);
   gre->SetPoint(1,60,1);
   gre->SetPointError(1,20,0);
   gre->SetPoint(2,100,1);
   gre->SetPointError(2,20,0);
   gre->SetPoint(3,140,1);
   gre->SetPointError(3,20,0);
   gre->SetPoint(4,180,1);
   gre->SetPointError(4,20,0);
   gre->SetPoint(5,220,1);
   gre->SetPointError(5,20,0);
   gre->SetPoint(6,260,1);
   gre->SetPointError(6,20,0);
   gre->SetPoint(7,300,1);
   gre->SetPointError(7,20,0);
   gre->SetPoint(8,340,1);
   gre->SetPointError(8,20,0);
   gre->SetPoint(9,380,1);
   gre->SetPointError(9,20,0);
   gre->SetPoint(10,420,1);
   gre->SetPointError(10,20,0);
   gre->SetPoint(11,460,1);
   gre->SetPointError(11,20,0);
   gre->SetPoint(12,500,1);
   gre->SetPointError(12,20,0);
   gre->SetPoint(13,540,1);
   gre->SetPointError(13,20,0);
   gre->SetPoint(14,580,1);
   gre->SetPointError(14,20,0);
   gre->SetPoint(15,620,1);
   gre->SetPointError(15,20,0);
   gre->SetPoint(16,660,1);
   gre->SetPointError(16,20,0);
   gre->SetPoint(17,700,1);
   gre->SetPointError(17,20,0);
   gre->SetPoint(18,740,1);
   gre->SetPointError(18,20,0);
   gre->SetPoint(19,780,1);
   gre->SetPointError(19,20,0);
   gre->SetPoint(20,820,1);
   gre->SetPointError(20,20,0);
   gre->SetPoint(21,860,1);
   gre->SetPointError(21,20,0);
   gre->SetPoint(22,900,1);
   gre->SetPointError(22,20,0);
   gre->SetPoint(23,940,1);
   gre->SetPointError(23,20,0);
   gre->SetPoint(24,980,1);
   gre->SetPointError(24,20,0);
   gre->SetPoint(25,1020,1);
   gre->SetPointError(25,20,0);
   gre->SetPoint(26,1060,1);
   gre->SetPointError(26,20,0);
   gre->SetPoint(27,1100,1);
   gre->SetPointError(27,20,0);
   gre->SetPoint(28,1140,1);
   gre->SetPointError(28,20,0);
   gre->SetPoint(29,1180,1);
   gre->SetPointError(29,20,0);
   gre->SetPoint(30,1220,1);
   gre->SetPointError(30,20,0);
   gre->SetPoint(31,1260,1);
   gre->SetPointError(31,20,0);
   gre->SetPoint(32,1300,1);
   gre->SetPointError(32,20,0.372271);
   gre->SetPoint(33,1340,1);
   gre->SetPointError(33,20,0.4061003);
   gre->SetPoint(34,1380,1);
   gre->SetPointError(34,20,0.4851253);
   gre->SetPoint(35,1420,1);
   gre->SetPointError(35,20,0.2625534);
   gre->SetPoint(36,1460,1);
   gre->SetPointError(36,20,0.2151938);
   gre->SetPoint(37,1500,1);
   gre->SetPointError(37,20,0.2997526);
   gre->SetPoint(38,1540,1);
   gre->SetPointError(38,20,0.3497367);
   gre->SetPoint(39,1580,1);
   gre->SetPointError(39,20,0.3289656);
   gre->SetPoint(40,1620,1);
   gre->SetPointError(40,20,0.345366);
   gre->SetPoint(41,1660,1);
   gre->SetPointError(41,20,0.271862);
   gre->SetPoint(42,1700,1);
   gre->SetPointError(42,20,0.3716332);
   gre->SetPoint(43,1740,1);
   gre->SetPointError(43,20,0.3865945);
   gre->SetPoint(44,1780,1);
   gre->SetPointError(44,20,0.3586642);
   gre->SetPoint(45,1820,1);
   gre->SetPointError(45,20,0.6096327);
   gre->SetPoint(46,1860,1);
   gre->SetPointError(46,20,0.3672936);
   gre->SetPoint(47,1900,1);
   gre->SetPointError(47,20,0.4022828);
   gre->SetPoint(48,1940,1);
   gre->SetPointError(48,20,0.4536535);
   gre->SetPoint(49,1980,1);
   gre->SetPointError(49,20,0.4581335);
   gre->SetPoint(50,2020,1);
   gre->SetPointError(50,20,0.4846462);
   gre->SetPoint(51,2060,1);
   gre->SetPointError(51,20,1);
   gre->SetPoint(52,2100,1);
   gre->SetPointError(52,20,0.5911959);
   gre->SetPoint(53,2140,1);
   gre->SetPointError(53,20,0);
   gre->SetPoint(54,2180,1);
   gre->SetPointError(54,20,0.4535582);
   gre->SetPoint(55,2220,1);
   gre->SetPointError(55,20,0.7072404);
   gre->SetPoint(56,2260,1);
   gre->SetPointError(56,20,0.5853327);
   gre->SetPoint(57,2300,1);
   gre->SetPointError(57,20,1);
   gre->SetPoint(58,2340,1);
   gre->SetPointError(58,20,0);
   gre->SetPoint(59,2380,1);
   gre->SetPointError(59,20,1);
   gre->SetPoint(60,2420,1);
   gre->SetPointError(60,20,0);
   gre->SetPoint(61,2460,1);
   gre->SetPointError(61,20,1);
   gre->SetPoint(62,2500,1);
   gre->SetPointError(62,20,0);
   gre->SetPoint(63,2540,1);
   gre->SetPointError(63,20,0);
   gre->SetPoint(64,2580,1);
   gre->SetPointError(64,20,0);
   gre->SetPoint(65,2620,1);
   gre->SetPointError(65,20,0);
   gre->SetPoint(66,2660,1);
   gre->SetPointError(66,20,0);
   gre->SetPoint(67,2700,1);
   gre->SetPointError(67,20,1);
   gre->SetPoint(68,2740,1);
   gre->SetPointError(68,20,1);
   gre->SetPoint(69,2780,1);
   gre->SetPointError(69,20,1);
   gre->SetPoint(70,2820,1);
   gre->SetPointError(70,20,0);
   gre->SetPoint(71,2860,1);
   gre->SetPointError(71,20,0);
   gre->SetPoint(72,2900,1);
   gre->SetPointError(72,20,0);
   gre->SetPoint(73,2940,1);
   gre->SetPointError(73,20,0);
   gre->SetPoint(74,2980,1);
   gre->SetPointError(74,20,0);
   
   TH1F *Graph_Graph_from_EffectiveMass_after_alphaT_55_all534 = new TH1F("Graph_Graph_from_EffectiveMass_after_alphaT_55_all534","",100,0,3300);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->SetMinimum(-0.2);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->SetMaximum(2.2);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->SetDirectory(0);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->SetStats(0);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all534->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_EffectiveMass_after_alphaT_55_all534);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1640,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3203[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis3203);
   EffectiveMass_after_alphaT_55_all->SetBinContent(41,0.8246443);
   EffectiveMass_after_alphaT_55_all->SetBinContent(42,1.165739);
   EffectiveMass_after_alphaT_55_all->SetBinContent(46,6.180921);
   EffectiveMass_after_alphaT_55_all->SetBinContent(47,2.149231);
   EffectiveMass_after_alphaT_55_all->SetBinContent(48,2.629431);
   EffectiveMass_after_alphaT_55_all->SetBinContent(50,3.434143);
   EffectiveMass_after_alphaT_55_all->SetBinContent(57,4.891155);
   EffectiveMass_after_alphaT_55_all->SetBinError(41,0.5646138);
   EffectiveMass_after_alphaT_55_all->SetBinError(42,1.036296);
   EffectiveMass_after_alphaT_55_all->SetBinError(46,1.171176);
   EffectiveMass_after_alphaT_55_all->SetBinError(47,1.065319);
   EffectiveMass_after_alphaT_55_all->SetBinError(48,1.077883);
   EffectiveMass_after_alphaT_55_all->SetBinError(50,1.099948);
   EffectiveMass_after_alphaT_55_all->SetBinError(57,1.158712);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0);
   EffectiveMass_after_alphaT_55_all->SetMaximum(2);
   EffectiveMass_after_alphaT_55_all->SetEntries(3.136873);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(2);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->SetMarkerSize(1.5);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetNdivisions(505);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   EffectiveMass_after_alphaT_55_all->Draw("PSAME");
   d->Modified();
   canvas875/EffectiveMass_after_alphaT_55_all->cd();
   canvas875/EffectiveMass_after_alphaT_55_all->Modified();
   canvas875/EffectiveMass_after_alphaT_55_all->cd();
   canvas875/EffectiveMass_after_alphaT_55_all->SetSelected(canvas875/EffectiveMass_after_alphaT_55_all);
}
