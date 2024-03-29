{
//=========Macro generated from canvas: canvasbtag_morethanzero_DiMuon_775_875/MT__all/cannameMT__all
//=========  (Thu May 10 12:47:41 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_DiMuon_775_875/MT__all = new TCanvas("canvasbtag_morethanzero_DiMuon_775_875/MT__all", "cannameMT__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->SetHighLightColor(2);
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->Range(0,0,1,1);
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->SetFillColor(0);
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->SetBorderMode(0);
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->SetBorderSize(2);
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->SetTickx(1);
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->SetTicky(1);
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-102.5,-0.4636588,922.5,1.162629);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5323[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5323);
   MT__all->SetBinContent(7,1);
   MT__all->SetBinError(7,1);
   MT__all->SetMinimum(0.5);
   MT__all->SetMaximum(10);
   MT__all->SetEntries(2);
   MT__all->SetLineWidth(2);
   MT__all->SetMarkerStyle(20);
   MT__all->SetMarkerSize(1.5);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->GetYaxis()->SetTitle("Events / 25 GeV");
   MT__all->GetYaxis()->SetTitleOffset(1.3);
   MT__all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_355 = new TH1F("_stack_355","",100,0,2000);
   _stack_355->SetMinimum(0.0004176552);
   _stack_355->SetMaximum(1.670621);
   _stack_355->SetDirectory(0);
   _stack_355->SetStats(0);
   _stack_355->GetXaxis()->SetLabelFont(42);
   _stack_355->GetXaxis()->SetLabelOffset(0.007);
   _stack_355->GetXaxis()->SetLabelSize(0.05);
   _stack_355->GetXaxis()->SetTitleSize(0.05);
   _stack_355->GetYaxis()->SetLabelFont(42);
   _stack_355->GetYaxis()->SetLabelOffset(0.007);
   _stack_355->GetYaxis()->SetLabelSize(0.05);
   _stack_355->GetZaxis()->SetLabelFont(42);
   _stack_355->GetZaxis()->SetLabelOffset(0.007);
   _stack_355->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_355);
   
   Double_t xAxis5324[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5324);
   MT__all->SetEntries(1);
   MT__all->SetFillColor(4);
   MT__all->SetLineColor(4);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
   Double_t xAxis5325[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5325);
   MT__all->SetEntries(1);
   MT__all->SetFillColor(5);
   MT__all->SetLineColor(5);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
   Double_t xAxis5326[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5326);
   MT__all->SetEntries(1);
   MT__all->SetFillColor(7);
   MT__all->SetLineColor(7);
   MT__all->SetLineStyle(10);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
   Double_t xAxis5327[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5327);
   MT__all->SetBinContent(1,0.01325921);
   MT__all->SetBinError(1,0.01325921);
   MT__all->SetEntries(2);
   MT__all->SetFillColor(44);
   MT__all->SetLineColor(44);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
   Double_t xAxis5328[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5328);
   MT__all->SetBinContent(4,0.03473175);
   MT__all->SetBinError(4,0.02455906);
   MT__all->SetEntries(3);
   MT__all->SetFillColor(40);
   MT__all->SetLineColor(40);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
   Double_t xAxis5329[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5329);
   MT__all->SetBinContent(4,0.01514226);
   MT__all->SetBinContent(9,0.1493596);
   MT__all->SetBinContent(18,0.2717112);
   MT__all->SetBinError(4,0.01514226);
   MT__all->SetBinError(9,0.1493596);
   MT__all->SetBinError(18,0.2717112);
   MT__all->SetEntries(4);
   MT__all->SetFillColor(2);
   MT__all->SetLineColor(2);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
   Double_t xAxis5330[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5330);
   MT__all->SetBinContent(1,0.2980766);
   MT__all->SetBinContent(3,0.03021939);
   MT__all->SetBinContent(11,0.522069);
   MT__all->SetBinError(1,0.2980766);
   MT__all->SetBinError(3,0.03021939);
   MT__all->SetBinError(11,0.522069);
   MT__all->SetEntries(4);
   MT__all->SetFillColor(6);
   MT__all->SetLineColor(6);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
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
   TLegendEntry *entry=leg->AddEntry("MT__all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("MT__all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MT__all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MT__all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MT__all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MT__all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MT__all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MT__all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis5331[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5331);
   MT__all->SetBinContent(7,1);
   MT__all->SetBinError(7,1);
   MT__all->SetMinimum(0.5);
   MT__all->SetMaximum(10);
   MT__all->SetEntries(2);
   MT__all->SetLineWidth(2);
   MT__all->SetMarkerStyle(20);
   MT__all->SetMarkerSize(1.5);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->GetYaxis()->SetTitle("Events / 25 GeV");
   MT__all->GetYaxis()->SetTitleOffset(1.3);
   MT__all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_DiMuon_775_875    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-102.5,-0.25,922.5,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis5332[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5332);
   MT__all->SetMinimum(0);
   MT__all->SetMaximum(2);
   MT__all->SetLineWidth(2);
   MT__all->SetMarkerStyle(20);
   MT__all->SetMarkerSize(1.5);
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->GetXaxis()->SetLabelSize(0.12);
   MT__all->GetYaxis()->SetTitle("Data/MC");
   MT__all->GetYaxis()->SetNdivisions(505);
   MT__all->GetYaxis()->SetLabelSize(0.11);
   MT__all->GetYaxis()->SetTitleSize(0.1);
   MT__all->GetYaxis()->SetTitleOffset(0.5);
   MT__all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(100);
   gre->SetName("Graph_from_MT__all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,10,1);
   gre->SetPointError(0,10,0.9583586);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,1);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.5784968);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,1);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,1);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,1);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,0);
   gre->SetPoint(19,390,1);
   gre->SetPointError(19,10,0);
   gre->SetPoint(20,410,1);
   gre->SetPointError(20,10,0);
   gre->SetPoint(21,430,1);
   gre->SetPointError(21,10,0);
   gre->SetPoint(22,450,1);
   gre->SetPointError(22,10,0);
   gre->SetPoint(23,470,1);
   gre->SetPointError(23,10,0);
   gre->SetPoint(24,490,1);
   gre->SetPointError(24,10,0);
   gre->SetPoint(25,510,1);
   gre->SetPointError(25,10,0);
   gre->SetPoint(26,530,1);
   gre->SetPointError(26,10,0);
   gre->SetPoint(27,550,1);
   gre->SetPointError(27,10,0);
   gre->SetPoint(28,570,1);
   gre->SetPointError(28,10,0);
   gre->SetPoint(29,590,1);
   gre->SetPointError(29,10,0);
   gre->SetPoint(30,610,1);
   gre->SetPointError(30,10,0);
   gre->SetPoint(31,630,1);
   gre->SetPointError(31,10,0);
   gre->SetPoint(32,650,1);
   gre->SetPointError(32,10,0);
   gre->SetPoint(33,670,1);
   gre->SetPointError(33,10,0);
   gre->SetPoint(34,690,1);
   gre->SetPointError(34,10,0);
   gre->SetPoint(35,710,1);
   gre->SetPointError(35,10,0);
   gre->SetPoint(36,730,1);
   gre->SetPointError(36,10,0);
   gre->SetPoint(37,750,1);
   gre->SetPointError(37,10,0);
   gre->SetPoint(38,770,1);
   gre->SetPointError(38,10,0);
   gre->SetPoint(39,790,1);
   gre->SetPointError(39,10,0);
   gre->SetPoint(40,810,1);
   gre->SetPointError(40,10,0);
   gre->SetPoint(41,830,1);
   gre->SetPointError(41,10,0);
   gre->SetPoint(42,850,1);
   gre->SetPointError(42,10,0);
   gre->SetPoint(43,870,1);
   gre->SetPointError(43,10,0);
   gre->SetPoint(44,890,1);
   gre->SetPointError(44,10,0);
   gre->SetPoint(45,910,1);
   gre->SetPointError(45,10,0);
   gre->SetPoint(46,930,1);
   gre->SetPointError(46,10,0);
   gre->SetPoint(47,950,1);
   gre->SetPointError(47,10,0);
   gre->SetPoint(48,970,1);
   gre->SetPointError(48,10,0);
   gre->SetPoint(49,990,1);
   gre->SetPointError(49,10,0);
   gre->SetPoint(50,1010,1);
   gre->SetPointError(50,10,0);
   gre->SetPoint(51,1030,1);
   gre->SetPointError(51,10,0);
   gre->SetPoint(52,1050,1);
   gre->SetPointError(52,10,0);
   gre->SetPoint(53,1070,1);
   gre->SetPointError(53,10,0);
   gre->SetPoint(54,1090,1);
   gre->SetPointError(54,10,0);
   gre->SetPoint(55,1110,1);
   gre->SetPointError(55,10,0);
   gre->SetPoint(56,1130,1);
   gre->SetPointError(56,10,0);
   gre->SetPoint(57,1150,1);
   gre->SetPointError(57,10,0);
   gre->SetPoint(58,1170,1);
   gre->SetPointError(58,10,0);
   gre->SetPoint(59,1190,1);
   gre->SetPointError(59,10,0);
   gre->SetPoint(60,1210,1);
   gre->SetPointError(60,10,0);
   gre->SetPoint(61,1230,1);
   gre->SetPointError(61,10,0);
   gre->SetPoint(62,1250,1);
   gre->SetPointError(62,10,0);
   gre->SetPoint(63,1270,1);
   gre->SetPointError(63,10,0);
   gre->SetPoint(64,1290,1);
   gre->SetPointError(64,10,0);
   gre->SetPoint(65,1310,1);
   gre->SetPointError(65,10,0);
   gre->SetPoint(66,1330,1);
   gre->SetPointError(66,10,0);
   gre->SetPoint(67,1350,1);
   gre->SetPointError(67,10,0);
   gre->SetPoint(68,1370,1);
   gre->SetPointError(68,10,0);
   gre->SetPoint(69,1390,1);
   gre->SetPointError(69,10,0);
   gre->SetPoint(70,1410,1);
   gre->SetPointError(70,10,0);
   gre->SetPoint(71,1430,1);
   gre->SetPointError(71,10,0);
   gre->SetPoint(72,1450,1);
   gre->SetPointError(72,10,0);
   gre->SetPoint(73,1470,1);
   gre->SetPointError(73,10,0);
   gre->SetPoint(74,1490,1);
   gre->SetPointError(74,10,0);
   gre->SetPoint(75,1510,1);
   gre->SetPointError(75,10,0);
   gre->SetPoint(76,1530,1);
   gre->SetPointError(76,10,0);
   gre->SetPoint(77,1550,1);
   gre->SetPointError(77,10,0);
   gre->SetPoint(78,1570,1);
   gre->SetPointError(78,10,0);
   gre->SetPoint(79,1590,1);
   gre->SetPointError(79,10,0);
   gre->SetPoint(80,1610,1);
   gre->SetPointError(80,10,0);
   gre->SetPoint(81,1630,1);
   gre->SetPointError(81,10,0);
   gre->SetPoint(82,1650,1);
   gre->SetPointError(82,10,0);
   gre->SetPoint(83,1670,1);
   gre->SetPointError(83,10,0);
   gre->SetPoint(84,1690,1);
   gre->SetPointError(84,10,0);
   gre->SetPoint(85,1710,1);
   gre->SetPointError(85,10,0);
   gre->SetPoint(86,1730,1);
   gre->SetPointError(86,10,0);
   gre->SetPoint(87,1750,1);
   gre->SetPointError(87,10,0);
   gre->SetPoint(88,1770,1);
   gre->SetPointError(88,10,0);
   gre->SetPoint(89,1790,1);
   gre->SetPointError(89,10,0);
   gre->SetPoint(90,1810,1);
   gre->SetPointError(90,10,0);
   gre->SetPoint(91,1830,1);
   gre->SetPointError(91,10,0);
   gre->SetPoint(92,1850,1);
   gre->SetPointError(92,10,0);
   gre->SetPoint(93,1870,1);
   gre->SetPointError(93,10,0);
   gre->SetPoint(94,1890,1);
   gre->SetPointError(94,10,0);
   gre->SetPoint(95,1910,1);
   gre->SetPointError(95,10,0);
   gre->SetPoint(96,1930,1);
   gre->SetPointError(96,10,0);
   gre->SetPoint(97,1950,1);
   gre->SetPointError(97,10,0);
   gre->SetPoint(98,1970,1);
   gre->SetPointError(98,10,0);
   gre->SetPoint(99,1990,1);
   gre->SetPointError(99,10,0);
   
   TH1F *Graph_Graph_from_MT__all889 = new TH1F("Graph_Graph_from_MT__all889","",100,0,2200);
   Graph_Graph_from_MT__all889->SetMinimum(0);
   Graph_Graph_from_MT__all889->SetMaximum(2.2);
   Graph_Graph_from_MT__all889->SetDirectory(0);
   Graph_Graph_from_MT__all889->SetStats(0);
   Graph_Graph_from_MT__all889->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all889->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all889->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all889->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MT__all889->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all889->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all889->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all889->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all889->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all889->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MT__all889);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,820,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5333[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5333);
   MT__all->SetMinimum(0);
   MT__all->SetMaximum(2);
   MT__all->SetLineWidth(2);
   MT__all->SetMarkerStyle(20);
   MT__all->SetMarkerSize(1.5);
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->GetXaxis()->SetLabelSize(0.12);
   MT__all->GetYaxis()->SetTitle("Data/MC");
   MT__all->GetYaxis()->SetNdivisions(505);
   MT__all->GetYaxis()->SetLabelSize(0.11);
   MT__all->GetYaxis()->SetTitleSize(0.1);
   MT__all->GetYaxis()->SetTitleOffset(0.5);
   MT__all->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->cd();
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->Modified();
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->cd();
   canvasbtag_morethanzero_DiMuon_775_875/MT__all->SetSelected(canvasbtag_morethanzero_DiMuon_775_875/MT__all);
}
