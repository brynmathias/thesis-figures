{
//=========Macro generated from canvas: canvas325_375/EffectiveMass_all/cannameEffectiveMass_all
//=========  (Thu May 10 12:22:43 2012) by ROOT version5.32/00
   TCanvas *canvas325_375/EffectiveMass_all = new TCanvas("canvas325_375/EffectiveMass_all", "cannameEffectiveMass_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas325_375/EffectiveMass_all->SetHighLightColor(2);
   canvas325_375/EffectiveMass_all->Range(0,0,1,1);
   canvas325_375/EffectiveMass_all->SetFillColor(0);
   canvas325_375/EffectiveMass_all->SetBorderMode(0);
   canvas325_375/EffectiveMass_all->SetBorderSize(2);
   canvas325_375/EffectiveMass_all->SetTickx(1);
   canvas325_375/EffectiveMass_all->SetTicky(1);
   canvas325_375/EffectiveMass_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-205,-1.340821,1845,9.057092);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis564[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis564);
   EffectiveMass_all->SetBinContent(9,98);
   EffectiveMass_all->SetBinContent(10,709);
   EffectiveMass_all->SetBinContent(11,5639);
   EffectiveMass_all->SetBinContent(12,9355);
   EffectiveMass_all->SetBinContent(13,3394);
   EffectiveMass_all->SetBinContent(14,860);
   EffectiveMass_all->SetBinContent(15,413);
   EffectiveMass_all->SetBinContent(16,278);
   EffectiveMass_all->SetBinContent(17,245);
   EffectiveMass_all->SetBinContent(18,120);
   EffectiveMass_all->SetBinContent(19,28);
   EffectiveMass_all->SetBinError(9,9.899495);
   EffectiveMass_all->SetBinError(10,26.62705);
   EffectiveMass_all->SetBinError(11,75.09328);
   EffectiveMass_all->SetBinError(12,96.72125);
   EffectiveMass_all->SetBinError(13,58.25805);
   EffectiveMass_all->SetBinError(14,29.32576);
   EffectiveMass_all->SetBinError(15,20.3224);
   EffectiveMass_all->SetBinError(16,16.67333);
   EffectiveMass_all->SetBinError(17,15.65248);
   EffectiveMass_all->SetBinError(18,10.95445);
   EffectiveMass_all->SetBinError(19,5.291503);
   EffectiveMass_all->SetMinimum(0.5);
   EffectiveMass_all->SetMaximum(1.04064e+08);
   EffectiveMass_all->SetEntries(21140);
   EffectiveMass_all->SetLineWidth(2);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->SetMarkerSize(1.5);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_all->Draw("");
   Double_t xAxis565[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis565);
   EffectiveMass_all->SetBinContent(9,88.03794);
   EffectiveMass_all->SetBinContent(10,513.5838);
   EffectiveMass_all->SetBinContent(11,870.1738);
   EffectiveMass_all->SetBinContent(12,964.8082);
   EffectiveMass_all->SetBinContent(13,761.5396);
   EffectiveMass_all->SetBinContent(14,484.9462);
   EffectiveMass_all->SetBinContent(15,274.1886);
   EffectiveMass_all->SetBinContent(16,171.6945);
   EffectiveMass_all->SetBinContent(17,124.0514);
   EffectiveMass_all->SetBinContent(18,63.44858);
   EffectiveMass_all->SetBinContent(19,13.21957);
   EffectiveMass_all->SetBinError(9,2.580532);
   EffectiveMass_all->SetBinError(10,6.510653);
   EffectiveMass_all->SetBinError(11,8.422595);
   EffectiveMass_all->SetBinError(12,8.769124);
   EffectiveMass_all->SetBinError(13,7.803731);
   EffectiveMass_all->SetBinError(14,6.378545);
   EffectiveMass_all->SetBinError(15,4.813834);
   EffectiveMass_all->SetBinError(16,3.548663);
   EffectiveMass_all->SetBinError(17,3.056341);
   EffectiveMass_all->SetBinError(18,2.156157);
   EffectiveMass_all->SetBinError(19,0.9921767);
   EffectiveMass_all->SetEntries(77751);
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
   
   TH1F *_stack_38 = new TH1F("_stack_38","",75,0,3000);
   _stack_38->SetMinimum(4173.644);
   _stack_38->SetMaximum(1.669458e+07);
   _stack_38->SetDirectory(0);
   _stack_38->SetStats(0);
   _stack_38->GetXaxis()->SetLabelFont(42);
   _stack_38->GetXaxis()->SetLabelOffset(0.007);
   _stack_38->GetXaxis()->SetLabelSize(0.05);
   _stack_38->GetXaxis()->SetTitleSize(0.05);
   _stack_38->GetYaxis()->SetLabelFont(42);
   _stack_38->GetYaxis()->SetLabelOffset(0.007);
   _stack_38->GetYaxis()->SetLabelSize(0.05);
   _stack_38->GetZaxis()->SetLabelFont(42);
   _stack_38->GetZaxis()->SetLabelOffset(0.007);
   _stack_38->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_38);
   
   Double_t xAxis566[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis566);
   EffectiveMass_all->SetBinContent(9,1252.488);
   EffectiveMass_all->SetBinContent(10,5955.055);
   EffectiveMass_all->SetBinContent(11,6127.661);
   EffectiveMass_all->SetBinContent(12,4214.527);
   EffectiveMass_all->SetBinContent(13,2462.273);
   EffectiveMass_all->SetBinContent(14,1347.671);
   EffectiveMass_all->SetBinContent(15,665.8036);
   EffectiveMass_all->SetBinContent(16,316.4192);
   EffectiveMass_all->SetBinContent(17,212.0249);
   EffectiveMass_all->SetBinContent(18,109.1347);
   EffectiveMass_all->SetBinContent(19,22.3149);
   EffectiveMass_all->SetBinError(9,50.69992);
   EffectiveMass_all->SetBinError(10,109.9402);
   EffectiveMass_all->SetBinError(11,119.878);
   EffectiveMass_all->SetBinError(12,101.1273);
   EffectiveMass_all->SetBinError(13,78.81686);
   EffectiveMass_all->SetBinError(14,51.48943);
   EffectiveMass_all->SetBinError(15,38.96293);
   EffectiveMass_all->SetBinError(16,20.88994);
   EffectiveMass_all->SetBinError(17,20.76572);
   EffectiveMass_all->SetBinError(18,11.44367);
   EffectiveMass_all->SetBinError(19,5.15636);
   EffectiveMass_all->SetEntries(153664);
   EffectiveMass_all->SetLineColor(3);
   EffectiveMass_all->SetLineWidth(3);
   EffectiveMass_all->SetMarkerColor(3);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_all,"");
   Double_t xAxis567[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis567);
   EffectiveMass_all->SetBinContent(9,5021181);
   EffectiveMass_all->SetBinContent(10,1.040044e+07);
   EffectiveMass_all->SetBinContent(11,2303781);
   EffectiveMass_all->SetBinContent(12,153966.6);
   EffectiveMass_all->SetBinContent(13,4138.546);
   EffectiveMass_all->SetBinContent(14,227.7768);
   EffectiveMass_all->SetBinContent(15,0.718849);
   EffectiveMass_all->SetBinError(9,19569.85);
   EffectiveMass_all->SetBinError(10,33667.81);
   EffectiveMass_all->SetBinError(11,15851.54);
   EffectiveMass_all->SetBinError(12,9848.249);
   EffectiveMass_all->SetBinError(13,509.137);
   EffectiveMass_all->SetBinError(14,92.11879);
   EffectiveMass_all->SetBinError(15,0.718849);
   EffectiveMass_all->SetEntries(357302);
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
   TLatex *   tex = new TLatex(0.1,0.95,"325_375    Jet Multiplicity=all");
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
   Double_t xAxis568[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis568);
   EffectiveMass_all->SetBinContent(9,98);
   EffectiveMass_all->SetBinContent(10,709);
   EffectiveMass_all->SetBinContent(11,5639);
   EffectiveMass_all->SetBinContent(12,9355);
   EffectiveMass_all->SetBinContent(13,3394);
   EffectiveMass_all->SetBinContent(14,860);
   EffectiveMass_all->SetBinContent(15,413);
   EffectiveMass_all->SetBinContent(16,278);
   EffectiveMass_all->SetBinContent(17,245);
   EffectiveMass_all->SetBinContent(18,120);
   EffectiveMass_all->SetBinContent(19,28);
   EffectiveMass_all->SetBinError(9,9.899495);
   EffectiveMass_all->SetBinError(10,26.62705);
   EffectiveMass_all->SetBinError(11,75.09328);
   EffectiveMass_all->SetBinError(12,96.72125);
   EffectiveMass_all->SetBinError(13,58.25805);
   EffectiveMass_all->SetBinError(14,29.32576);
   EffectiveMass_all->SetBinError(15,20.3224);
   EffectiveMass_all->SetBinError(16,16.67333);
   EffectiveMass_all->SetBinError(17,15.65248);
   EffectiveMass_all->SetBinError(18,10.95445);
   EffectiveMass_all->SetBinError(19,5.291503);
   EffectiveMass_all->SetMinimum(0.5);
   EffectiveMass_all->SetMaximum(1.04064e+08);
   EffectiveMass_all->SetEntries(21140);
   EffectiveMass_all->SetLineWidth(2);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->SetMarkerSize(1.5);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_all->Draw("PSAME");
   u->Modified();
   canvas325_375/EffectiveMass_all->cd();
  
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
   Double_t xAxis569[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis569);
   EffectiveMass_all->SetBinContent(9,0.07824425);
   EffectiveMass_all->SetBinContent(10,0.1190585);
   EffectiveMass_all->SetBinContent(11,0.9202533);
   EffectiveMass_all->SetBinContent(12,2.219703);
   EffectiveMass_all->SetBinContent(13,1.378401);
   EffectiveMass_all->SetBinContent(14,0.6381379);
   EffectiveMass_all->SetBinContent(15,0.6203031);
   EffectiveMass_all->SetBinContent(16,0.8785813);
   EffectiveMass_all->SetBinContent(17,1.155525);
   EffectiveMass_all->SetBinContent(18,1.099559);
   EffectiveMass_all->SetBinContent(19,1.254767);
   EffectiveMass_all->SetBinError(9,0.108824);
   EffectiveMass_all->SetBinError(10,0.04184818);
   EffectiveMass_all->SetBinError(11,0.02366566);
   EffectiveMass_all->SetBinError(12,0.02612759);
   EffectiveMass_all->SetBinError(13,0.03632168);
   EffectiveMass_all->SetBinError(14,0.05121041);
   EffectiveMass_all->SetBinError(15,0.0764586);
   EffectiveMass_all->SetBinError(16,0.08919495);
   EffectiveMass_all->SetBinError(17,0.1169354);
   EffectiveMass_all->SetBinError(18,0.1390273);
   EffectiveMass_all->SetBinError(19,0.298511);
   EffectiveMass_all->SetMinimum(0);
   EffectiveMass_all->SetMaximum(2);
   EffectiveMass_all->SetEntries(542.8183);
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
   gre->SetPointError(8,20,0.04047936);
   gre->SetPoint(9,380,1);
   gre->SetPointError(9,20,0.01846166);
   gre->SetPoint(10,420,1);
   gre->SetPointError(10,20,0.01956341);
   gre->SetPoint(11,460,1);
   gre->SetPointError(11,20,0.02399492);
   gre->SetPoint(12,500,1);
   gre->SetPointError(12,20,0.03200979);
   gre->SetPoint(13,540,1);
   gre->SetPointError(13,20,0.03820622);
   gre->SetPoint(14,580,1);
   gre->SetPointError(14,20,0.05852016);
   gre->SetPoint(15,620,1);
   gre->SetPointError(15,20,0.06601982);
   gre->SetPoint(16,660,1);
   gre->SetPointError(16,20,0.09794001);
   gre->SetPoint(17,700,1);
   gre->SetPointError(17,20,0.1048582);
   gre->SetPoint(18,740,1);
   gre->SetPointError(18,20,0.2310725);
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
   
   TH1F *Graph_Graph_from_EffectiveMass_all95 = new TH1F("Graph_Graph_from_EffectiveMass_all95","",100,0,3300);
   Graph_Graph_from_EffectiveMass_all95->SetMinimum(0.7227129);
   Graph_Graph_from_EffectiveMass_all95->SetMaximum(1.277287);
   Graph_Graph_from_EffectiveMass_all95->SetDirectory(0);
   Graph_Graph_from_EffectiveMass_all95->SetStats(0);
   Graph_Graph_from_EffectiveMass_all95->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all95->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all95->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_all95->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_EffectiveMass_all95->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all95->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all95->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_all95->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all95->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all95->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_EffectiveMass_all95);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1640,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis570[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis570);
   EffectiveMass_all->SetBinContent(9,0.07824425);
   EffectiveMass_all->SetBinContent(10,0.1190585);
   EffectiveMass_all->SetBinContent(11,0.9202533);
   EffectiveMass_all->SetBinContent(12,2.219703);
   EffectiveMass_all->SetBinContent(13,1.378401);
   EffectiveMass_all->SetBinContent(14,0.6381379);
   EffectiveMass_all->SetBinContent(15,0.6203031);
   EffectiveMass_all->SetBinContent(16,0.8785813);
   EffectiveMass_all->SetBinContent(17,1.155525);
   EffectiveMass_all->SetBinContent(18,1.099559);
   EffectiveMass_all->SetBinContent(19,1.254767);
   EffectiveMass_all->SetBinError(9,0.108824);
   EffectiveMass_all->SetBinError(10,0.04184818);
   EffectiveMass_all->SetBinError(11,0.02366566);
   EffectiveMass_all->SetBinError(12,0.02612759);
   EffectiveMass_all->SetBinError(13,0.03632168);
   EffectiveMass_all->SetBinError(14,0.05121041);
   EffectiveMass_all->SetBinError(15,0.0764586);
   EffectiveMass_all->SetBinError(16,0.08919495);
   EffectiveMass_all->SetBinError(17,0.1169354);
   EffectiveMass_all->SetBinError(18,0.1390273);
   EffectiveMass_all->SetBinError(19,0.298511);
   EffectiveMass_all->SetMinimum(0);
   EffectiveMass_all->SetMaximum(2);
   EffectiveMass_all->SetEntries(542.8183);
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
   canvas325_375/EffectiveMass_all->cd();
   canvas325_375/EffectiveMass_all->Modified();
   canvas325_375/EffectiveMass_all->cd();
   canvas325_375/EffectiveMass_all->SetSelected(canvas325_375/EffectiveMass_all);
}
