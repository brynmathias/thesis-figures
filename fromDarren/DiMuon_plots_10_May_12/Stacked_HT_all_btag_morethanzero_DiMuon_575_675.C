{
//=========Macro generated from canvas: canvasbtag_morethanzero_DiMuon_575_675/HT_all/cannameHT_all
//=========  (Thu May 10 12:47:18 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_DiMuon_575_675/HT_all = new TCanvas("canvasbtag_morethanzero_DiMuon_575_675/HT_all", "cannameHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->SetFillColor(0);
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->SetBorderMode(0);
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->SetBorderSize(2);
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->SetTickx(1);
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->SetTicky(1);
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-159.375,-0.5609277,1434.375,2.038049);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4453[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4453);
   HT_all->SetBinContent(24,5);
   HT_all->SetBinContent(25,6);
   HT_all->SetBinContent(26,4);
   HT_all->SetBinError(24,2.49);
   HT_all->SetBinError(25,2.68);
   HT_all->SetBinError(26,2.3);
   HT_all->SetMinimum(0.5);
   HT_all->SetMaximum(60);
   HT_all->SetEntries(16);
   HT_all->SetLineWidth(2);
   HT_all->SetMarkerStyle(20);
   HT_all->SetMarkerSize(1.5);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle("Events / 25 GeV");
   HT_all->GetYaxis()->SetTitleOffset(1.3);
   HT_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_297 = new TH1F("_stack_297","",100,0,2500);
   _stack_297->SetMinimum(0.001617977);
   _stack_297->SetMaximum(6.471906);
   _stack_297->SetDirectory(0);
   _stack_297->SetStats(0);
   _stack_297->GetXaxis()->SetLabelFont(42);
   _stack_297->GetXaxis()->SetLabelOffset(0.007);
   _stack_297->GetXaxis()->SetLabelSize(0.05);
   _stack_297->GetXaxis()->SetTitleSize(0.05);
   _stack_297->GetYaxis()->SetLabelFont(42);
   _stack_297->GetYaxis()->SetLabelOffset(0.007);
   _stack_297->GetYaxis()->SetLabelSize(0.05);
   _stack_297->GetZaxis()->SetLabelFont(42);
   _stack_297->GetZaxis()->SetLabelOffset(0.007);
   _stack_297->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_297);
   
   Double_t xAxis4454[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4454);
   HT_all->SetEntries(1);
   HT_all->SetFillColor(4);
   HT_all->SetLineColor(4);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis4455[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4455);
   HT_all->SetEntries(1);
   HT_all->SetFillColor(5);
   HT_all->SetLineColor(5);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis4456[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4456);
   HT_all->SetEntries(1);
   HT_all->SetFillColor(7);
   HT_all->SetLineColor(7);
   HT_all->SetLineStyle(10);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis4457[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4457);
   HT_all->SetBinContent(25,0.02837016);
   HT_all->SetBinContent(26,0.00253158);
   HT_all->SetBinContent(27,0.01767629);
   HT_all->SetBinError(25,0.01863933);
   HT_all->SetBinError(26,0.00253158);
   HT_all->SetBinError(27,0.01070729);
   HT_all->SetEntries(8);
   HT_all->SetFillColor(44);
   HT_all->SetLineColor(44);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis4458[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4458);
   HT_all->SetBinContent(24,0.04416818);
   HT_all->SetBinContent(25,0.05397489);
   HT_all->SetBinContent(27,0.08896274);
   HT_all->SetBinError(24,0.04416818);
   HT_all->SetBinError(25,0.05081691);
   HT_all->SetBinError(27,0.06521007);
   HT_all->SetEntries(6);
   HT_all->SetFillColor(40);
   HT_all->SetLineColor(40);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis4459[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4459);
   HT_all->SetBinContent(24,1.085737);
   HT_all->SetBinContent(25,0.7009744);
   HT_all->SetBinContent(27,0.3847051);
   HT_all->SetBinError(24,0.4873587);
   HT_all->SetBinError(25,0.4067549);
   HT_all->SetBinError(27,0.2787397);
   HT_all->SetEntries(12);
   HT_all->SetFillColor(2);
   HT_all->SetLineColor(2);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis4460[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4460);
   HT_all->SetBinContent(24,2.495782);
   HT_all->SetBinContent(25,2.736926);
   HT_all->SetBinContent(26,1.227331);
   HT_all->SetBinContent(27,1.677009);
   HT_all->SetBinError(24,1.103997);
   HT_all->SetBinError(25,1.308016);
   HT_all->SetBinError(26,0.7260893);
   HT_all->SetBinError(27,0.8528306);
   HT_all->SetEntries(19);
   HT_all->SetFillColor(6);
   HT_all->SetLineColor(6);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
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
   TLegendEntry *entry=leg->AddEntry("HT_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("HT_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis4461[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4461);
   HT_all->SetBinContent(24,5);
   HT_all->SetBinContent(25,6);
   HT_all->SetBinContent(26,4);
   HT_all->SetBinError(24,2.49);
   HT_all->SetBinError(25,2.68);
   HT_all->SetBinError(26,2.3);
   HT_all->SetMinimum(0.5);
   HT_all->SetMaximum(60);
   HT_all->SetEntries(16);
   HT_all->SetLineWidth(2);
   HT_all->SetMarkerStyle(20);
   HT_all->SetMarkerSize(1.5);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle("Events / 25 GeV");
   HT_all->GetYaxis()->SetTitleOffset(1.3);
   HT_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_DiMuon_575_675    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-159.375,-0.25,1434.375,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis4462[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4462);
   HT_all->SetBinContent(24,1.379049);
   HT_all->SetBinContent(25,1.704427);
   HT_all->SetBinContent(26,3.252396);
   HT_all->SetBinError(24,0.5991133);
   HT_all->SetBinError(25,0.5925897);
   HT_all->SetBinError(26,0.8241242);
   HT_all->SetMinimum(0);
   HT_all->SetMaximum(2);
   HT_all->SetEntries(5.516978);
   HT_all->SetLineWidth(2);
   HT_all->SetMarkerStyle(20);
   HT_all->SetMarkerSize(1.5);
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetXaxis()->SetLabelSize(0.12);
   HT_all->GetYaxis()->SetTitle("Data/MC");
   HT_all->GetYaxis()->SetNdivisions(505);
   HT_all->GetYaxis()->SetLabelSize(0.11);
   HT_all->GetYaxis()->SetTitleSize(0.1);
   HT_all->GetYaxis()->SetTitleOffset(0.5);
   HT_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(100);
   gre->SetName("Graph_from_HT_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,12.5,1);
   gre->SetPointError(0,12.5,0);
   gre->SetPoint(1,37.5,1);
   gre->SetPointError(1,12.5,0);
   gre->SetPoint(2,62.5,1);
   gre->SetPointError(2,12.5,0);
   gre->SetPoint(3,87.5,1);
   gre->SetPointError(3,12.5,0);
   gre->SetPoint(4,112.5,1);
   gre->SetPointError(4,12.5,0);
   gre->SetPoint(5,137.5,1);
   gre->SetPointError(5,12.5,0);
   gre->SetPoint(6,162.5,1);
   gre->SetPointError(6,12.5,0);
   gre->SetPoint(7,187.5,1);
   gre->SetPointError(7,12.5,0);
   gre->SetPoint(8,212.5,1);
   gre->SetPointError(8,12.5,0);
   gre->SetPoint(9,237.5,1);
   gre->SetPointError(9,12.5,0);
   gre->SetPoint(10,262.5,1);
   gre->SetPointError(10,12.5,0);
   gre->SetPoint(11,287.5,1);
   gre->SetPointError(11,12.5,0);
   gre->SetPoint(12,312.5,1);
   gre->SetPointError(12,12.5,0);
   gre->SetPoint(13,337.5,1);
   gre->SetPointError(13,12.5,0);
   gre->SetPoint(14,362.5,1);
   gre->SetPointError(14,12.5,0);
   gre->SetPoint(15,387.5,1);
   gre->SetPointError(15,12.5,0);
   gre->SetPoint(16,412.5,1);
   gre->SetPointError(16,12.5,0);
   gre->SetPoint(17,437.5,1);
   gre->SetPointError(17,12.5,0);
   gre->SetPoint(18,462.5,1);
   gre->SetPointError(18,12.5,0);
   gre->SetPoint(19,487.5,1);
   gre->SetPointError(19,12.5,0);
   gre->SetPoint(20,512.5,1);
   gre->SetPointError(20,12.5,0);
   gre->SetPoint(21,537.5,1);
   gre->SetPointError(21,12.5,0);
   gre->SetPoint(22,562.5,1);
   gre->SetPointError(22,12.5,0);
   gre->SetPoint(23,587.5,1);
   gre->SetPointError(23,12.5,0.3330658);
   gre->SetPoint(24,612.5,1);
   gre->SetPointError(24,12.5,0.3894245);
   gre->SetPoint(25,637.5,1);
   gre->SetPointError(25,12.5,0.590386);
   gre->SetPoint(26,662.5,1);
   gre->SetPointError(26,12.5,0.4149034);
   gre->SetPoint(27,687.5,1);
   gre->SetPointError(27,12.5,0);
   gre->SetPoint(28,712.5,1);
   gre->SetPointError(28,12.5,0);
   gre->SetPoint(29,737.5,1);
   gre->SetPointError(29,12.5,0);
   gre->SetPoint(30,762.5,1);
   gre->SetPointError(30,12.5,0);
   gre->SetPoint(31,787.5,1);
   gre->SetPointError(31,12.5,0);
   gre->SetPoint(32,812.5,1);
   gre->SetPointError(32,12.5,0);
   gre->SetPoint(33,837.5,1);
   gre->SetPointError(33,12.5,0);
   gre->SetPoint(34,862.5,1);
   gre->SetPointError(34,12.5,0);
   gre->SetPoint(35,887.5,1);
   gre->SetPointError(35,12.5,0);
   gre->SetPoint(36,912.5,1);
   gre->SetPointError(36,12.5,0);
   gre->SetPoint(37,937.5,1);
   gre->SetPointError(37,12.5,0);
   gre->SetPoint(38,962.5,1);
   gre->SetPointError(38,12.5,0);
   gre->SetPoint(39,987.5,1);
   gre->SetPointError(39,12.5,0);
   gre->SetPoint(40,1012.5,1);
   gre->SetPointError(40,12.5,0);
   gre->SetPoint(41,1037.5,1);
   gre->SetPointError(41,12.5,0);
   gre->SetPoint(42,1062.5,1);
   gre->SetPointError(42,12.5,0);
   gre->SetPoint(43,1087.5,1);
   gre->SetPointError(43,12.5,0);
   gre->SetPoint(44,1112.5,1);
   gre->SetPointError(44,12.5,0);
   gre->SetPoint(45,1137.5,1);
   gre->SetPointError(45,12.5,0);
   gre->SetPoint(46,1162.5,1);
   gre->SetPointError(46,12.5,0);
   gre->SetPoint(47,1187.5,1);
   gre->SetPointError(47,12.5,0);
   gre->SetPoint(48,1212.5,1);
   gre->SetPointError(48,12.5,0);
   gre->SetPoint(49,1237.5,1);
   gre->SetPointError(49,12.5,0);
   gre->SetPoint(50,1262.5,1);
   gre->SetPointError(50,12.5,0);
   gre->SetPoint(51,1287.5,1);
   gre->SetPointError(51,12.5,0);
   gre->SetPoint(52,1312.5,1);
   gre->SetPointError(52,12.5,0);
   gre->SetPoint(53,1337.5,1);
   gre->SetPointError(53,12.5,0);
   gre->SetPoint(54,1362.5,1);
   gre->SetPointError(54,12.5,0);
   gre->SetPoint(55,1387.5,1);
   gre->SetPointError(55,12.5,0);
   gre->SetPoint(56,1412.5,1);
   gre->SetPointError(56,12.5,0);
   gre->SetPoint(57,1437.5,1);
   gre->SetPointError(57,12.5,0);
   gre->SetPoint(58,1462.5,1);
   gre->SetPointError(58,12.5,0);
   gre->SetPoint(59,1487.5,1);
   gre->SetPointError(59,12.5,0);
   gre->SetPoint(60,1512.5,1);
   gre->SetPointError(60,12.5,0);
   gre->SetPoint(61,1537.5,1);
   gre->SetPointError(61,12.5,0);
   gre->SetPoint(62,1562.5,1);
   gre->SetPointError(62,12.5,0);
   gre->SetPoint(63,1587.5,1);
   gre->SetPointError(63,12.5,0);
   gre->SetPoint(64,1612.5,1);
   gre->SetPointError(64,12.5,0);
   gre->SetPoint(65,1637.5,1);
   gre->SetPointError(65,12.5,0);
   gre->SetPoint(66,1662.5,1);
   gre->SetPointError(66,12.5,0);
   gre->SetPoint(67,1687.5,1);
   gre->SetPointError(67,12.5,0);
   gre->SetPoint(68,1712.5,1);
   gre->SetPointError(68,12.5,0);
   gre->SetPoint(69,1737.5,1);
   gre->SetPointError(69,12.5,0);
   gre->SetPoint(70,1762.5,1);
   gre->SetPointError(70,12.5,0);
   gre->SetPoint(71,1787.5,1);
   gre->SetPointError(71,12.5,0);
   gre->SetPoint(72,1812.5,1);
   gre->SetPointError(72,12.5,0);
   gre->SetPoint(73,1837.5,1);
   gre->SetPointError(73,12.5,0);
   gre->SetPoint(74,1862.5,1);
   gre->SetPointError(74,12.5,0);
   gre->SetPoint(75,1887.5,1);
   gre->SetPointError(75,12.5,0);
   gre->SetPoint(76,1912.5,1);
   gre->SetPointError(76,12.5,0);
   gre->SetPoint(77,1937.5,1);
   gre->SetPointError(77,12.5,0);
   gre->SetPoint(78,1962.5,1);
   gre->SetPointError(78,12.5,0);
   gre->SetPoint(79,1987.5,1);
   gre->SetPointError(79,12.5,0);
   gre->SetPoint(80,2012.5,1);
   gre->SetPointError(80,12.5,0);
   gre->SetPoint(81,2037.5,1);
   gre->SetPointError(81,12.5,0);
   gre->SetPoint(82,2062.5,1);
   gre->SetPointError(82,12.5,0);
   gre->SetPoint(83,2087.5,1);
   gre->SetPointError(83,12.5,0);
   gre->SetPoint(84,2112.5,1);
   gre->SetPointError(84,12.5,0);
   gre->SetPoint(85,2137.5,1);
   gre->SetPointError(85,12.5,0);
   gre->SetPoint(86,2162.5,1);
   gre->SetPointError(86,12.5,0);
   gre->SetPoint(87,2187.5,1);
   gre->SetPointError(87,12.5,0);
   gre->SetPoint(88,2212.5,1);
   gre->SetPointError(88,12.5,0);
   gre->SetPoint(89,2237.5,1);
   gre->SetPointError(89,12.5,0);
   gre->SetPoint(90,2262.5,1);
   gre->SetPointError(90,12.5,0);
   gre->SetPoint(91,2287.5,1);
   gre->SetPointError(91,12.5,0);
   gre->SetPoint(92,2312.5,1);
   gre->SetPointError(92,12.5,0);
   gre->SetPoint(93,2337.5,1);
   gre->SetPointError(93,12.5,0);
   gre->SetPoint(94,2362.5,1);
   gre->SetPointError(94,12.5,0);
   gre->SetPoint(95,2387.5,1);
   gre->SetPointError(95,12.5,0);
   gre->SetPoint(96,2412.5,1);
   gre->SetPointError(96,12.5,0);
   gre->SetPoint(97,2437.5,1);
   gre->SetPointError(97,12.5,0);
   gre->SetPoint(98,2462.5,1);
   gre->SetPointError(98,12.5,0);
   gre->SetPoint(99,2487.5,1);
   gre->SetPointError(99,12.5,0);
   
   TH1F *Graph_Graph_from_HT_all744 = new TH1F("Graph_Graph_from_HT_all744","",100,0,2750);
   Graph_Graph_from_HT_all744->SetMinimum(0.2915368);
   Graph_Graph_from_HT_all744->SetMaximum(1.708463);
   Graph_Graph_from_HT_all744->SetDirectory(0);
   Graph_Graph_from_HT_all744->SetStats(0);
   Graph_Graph_from_HT_all744->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_all744->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_all744->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_HT_all744->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_HT_all744->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_all744->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_all744->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_HT_all744->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_all744->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_all744->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_HT_all744);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1270,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4463[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis4463);
   HT_all->SetBinContent(24,1.379049);
   HT_all->SetBinContent(25,1.704427);
   HT_all->SetBinContent(26,3.252396);
   HT_all->SetBinError(24,0.5991133);
   HT_all->SetBinError(25,0.5925897);
   HT_all->SetBinError(26,0.8241242);
   HT_all->SetMinimum(0);
   HT_all->SetMaximum(2);
   HT_all->SetEntries(5.516978);
   HT_all->SetLineWidth(2);
   HT_all->SetMarkerStyle(20);
   HT_all->SetMarkerSize(1.5);
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetXaxis()->SetLabelSize(0.12);
   HT_all->GetYaxis()->SetTitle("Data/MC");
   HT_all->GetYaxis()->SetNdivisions(505);
   HT_all->GetYaxis()->SetLabelSize(0.11);
   HT_all->GetYaxis()->SetTitleSize(0.1);
   HT_all->GetYaxis()->SetTitleOffset(0.5);
   HT_all->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->cd();
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->Modified();
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->cd();
   canvasbtag_morethanzero_DiMuon_575_675/HT_all->SetSelected(canvasbtag_morethanzero_DiMuon_575_675/HT_all);
}
