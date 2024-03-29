{
//=========Macro generated from canvas: canvasDiMuon_475_575/HT_after_alphaT_55_all/cannameHT_after_alphaT_55_all
//=========  (Thu May 10 12:45:22 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_475_575/HT_after_alphaT_55_all = new TCanvas("canvasDiMuon_475_575/HT_after_alphaT_55_all", "cannameHT_after_alphaT_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasDiMuon_475_575/HT_after_alphaT_55_all->SetHighLightColor(2);
   canvasDiMuon_475_575/HT_after_alphaT_55_all->Range(0,0,1,1);
   canvasDiMuon_475_575/HT_after_alphaT_55_all->SetFillColor(0);
   canvasDiMuon_475_575/HT_after_alphaT_55_all->SetBorderMode(0);
   canvasDiMuon_475_575/HT_after_alphaT_55_all->SetBorderSize(2);
   canvasDiMuon_475_575/HT_after_alphaT_55_all->SetTickx(1);
   canvasDiMuon_475_575/HT_after_alphaT_55_all->SetTicky(1);
   canvasDiMuon_475_575/HT_after_alphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-159.375,-0.5886588,1434.375,2.287629);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis823[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis823);
   HT_after_alphaT_55_all->SetBinContent(20,10);
   HT_after_alphaT_55_all->SetBinContent(21,3);
   HT_after_alphaT_55_all->SetBinContent(22,2);
   HT_after_alphaT_55_all->SetBinError(20,3.162278);
   HT_after_alphaT_55_all->SetBinError(21,2.14);
   HT_after_alphaT_55_all->SetBinError(22,2);
   HT_after_alphaT_55_all->SetMinimum(0.5);
   HT_after_alphaT_55_all->SetMaximum(100);
   HT_after_alphaT_55_all->SetEntries(16);
   HT_after_alphaT_55_all->SetLineWidth(2);
   HT_after_alphaT_55_all->SetMarkerStyle(20);
   HT_after_alphaT_55_all->SetMarkerSize(1.5);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 25 GeV");
   HT_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   HT_after_alphaT_55_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_55 = new TH1F("_stack_55","",80,0,2000);
   _stack_55->SetMinimum(0.003745141);
   _stack_55->SetMaximum(14.98056);
   _stack_55->SetDirectory(0);
   _stack_55->SetStats(0);
   _stack_55->GetXaxis()->SetLabelFont(42);
   _stack_55->GetXaxis()->SetLabelOffset(0.007);
   _stack_55->GetXaxis()->SetLabelSize(0.05);
   _stack_55->GetXaxis()->SetTitleSize(0.05);
   _stack_55->GetYaxis()->SetLabelFont(42);
   _stack_55->GetYaxis()->SetLabelOffset(0.007);
   _stack_55->GetYaxis()->SetLabelSize(0.05);
   _stack_55->GetZaxis()->SetLabelFont(42);
   _stack_55->GetZaxis()->SetLabelOffset(0.007);
   _stack_55->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_55);
   
   Double_t xAxis824[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis824);
   HT_after_alphaT_55_all->SetEntries(1);
   HT_after_alphaT_55_all->SetFillColor(4);
   HT_after_alphaT_55_all->SetLineColor(4);
   HT_after_alphaT_55_all->SetLineWidth(3);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/25 (GeV)");
   ->Add(HT_after_alphaT_55_all,"");
   Double_t xAxis825[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis825);
   HT_after_alphaT_55_all->SetEntries(1);
   HT_after_alphaT_55_all->SetFillColor(5);
   HT_after_alphaT_55_all->SetLineColor(5);
   HT_after_alphaT_55_all->SetLineWidth(3);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/25 (GeV)");
   ->Add(HT_after_alphaT_55_all,"");
   Double_t xAxis826[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis826);
   HT_after_alphaT_55_all->SetEntries(1);
   HT_after_alphaT_55_all->SetFillColor(7);
   HT_after_alphaT_55_all->SetLineColor(7);
   HT_after_alphaT_55_all->SetLineStyle(10);
   HT_after_alphaT_55_all->SetLineWidth(3);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/25 (GeV)");
   ->Add(HT_after_alphaT_55_all,"");
   Double_t xAxis827[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis827);
   HT_after_alphaT_55_all->SetBinContent(20,0.02064383);
   HT_after_alphaT_55_all->SetBinError(20,0.01767254);
   HT_after_alphaT_55_all->SetEntries(3);
   HT_after_alphaT_55_all->SetFillColor(40);
   HT_after_alphaT_55_all->SetLineColor(40);
   HT_after_alphaT_55_all->SetLineWidth(3);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/25 (GeV)");
   ->Add(HT_after_alphaT_55_all,"");
   Double_t xAxis828[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis828);
   HT_after_alphaT_55_all->SetBinContent(20,0.06235112);
   HT_after_alphaT_55_all->SetBinContent(21,0.07294126);
   HT_after_alphaT_55_all->SetBinContent(22,0.02365405);
   HT_after_alphaT_55_all->SetBinContent(23,0.04118876);
   HT_after_alphaT_55_all->SetBinError(20,0.02750997);
   HT_after_alphaT_55_all->SetBinError(21,0.02730582);
   HT_after_alphaT_55_all->SetBinError(22,0.01212775);
   HT_after_alphaT_55_all->SetBinError(23,0.02327512);
   HT_after_alphaT_55_all->SetEntries(26);
   HT_after_alphaT_55_all->SetFillColor(44);
   HT_after_alphaT_55_all->SetLineColor(44);
   HT_after_alphaT_55_all->SetLineWidth(3);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/25 (GeV)");
   ->Add(HT_after_alphaT_55_all,"");
   Double_t xAxis829[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis829);
   HT_after_alphaT_55_all->SetBinContent(20,1.05397);
   HT_after_alphaT_55_all->SetBinContent(21,0.2717112);
   HT_after_alphaT_55_all->SetBinContent(22,0.2040316);
   HT_after_alphaT_55_all->SetBinError(20,0.5543061);
   HT_after_alphaT_55_all->SetBinError(21,0.2717112);
   HT_after_alphaT_55_all->SetBinError(22,0.2040316);
   HT_after_alphaT_55_all->SetEntries(7);
   HT_after_alphaT_55_all->SetFillColor(2);
   HT_after_alphaT_55_all->SetLineColor(2);
   HT_after_alphaT_55_all->SetLineWidth(3);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/25 (GeV)");
   ->Add(HT_after_alphaT_55_all,"");
   Double_t xAxis830[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis830);
   HT_after_alphaT_55_all->SetBinContent(20,7.061747);
   HT_after_alphaT_55_all->SetBinContent(21,6.101557);
   HT_after_alphaT_55_all->SetBinContent(22,2.666702);
   HT_after_alphaT_55_all->SetBinContent(23,1.505407);
   HT_after_alphaT_55_all->SetBinError(20,2.301105);
   HT_after_alphaT_55_all->SetBinError(21,1.759601);
   HT_after_alphaT_55_all->SetBinError(22,1.08051);
   HT_after_alphaT_55_all->SetBinError(23,0.7717329);
   HT_after_alphaT_55_all->SetEntries(39);
   HT_after_alphaT_55_all->SetFillColor(6);
   HT_after_alphaT_55_all->SetLineColor(6);
   HT_after_alphaT_55_all->SetLineWidth(3);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/25 (GeV)");
   ->Add(HT_after_alphaT_55_all,"");
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
   TLegendEntry *entry=leg->AddEntry("HT_after_alphaT_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("HT_after_alphaT_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_after_alphaT_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_after_alphaT_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_after_alphaT_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_after_alphaT_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_after_alphaT_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("HT_after_alphaT_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis831[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis831);
   HT_after_alphaT_55_all->SetBinContent(20,10);
   HT_after_alphaT_55_all->SetBinContent(21,3);
   HT_after_alphaT_55_all->SetBinContent(22,2);
   HT_after_alphaT_55_all->SetBinError(20,3.162278);
   HT_after_alphaT_55_all->SetBinError(21,2.14);
   HT_after_alphaT_55_all->SetBinError(22,2);
   HT_after_alphaT_55_all->SetMinimum(0.5);
   HT_after_alphaT_55_all->SetMaximum(100);
   HT_after_alphaT_55_all->SetEntries(16);
   HT_after_alphaT_55_all->SetLineWidth(2);
   HT_after_alphaT_55_all->SetMarkerStyle(20);
   HT_after_alphaT_55_all->SetMarkerSize(1.5);
   HT_after_alphaT_55_all->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 25 GeV");
   HT_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   HT_after_alphaT_55_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_475_575    Jet Multiplicity=all");
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
   canvasDiMuon_475_575/HT_after_alphaT_55_all->cd();
  
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
   Double_t xAxis832[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis832);
   HT_after_alphaT_55_all->SetBinContent(20,1.219704);
   HT_after_alphaT_55_all->SetBinContent(21,0.4653898);
   HT_after_alphaT_55_all->SetBinContent(22,0.6909924);
   HT_after_alphaT_55_all->SetBinError(20,0.4282063);
   HT_after_alphaT_55_all->SetBinError(21,0.7649509);
   HT_after_alphaT_55_all->SetBinError(22,1.069742);
   HT_after_alphaT_55_all->SetMinimum(0);
   HT_after_alphaT_55_all->SetMaximum(2);
   HT_after_alphaT_55_all->SetEntries(5.968625);
   HT_after_alphaT_55_all->SetLineWidth(2);
   HT_after_alphaT_55_all->SetMarkerStyle(20);
   HT_after_alphaT_55_all->SetMarkerSize(1.5);
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   HT_after_alphaT_55_all->GetYaxis()->SetNdivisions(505);
   HT_after_alphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   HT_after_alphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   HT_after_alphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   HT_after_alphaT_55_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(80);
   gre->SetName("Graph_from_HT_after_alphaT_55_all");
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
   gre->SetPointError(19,12.5,0.2887224);
   gre->SetPoint(20,512.5,1);
   gre->SetPointError(20,12.5,0.2762344);
   gre->SetPoint(21,537.5,1);
   gre->SetPointError(21,12.5,0.3799325);
   gre->SetPoint(22,562.5,1);
   gre->SetPointError(22,12.5,0.4992151);
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
   
   TH1F *Graph_Graph_from_HT_after_alphaT_55_all139 = new TH1F("Graph_Graph_from_HT_after_alphaT_55_all139","",100,0,2200);
   Graph_Graph_from_HT_after_alphaT_55_all139->SetMinimum(0.4009419);
   Graph_Graph_from_HT_after_alphaT_55_all139->SetMaximum(1.599058);
   Graph_Graph_from_HT_after_alphaT_55_all139->SetDirectory(0);
   Graph_Graph_from_HT_after_alphaT_55_all139->SetStats(0);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_after_alphaT_55_all139->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_HT_after_alphaT_55_all139);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,1275,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis833[81] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500, 1525, 1550, 1575, 1600, 1625, 1650, 1675, 1700, 1725, 1750, 1775, 1800, 1825, 1850, 1875, 1900, 1925, 1950, 1975, 2000}; 
   
   TH1D *HT_after_alphaT_55_all = new TH1D("HT_after_alphaT_55_all","",80, xAxis833);
   HT_after_alphaT_55_all->SetBinContent(20,1.219704);
   HT_after_alphaT_55_all->SetBinContent(21,0.4653898);
   HT_after_alphaT_55_all->SetBinContent(22,0.6909924);
   HT_after_alphaT_55_all->SetBinError(20,0.4282063);
   HT_after_alphaT_55_all->SetBinError(21,0.7649509);
   HT_after_alphaT_55_all->SetBinError(22,1.069742);
   HT_after_alphaT_55_all->SetMinimum(0);
   HT_after_alphaT_55_all->SetMaximum(2);
   HT_after_alphaT_55_all->SetEntries(5.968625);
   HT_after_alphaT_55_all->SetLineWidth(2);
   HT_after_alphaT_55_all->SetMarkerStyle(20);
   HT_after_alphaT_55_all->SetMarkerSize(1.5);
   HT_after_alphaT_55_all->GetXaxis()->SetRange(1,51);
   HT_after_alphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   HT_after_alphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   HT_after_alphaT_55_all->GetYaxis()->SetNdivisions(505);
   HT_after_alphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   HT_after_alphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   HT_after_alphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   HT_after_alphaT_55_all->Draw("PSAME");
   d->Modified();
   canvasDiMuon_475_575/HT_after_alphaT_55_all->cd();
   canvasDiMuon_475_575/HT_after_alphaT_55_all->Modified();
   canvasDiMuon_475_575/HT_after_alphaT_55_all->cd();
   canvasDiMuon_475_575/HT_after_alphaT_55_all->SetSelected(canvasDiMuon_475_575/HT_after_alphaT_55_all);
}
