{
//=========Macro generated from canvas: canvasbtag_morethanzero_DiMuon_875/MT__all/cannameMT__all
//=========  (Thu May 10 12:47:52 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_DiMuon_875/MT__all = new TCanvas("canvasbtag_morethanzero_DiMuon_875/MT__all", "cannameMT__all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_DiMuon_875/MT__all->SetHighLightColor(2);
   canvasbtag_morethanzero_DiMuon_875/MT__all->Range(0,0,1,1);
   canvasbtag_morethanzero_DiMuon_875/MT__all->SetFillColor(0);
   canvasbtag_morethanzero_DiMuon_875/MT__all->SetBorderMode(0);
   canvasbtag_morethanzero_DiMuon_875/MT__all->SetBorderSize(2);
   canvasbtag_morethanzero_DiMuon_875/MT__all->SetTickx(1);
   canvasbtag_morethanzero_DiMuon_875/MT__all->SetTicky(1);
   canvasbtag_morethanzero_DiMuon_875/MT__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-102.5,-0.5012875,922.5,1.501288);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5671[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5671);
   MT__all->SetBinContent(1,2);
   MT__all->SetBinContent(4,1);
   MT__all->SetBinContent(7,2);
   MT__all->SetBinContent(15,1);
   MT__all->SetBinError(1,2);
   MT__all->SetBinError(4,1);
   MT__all->SetBinError(7,2);
   MT__all->SetBinError(15,1);
   MT__all->SetMinimum(0.5);
   MT__all->SetMaximum(20);
   MT__all->SetEntries(7);
   MT__all->SetLineWidth(2);
   MT__all->SetMarkerStyle(20);
   MT__all->SetMarkerSize(1.5);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->GetYaxis()->SetTitle("Events / 25 GeV");
   MT__all->GetYaxis()->SetTitleOffset(1.3);
   MT__all->Draw("PE0");
   Double_t xAxis5672[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5672);
   MT__all->SetEntries(1);
   MT__all->SetLineColor(4);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("HISTSAME");
   Double_t xAxis5673[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5673);
   MT__all->SetBinContent(1,0.4634214);
   MT__all->SetBinContent(2,0.2615972);
   MT__all->SetBinContent(6,0.1493596);
   MT__all->SetBinError(1,0.4634214);
   MT__all->SetBinError(2,0.2615972);
   MT__all->SetBinError(6,0.1493596);
   MT__all->SetEntries(4);
   MT__all->SetLineColor(2);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("HISTSAME");
   Double_t xAxis5674[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5674);
   MT__all->SetEntries(1);
   MT__all->SetLineColor(5);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("HISTSAME");
   Double_t xAxis5675[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5675);
   MT__all->SetBinContent(6,0.7811923);
   MT__all->SetBinContent(8,0.1608371);
   MT__all->SetBinContent(13,0.4696786);
   MT__all->SetBinError(6,0.7811923);
   MT__all->SetBinError(8,0.1608371);
   MT__all->SetBinError(13,0.4696786);
   MT__all->SetEntries(4);
   MT__all->SetLineColor(6);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("HISTSAME");
   Double_t xAxis5676[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5676);
   MT__all->SetBinContent(9,0.07211263);
   MT__all->SetBinError(9,0.07211263);
   MT__all->SetEntries(2);
   MT__all->SetLineColor(40);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("HISTSAME");
   Double_t xAxis5677[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5677);
   MT__all->SetBinContent(1,0.01325921);
   MT__all->SetBinContent(12,0.006708972);
   MT__all->SetBinError(1,0.01325921);
   MT__all->SetBinError(12,0.006708972);
   MT__all->SetEntries(3);
   MT__all->SetLineColor(44);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("HISTSAME");
   Double_t xAxis5678[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5678);
   MT__all->SetEntries(1);
   MT__all->SetLineColor(7);
   MT__all->SetLineStyle(10);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("HISTSAME");
   Double_t xAxis5679[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5679);
   MT__all->SetBinContent(1,0.4766807);
   MT__all->SetBinContent(2,0.2615972);
   MT__all->SetBinContent(6,0.9305519);
   MT__all->SetBinContent(8,0.1608371);
   MT__all->SetBinContent(9,0.07211263);
   MT__all->SetBinContent(12,0.006708972);
   MT__all->SetBinContent(13,0.4696786);
   MT__all->SetBinError(1,0.4636111);
   MT__all->SetBinError(2,0.2615972);
   MT__all->SetBinError(6,0.7953425);
   MT__all->SetBinError(8,0.1608371);
   MT__all->SetBinError(9,0.07211263);
   MT__all->SetBinError(12,0.006708972);
   MT__all->SetBinError(13,0.4696786);
   MT__all->SetEntries(16);
   MT__all->SetLineColor(3);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(100);
   gre->SetName("Graph_from_MT__all");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   gre->SetPoint(0,10,0);
   gre->SetPointError(0,10,0);
   gre->SetPoint(1,30,0);
   gre->SetPointError(1,10,0);
   gre->SetPoint(2,50,0);
   gre->SetPointError(2,10,0);
   gre->SetPoint(3,70,0);
   gre->SetPointError(3,10,0);
   gre->SetPoint(4,90,0);
   gre->SetPointError(4,10,0);
   gre->SetPoint(5,110,0);
   gre->SetPointError(5,10,0);
   gre->SetPoint(6,130,0);
   gre->SetPointError(6,10,0);
   gre->SetPoint(7,150,0);
   gre->SetPointError(7,10,0);
   gre->SetPoint(8,170,0);
   gre->SetPointError(8,10,0);
   gre->SetPoint(9,190,0);
   gre->SetPointError(9,10,0);
   gre->SetPoint(10,210,0);
   gre->SetPointError(10,10,0);
   gre->SetPoint(11,230,0);
   gre->SetPointError(11,10,0);
   gre->SetPoint(12,250,0);
   gre->SetPointError(12,10,0);
   gre->SetPoint(13,270,0);
   gre->SetPointError(13,10,0);
   gre->SetPoint(14,290,0);
   gre->SetPointError(14,10,0);
   gre->SetPoint(15,310,0);
   gre->SetPointError(15,10,0);
   gre->SetPoint(16,330,0);
   gre->SetPointError(16,10,0);
   gre->SetPoint(17,350,0);
   gre->SetPointError(17,10,0);
   gre->SetPoint(18,370,0);
   gre->SetPointError(18,10,0);
   gre->SetPoint(19,390,0);
   gre->SetPointError(19,10,0);
   gre->SetPoint(20,410,0);
   gre->SetPointError(20,10,0);
   gre->SetPoint(21,430,0);
   gre->SetPointError(21,10,0);
   gre->SetPoint(22,450,0);
   gre->SetPointError(22,10,0);
   gre->SetPoint(23,470,0);
   gre->SetPointError(23,10,0);
   gre->SetPoint(24,490,0);
   gre->SetPointError(24,10,0);
   gre->SetPoint(25,510,0);
   gre->SetPointError(25,10,0);
   gre->SetPoint(26,530,0);
   gre->SetPointError(26,10,0);
   gre->SetPoint(27,550,0);
   gre->SetPointError(27,10,0);
   gre->SetPoint(28,570,0);
   gre->SetPointError(28,10,0);
   gre->SetPoint(29,590,0);
   gre->SetPointError(29,10,0);
   gre->SetPoint(30,610,0);
   gre->SetPointError(30,10,0);
   gre->SetPoint(31,630,0);
   gre->SetPointError(31,10,0);
   gre->SetPoint(32,650,0);
   gre->SetPointError(32,10,0);
   gre->SetPoint(33,670,0);
   gre->SetPointError(33,10,0);
   gre->SetPoint(34,690,0);
   gre->SetPointError(34,10,0);
   gre->SetPoint(35,710,0);
   gre->SetPointError(35,10,0);
   gre->SetPoint(36,730,0);
   gre->SetPointError(36,10,0);
   gre->SetPoint(37,750,0);
   gre->SetPointError(37,10,0);
   gre->SetPoint(38,770,0);
   gre->SetPointError(38,10,0);
   gre->SetPoint(39,790,0);
   gre->SetPointError(39,10,0);
   gre->SetPoint(40,810,0);
   gre->SetPointError(40,10,0);
   gre->SetPoint(41,830,0);
   gre->SetPointError(41,10,0);
   gre->SetPoint(42,850,0);
   gre->SetPointError(42,10,0);
   gre->SetPoint(43,870,0);
   gre->SetPointError(43,10,0);
   gre->SetPoint(44,890,0);
   gre->SetPointError(44,10,0);
   gre->SetPoint(45,910,0);
   gre->SetPointError(45,10,0);
   gre->SetPoint(46,930,0);
   gre->SetPointError(46,10,0);
   gre->SetPoint(47,950,0);
   gre->SetPointError(47,10,0);
   gre->SetPoint(48,970,0);
   gre->SetPointError(48,10,0);
   gre->SetPoint(49,990,0);
   gre->SetPointError(49,10,0);
   gre->SetPoint(50,1010,0);
   gre->SetPointError(50,10,0);
   gre->SetPoint(51,1030,0);
   gre->SetPointError(51,10,0);
   gre->SetPoint(52,1050,0);
   gre->SetPointError(52,10,0);
   gre->SetPoint(53,1070,0);
   gre->SetPointError(53,10,0);
   gre->SetPoint(54,1090,0);
   gre->SetPointError(54,10,0);
   gre->SetPoint(55,1110,0);
   gre->SetPointError(55,10,0);
   gre->SetPoint(56,1130,0);
   gre->SetPointError(56,10,0);
   gre->SetPoint(57,1150,0);
   gre->SetPointError(57,10,0);
   gre->SetPoint(58,1170,0);
   gre->SetPointError(58,10,0);
   gre->SetPoint(59,1190,0);
   gre->SetPointError(59,10,0);
   gre->SetPoint(60,1210,0);
   gre->SetPointError(60,10,0);
   gre->SetPoint(61,1230,0);
   gre->SetPointError(61,10,0);
   gre->SetPoint(62,1250,0);
   gre->SetPointError(62,10,0);
   gre->SetPoint(63,1270,0);
   gre->SetPointError(63,10,0);
   gre->SetPoint(64,1290,0);
   gre->SetPointError(64,10,0);
   gre->SetPoint(65,1310,0);
   gre->SetPointError(65,10,0);
   gre->SetPoint(66,1330,0);
   gre->SetPointError(66,10,0);
   gre->SetPoint(67,1350,0);
   gre->SetPointError(67,10,0);
   gre->SetPoint(68,1370,0);
   gre->SetPointError(68,10,0);
   gre->SetPoint(69,1390,0);
   gre->SetPointError(69,10,0);
   gre->SetPoint(70,1410,0);
   gre->SetPointError(70,10,0);
   gre->SetPoint(71,1430,0);
   gre->SetPointError(71,10,0);
   gre->SetPoint(72,1450,0);
   gre->SetPointError(72,10,0);
   gre->SetPoint(73,1470,0);
   gre->SetPointError(73,10,0);
   gre->SetPoint(74,1490,0);
   gre->SetPointError(74,10,0);
   gre->SetPoint(75,1510,0);
   gre->SetPointError(75,10,0);
   gre->SetPoint(76,1530,0);
   gre->SetPointError(76,10,0);
   gre->SetPoint(77,1550,0);
   gre->SetPointError(77,10,0);
   gre->SetPoint(78,1570,0);
   gre->SetPointError(78,10,0);
   gre->SetPoint(79,1590,0);
   gre->SetPointError(79,10,0);
   gre->SetPoint(80,1610,0);
   gre->SetPointError(80,10,0);
   gre->SetPoint(81,1630,0);
   gre->SetPointError(81,10,0);
   gre->SetPoint(82,1650,0);
   gre->SetPointError(82,10,0);
   gre->SetPoint(83,1670,0);
   gre->SetPointError(83,10,0);
   gre->SetPoint(84,1690,0);
   gre->SetPointError(84,10,0);
   gre->SetPoint(85,1710,0);
   gre->SetPointError(85,10,0);
   gre->SetPoint(86,1730,0);
   gre->SetPointError(86,10,0);
   gre->SetPoint(87,1750,0);
   gre->SetPointError(87,10,0);
   gre->SetPoint(88,1770,0);
   gre->SetPointError(88,10,0);
   gre->SetPoint(89,1790,0);
   gre->SetPointError(89,10,0);
   gre->SetPoint(90,1810,0);
   gre->SetPointError(90,10,0);
   gre->SetPoint(91,1830,0);
   gre->SetPointError(91,10,0);
   gre->SetPoint(92,1850,0);
   gre->SetPointError(92,10,0);
   gre->SetPoint(93,1870,0);
   gre->SetPointError(93,10,0);
   gre->SetPoint(94,1890,0);
   gre->SetPointError(94,10,0);
   gre->SetPoint(95,1910,0);
   gre->SetPointError(95,10,0);
   gre->SetPoint(96,1930,0);
   gre->SetPointError(96,10,0);
   gre->SetPoint(97,1950,0);
   gre->SetPointError(97,10,0);
   gre->SetPoint(98,1970,0);
   gre->SetPointError(98,10,0);
   gre->SetPoint(99,1990,0);
   gre->SetPointError(99,10,0);
   
   TH1F *Graph_Graph_from_MT__all946 = new TH1F("Graph_Graph_from_MT__all946","",100,0,2200);
   Graph_Graph_from_MT__all946->SetMinimum(0.0011);
   Graph_Graph_from_MT__all946->SetMaximum(1.1);
   Graph_Graph_from_MT__all946->SetDirectory(0);
   Graph_Graph_from_MT__all946->SetStats(0);
   Graph_Graph_from_MT__all946->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all946->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all946->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all946->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MT__all946->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all946->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all946->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all946->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all946->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all946->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MT__all946);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(100);
   gre->SetName("Graph_from_MT__all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,10,0.4766807);
   gre->SetPointError(0,10,0.4636111);
   gre->SetPoint(1,30,0.2615972);
   gre->SetPointError(1,10,0.2615972);
   gre->SetPoint(2,50,0);
   gre->SetPointError(2,10,0);
   gre->SetPoint(3,70,0);
   gre->SetPointError(3,10,0);
   gre->SetPoint(4,90,0);
   gre->SetPointError(4,10,0);
   gre->SetPoint(5,110,0.9305519);
   gre->SetPointError(5,10,0.7953425);
   gre->SetPoint(6,130,0);
   gre->SetPointError(6,10,0);
   gre->SetPoint(7,150,0.1608371);
   gre->SetPointError(7,10,0.1608371);
   gre->SetPoint(8,170,0.07211263);
   gre->SetPointError(8,10,0.07211263);
   gre->SetPoint(9,190,0);
   gre->SetPointError(9,10,0);
   gre->SetPoint(10,210,0);
   gre->SetPointError(10,10,0);
   gre->SetPoint(11,230,0.006708972);
   gre->SetPointError(11,10,0.006708972);
   gre->SetPoint(12,250,0.4696786);
   gre->SetPointError(12,10,0.4696786);
   gre->SetPoint(13,270,0);
   gre->SetPointError(13,10,0);
   gre->SetPoint(14,290,0);
   gre->SetPointError(14,10,0);
   gre->SetPoint(15,310,0);
   gre->SetPointError(15,10,0);
   gre->SetPoint(16,330,0);
   gre->SetPointError(16,10,0);
   gre->SetPoint(17,350,0);
   gre->SetPointError(17,10,0);
   gre->SetPoint(18,370,0);
   gre->SetPointError(18,10,0);
   gre->SetPoint(19,390,0);
   gre->SetPointError(19,10,0);
   gre->SetPoint(20,410,0);
   gre->SetPointError(20,10,0);
   gre->SetPoint(21,430,0);
   gre->SetPointError(21,10,0);
   gre->SetPoint(22,450,0);
   gre->SetPointError(22,10,0);
   gre->SetPoint(23,470,0);
   gre->SetPointError(23,10,0);
   gre->SetPoint(24,490,0);
   gre->SetPointError(24,10,0);
   gre->SetPoint(25,510,0);
   gre->SetPointError(25,10,0);
   gre->SetPoint(26,530,0);
   gre->SetPointError(26,10,0);
   gre->SetPoint(27,550,0);
   gre->SetPointError(27,10,0);
   gre->SetPoint(28,570,0);
   gre->SetPointError(28,10,0);
   gre->SetPoint(29,590,0);
   gre->SetPointError(29,10,0);
   gre->SetPoint(30,610,0);
   gre->SetPointError(30,10,0);
   gre->SetPoint(31,630,0);
   gre->SetPointError(31,10,0);
   gre->SetPoint(32,650,0);
   gre->SetPointError(32,10,0);
   gre->SetPoint(33,670,0);
   gre->SetPointError(33,10,0);
   gre->SetPoint(34,690,0);
   gre->SetPointError(34,10,0);
   gre->SetPoint(35,710,0);
   gre->SetPointError(35,10,0);
   gre->SetPoint(36,730,0);
   gre->SetPointError(36,10,0);
   gre->SetPoint(37,750,0);
   gre->SetPointError(37,10,0);
   gre->SetPoint(38,770,0);
   gre->SetPointError(38,10,0);
   gre->SetPoint(39,790,0);
   gre->SetPointError(39,10,0);
   gre->SetPoint(40,810,0);
   gre->SetPointError(40,10,0);
   gre->SetPoint(41,830,0);
   gre->SetPointError(41,10,0);
   gre->SetPoint(42,850,0);
   gre->SetPointError(42,10,0);
   gre->SetPoint(43,870,0);
   gre->SetPointError(43,10,0);
   gre->SetPoint(44,890,0);
   gre->SetPointError(44,10,0);
   gre->SetPoint(45,910,0);
   gre->SetPointError(45,10,0);
   gre->SetPoint(46,930,0);
   gre->SetPointError(46,10,0);
   gre->SetPoint(47,950,0);
   gre->SetPointError(47,10,0);
   gre->SetPoint(48,970,0);
   gre->SetPointError(48,10,0);
   gre->SetPoint(49,990,0);
   gre->SetPointError(49,10,0);
   gre->SetPoint(50,1010,0);
   gre->SetPointError(50,10,0);
   gre->SetPoint(51,1030,0);
   gre->SetPointError(51,10,0);
   gre->SetPoint(52,1050,0);
   gre->SetPointError(52,10,0);
   gre->SetPoint(53,1070,0);
   gre->SetPointError(53,10,0);
   gre->SetPoint(54,1090,0);
   gre->SetPointError(54,10,0);
   gre->SetPoint(55,1110,0);
   gre->SetPointError(55,10,0);
   gre->SetPoint(56,1130,0);
   gre->SetPointError(56,10,0);
   gre->SetPoint(57,1150,0);
   gre->SetPointError(57,10,0);
   gre->SetPoint(58,1170,0);
   gre->SetPointError(58,10,0);
   gre->SetPoint(59,1190,0);
   gre->SetPointError(59,10,0);
   gre->SetPoint(60,1210,0);
   gre->SetPointError(60,10,0);
   gre->SetPoint(61,1230,0);
   gre->SetPointError(61,10,0);
   gre->SetPoint(62,1250,0);
   gre->SetPointError(62,10,0);
   gre->SetPoint(63,1270,0);
   gre->SetPointError(63,10,0);
   gre->SetPoint(64,1290,0);
   gre->SetPointError(64,10,0);
   gre->SetPoint(65,1310,0);
   gre->SetPointError(65,10,0);
   gre->SetPoint(66,1330,0);
   gre->SetPointError(66,10,0);
   gre->SetPoint(67,1350,0);
   gre->SetPointError(67,10,0);
   gre->SetPoint(68,1370,0);
   gre->SetPointError(68,10,0);
   gre->SetPoint(69,1390,0);
   gre->SetPointError(69,10,0);
   gre->SetPoint(70,1410,0);
   gre->SetPointError(70,10,0);
   gre->SetPoint(71,1430,0);
   gre->SetPointError(71,10,0);
   gre->SetPoint(72,1450,0);
   gre->SetPointError(72,10,0);
   gre->SetPoint(73,1470,0);
   gre->SetPointError(73,10,0);
   gre->SetPoint(74,1490,0);
   gre->SetPointError(74,10,0);
   gre->SetPoint(75,1510,0);
   gre->SetPointError(75,10,0);
   gre->SetPoint(76,1530,0);
   gre->SetPointError(76,10,0);
   gre->SetPoint(77,1550,0);
   gre->SetPointError(77,10,0);
   gre->SetPoint(78,1570,0);
   gre->SetPointError(78,10,0);
   gre->SetPoint(79,1590,0);
   gre->SetPointError(79,10,0);
   gre->SetPoint(80,1610,0);
   gre->SetPointError(80,10,0);
   gre->SetPoint(81,1630,0);
   gre->SetPointError(81,10,0);
   gre->SetPoint(82,1650,0);
   gre->SetPointError(82,10,0);
   gre->SetPoint(83,1670,0);
   gre->SetPointError(83,10,0);
   gre->SetPoint(84,1690,0);
   gre->SetPointError(84,10,0);
   gre->SetPoint(85,1710,0);
   gre->SetPointError(85,10,0);
   gre->SetPoint(86,1730,0);
   gre->SetPointError(86,10,0);
   gre->SetPoint(87,1750,0);
   gre->SetPointError(87,10,0);
   gre->SetPoint(88,1770,0);
   gre->SetPointError(88,10,0);
   gre->SetPoint(89,1790,0);
   gre->SetPointError(89,10,0);
   gre->SetPoint(90,1810,0);
   gre->SetPointError(90,10,0);
   gre->SetPoint(91,1830,0);
   gre->SetPointError(91,10,0);
   gre->SetPoint(92,1850,0);
   gre->SetPointError(92,10,0);
   gre->SetPoint(93,1870,0);
   gre->SetPointError(93,10,0);
   gre->SetPoint(94,1890,0);
   gre->SetPointError(94,10,0);
   gre->SetPoint(95,1910,0);
   gre->SetPointError(95,10,0);
   gre->SetPoint(96,1930,0);
   gre->SetPointError(96,10,0);
   gre->SetPoint(97,1950,0);
   gre->SetPointError(97,10,0);
   gre->SetPoint(98,1970,0);
   gre->SetPointError(98,10,0);
   gre->SetPoint(99,1990,0);
   gre->SetPointError(99,10,0);
   
   TH1F *Graph_Graph_from_MT__all947 = new TH1F("Graph_Graph_from_MT__all947","",100,0,2200);
   Graph_Graph_from_MT__all947->SetMinimum(0.001898484);
   Graph_Graph_from_MT__all947->SetMaximum(1.898484);
   Graph_Graph_from_MT__all947->SetDirectory(0);
   Graph_Graph_from_MT__all947->SetStats(0);
   Graph_Graph_from_MT__all947->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all947->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all947->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all947->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MT__all947->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all947->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all947->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all947->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all947->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all947->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MT__all947);
   
   gre->Draw("2");
   
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
   entry=leg->AddEntry("MT__all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_DiMuon_875    Jet Multiplicity=all");
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
   Double_t xAxis5680[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5680);
   MT__all->SetBinContent(1,2);
   MT__all->SetBinContent(4,1);
   MT__all->SetBinContent(7,2);
   MT__all->SetBinContent(15,1);
   MT__all->SetBinError(1,2);
   MT__all->SetBinError(4,1);
   MT__all->SetBinError(7,2);
   MT__all->SetBinError(15,1);
   MT__all->SetMinimum(0.5);
   MT__all->SetMaximum(20);
   MT__all->SetEntries(7);
   MT__all->SetLineWidth(2);
   MT__all->SetMarkerStyle(20);
   MT__all->SetMarkerSize(1.5);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->GetYaxis()->SetTitle("Events / 25 GeV");
   MT__all->GetYaxis()->SetTitleOffset(1.3);
   MT__all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_DiMuon_875/MT__all->cd();
  
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
   Double_t xAxis5681[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5681);
   MT__all->SetBinContent(1,4.195681);
   MT__all->SetBinError(1,1.394961);
   MT__all->SetMinimum(0);
   MT__all->SetMaximum(2);
   MT__all->SetEntries(0.5138968);
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
   
   gre = new TGraphErrors(100);
   gre->SetName("Graph_from_MT__all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,10,1);
   gre->SetPointError(0,10,0.9725821);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,1);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.8546998);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,1);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,1);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,1);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,1);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0);
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
   
   TH1F *Graph_Graph_from_MT__all948 = new TH1F("Graph_Graph_from_MT__all948","",100,0,2200);
   Graph_Graph_from_MT__all948->SetMinimum(0);
   Graph_Graph_from_MT__all948->SetMaximum(2.2);
   Graph_Graph_from_MT__all948->SetDirectory(0);
   Graph_Graph_from_MT__all948->SetStats(0);
   Graph_Graph_from_MT__all948->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all948->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all948->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all948->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MT__all948->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all948->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all948->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all948->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all948->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all948->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MT__all948);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,820,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5682[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis5682);
   MT__all->SetBinContent(1,4.195681);
   MT__all->SetBinError(1,1.394961);
   MT__all->SetMinimum(0);
   MT__all->SetMaximum(2);
   MT__all->SetEntries(0.5138968);
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
   canvasbtag_morethanzero_DiMuon_875/MT__all->cd();
   canvasbtag_morethanzero_DiMuon_875/MT__all->Modified();
   canvasbtag_morethanzero_DiMuon_875/MT__all->cd();
   canvasbtag_morethanzero_DiMuon_875/MT__all->SetSelected(canvasbtag_morethanzero_DiMuon_875/MT__all);
}
