{
//=========Macro generated from canvas: canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all/cannameEffectiveMass_after_alphaT_55_all
//=========  (Thu May 10 12:46:15 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all = new TCanvas("canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all", "cannameEffectiveMass_after_alphaT_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->SetHighLightColor(2);
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->Range(0,0,1,1);
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->SetFillColor(0);
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->SetBorderMode(0);
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->SetBorderSize(2);
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->SetTickx(1);
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->SetTicky(1);
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-205,-0.6724381,1845,3.041643);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2593[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2593);
   EffectiveMass_after_alphaT_55_all->SetBinContent(11,7);
   EffectiveMass_after_alphaT_55_all->SetBinContent(12,18);
   EffectiveMass_after_alphaT_55_all->SetBinContent(13,24);
   EffectiveMass_after_alphaT_55_all->SetBinContent(14,31);
   EffectiveMass_after_alphaT_55_all->SetBinContent(15,23);
   EffectiveMass_after_alphaT_55_all->SetBinContent(16,10);
   EffectiveMass_after_alphaT_55_all->SetBinContent(17,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(11,2.86);
   EffectiveMass_after_alphaT_55_all->SetBinError(12,4.242641);
   EffectiveMass_after_alphaT_55_all->SetBinError(13,4.898979);
   EffectiveMass_after_alphaT_55_all->SetBinError(14,5.567764);
   EffectiveMass_after_alphaT_55_all->SetBinError(15,4.795832);
   EffectiveMass_after_alphaT_55_all->SetBinError(16,3.162278);
   EffectiveMass_after_alphaT_55_all->SetBinError(17,1);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0.5);
   EffectiveMass_after_alphaT_55_all->SetMaximum(467.9879);
   EffectiveMass_after_alphaT_55_all->SetEntries(115);
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
   
   TH1F *_stack_173 = new TH1F("_stack_173","",75,0,3000);
   _stack_173->SetMinimum(0.01945251);
   _stack_173->SetMaximum(77.81002);
   _stack_173->SetDirectory(0);
   _stack_173->SetStats(0);
   _stack_173->GetXaxis()->SetLabelFont(42);
   _stack_173->GetXaxis()->SetLabelOffset(0.007);
   _stack_173->GetXaxis()->SetLabelSize(0.05);
   _stack_173->GetXaxis()->SetTitleSize(0.05);
   _stack_173->GetYaxis()->SetLabelFont(42);
   _stack_173->GetYaxis()->SetLabelOffset(0.007);
   _stack_173->GetYaxis()->SetLabelSize(0.05);
   _stack_173->GetZaxis()->SetLabelFont(42);
   _stack_173->GetZaxis()->SetLabelOffset(0.007);
   _stack_173->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_173);
   
   Double_t xAxis2594[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2594);
   EffectiveMass_after_alphaT_55_all->SetEntries(1);
   EffectiveMass_after_alphaT_55_all->SetFillColor(4);
   EffectiveMass_after_alphaT_55_all->SetLineColor(4);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis2595[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2595);
   EffectiveMass_after_alphaT_55_all->SetEntries(1);
   EffectiveMass_after_alphaT_55_all->SetFillColor(5);
   EffectiveMass_after_alphaT_55_all->SetLineColor(5);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis2596[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2596);
   EffectiveMass_after_alphaT_55_all->SetEntries(1);
   EffectiveMass_after_alphaT_55_all->SetFillColor(7);
   EffectiveMass_after_alphaT_55_all->SetLineColor(7);
   EffectiveMass_after_alphaT_55_all->SetLineStyle(10);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis2597[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2597);
   EffectiveMass_after_alphaT_55_all->SetBinContent(12,0.1477473);
   EffectiveMass_after_alphaT_55_all->SetBinContent(13,0.1034695);
   EffectiveMass_after_alphaT_55_all->SetBinContent(14,0.003262842);
   EffectiveMass_after_alphaT_55_all->SetBinContent(15,0.09073196);
   EffectiveMass_after_alphaT_55_all->SetBinError(12,0.1198578);
   EffectiveMass_after_alphaT_55_all->SetBinError(13,0.06995025);
   EffectiveMass_after_alphaT_55_all->SetBinError(14,0.003262842);
   EffectiveMass_after_alphaT_55_all->SetBinError(15,0.06681078);
   EffectiveMass_after_alphaT_55_all->SetEntries(10);
   EffectiveMass_after_alphaT_55_all->SetFillColor(40);
   EffectiveMass_after_alphaT_55_all->SetLineColor(40);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis2598[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2598);
   EffectiveMass_after_alphaT_55_all->SetBinContent(11,0.05771971);
   EffectiveMass_after_alphaT_55_all->SetBinContent(12,0.2606262);
   EffectiveMass_after_alphaT_55_all->SetBinContent(13,0.4542032);
   EffectiveMass_after_alphaT_55_all->SetBinContent(14,0.7697901);
   EffectiveMass_after_alphaT_55_all->SetBinContent(15,0.6942435);
   EffectiveMass_after_alphaT_55_all->SetBinContent(16,0.2721981);
   EffectiveMass_after_alphaT_55_all->SetBinError(11,0.02693505);
   EffectiveMass_after_alphaT_55_all->SetBinError(12,0.0519419);
   EffectiveMass_after_alphaT_55_all->SetBinError(13,0.08049077);
   EffectiveMass_after_alphaT_55_all->SetBinError(14,0.09405672);
   EffectiveMass_after_alphaT_55_all->SetBinError(15,0.09655774);
   EffectiveMass_after_alphaT_55_all->SetBinError(16,0.05152749);
   EffectiveMass_after_alphaT_55_all->SetEntries(292);
   EffectiveMass_after_alphaT_55_all->SetFillColor(44);
   EffectiveMass_after_alphaT_55_all->SetLineColor(44);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis2599[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2599);
   EffectiveMass_after_alphaT_55_all->SetBinContent(11,0.7222662);
   EffectiveMass_after_alphaT_55_all->SetBinContent(12,2.858636);
   EffectiveMass_after_alphaT_55_all->SetBinContent(13,2.418146);
   EffectiveMass_after_alphaT_55_all->SetBinContent(14,0.7875056);
   EffectiveMass_after_alphaT_55_all->SetBinContent(15,0.2515751);
   EffectiveMass_after_alphaT_55_all->SetBinContent(16,0.3573314);
   EffectiveMass_after_alphaT_55_all->SetBinError(11,0.4172111);
   EffectiveMass_after_alphaT_55_all->SetBinError(12,0.9160661);
   EffectiveMass_after_alphaT_55_all->SetBinError(13,0.8489805);
   EffectiveMass_after_alphaT_55_all->SetBinError(14,0.4758251);
   EffectiveMass_after_alphaT_55_all->SetBinError(15,0.2515751);
   EffectiveMass_after_alphaT_55_all->SetBinError(16,0.2741486);
   EffectiveMass_after_alphaT_55_all->SetEntries(34);
   EffectiveMass_after_alphaT_55_all->SetFillColor(2);
   EffectiveMass_after_alphaT_55_all->SetLineColor(2);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis2600[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2600);
   EffectiveMass_after_alphaT_55_all->SetBinContent(11,6.772922);
   EffectiveMass_after_alphaT_55_all->SetBinContent(12,19.44169);
   EffectiveMass_after_alphaT_55_all->SetBinContent(13,43.82297);
   EffectiveMass_after_alphaT_55_all->SetBinContent(14,30.79618);
   EffectiveMass_after_alphaT_55_all->SetBinContent(15,24.8233);
   EffectiveMass_after_alphaT_55_all->SetBinContent(16,7.107853);
   EffectiveMass_after_alphaT_55_all->SetBinContent(17,0.4071855);
   EffectiveMass_after_alphaT_55_all->SetBinError(11,1.779927);
   EffectiveMass_after_alphaT_55_all->SetBinError(12,3.03031);
   EffectiveMass_after_alphaT_55_all->SetBinError(13,4.808297);
   EffectiveMass_after_alphaT_55_all->SetBinError(14,4.060841);
   EffectiveMass_after_alphaT_55_all->SetBinError(15,3.563107);
   EffectiveMass_after_alphaT_55_all->SetBinError(16,1.805998);
   EffectiveMass_after_alphaT_55_all->SetBinError(17,0.4071855);
   EffectiveMass_after_alphaT_55_all->SetEntries(338);
   EffectiveMass_after_alphaT_55_all->SetFillColor(6);
   EffectiveMass_after_alphaT_55_all->SetLineColor(6);
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
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","Single Top","L");
   entry->SetLineColor(40);
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
   leg->Draw();
   Double_t xAxis2601[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2601);
   EffectiveMass_after_alphaT_55_all->SetBinContent(11,7);
   EffectiveMass_after_alphaT_55_all->SetBinContent(12,18);
   EffectiveMass_after_alphaT_55_all->SetBinContent(13,24);
   EffectiveMass_after_alphaT_55_all->SetBinContent(14,31);
   EffectiveMass_after_alphaT_55_all->SetBinContent(15,23);
   EffectiveMass_after_alphaT_55_all->SetBinContent(16,10);
   EffectiveMass_after_alphaT_55_all->SetBinContent(17,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(11,2.86);
   EffectiveMass_after_alphaT_55_all->SetBinError(12,4.242641);
   EffectiveMass_after_alphaT_55_all->SetBinError(13,4.898979);
   EffectiveMass_after_alphaT_55_all->SetBinError(14,5.567764);
   EffectiveMass_after_alphaT_55_all->SetBinError(15,4.795832);
   EffectiveMass_after_alphaT_55_all->SetBinError(16,3.162278);
   EffectiveMass_after_alphaT_55_all->SetBinError(17,1);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0.5);
   EffectiveMass_after_alphaT_55_all->SetMaximum(467.9879);
   EffectiveMass_after_alphaT_55_all->SetEntries(115);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(2);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->SetMarkerSize(1.5);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_after_alphaT_55_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_275_325    Jet Multiplicity=all");
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
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->cd();
  
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
   Double_t xAxis2602[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2602);
   EffectiveMass_after_alphaT_55_all->SetBinContent(11,0.9267954);
   EffectiveMass_after_alphaT_55_all->SetBinContent(12,0.7926479);
   EffectiveMass_after_alphaT_55_all->SetBinContent(13,0.5128338);
   EffectiveMass_after_alphaT_55_all->SetBinContent(14,0.9580695);
   EffectiveMass_after_alphaT_55_all->SetBinContent(15,0.8894095);
   EffectiveMass_after_alphaT_55_all->SetBinContent(16,1.292427);
   EffectiveMass_after_alphaT_55_all->SetBinContent(17,2.455883);
   EffectiveMass_after_alphaT_55_all->SetBinError(11,0.4749008);
   EffectiveMass_after_alphaT_55_all->SetBinError(12,0.2739031);
   EffectiveMass_after_alphaT_55_all->SetBinError(13,0.2292538);
   EffectiveMass_after_alphaT_55_all->SetBinError(14,0.2196214);
   EffectiveMass_after_alphaT_55_all->SetBinError(15,0.2501566);
   EffectiveMass_after_alphaT_55_all->SetBinError(16,0.3946909);
   EffectiveMass_after_alphaT_55_all->SetBinError(17,1.414214);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0);
   EffectiveMass_after_alphaT_55_all->SetMaximum(2);
   EffectiveMass_after_alphaT_55_all->SetEntries(4.835983);
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
   gre->SetPointError(10,20,0.2420747);
   gre->SetPoint(11,460,1);
   gre->SetPointError(11,20,0.1395255);
   gre->SetPoint(12,500,1);
   gre->SetPointError(12,20,0.1043582);
   gre->SetPoint(13,540,1);
   gre->SetPointError(13,20,0.1263943);
   gre->SetPoint(14,580,1);
   gre->SetPointError(14,20,0.1382029);
   gre->SetPoint(15,620,1);
   gre->SetPointError(15,20,0.2361799);
   gre->SetPoint(16,660,1);
   gre->SetPointError(16,20,1);
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
   gre->SetPointError(32,20,0);
   gre->SetPoint(33,1340,1);
   gre->SetPointError(33,20,0);
   gre->SetPoint(34,1380,1);
   gre->SetPointError(34,20,0);
   gre->SetPoint(35,1420,1);
   gre->SetPointError(35,20,0);
   gre->SetPoint(36,1460,1);
   gre->SetPointError(36,20,0);
   gre->SetPoint(37,1500,1);
   gre->SetPointError(37,20,0);
   gre->SetPoint(38,1540,1);
   gre->SetPointError(38,20,0);
   gre->SetPoint(39,1580,1);
   gre->SetPointError(39,20,0);
   gre->SetPoint(40,1620,1);
   gre->SetPointError(40,20,0);
   gre->SetPoint(41,1660,1);
   gre->SetPointError(41,20,0);
   gre->SetPoint(42,1700,1);
   gre->SetPointError(42,20,0);
   gre->SetPoint(43,1740,1);
   gre->SetPointError(43,20,0);
   gre->SetPoint(44,1780,1);
   gre->SetPointError(44,20,0);
   gre->SetPoint(45,1820,1);
   gre->SetPointError(45,20,0);
   gre->SetPoint(46,1860,1);
   gre->SetPointError(46,20,0);
   gre->SetPoint(47,1900,1);
   gre->SetPointError(47,20,0);
   gre->SetPoint(48,1940,1);
   gre->SetPointError(48,20,0);
   gre->SetPoint(49,1980,1);
   gre->SetPointError(49,20,0);
   gre->SetPoint(50,2020,1);
   gre->SetPointError(50,20,0);
   gre->SetPoint(51,2060,1);
   gre->SetPointError(51,20,0);
   gre->SetPoint(52,2100,1);
   gre->SetPointError(52,20,0);
   gre->SetPoint(53,2140,1);
   gre->SetPointError(53,20,0);
   gre->SetPoint(54,2180,1);
   gre->SetPointError(54,20,0);
   gre->SetPoint(55,2220,1);
   gre->SetPointError(55,20,0);
   gre->SetPoint(56,2260,1);
   gre->SetPointError(56,20,0);
   gre->SetPoint(57,2300,1);
   gre->SetPointError(57,20,0);
   gre->SetPoint(58,2340,1);
   gre->SetPointError(58,20,0);
   gre->SetPoint(59,2380,1);
   gre->SetPointError(59,20,0);
   gre->SetPoint(60,2420,1);
   gre->SetPointError(60,20,0);
   gre->SetPoint(61,2460,1);
   gre->SetPointError(61,20,0);
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
   gre->SetPointError(67,20,0);
   gre->SetPoint(68,2740,1);
   gre->SetPointError(68,20,0);
   gre->SetPoint(69,2780,1);
   gre->SetPointError(69,20,0);
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
   
   TH1F *Graph_Graph_from_EffectiveMass_after_alphaT_55_all434 = new TH1F("Graph_Graph_from_EffectiveMass_after_alphaT_55_all434","",100,0,3300);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->SetMinimum(-0.2);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->SetMaximum(2.2);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->SetDirectory(0);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->SetStats(0);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all434->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_EffectiveMass_after_alphaT_55_all434);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1640,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2603[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis2603);
   EffectiveMass_after_alphaT_55_all->SetBinContent(11,0.9267954);
   EffectiveMass_after_alphaT_55_all->SetBinContent(12,0.7926479);
   EffectiveMass_after_alphaT_55_all->SetBinContent(13,0.5128338);
   EffectiveMass_after_alphaT_55_all->SetBinContent(14,0.9580695);
   EffectiveMass_after_alphaT_55_all->SetBinContent(15,0.8894095);
   EffectiveMass_after_alphaT_55_all->SetBinContent(16,1.292427);
   EffectiveMass_after_alphaT_55_all->SetBinContent(17,2.455883);
   EffectiveMass_after_alphaT_55_all->SetBinError(11,0.4749008);
   EffectiveMass_after_alphaT_55_all->SetBinError(12,0.2739031);
   EffectiveMass_after_alphaT_55_all->SetBinError(13,0.2292538);
   EffectiveMass_after_alphaT_55_all->SetBinError(14,0.2196214);
   EffectiveMass_after_alphaT_55_all->SetBinError(15,0.2501566);
   EffectiveMass_after_alphaT_55_all->SetBinError(16,0.3946909);
   EffectiveMass_after_alphaT_55_all->SetBinError(17,1.414214);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0);
   EffectiveMass_after_alphaT_55_all->SetMaximum(2);
   EffectiveMass_after_alphaT_55_all->SetEntries(4.835983);
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
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->cd();
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->Modified();
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->cd();
   canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all->SetSelected(canvasDiMuon_275_325/EffectiveMass_after_alphaT_55_all);
}
