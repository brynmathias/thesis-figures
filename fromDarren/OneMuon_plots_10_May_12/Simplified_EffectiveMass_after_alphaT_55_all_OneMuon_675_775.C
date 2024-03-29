{
//=========Macro generated from canvas: canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all/cannameEffectiveMass_after_alphaT_55_all
//=========  (Thu May 10 12:06:56 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all = new TCanvas("canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all", "cannameEffectiveMass_after_alphaT_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->SetHighLightColor(2);
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->Range(0,0,1,1);
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->SetFillColor(0);
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->SetBorderMode(0);
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->SetBorderSize(2);
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->SetTickx(1);
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->SetTicky(1);
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-205,-0.5609277,1845,2.038049);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1404[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis1404);
   EffectiveMass_after_alphaT_55_all->SetBinContent(26,6);
   EffectiveMass_after_alphaT_55_all->SetBinContent(27,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(28,2);
   EffectiveMass_after_alphaT_55_all->SetBinContent(29,5);
   EffectiveMass_after_alphaT_55_all->SetBinContent(31,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(34,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(35,2);
   EffectiveMass_after_alphaT_55_all->SetBinError(26,2.68);
   EffectiveMass_after_alphaT_55_all->SetBinError(27,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(28,2);
   EffectiveMass_after_alphaT_55_all->SetBinError(29,2.49);
   EffectiveMass_after_alphaT_55_all->SetBinError(31,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(34,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(35,2);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0.5);
   EffectiveMass_after_alphaT_55_all->SetMaximum(60);
   EffectiveMass_after_alphaT_55_all->SetEntries(19);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(2);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->SetMarkerSize(1.5);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_after_alphaT_55_all->Draw("");
   Double_t xAxis1405[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis1405);
   EffectiveMass_after_alphaT_55_all->SetEntries(1);
   EffectiveMass_after_alphaT_55_all->SetLineColor(5);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   EffectiveMass_after_alphaT_55_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_94 = new TH1F("_stack_94","",75,0,3000);
   _stack_94->SetMinimum(0.001682687);
   _stack_94->SetMaximum(6.730748);
   _stack_94->SetDirectory(0);
   _stack_94->SetStats(0);
   _stack_94->GetXaxis()->SetLabelFont(42);
   _stack_94->GetXaxis()->SetLabelOffset(0.007);
   _stack_94->GetXaxis()->SetLabelSize(0.05);
   _stack_94->GetXaxis()->SetTitleSize(0.05);
   _stack_94->GetYaxis()->SetLabelFont(42);
   _stack_94->GetYaxis()->SetLabelOffset(0.007);
   _stack_94->GetYaxis()->SetLabelSize(0.05);
   _stack_94->GetZaxis()->SetLabelFont(42);
   _stack_94->GetZaxis()->SetLabelOffset(0.007);
   _stack_94->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_94);
   
   Double_t xAxis1406[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis1406);
   EffectiveMass_after_alphaT_55_all->SetBinContent(25,0.4100321);
   EffectiveMass_after_alphaT_55_all->SetBinContent(26,0.8324208);
   EffectiveMass_after_alphaT_55_all->SetBinContent(27,3.398704);
   EffectiveMass_after_alphaT_55_all->SetBinContent(28,2.640556);
   EffectiveMass_after_alphaT_55_all->SetBinContent(29,2.932896);
   EffectiveMass_after_alphaT_55_all->SetBinContent(30,2.294972);
   EffectiveMass_after_alphaT_55_all->SetBinContent(31,2.910542);
   EffectiveMass_after_alphaT_55_all->SetBinContent(32,1.320672);
   EffectiveMass_after_alphaT_55_all->SetBinContent(33,1.444362);
   EffectiveMass_after_alphaT_55_all->SetBinContent(34,1.647328);
   EffectiveMass_after_alphaT_55_all->SetBinContent(35,1.096342);
   EffectiveMass_after_alphaT_55_all->SetBinContent(36,0.7982631);
   EffectiveMass_after_alphaT_55_all->SetBinContent(37,0.5797584);
   EffectiveMass_after_alphaT_55_all->SetBinContent(38,0.4012608);
   EffectiveMass_after_alphaT_55_all->SetBinContent(39,0.05645457);
   EffectiveMass_after_alphaT_55_all->SetBinError(25,0.2498983);
   EffectiveMass_after_alphaT_55_all->SetBinError(26,0.2988124);
   EffectiveMass_after_alphaT_55_all->SetBinError(27,0.8080138);
   EffectiveMass_after_alphaT_55_all->SetBinError(28,0.5062504);
   EffectiveMass_after_alphaT_55_all->SetBinError(29,0.6422648);
   EffectiveMass_after_alphaT_55_all->SetBinError(30,0.55998);
   EffectiveMass_after_alphaT_55_all->SetBinError(31,0.5359265);
   EffectiveMass_after_alphaT_55_all->SetBinError(32,0.2655139);
   EffectiveMass_after_alphaT_55_all->SetBinError(33,0.358625);
   EffectiveMass_after_alphaT_55_all->SetBinError(34,0.3671962);
   EffectiveMass_after_alphaT_55_all->SetBinError(35,0.2816099);
   EffectiveMass_after_alphaT_55_all->SetBinError(36,0.2179122);
   EffectiveMass_after_alphaT_55_all->SetBinError(37,0.1852844);
   EffectiveMass_after_alphaT_55_all->SetBinError(38,0.1324123);
   EffectiveMass_after_alphaT_55_all->SetBinError(39,0.05645457);
   EffectiveMass_after_alphaT_55_all->SetEntries(396);
   EffectiveMass_after_alphaT_55_all->SetLineColor(3);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->SetMarkerColor(3);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
   Double_t xAxis1407[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis1407);
   EffectiveMass_after_alphaT_55_all->SetEntries(1);
   EffectiveMass_after_alphaT_55_all->SetLineColor(7);
   EffectiveMass_after_alphaT_55_all->SetLineStyle(10);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(3);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_after_alphaT_55_all,"");
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
   TLegendEntry *entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("EffectiveMass_after_alphaT_55_all","Combined EWK","L");
   entry->SetLineColor(3);
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
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_675_775    Jet Multiplicity=all");
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
   Double_t xAxis1408[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis1408);
   EffectiveMass_after_alphaT_55_all->SetBinContent(26,6);
   EffectiveMass_after_alphaT_55_all->SetBinContent(27,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(28,2);
   EffectiveMass_after_alphaT_55_all->SetBinContent(29,5);
   EffectiveMass_after_alphaT_55_all->SetBinContent(31,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(34,1);
   EffectiveMass_after_alphaT_55_all->SetBinContent(35,2);
   EffectiveMass_after_alphaT_55_all->SetBinError(26,2.68);
   EffectiveMass_after_alphaT_55_all->SetBinError(27,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(28,2);
   EffectiveMass_after_alphaT_55_all->SetBinError(29,2.49);
   EffectiveMass_after_alphaT_55_all->SetBinError(31,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(34,1);
   EffectiveMass_after_alphaT_55_all->SetBinError(35,2);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0.5);
   EffectiveMass_after_alphaT_55_all->SetMaximum(60);
   EffectiveMass_after_alphaT_55_all->SetEntries(19);
   EffectiveMass_after_alphaT_55_all->SetLineWidth(2);
   EffectiveMass_after_alphaT_55_all->SetMarkerStyle(20);
   EffectiveMass_after_alphaT_55_all->SetMarkerSize(1.5);
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_after_alphaT_55_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_after_alphaT_55_all->Draw("PSAME");
   u->Modified();
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->cd();
  
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
   Double_t xAxis1409[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis1409);
   EffectiveMass_after_alphaT_55_all->SetBinContent(26,7.207893);
   EffectiveMass_after_alphaT_55_all->SetBinContent(27,0.2942298);
   EffectiveMass_after_alphaT_55_all->SetBinContent(28,0.7574162);
   EffectiveMass_after_alphaT_55_all->SetBinContent(29,1.7048);
   EffectiveMass_after_alphaT_55_all->SetBinContent(31,0.3435786);
   EffectiveMass_after_alphaT_55_all->SetBinContent(34,0.6070437);
   EffectiveMass_after_alphaT_55_all->SetBinContent(35,1.824247);
   EffectiveMass_after_alphaT_55_all->SetBinError(26,0.573035);
   EffectiveMass_after_alphaT_55_all->SetBinError(27,1.027872);
   EffectiveMass_after_alphaT_55_all->SetBinError(28,1.018213);
   EffectiveMass_after_alphaT_55_all->SetBinError(29,0.5440213);
   EffectiveMass_after_alphaT_55_all->SetBinError(31,1.016811);
   EffectiveMass_after_alphaT_55_all->SetBinError(34,1.024542);
   EffectiveMass_after_alphaT_55_all->SetBinError(35,1.032462);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0);
   EffectiveMass_after_alphaT_55_all->SetMaximum(2);
   EffectiveMass_after_alphaT_55_all->SetEntries(7.160995);
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
   gre->SetPointError(24,20,0.6094604);
   gre->SetPoint(25,1020,1);
   gre->SetPointError(25,20,0.358968);
   gre->SetPoint(26,1060,1);
   gre->SetPointError(26,20,0.2377417);
   gre->SetPoint(27,1100,1);
   gre->SetPointError(27,20,0.1917211);
   gre->SetPoint(28,1140,1);
   gre->SetPointError(28,20,0.2189866);
   gre->SetPoint(29,1180,1);
   gre->SetPointError(29,20,0.2440029);
   gre->SetPoint(30,1220,1);
   gre->SetPointError(30,20,0.1841329);
   gre->SetPoint(31,1260,1);
   gre->SetPointError(31,20,0.2010446);
   gre->SetPoint(32,1300,1);
   gre->SetPointError(32,20,0.248293);
   gre->SetPoint(33,1340,1);
   gre->SetPointError(33,20,0.2229041);
   gre->SetPoint(34,1380,1);
   gre->SetPointError(34,20,0.256863);
   gre->SetPoint(35,1420,1);
   gre->SetPointError(35,20,0.2729829);
   gre->SetPoint(36,1460,1);
   gre->SetPointError(36,20,0.319589);
   gre->SetPoint(37,1500,1);
   gre->SetPointError(37,20,0.3299907);
   gre->SetPoint(38,1540,1);
   gre->SetPointError(38,20,1);
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
   
   TH1F *Graph_Graph_from_EffectiveMass_after_alphaT_55_all235 = new TH1F("Graph_Graph_from_EffectiveMass_after_alphaT_55_all235","",100,0,3300);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->SetMinimum(0);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->SetMaximum(2.2);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->SetDirectory(0);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->SetStats(0);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_after_alphaT_55_all235->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_EffectiveMass_after_alphaT_55_all235);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1640,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1410[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_after_alphaT_55_all = new TH1D("EffectiveMass_after_alphaT_55_all","",75, xAxis1410);
   EffectiveMass_after_alphaT_55_all->SetBinContent(26,7.207893);
   EffectiveMass_after_alphaT_55_all->SetBinContent(27,0.2942298);
   EffectiveMass_after_alphaT_55_all->SetBinContent(28,0.7574162);
   EffectiveMass_after_alphaT_55_all->SetBinContent(29,1.7048);
   EffectiveMass_after_alphaT_55_all->SetBinContent(31,0.3435786);
   EffectiveMass_after_alphaT_55_all->SetBinContent(34,0.6070437);
   EffectiveMass_after_alphaT_55_all->SetBinContent(35,1.824247);
   EffectiveMass_after_alphaT_55_all->SetBinError(26,0.573035);
   EffectiveMass_after_alphaT_55_all->SetBinError(27,1.027872);
   EffectiveMass_after_alphaT_55_all->SetBinError(28,1.018213);
   EffectiveMass_after_alphaT_55_all->SetBinError(29,0.5440213);
   EffectiveMass_after_alphaT_55_all->SetBinError(31,1.016811);
   EffectiveMass_after_alphaT_55_all->SetBinError(34,1.024542);
   EffectiveMass_after_alphaT_55_all->SetBinError(35,1.032462);
   EffectiveMass_after_alphaT_55_all->SetMinimum(0);
   EffectiveMass_after_alphaT_55_all->SetMaximum(2);
   EffectiveMass_after_alphaT_55_all->SetEntries(7.160995);
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
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->cd();
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->Modified();
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->cd();
   canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all->SetSelected(canvasOneMuon_675_775/EffectiveMass_after_alphaT_55_all);
}
