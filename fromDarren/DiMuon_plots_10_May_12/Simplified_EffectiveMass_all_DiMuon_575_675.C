{
//=========Macro generated from canvas: canvasDiMuon_575_675/EffectiveMass_all/cannameEffectiveMass_all
//=========  (Thu May 10 12:45:36 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_575_675/EffectiveMass_all = new TCanvas("canvasDiMuon_575_675/EffectiveMass_all", "cannameEffectiveMass_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasDiMuon_575_675/EffectiveMass_all->SetHighLightColor(2);
   canvasDiMuon_575_675/EffectiveMass_all->Range(0,0,1,1);
   canvasDiMuon_575_675/EffectiveMass_all->SetFillColor(0);
   canvasDiMuon_575_675/EffectiveMass_all->SetBorderMode(0);
   canvasDiMuon_575_675/EffectiveMass_all->SetBorderSize(2);
   canvasDiMuon_575_675/EffectiveMass_all->SetTickx(1);
   canvasDiMuon_575_675/EffectiveMass_all->SetTicky(1);
   canvasDiMuon_575_675/EffectiveMass_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-205,-0.5980105,1845,2.371794);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1254[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis1254);
   EffectiveMass_all->SetBinContent(19,2);
   EffectiveMass_all->SetBinContent(20,7);
   EffectiveMass_all->SetBinContent(21,5);
   EffectiveMass_all->SetBinContent(22,1);
   EffectiveMass_all->SetBinContent(23,5);
   EffectiveMass_all->SetBinContent(24,1);
   EffectiveMass_all->SetBinContent(25,2);
   EffectiveMass_all->SetBinContent(28,3);
   EffectiveMass_all->SetBinError(19,2);
   EffectiveMass_all->SetBinError(20,2.86);
   EffectiveMass_all->SetBinError(21,2.49);
   EffectiveMass_all->SetBinError(22,1);
   EffectiveMass_all->SetBinError(23,2.49);
   EffectiveMass_all->SetBinError(24,1);
   EffectiveMass_all->SetBinError(25,2);
   EffectiveMass_all->SetBinError(28,2.14);
   EffectiveMass_all->SetMinimum(0.5);
   EffectiveMass_all->SetMaximum(118.7993);
   EffectiveMass_all->SetEntries(27);
   EffectiveMass_all->SetLineWidth(2);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->SetMarkerSize(1.5);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_all->Draw("");
   Double_t xAxis1255[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis1255);
   EffectiveMass_all->SetEntries(1);
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
   
   TH1F *_stack_84 = new TH1F("_stack_84","",75,0,3000);
   _stack_84->SetMinimum(0.005715422);
   _stack_84->SetMaximum(22.86169);
   _stack_84->SetDirectory(0);
   _stack_84->SetStats(0);
   _stack_84->GetXaxis()->SetLabelFont(42);
   _stack_84->GetXaxis()->SetLabelOffset(0.007);
   _stack_84->GetXaxis()->SetLabelSize(0.05);
   _stack_84->GetXaxis()->SetTitleSize(0.05);
   _stack_84->GetYaxis()->SetLabelFont(42);
   _stack_84->GetYaxis()->SetLabelOffset(0.007);
   _stack_84->GetYaxis()->SetLabelSize(0.05);
   _stack_84->GetZaxis()->SetLabelFont(42);
   _stack_84->GetZaxis()->SetLabelOffset(0.007);
   _stack_84->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_84);
   
   Double_t xAxis1256[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis1256);
   EffectiveMass_all->SetBinContent(16,1.609049);
   EffectiveMass_all->SetBinContent(17,6.148629);
   EffectiveMass_all->SetBinContent(18,7.216494);
   EffectiveMass_all->SetBinContent(19,11.87993);
   EffectiveMass_all->SetBinContent(20,8.073267);
   EffectiveMass_all->SetBinContent(21,7.740185);
   EffectiveMass_all->SetBinContent(22,5.916463);
   EffectiveMass_all->SetBinContent(23,6.294293);
   EffectiveMass_all->SetBinContent(24,3.609786);
   EffectiveMass_all->SetBinContent(25,4.157684);
   EffectiveMass_all->SetBinContent(26,2.309046);
   EffectiveMass_all->SetBinContent(27,3.478408);
   EffectiveMass_all->SetBinContent(28,0.9248293);
   EffectiveMass_all->SetBinContent(29,0.005063159);
   EffectiveMass_all->SetBinContent(30,0.5135401);
   EffectiveMass_all->SetBinContent(32,1.451507);
   EffectiveMass_all->SetBinContent(33,0.04705974);
   EffectiveMass_all->SetBinError(16,0.8373591);
   EffectiveMass_all->SetBinError(17,1.659908);
   EffectiveMass_all->SetBinError(18,1.974813);
   EffectiveMass_all->SetBinError(19,2.408623);
   EffectiveMass_all->SetBinError(20,2.136874);
   EffectiveMass_all->SetBinError(21,2.076743);
   EffectiveMass_all->SetBinError(22,1.874452);
   EffectiveMass_all->SetBinError(23,1.770864);
   EffectiveMass_all->SetBinError(24,1.286725);
   EffectiveMass_all->SetBinError(25,1.525446);
   EffectiveMass_all->SetBinError(26,1.023815);
   EffectiveMass_all->SetBinError(27,1.47486);
   EffectiveMass_all->SetBinError(28,0.6225963);
   EffectiveMass_all->SetBinError(29,0.003580194);
   EffectiveMass_all->SetBinError(30,0.4106313);
   EffectiveMass_all->SetBinError(32,0.8437483);
   EffectiveMass_all->SetBinError(33,0.04705974);
   EffectiveMass_all->SetEntries(241);
   EffectiveMass_all->SetLineColor(3);
   EffectiveMass_all->SetLineWidth(3);
   EffectiveMass_all->SetMarkerColor(3);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle(" Events/40 GeV");
   ->Add(EffectiveMass_all,"");
   Double_t xAxis1257[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis1257);
   EffectiveMass_all->SetEntries(1);
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
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_575_675    Jet Multiplicity=all");
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
   Double_t xAxis1258[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis1258);
   EffectiveMass_all->SetBinContent(19,2);
   EffectiveMass_all->SetBinContent(20,7);
   EffectiveMass_all->SetBinContent(21,5);
   EffectiveMass_all->SetBinContent(22,1);
   EffectiveMass_all->SetBinContent(23,5);
   EffectiveMass_all->SetBinContent(24,1);
   EffectiveMass_all->SetBinContent(25,2);
   EffectiveMass_all->SetBinContent(28,3);
   EffectiveMass_all->SetBinError(19,2);
   EffectiveMass_all->SetBinError(20,2.86);
   EffectiveMass_all->SetBinError(21,2.49);
   EffectiveMass_all->SetBinError(22,1);
   EffectiveMass_all->SetBinError(23,2.49);
   EffectiveMass_all->SetBinError(24,1);
   EffectiveMass_all->SetBinError(25,2);
   EffectiveMass_all->SetBinError(28,2.14);
   EffectiveMass_all->SetMinimum(0.5);
   EffectiveMass_all->SetMaximum(118.7993);
   EffectiveMass_all->SetEntries(27);
   EffectiveMass_all->SetLineWidth(2);
   EffectiveMass_all->SetMarkerStyle(20);
   EffectiveMass_all->SetMarkerSize(1.5);
   EffectiveMass_all->GetXaxis()->SetTitle("M_{eff} (GeV)");
   EffectiveMass_all->GetXaxis()->SetRange(1,41);
   EffectiveMass_all->GetYaxis()->SetTitle("Events / 40 GeV");
   EffectiveMass_all->GetYaxis()->SetTitleOffset(1.3);
   EffectiveMass_all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_575_675/EffectiveMass_all->cd();
  
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
   Double_t xAxis1259[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis1259);
   EffectiveMass_all->SetBinContent(19,0.1683511);
   EffectiveMass_all->SetBinContent(20,0.8670591);
   EffectiveMass_all->SetBinContent(21,0.6459794);
   EffectiveMass_all->SetBinContent(22,0.1690199);
   EffectiveMass_all->SetBinContent(23,0.7943704);
   EffectiveMass_all->SetBinContent(24,0.2770247);
   EffectiveMass_all->SetBinContent(25,0.4810371);
   EffectiveMass_all->SetBinContent(28,3.243842);
   EffectiveMass_all->SetBinError(19,1.020346);
   EffectiveMass_all->SetBinError(20,0.486815);
   EffectiveMass_all->SetBinError(21,0.5656788);
   EffectiveMass_all->SetBinError(22,1.048987);
   EffectiveMass_all->SetBinError(23,0.5719779);
   EffectiveMass_all->SetBinError(24,1.061631);
   EffectiveMass_all->SetBinError(25,1.065183);
   EffectiveMass_all->SetBinError(28,0.9808387);
   EffectiveMass_all->SetMinimum(0);
   EffectiveMass_all->SetMaximum(2);
   EffectiveMass_all->SetEntries(3.997595);
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
   gre->SetPointError(15,20,0.5204061);
   gre->SetPoint(16,660,1);
   gre->SetPointError(16,20,0.269964);
   gre->SetPoint(17,700,1);
   gre->SetPointError(17,20,0.2736527);
   gre->SetPoint(18,740,1);
   gre->SetPointError(18,20,0.2027472);
   gre->SetPoint(19,780,1);
   gre->SetPointError(19,20,0.2646851);
   gre->SetPoint(20,820,1);
   gre->SetPointError(20,20,0.2683067);
   gre->SetPoint(21,860,1);
   gre->SetPointError(21,20,0.3168197);
   gre->SetPoint(22,900,1);
   gre->SetPointError(22,20,0.2813445);
   gre->SetPoint(23,940,1);
   gre->SetPointError(23,20,0.3564546);
   gre->SetPoint(24,980,1);
   gre->SetPointError(24,20,0.366898);
   gre->SetPoint(25,1020,1);
   gre->SetPointError(25,20,0.4433932);
   gre->SetPoint(26,1060,1);
   gre->SetPointError(26,20,0.4240043);
   gre->SetPoint(27,1100,1);
   gre->SetPointError(27,20,0.6732013);
   gre->SetPoint(28,1140,1);
   gre->SetPointError(28,20,0.7071068);
   gre->SetPoint(29,1180,1);
   gre->SetPointError(29,20,0.799609);
   gre->SetPoint(30,1220,1);
   gre->SetPointError(30,20,0);
   gre->SetPoint(31,1260,1);
   gre->SetPointError(31,20,0.5812912);
   gre->SetPoint(32,1300,1);
   gre->SetPointError(32,20,1);
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
   
   TH1F *Graph_Graph_from_EffectiveMass_all210 = new TH1F("Graph_Graph_from_EffectiveMass_all210","",100,0,3300);
   Graph_Graph_from_EffectiveMass_all210->SetMinimum(0);
   Graph_Graph_from_EffectiveMass_all210->SetMaximum(2.2);
   Graph_Graph_from_EffectiveMass_all210->SetDirectory(0);
   Graph_Graph_from_EffectiveMass_all210->SetStats(0);
   Graph_Graph_from_EffectiveMass_all210->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all210->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all210->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_all210->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_EffectiveMass_all210->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all210->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all210->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_EffectiveMass_all210->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_EffectiveMass_all210->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_EffectiveMass_all210->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_EffectiveMass_all210);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1640,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1260[76] = {0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960, 1000, 1040, 1080, 1120, 1160, 1200, 1240, 1280, 1320, 1360, 1400, 1440, 1480, 1520, 1560, 1600, 1640, 1680, 1720, 1760, 1800, 1840, 1880, 1920, 1960, 2000, 2040, 2080, 2120, 2160, 2200, 2240, 2280, 2320, 2360, 2400, 2440, 2480, 2520, 2560, 2600, 2640, 2680, 2720, 2760, 2800, 2840, 2880, 2920, 2960, 3000}; 
   
   TH1D *EffectiveMass_all = new TH1D("EffectiveMass_all","",75, xAxis1260);
   EffectiveMass_all->SetBinContent(19,0.1683511);
   EffectiveMass_all->SetBinContent(20,0.8670591);
   EffectiveMass_all->SetBinContent(21,0.6459794);
   EffectiveMass_all->SetBinContent(22,0.1690199);
   EffectiveMass_all->SetBinContent(23,0.7943704);
   EffectiveMass_all->SetBinContent(24,0.2770247);
   EffectiveMass_all->SetBinContent(25,0.4810371);
   EffectiveMass_all->SetBinContent(28,3.243842);
   EffectiveMass_all->SetBinError(19,1.020346);
   EffectiveMass_all->SetBinError(20,0.486815);
   EffectiveMass_all->SetBinError(21,0.5656788);
   EffectiveMass_all->SetBinError(22,1.048987);
   EffectiveMass_all->SetBinError(23,0.5719779);
   EffectiveMass_all->SetBinError(24,1.061631);
   EffectiveMass_all->SetBinError(25,1.065183);
   EffectiveMass_all->SetBinError(28,0.9808387);
   EffectiveMass_all->SetMinimum(0);
   EffectiveMass_all->SetMaximum(2);
   EffectiveMass_all->SetEntries(3.997595);
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
   canvasDiMuon_575_675/EffectiveMass_all->cd();
   canvasDiMuon_575_675/EffectiveMass_all->Modified();
   canvasDiMuon_575_675/EffectiveMass_all->cd();
   canvasDiMuon_575_675/EffectiveMass_all->SetSelected(canvasDiMuon_575_675/EffectiveMass_all);
}
