{
//=========Macro generated from canvas: canvasDiMuon_375_475/HT_all/cannameHT_all
//=========  (Thu May 10 12:45:00 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_375_475/HT_all = new TCanvas("canvasDiMuon_375_475/HT_all", "cannameHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasDiMuon_375_475/HT_all->SetHighLightColor(2);
   canvasDiMuon_375_475/HT_all->Range(0,0,1,1);
   canvasDiMuon_375_475/HT_all->SetFillColor(0);
   canvasDiMuon_375_475/HT_all->SetBorderMode(0);
   canvasDiMuon_375_475/HT_all->SetBorderSize(2);
   canvasDiMuon_375_475/HT_all->SetTickx(1);
   canvasDiMuon_375_475/HT_all->SetTicky(1);
   canvasDiMuon_375_475/HT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-159.375,-0.724165,1434.375,3.507185);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis253[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis253);
   HT_all->SetBinContent(16,26);
   HT_all->SetBinContent(17,31);
   HT_all->SetBinContent(18,25);
   HT_all->SetBinContent(19,18);
   HT_all->SetBinError(16,5.09902);
   HT_all->SetBinError(17,5.567764);
   HT_all->SetBinError(18,5);
   HT_all->SetBinError(19,4.242641);
   HT_all->SetMinimum(0.5);
   HT_all->SetMaximum(1213.528);
   HT_all->SetEntries(101);
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
   
   TH1F *_stack_17 = new TH1F("_stack_17","",100,0,2500);
   _stack_17->SetMinimum(0.04924649);
   _stack_17->SetMaximum(196.986);
   _stack_17->SetDirectory(0);
   _stack_17->SetStats(0);
   _stack_17->GetXaxis()->SetLabelFont(42);
   _stack_17->GetXaxis()->SetLabelOffset(0.007);
   _stack_17->GetXaxis()->SetLabelSize(0.05);
   _stack_17->GetXaxis()->SetTitleSize(0.05);
   _stack_17->GetYaxis()->SetLabelFont(42);
   _stack_17->GetYaxis()->SetLabelOffset(0.007);
   _stack_17->GetYaxis()->SetLabelSize(0.05);
   _stack_17->GetZaxis()->SetLabelFont(42);
   _stack_17->GetZaxis()->SetLabelOffset(0.007);
   _stack_17->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_17);
   
   Double_t xAxis254[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis254);
   HT_all->SetEntries(1);
   HT_all->SetFillColor(5);
   HT_all->SetLineColor(5);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis255[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis255);
   HT_all->SetEntries(1);
   HT_all->SetFillColor(7);
   HT_all->SetLineColor(7);
   HT_all->SetLineStyle(10);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis256[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis256);
   HT_all->SetBinContent(18,0.04907353);
   HT_all->SetBinError(18,0.04907353);
   HT_all->SetEntries(2);
   HT_all->SetFillColor(4);
   HT_all->SetLineColor(4);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis257[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis257);
   HT_all->SetBinContent(16,0.2253647);
   HT_all->SetBinContent(17,0.1520042);
   HT_all->SetBinContent(18,0.1333613);
   HT_all->SetBinContent(19,0.09684974);
   HT_all->SetBinError(16,0.1104167);
   HT_all->SetBinError(17,0.08650328);
   HT_all->SetBinError(18,0.08084052);
   HT_all->SetBinError(19,0.05591636);
   HT_all->SetEntries(19);
   HT_all->SetFillColor(40);
   HT_all->SetLineColor(40);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis258[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis258);
   HT_all->SetBinContent(16,0.6304392);
   HT_all->SetBinContent(17,0.5924184);
   HT_all->SetBinContent(18,0.3555997);
   HT_all->SetBinContent(19,0.4083994);
   HT_all->SetBinError(16,0.09485945);
   HT_all->SetBinError(17,0.09287777);
   HT_all->SetBinError(18,0.07557159);
   HT_all->SetBinError(19,0.06942538);
   HT_all->SetEntries(222);
   HT_all->SetFillColor(44);
   HT_all->SetLineColor(44);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis259[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis259);
   HT_all->SetBinContent(16,5.489292);
   HT_all->SetBinContent(17,4.2693);
   HT_all->SetBinContent(18,4.092084);
   HT_all->SetBinContent(19,2.658814);
   HT_all->SetBinError(16,1.175831);
   HT_all->SetBinError(17,0.9838312);
   HT_all->SetBinError(18,1.156389);
   HT_all->SetBinError(19,0.8048744);
   HT_all->SetEntries(83);
   HT_all->SetFillColor(2);
   HT_all->SetLineColor(2);
   HT_all->SetLineWidth(3);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle(" Events/25 GeV");
   ->Add(HT_all,"");
   Double_t xAxis260[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis260);
   HT_all->SetBinContent(16,115.0077);
   HT_all->SetBinContent(17,81.45058);
   HT_all->SetBinContent(18,65.26254);
   HT_all->SetBinContent(19,61.99074);
   HT_all->SetBinError(16,8.108567);
   HT_all->SetBinError(17,6.571033);
   HT_all->SetBinError(18,5.660013);
   HT_all->SetBinError(19,5.648087);
   HT_all->SetEntries(801);
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
   Double_t xAxis261[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis261);
   HT_all->SetBinContent(16,26);
   HT_all->SetBinContent(17,31);
   HT_all->SetBinContent(18,25);
   HT_all->SetBinContent(19,18);
   HT_all->SetBinError(16,5.09902);
   HT_all->SetBinError(17,5.567764);
   HT_all->SetBinError(18,5);
   HT_all->SetBinError(19,4.242641);
   HT_all->SetMinimum(0.5);
   HT_all->SetMaximum(1213.528);
   HT_all->SetEntries(101);
   HT_all->SetLineWidth(2);
   HT_all->SetMarkerStyle(20);
   HT_all->SetMarkerSize(1.5);
   HT_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_all->GetXaxis()->SetRange(1,51);
   HT_all->GetYaxis()->SetTitle("Events / 25 GeV");
   HT_all->GetYaxis()->SetTitleOffset(1.3);
   HT_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_375_475    Jet Multiplicity=all");
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
   canvasDiMuon_375_475/HT_all->cd();
  
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
   Double_t xAxis262[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis262);
   HT_all->SetBinContent(16,0.2142514);
   HT_all->SetBinContent(17,0.3585295);
   HT_all->SetBinContent(18,0.3576914);
   HT_all->SetBinContent(19,0.2762651);
   HT_all->SetBinError(16,0.2074163);
   HT_all->SetBinError(17,0.1953593);
   HT_all->SetBinError(18,0.2164134);
   HT_all->SetBinError(19,0.2514452);
   HT_all->SetMinimum(0);
   HT_all->SetMaximum(2);
   HT_all->SetEntries(83.27956);
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
   gre->SetPointError(15,12.5,0.06752769);
   gre->SetPoint(16,412.5,1);
   gre->SetPointError(16,12.5,0.07685817);
   gre->SetPoint(17,437.5,1);
   gre->SetPointError(17,12.5,0.08267255);
   gre->SetPoint(18,462.5,1);
   gre->SetPointError(18,12.5,0.08757365);
   gre->SetPoint(19,487.5,1);
   gre->SetPointError(19,12.5,0);
   gre->SetPoint(20,512.5,1);
   gre->SetPointError(20,12.5,0);
   gre->SetPoint(21,537.5,1);
   gre->SetPointError(21,12.5,0);
   gre->SetPoint(22,562.5,1);
   gre->SetPointError(22,12.5,0);
   gre->SetPoint(23,587.5,1);
   gre->SetPointError(23,12.5,0);
   gre->SetPoint(24,612.5,1);
   gre->SetPointError(24,12.5,0);
   gre->SetPoint(25,637.5,1);
   gre->SetPointError(25,12.5,0);
   gre->SetPoint(26,662.5,1);
   gre->SetPointError(26,12.5,0);
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
   
   TH1F *Graph_Graph_from_HT_all44 = new TH1F("Graph_Graph_from_HT_all44","",100,0,2750);
   Graph_Graph_from_HT_all44->SetMinimum(0.8949116);
   Graph_Graph_from_HT_all44->SetMaximum(1.105088);
   Graph_Graph_from_HT_all44->SetDirectory(0);
   Graph_Graph_from_HT_all44->SetStats(0);
   Graph_Graph_from_HT_all44->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_all44->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_all44->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_HT_all44->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_HT_all44->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_all44->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_all44->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_HT_all44->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_all44->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_all44->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_HT_all44);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1270,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis263[101] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000, 2025, 2050, 2075, 2100, 2125, 2150, 2175, 2200, 2225, 2250, 2275, 2300, 2325, 2350, 2375, 2400, 2425, 2450, 2475, 2500}; 
   
   TH1D *HT_all = new TH1D("HT_all","",100, xAxis263);
   HT_all->SetBinContent(16,0.2142514);
   HT_all->SetBinContent(17,0.3585295);
   HT_all->SetBinContent(18,0.3576914);
   HT_all->SetBinContent(19,0.2762651);
   HT_all->SetBinError(16,0.2074163);
   HT_all->SetBinError(17,0.1953593);
   HT_all->SetBinError(18,0.2164134);
   HT_all->SetBinError(19,0.2514452);
   HT_all->SetMinimum(0);
   HT_all->SetMaximum(2);
   HT_all->SetEntries(83.27956);
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
   canvasDiMuon_375_475/HT_all->cd();
   canvasDiMuon_375_475/HT_all->Modified();
   canvasDiMuon_375_475/HT_all->cd();
   canvasDiMuon_375_475/HT_all->SetSelected(canvasDiMuon_375_475/HT_all);
}
