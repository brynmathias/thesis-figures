{
//=========Macro generated from canvas: canvas775_875/EffectiveMass_all/cannameEffectiveMass_all
//=========  (Thu May 10 12:24:06 2012) by ROOT version5.32/00
   TCanvas *canvas775_875/EffectiveMass_all = new TCanvas("canvas775_875/EffectiveMass_all", "cannameEffectiveMass_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas775_875/EffectiveMass_all->SetHighLightColor(2);
   canvas775_875/EffectiveMass_all->Range(0,0,1,1);
   canvas775_875/EffectiveMass_all->SetFillColor(0);
   canvas775_875/EffectiveMass_all->SetBorderMode(0);
   canvas775_875/EffectiveMass_all->SetBorderSize(2);
   canvas775_875/EffectiveMass_all->SetTickx(1);
   canvas775_875/EffectiveMass_all->SetTicky(1);
   canvas775_875/EffectiveMass_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-205,-1.067385,1845,6.596162);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2904[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis2904);
   EffectiveMass_all->SetBinContent(20,299);
   EffectiveMass_all->SetBinContent(21,2490);
   EffectiveMass_all->SetBinContent(22,3335);
   EffectiveMass_all->SetBinContent(23,2346);
   EffectiveMass_all->SetBinContent(24,809);
   EffectiveMass_all->SetBinContent(25,299);
   EffectiveMass_all->SetBinContent(26,140);
   EffectiveMass_all->SetBinContent(27,80);
   EffectiveMass_all->SetBinContent(28,39);
   EffectiveMass_all->SetBinContent(29,35);
   EffectiveMass_all->SetBinContent(30,14);
   EffectiveMass_all->SetBinContent(31,9);
   EffectiveMass_all->SetBinContent(32,4);
   EffectiveMass_all->SetBinContent(33,4);
   EffectiveMass_all->SetBinContent(34,2);
   EffectiveMass_all->SetBinContent(35,1);
   EffectiveMass_all->SetBinContent(37,1);
   EffectiveMass_all->SetBinContent(39,2);
   EffectiveMass_all->SetBinContent(40,1);
   EffectiveMass_all->SetBinContent(41,2);
   EffectiveMass_all->SetBinError(20,17.29162);
   EffectiveMass_all->SetBinError(21,49.8999);
   EffectiveMass_all->SetBinError(22,57.74946);
   EffectiveMass_all->SetBinError(23,48.43552);
   EffectiveMass_all->SetBinError(24,28.44293);
   EffectiveMass_all->SetBinError(25,17.29162);
   EffectiveMass_all->SetBinError(26,11.83216);
   EffectiveMass_all->SetBinError(27,8.944272);
   EffectiveMass_all->SetBinError(28,6.244998);
   EffectiveMass_all->SetBinError(29,5.91608);
   EffectiveMass_all->SetBinError(30,3.741657);
   EffectiveMass_all->SetBinError(31,3.19);
   EffectiveMass_all->SetBinError(32,2.3);
   EffectiveMass_all->SetBinError(33,2.3);
   EffectiveMass_all->SetBinError(34,2);
   EffectiveMass_all->SetBinError(35,1);
   EffectiveMass_all->SetBinError(37,1);
   EffectiveMass_all->SetBinError(39,2);
   EffectiveMass_all->SetBinError(40,1);
   EffectiveMass_all->SetBinError(41,2);
   EffectiveMass_all->SetMinimum(0.5);
   EffectiveMass_all->SetMaximum(675783.6);
   EffectiveMass_all->SetEntries(9912);
   EffectiveMass_all->SetLineWidth(2);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->SetMarkerSize(1.5);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_all->Draw("");
   Double_t xAxis2905[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis2905);
   EffectiveMass_all->SetBinContent(20,0.873029);
   EffectiveMass_all->SetBinContent(21,6.117016);
   EffectiveMass_all->SetBinContent(22,16.37249);
   EffectiveMass_all->SetBinContent(23,23.54539);
   EffectiveMass_all->SetBinContent(24,23.62067);
   EffectiveMass_all->SetBinContent(25,19.12041);
   EffectiveMass_all->SetBinContent(26,18.18481);
   EffectiveMass_all->SetBinContent(27,16.57327);
   EffectiveMass_all->SetBinContent(28,12.83758);
   EffectiveMass_all->SetBinContent(29,10.08773);
   EffectiveMass_all->SetBinContent(30,7.626334);
   EffectiveMass_all->SetBinContent(31,5.61246);
   EffectiveMass_all->SetBinContent(32,5.485189);
   EffectiveMass_all->SetBinContent(33,3.283904);
   EffectiveMass_all->SetBinContent(34,2.880443);
   EffectiveMass_all->SetBinContent(35,3.019718);
   EffectiveMass_all->SetBinContent(36,1.162115);
   EffectiveMass_all->SetBinContent(37,1.250144);
   EffectiveMass_all->SetBinContent(38,0.7873446);
   EffectiveMass_all->SetBinContent(39,1.282526);
   EffectiveMass_all->SetBinContent(40,0.7875649);
   EffectiveMass_all->SetBinContent(41,2.059324);
   EffectiveMass_all->SetBinContent(42,0.5161817);
   EffectiveMass_all->SetBinContent(43,0.2434857);
   EffectiveMass_all->SetBinError(20,0.2810732);
   EffectiveMass_all->SetBinError(21,0.6328972);
   EffectiveMass_all->SetBinError(22,1.135382);
   EffectiveMass_all->SetBinError(23,1.459263);
   EffectiveMass_all->SetBinError(24,1.283108);
   EffectiveMass_all->SetBinError(25,1.161852);
   EffectiveMass_all->SetBinError(26,1.41803);
   EffectiveMass_all->SetBinError(27,1.162268);
   EffectiveMass_all->SetBinError(28,1.053172);
   EffectiveMass_all->SetBinError(29,0.9025267);
   EffectiveMass_all->SetBinError(30,0.776191);
   EffectiveMass_all->SetBinError(31,0.631094);
   EffectiveMass_all->SetBinError(32,0.6291795);
   EffectiveMass_all->SetBinError(33,0.4721161);
   EffectiveMass_all->SetBinError(34,0.7501684);
   EffectiveMass_all->SetBinError(35,0.4457078);
   EffectiveMass_all->SetBinError(36,0.2646873);
   EffectiveMass_all->SetBinError(37,0.3193731);
   EffectiveMass_all->SetBinError(38,0.2306379);
   EffectiveMass_all->SetBinError(39,0.2916612);
   EffectiveMass_all->SetBinError(40,0.242543);
   EffectiveMass_all->SetBinError(41,1.296604);
   EffectiveMass_all->SetBinError(42,0.2033404);
   EffectiveMass_all->SetBinError(43,0.123529);
   EffectiveMass_all->SetEntries(3328);
   EffectiveMass_all->SetLineColor(5);
   EffectiveMass_all->SetLineWidth(3);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle(" Events/40 GeV");
   EffectiveMass_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_194 = new TH1F("_stack_194","",75,0,3000);
   _stack_194->SetMinimum(27.12087);
   _stack_194->SetMaximum(108483.5);
   _stack_194->SetDirectory(0);
   _stack_194->SetStats(0);
   _stack_194->GetXaxis()->SetLabelFont(42);
   _stack_194->GetXaxis()->SetLabelOffset(0.007);
   _stack_194->GetXaxis()->SetLabelSize(0.05);
   _stack_194->GetXaxis()->SetTitleSize(0.05);
   _stack_194->GetYaxis()->SetLabelFont(42);
   _stack_194->GetYaxis()->SetLabelOffset(0.007);
   _stack_194->GetYaxis()->SetLabelSize(0.05);
   _stack_194->GetZaxis()->SetLabelFont(42);
   _stack_194->GetZaxis()->SetLabelOffset(0.007);
   _stack_194->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_194);
   
   Double_t xAxis2906[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis2906);
   EffectiveMass_all->SetBinContent(20,13.94721);
   EffectiveMass_all->SetBinContent(21,132.6808);
   EffectiveMass_all->SetBinContent(22,220.5626);
   EffectiveMass_all->SetBinContent(23,221.5381);
   EffectiveMass_all->SetBinContent(24,147.4675);
   EffectiveMass_all->SetBinContent(25,104.2155);
   EffectiveMass_all->SetBinContent(26,75.07377);
   EffectiveMass_all->SetBinContent(27,56.2479);
   EffectiveMass_all->SetBinContent(28,42.7496);
   EffectiveMass_all->SetBinContent(29,30.68735);
   EffectiveMass_all->SetBinContent(30,19.95128);
   EffectiveMass_all->SetBinContent(31,15.88009);
   EffectiveMass_all->SetBinContent(32,11.96866);
   EffectiveMass_all->SetBinContent(33,6.849868);
   EffectiveMass_all->SetBinContent(34,6.352598);
   EffectiveMass_all->SetBinContent(35,4.820748);
   EffectiveMass_all->SetBinContent(36,2.305594);
   EffectiveMass_all->SetBinContent(37,2.242901);
   EffectiveMass_all->SetBinContent(38,1.324676);
   EffectiveMass_all->SetBinContent(39,1.506708);
   EffectiveMass_all->SetBinContent(40,1.182715);
   EffectiveMass_all->SetBinContent(41,2.827865);
   EffectiveMass_all->SetBinContent(42,0.63293);
   EffectiveMass_all->SetBinContent(43,0.2434857);
   EffectiveMass_all->SetBinError(20,1.710253);
   EffectiveMass_all->SetBinError(21,6.013925);
   EffectiveMass_all->SetBinError(22,6.755034);
   EffectiveMass_all->SetBinError(23,6.422175);
   EffectiveMass_all->SetBinError(24,4.605082);
   EffectiveMass_all->SetBinError(25,3.867845);
   EffectiveMass_all->SetBinError(26,4.321944);
   EffectiveMass_all->SetBinError(27,2.575167);
   EffectiveMass_all->SetBinError(28,2.358269);
   EffectiveMass_all->SetBinError(29,1.960059);
   EffectiveMass_all->SetBinError(30,1.400371);
   EffectiveMass_all->SetBinError(31,1.314658);
   EffectiveMass_all->SetBinError(32,0.9741705);
   EffectiveMass_all->SetBinError(33,0.6966813);
   EffectiveMass_all->SetBinError(34,0.9318737);
   EffectiveMass_all->SetBinError(35,0.6156448);
   EffectiveMass_all->SetBinError(36,0.4173059);
   EffectiveMass_all->SetBinError(37,0.422779);
   EffectiveMass_all->SetBinError(38,0.2942994);
   EffectiveMass_all->SetBinError(39,0.3119125);
   EffectiveMass_all->SetBinError(40,0.2919245);
   EffectiveMass_all->SetBinError(41,1.548622);
   EffectiveMass_all->SetBinError(42,0.2176685);
   EffectiveMass_all->SetBinError(43,0.123529);
   EffectiveMass_all->SetEntries(15704);
   EffectiveMass_all->SetLineColor(3);
   EffectiveMass_all->SetLineWidth(3);
   EffectiveMass_all->SetMarkerColor(3);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_all,"");
   Double_t xAxis2907[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis2907);
   EffectiveMass_all->SetBinContent(20,9024.008);
   EffectiveMass_all->SetBinContent(21,60677.16);
   EffectiveMass_all->SetBinContent(22,67357.8);
   EffectiveMass_all->SetBinContent(23,39180.29);
   EffectiveMass_all->SetBinContent(24,9379.755);
   EffectiveMass_all->SetBinContent(25,1676.924);
   EffectiveMass_all->SetBinContent(26,284.2098);
   EffectiveMass_all->SetBinContent(27,77.18576);
   EffectiveMass_all->SetBinContent(28,27.6578);
   EffectiveMass_all->SetBinContent(29,9.29294);
   EffectiveMass_all->SetBinContent(30,3.875122);
   EffectiveMass_all->SetBinContent(31,2.376478);
   EffectiveMass_all->SetBinContent(32,0.9227748);
   EffectiveMass_all->SetBinContent(33,0.2148988);
   EffectiveMass_all->SetBinContent(34,0.006467361);
   EffectiveMass_all->SetBinError(20,161.8181);
   EffectiveMass_all->SetBinError(21,791.9648);
   EffectiveMass_all->SetBinError(22,444.3808);
   EffectiveMass_all->SetBinError(23,340.4245);
   EffectiveMass_all->SetBinError(24,166.379);
   EffectiveMass_all->SetBinError(25,74.782);
   EffectiveMass_all->SetBinError(26,23.35812);
   EffectiveMass_all->SetBinError(27,10.92211);
   EffectiveMass_all->SetBinError(28,6.964576);
   EffectiveMass_all->SetBinError(29,1.018517);
   EffectiveMass_all->SetBinError(30,0.6823297);
   EffectiveMass_all->SetBinError(31,0.533413);
   EffectiveMass_all->SetBinError(32,0.3439232);
   EffectiveMass_all->SetBinError(33,0.1519564);
   EffectiveMass_all->SetBinError(34,0.006467361);
   EffectiveMass_all->SetEntries(99134);
   EffectiveMass_all->SetLineColor(7);
   EffectiveMass_all->SetLineStyle(10);
   EffectiveMass_all->SetLineWidth(3);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_all,"");
   ->Draw("samehist");
   
   TLegend *leg = new TLegend(0.68,0.53,0.9,0.75,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("EffectiveMass_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("EffectiveMass_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_all","Combined EWK","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"775_875    Jet Multiplicity=all");
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
   Double_t xAxis2908[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis2908);
   EffectiveMass_all->SetBinContent(20,299);
   EffectiveMass_all->SetBinContent(21,2490);
   EffectiveMass_all->SetBinContent(22,3335);
   EffectiveMass_all->SetBinContent(23,2346);
   EffectiveMass_all->SetBinContent(24,809);
   EffectiveMass_all->SetBinContent(25,299);
   EffectiveMass_all->SetBinContent(26,140);
   EffectiveMass_all->SetBinContent(27,80);
   EffectiveMass_all->SetBinContent(28,39);
   EffectiveMass_all->SetBinContent(29,35);
   EffectiveMass_all->SetBinContent(30,14);
   EffectiveMass_all->SetBinContent(31,9);
   EffectiveMass_all->SetBinContent(32,4);
   EffectiveMass_all->SetBinContent(33,4);
   EffectiveMass_all->SetBinContent(34,2);
   EffectiveMass_all->SetBinContent(35,1);
   EffectiveMass_all->SetBinContent(37,1);
   EffectiveMass_all->SetBinContent(39,2);
   EffectiveMass_all->SetBinContent(40,1);
   EffectiveMass_all->SetBinContent(41,2);
   EffectiveMass_all->SetBinError(20,17.29162);
   EffectiveMass_all->SetBinError(21,49.8999);
   EffectiveMass_all->SetBinError(22,57.74946);
   EffectiveMass_all->SetBinError(23,48.43552);
   EffectiveMass_all->SetBinError(24,28.44293);
   EffectiveMass_all->SetBinError(25,17.29162);
   EffectiveMass_all->SetBinError(26,11.83216);
   EffectiveMass_all->SetBinError(27,8.944272);
   EffectiveMass_all->SetBinError(28,6.244998);
   EffectiveMass_all->SetBinError(29,5.91608);
   EffectiveMass_all->SetBinError(30,3.741657);
   EffectiveMass_all->SetBinError(31,3.19);
   EffectiveMass_all->SetBinError(32,2.3);
   EffectiveMass_all->SetBinError(33,2.3);
   EffectiveMass_all->SetBinError(34,2);
   EffectiveMass_all->SetBinError(35,1);
   EffectiveMass_all->SetBinError(37,1);
   EffectiveMass_all->SetBinError(39,2);
   EffectiveMass_all->SetBinError(40,1);
   EffectiveMass_all->SetBinError(41,2);
   EffectiveMass_all->SetMinimum(0.5);
   EffectiveMass_all->SetMaximum(675783.6);
   EffectiveMass_all->SetEntries(9912);
   EffectiveMass_all->SetLineWidth(2);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->SetMarkerSize(1.5);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_all->Draw("PSAME");
   u->Modified();
   canvas775_875/EffectiveMass_all->cd();
  
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
   Double_t xAxis2909[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis2909);
   EffectiveMass_all->SetBinContent(20,21.43798);
   EffectiveMass_all->SetBinContent(21,18.76684);
   EffectiveMass_all->SetBinContent(22,15.12042);
   EffectiveMass_all->SetBinContent(23,10.5896);
   EffectiveMass_all->SetBinContent(24,5.485954);
   EffectiveMass_all->SetBinContent(25,2.869055);
   EffectiveMass_all->SetBinContent(26,1.864833);
   EffectiveMass_all->SetBinContent(27,1.422275);
   EffectiveMass_all->SetBinContent(28,0.9122893);
   EffectiveMass_all->SetBinContent(29,1.140535);
   EffectiveMass_all->SetBinContent(30,0.7017095);
   EffectiveMass_all->SetBinContent(31,0.5667475);
   EffectiveMass_all->SetBinContent(32,0.3342062);
   EffectiveMass_all->SetBinContent(33,0.5839528);
   EffectiveMass_all->SetBinContent(34,0.3148318);
   EffectiveMass_all->SetBinContent(35,0.2074367);
   EffectiveMass_all->SetBinContent(37,0.4458511);
   EffectiveMass_all->SetBinContent(39,1.327397);
   EffectiveMass_all->SetBinContent(40,0.8455121);
   EffectiveMass_all->SetBinContent(41,0.7072473);
   EffectiveMass_all->SetBinError(20,0.1355764);
   EffectiveMass_all->SetBinError(21,0.04955881);
   EffectiveMass_all->SetBinError(22,0.03518274);
   EffectiveMass_all->SetBinError(23,0.03558963);
   EffectiveMass_all->SetBinError(24,0.04702412);
   EffectiveMass_all->SetBinError(25,0.06871626);
   EffectiveMass_all->SetBinError(26,0.1022599);
   EffectiveMass_all->SetBinError(27,0.120814);
   EffectiveMass_all->SetBinError(28,0.169364);
   EffectiveMass_all->SetBinError(29,0.180696);
   EffectiveMass_all->SetBinError(30,0.2763243);
   EffectiveMass_all->SetBinError(31,0.3639842);
   EffectiveMass_all->SetBinError(32,0.5807322);
   EffectiveMass_all->SetBinError(33,0.5839258);
   EffectiveMass_all->SetBinError(34,1.010702);
   EffectiveMass_all->SetBinError(35,1.008122);
   EffectiveMass_all->SetBinError(37,1.01761);
   EffectiveMass_all->SetBinError(39,1.021203);
   EffectiveMass_all->SetBinError(40,1.030011);
   EffectiveMass_all->SetBinError(41,1.140131);
   EffectiveMass_all->SetMinimum(0);
   EffectiveMass_all->SetMaximum(2);
   EffectiveMass_all->SetEntries(531.2751);
   EffectiveMass_all->SetLineWidth(2);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->SetMarkerSize(1.5);
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetXaxis()->SetLabelSize(0.12);
   EffectiveMass_all->GetYaxis()->SetTitle("Data/MC");
   EffectiveMass_all->GetYaxis()->SetNdivisions(505);
   EffectiveMass_all->GetYaxis()->SetLabelSize(0.11);
   EffectiveMass_all->GetYaxis()->SetTitleSize(0.1);
   EffectiveMass_all->GetYaxis()->SetTitleOffset(0.5);
   EffectiveMass_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(75);
   gre->SetName("Graph_from_EffectiveMass_all");
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
   gre->SetPointError(19,20,0.1226233);
   gre->SetPoint(20,820,1);
   gre->SetPointError(20,20,0.04532625);
   gre->SetPoint(21,860,1);
   gre->SetPointError(21,20,0.03062638);
   gre->SetPoint(22,900,1);
   gre->SetPointError(22,20,0.02898903);
   gre->SetPoint(23,940,1);
   gre->SetPointError(23,20,0.03122778);
   gre->SetPoint(24,980,1);
   gre->SetPointError(24,20,0.03711392);
   gre->SetPoint(25,1020,1);
   gre->SetPointError(25,20,0.0575693);
   gre->SetPoint(26,1060,1);
   gre->SetPointError(26,20,0.04578246);
   gre->SetPoint(27,1100,1);
   gre->SetPointError(27,20,0.05516472);
   gre->SetPoint(28,1140,1);
   gre->SetPointError(28,20,0.0638719);
   gre->SetPoint(29,1180,1);
   gre->SetPointError(29,20,0.07018956);
   gre->SetPoint(30,1220,1);
   gre->SetPointError(30,20,0.08278655);
   gre->SetPoint(31,1260,1);
   gre->SetPointError(31,20,0.08139346);
   gre->SetPoint(32,1300,1);
   gre->SetPointError(32,20,0.1017073);
   gre->SetPoint(33,1340,1);
   gre->SetPointError(33,20,0.1466917);
   gre->SetPoint(34,1380,1);
   gre->SetPointError(34,20,0.1277073);
   gre->SetPoint(35,1420,1);
   gre->SetPointError(35,20,0.1809971);
   gre->SetPoint(36,1460,1);
   gre->SetPointError(36,20,0.1884965);
   gre->SetPoint(37,1500,1);
   gre->SetPointError(37,20,0.2221671);
   gre->SetPoint(38,1540,1);
   gre->SetPointError(38,20,0.2070159);
   gre->SetPoint(39,1580,1);
   gre->SetPointError(39,20,0.2468257);
   gre->SetPoint(40,1620,1);
   gre->SetPointError(40,20,0.5476293);
   gre->SetPoint(41,1660,1);
   gre->SetPointError(41,20,0.3439061);
   gre->SetPoint(42,1700,1);
   gre->SetPointError(42,20,0.5073355);
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
   
   TH1F *Graph_Graph_from_EffectiveMass_all485 = new TH1F("Graph_Graph_from_EffectiveMass_all485","",100,0,3300);
   Graph_Graph_from_EffectiveMass_all485->SetMinimum(0.3428448);
   Graph_Graph_from_EffectiveMass_all485->SetMaximum(1.657155);
   Graph_Graph_from_EffectiveMass_all485->SetDirectory(0);
   Graph_Graph_from_EffectiveMass_all485->SetStats(0);
   Graph_Graph_from_EffectiveMass_all485->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all485->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all485->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_all485->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_EffectiveMass_all485->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all485->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all485->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_all485->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all485->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all485->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_EffectiveMass_all485);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1640,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2910[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis2910);
   EffectiveMass_all->SetBinContent(20,21.43798);
   EffectiveMass_all->SetBinContent(21,18.76684);
   EffectiveMass_all->SetBinContent(22,15.12042);
   EffectiveMass_all->SetBinContent(23,10.5896);
   EffectiveMass_all->SetBinContent(24,5.485954);
   EffectiveMass_all->SetBinContent(25,2.869055);
   EffectiveMass_all->SetBinContent(26,1.864833);
   EffectiveMass_all->SetBinContent(27,1.422275);
   EffectiveMass_all->SetBinContent(28,0.9122893);
   EffectiveMass_all->SetBinContent(29,1.140535);
   EffectiveMass_all->SetBinContent(30,0.7017095);
   EffectiveMass_all->SetBinContent(31,0.5667475);
   EffectiveMass_all->SetBinContent(32,0.3342062);
   EffectiveMass_all->SetBinContent(33,0.5839528);
   EffectiveMass_all->SetBinContent(34,0.3148318);
   EffectiveMass_all->SetBinContent(35,0.2074367);
   EffectiveMass_all->SetBinContent(37,0.4458511);
   EffectiveMass_all->SetBinContent(39,1.327397);
   EffectiveMass_all->SetBinContent(40,0.8455121);
   EffectiveMass_all->SetBinContent(41,0.7072473);
   EffectiveMass_all->SetBinError(20,0.1355764);
   EffectiveMass_all->SetBinError(21,0.04955881);
   EffectiveMass_all->SetBinError(22,0.03518274);
   EffectiveMass_all->SetBinError(23,0.03558963);
   EffectiveMass_all->SetBinError(24,0.04702412);
   EffectiveMass_all->SetBinError(25,0.06871626);
   EffectiveMass_all->SetBinError(26,0.1022599);
   EffectiveMass_all->SetBinError(27,0.120814);
   EffectiveMass_all->SetBinError(28,0.169364);
   EffectiveMass_all->SetBinError(29,0.180696);
   EffectiveMass_all->SetBinError(30,0.2763243);
   EffectiveMass_all->SetBinError(31,0.3639842);
   EffectiveMass_all->SetBinError(32,0.5807322);
   EffectiveMass_all->SetBinError(33,0.5839258);
   EffectiveMass_all->SetBinError(34,1.010702);
   EffectiveMass_all->SetBinError(35,1.008122);
   EffectiveMass_all->SetBinError(37,1.01761);
   EffectiveMass_all->SetBinError(39,1.021203);
   EffectiveMass_all->SetBinError(40,1.030011);
   EffectiveMass_all->SetBinError(41,1.140131);
   EffectiveMass_all->SetMinimum(0);
   EffectiveMass_all->SetMaximum(2);
   EffectiveMass_all->SetEntries(531.2751);
   EffectiveMass_all->SetLineWidth(2);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->SetMarkerSize(1.5);
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetXaxis()->SetLabelSize(0.12);
   EffectiveMass_all->GetYaxis()->SetTitle("Data/MC");
   EffectiveMass_all->GetYaxis()->SetNdivisions(505);
   EffectiveMass_all->GetYaxis()->SetLabelSize(0.11);
   EffectiveMass_all->GetYaxis()->SetTitleSize(0.1);
   EffectiveMass_all->GetYaxis()->SetTitleOffset(0.5);
   EffectiveMass_all->Draw("PSAME");
   d->Modified();
   canvas775_875/EffectiveMass_all->cd();
   canvas775_875/EffectiveMass_all->Modified();
   canvas775_875/EffectiveMass_all->cd();
   canvas775_875/EffectiveMass_all->SetSelected(canvas775_875/EffectiveMass_all);
}
