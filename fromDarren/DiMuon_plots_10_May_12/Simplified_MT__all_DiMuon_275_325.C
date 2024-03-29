{
//=========Macro generated from canvas: canvasDiMuon_275_325/MT__all/cannameMT__all
//=========  (Thu May 10 12:46:22 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_275_325/MT__all = new TCanvas("canvasDiMuon_275_325/MT__all", "cannameMT__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasDiMuon_275_325/MT__all->SetHighLightColor(2);
   canvasDiMuon_275_325/MT__all->Range(0,0,1,1);
   canvasDiMuon_275_325/MT__all->SetFillColor(0);
   canvasDiMuon_275_325/MT__all->SetBorderMode(0);
   canvasDiMuon_275_325/MT__all->SetBorderSize(2);
   canvasDiMuon_275_325/MT__all->SetTickx(1);
   canvasDiMuon_275_325/MT__all->SetTicky(1);
   canvasDiMuon_275_325/MT__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-102.5,-0.7293514,922.5,3.553863);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2814[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis2814);
   MT__all->SetBinContent(1,15);
   MT__all->SetBinContent(2,22);
   MT__all->SetBinContent(3,19);
   MT__all->SetBinContent(4,20);
   MT__all->SetBinContent(5,25);
   MT__all->SetBinContent(6,15);
   MT__all->SetBinContent(7,11);
   MT__all->SetBinContent(8,8);
   MT__all->SetBinContent(9,7);
   MT__all->SetBinContent(10,4);
   MT__all->SetBinContent(11,3);
   MT__all->SetBinContent(16,1);
   MT__all->SetBinContent(17,1);
   MT__all->SetBinError(1,3.872983);
   MT__all->SetBinError(2,4.690416);
   MT__all->SetBinError(3,4.358899);
   MT__all->SetBinError(4,4.472136);
   MT__all->SetBinError(5,5);
   MT__all->SetBinError(6,3.872983);
   MT__all->SetBinError(7,3.316625);
   MT__all->SetBinError(8,3.03);
   MT__all->SetBinError(9,2.86);
   MT__all->SetBinError(10,2.3);
   MT__all->SetBinError(11,2.14);
   MT__all->SetBinError(16,1);
   MT__all->SetBinError(17,1);
   MT__all->SetMinimum(0.5);
   MT__all->SetMaximum(1335.184);
   MT__all->SetEntries(152);
   MT__all->SetLineWidth(2);
   MT__all->SetMarkerStyle(20);
   MT__all->SetMarkerSize(1.5);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->GetYaxis()->SetTitle("Events / 25 GeV");
   MT__all->GetYaxis()->SetTitleOffset(1.3);
   MT__all->Draw("");
   Double_t xAxis2815[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis2815);
   MT__all->SetEntries(1);
   MT__all->SetLineColor(5);
   MT__all->SetLineWidth(3);
   MT__all->SetMarkerStyle(20);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_188 = new TH1F("_stack_188","",100,0,2000);
   _stack_188->SetMinimum(0.05692838);
   _stack_188->SetMaximum(227.7135);
   _stack_188->SetDirectory(0);
   _stack_188->SetStats(0);
   _stack_188->GetXaxis()->SetLabelFont(42);
   _stack_188->GetXaxis()->SetLabelOffset(0.007);
   _stack_188->GetXaxis()->SetLabelSize(0.05);
   _stack_188->GetXaxis()->SetTitleSize(0.05);
   _stack_188->GetYaxis()->SetLabelFont(42);
   _stack_188->GetYaxis()->SetLabelOffset(0.007);
   _stack_188->GetYaxis()->SetLabelSize(0.05);
   _stack_188->GetZaxis()->SetLabelFont(42);
   _stack_188->GetZaxis()->SetLabelOffset(0.007);
   _stack_188->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_188);
   
   Double_t xAxis2816[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis2816);
   MT__all->SetBinContent(1,100.2817);
   MT__all->SetBinContent(2,122.8001);
   MT__all->SetBinContent(3,133.5184);
   MT__all->SetBinContent(4,107.053);
   MT__all->SetBinContent(5,89.05413);
   MT__all->SetBinContent(6,58.96225);
   MT__all->SetBinContent(7,25.10385);
   MT__all->SetBinContent(8,15.17206);
   MT__all->SetBinContent(9,11.14537);
   MT__all->SetBinContent(10,9.532487);
   MT__all->SetBinContent(11,3.879261);
   MT__all->SetBinContent(12,1.764209);
   MT__all->SetBinContent(13,0.3274733);
   MT__all->SetBinContent(14,1.642516);
   MT__all->SetBinContent(15,0.007186324);
   MT__all->SetBinContent(16,0.734748);
   MT__all->SetBinContent(18,0.4071855);
   MT__all->SetBinContent(19,0.1493596);
   MT__all->SetBinContent(24,0.00324711);
   MT__all->SetBinError(1,7.104003);
   MT__all->SetBinError(2,8.05125);
   MT__all->SetBinError(3,8.802517);
   MT__all->SetBinError(4,7.501008);
   MT__all->SetBinError(5,7.028333);
   MT__all->SetBinError(6,5.610145);
   MT__all->SetBinError(7,3.392369);
   MT__all->SetBinError(8,2.708201);
   MT__all->SetBinError(9,2.263219);
   MT__all->SetBinError(10,2.564911);
   MT__all->SetBinError(11,1.351712);
   MT__all->SetBinError(12,0.8662833);
   MT__all->SetBinError(13,0.303726);
   MT__all->SetBinError(14,0.774232);
   MT__all->SetBinError(15,0.007186324);
   MT__all->SetBinError(16,0.5605573);
   MT__all->SetBinError(18,0.4071855);
   MT__all->SetBinError(19,0.1493596);
   MT__all->SetBinError(24,0.00324711);
   MT__all->SetEntries(2434);
   MT__all->SetLineColor(3);
   MT__all->SetLineWidth(3);
   MT__all->SetMarkerColor(3);
   MT__all->SetMarkerStyle(20);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
   Double_t xAxis2817[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis2817);
   MT__all->SetEntries(1);
   MT__all->SetLineColor(7);
   MT__all->SetLineStyle(10);
   MT__all->SetLineWidth(3);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   ->Add(MT__all,"");
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
   TLegendEntry *entry=leg->AddEntry("MT__all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("MT__all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MT__all","Combined EWK","L");
   entry->SetLineColor(3);
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
   Double_t xAxis2818[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis2818);
   MT__all->SetBinContent(1,15);
   MT__all->SetBinContent(2,22);
   MT__all->SetBinContent(3,19);
   MT__all->SetBinContent(4,20);
   MT__all->SetBinContent(5,25);
   MT__all->SetBinContent(6,15);
   MT__all->SetBinContent(7,11);
   MT__all->SetBinContent(8,8);
   MT__all->SetBinContent(9,7);
   MT__all->SetBinContent(10,4);
   MT__all->SetBinContent(11,3);
   MT__all->SetBinContent(16,1);
   MT__all->SetBinContent(17,1);
   MT__all->SetBinError(1,3.872983);
   MT__all->SetBinError(2,4.690416);
   MT__all->SetBinError(3,4.358899);
   MT__all->SetBinError(4,4.472136);
   MT__all->SetBinError(5,5);
   MT__all->SetBinError(6,3.872983);
   MT__all->SetBinError(7,3.316625);
   MT__all->SetBinError(8,3.03);
   MT__all->SetBinError(9,2.86);
   MT__all->SetBinError(10,2.3);
   MT__all->SetBinError(11,2.14);
   MT__all->SetBinError(16,1);
   MT__all->SetBinError(17,1);
   MT__all->SetMinimum(0.5);
   MT__all->SetMaximum(1335.184);
   MT__all->SetEntries(152);
   MT__all->SetLineWidth(2);
   MT__all->SetMarkerStyle(20);
   MT__all->SetMarkerSize(1.5);
   MT__all->GetXaxis()->SetTitle("M){T} [GeV]");
   MT__all->GetXaxis()->SetRange(1,41);
   MT__all->GetYaxis()->SetTitle("Events / 25 GeV");
   MT__all->GetYaxis()->SetTitleOffset(1.3);
   MT__all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_275_325/MT__all->cd();
  
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
   Double_t xAxis2819[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis2819);
   MT__all->SetBinContent(1,0.1495787);
   MT__all->SetBinContent(2,0.179153);
   MT__all->SetBinContent(3,0.1423024);
   MT__all->SetBinContent(4,0.1868233);
   MT__all->SetBinContent(5,0.2807281);
   MT__all->SetBinContent(6,0.2544001);
   MT__all->SetBinContent(7,0.4381797);
   MT__all->SetBinContent(8,0.527285);
   MT__all->SetBinContent(9,0.6280636);
   MT__all->SetBinContent(10,0.4196177);
   MT__all->SetBinContent(11,0.7733432);
   MT__all->SetBinContent(16,1.361011);
   MT__all->SetBinError(1,0.2677406);
   MT__all->SetBinError(2,0.2230542);
   MT__all->SetBinError(3,0.2387006);
   MT__all->SetBinError(4,0.2343279);
   MT__all->SetBinError(5,0.2150086);
   MT__all->SetBinError(6,0.2751724);
   MT__all->SetBinError(7,0.330409);
   MT__all->SetBinError(8,0.4187046);
   MT__all->SetBinError(9,0.4562515);
   MT__all->SetBinError(10,0.6348416);
   MT__all->SetBinError(11,0.7938884);
   MT__all->SetBinError(16,1.257797);
   MT__all->SetMinimum(0);
   MT__all->SetMaximum(2);
   MT__all->SetEntries(8.04525);
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
   gre->SetPointError(0,10,0.07084049);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.0655639);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.06592735);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.07006814);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.07892203);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.09514809);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.1351334);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.1784992);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.2030637);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.2690704);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.3484457);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.4910322);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.9274831);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.4713696);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,1);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.7629246);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,1);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,1);
   gre->SetPoint(19,390,1);
   gre->SetPointError(19,10,0);
   gre->SetPoint(20,410,1);
   gre->SetPointError(20,10,0);
   gre->SetPoint(21,430,1);
   gre->SetPointError(21,10,0);
   gre->SetPoint(22,450,1);
   gre->SetPointError(22,10,0);
   gre->SetPoint(23,470,1);
   gre->SetPointError(23,10,1);
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
   
   TH1F *Graph_Graph_from_MT__all470 = new TH1F("Graph_Graph_from_MT__all470","",100,0,2200);
   Graph_Graph_from_MT__all470->SetMinimum(-0.2);
   Graph_Graph_from_MT__all470->SetMaximum(2.2);
   Graph_Graph_from_MT__all470->SetDirectory(0);
   Graph_Graph_from_MT__all470->SetStats(0);
   Graph_Graph_from_MT__all470->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all470->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all470->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all470->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MT__all470->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all470->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all470->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MT__all470->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MT__all470->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MT__all470->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MT__all470);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,820,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2820[101] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640, 660, 680, 700, 720, 740, 760, 780, 800, 820, 840, 860, 880, 900, 920, 940, 960, 980, 1000, 1020, 1040, 1060, 1080, 1100, 1120, 1140, 1160, 1180, 1200, 1220, 1240, 1260, 1280, 1300, 1320, 1340, 1360, 1380, 1400, 1420, 1440, 1460, 1480, 1500, 1520, 1540, 1560, 1580, 1600, 1620, 1640, 1660, 1680, 1700, 1720, 1740, 1760, 1780, 1800, 1820, 1840, 1860, 1880, 1900, 1920, 1940, 1960, 1980, 2000}; 
   
   TH1D *MT__all = new TH1D("MT__all","",100, xAxis2820);
   MT__all->SetBinContent(1,0.1495787);
   MT__all->SetBinContent(2,0.179153);
   MT__all->SetBinContent(3,0.1423024);
   MT__all->SetBinContent(4,0.1868233);
   MT__all->SetBinContent(5,0.2807281);
   MT__all->SetBinContent(6,0.2544001);
   MT__all->SetBinContent(7,0.4381797);
   MT__all->SetBinContent(8,0.527285);
   MT__all->SetBinContent(9,0.6280636);
   MT__all->SetBinContent(10,0.4196177);
   MT__all->SetBinContent(11,0.7733432);
   MT__all->SetBinContent(16,1.361011);
   MT__all->SetBinError(1,0.2677406);
   MT__all->SetBinError(2,0.2230542);
   MT__all->SetBinError(3,0.2387006);
   MT__all->SetBinError(4,0.2343279);
   MT__all->SetBinError(5,0.2150086);
   MT__all->SetBinError(6,0.2751724);
   MT__all->SetBinError(7,0.330409);
   MT__all->SetBinError(8,0.4187046);
   MT__all->SetBinError(9,0.4562515);
   MT__all->SetBinError(10,0.6348416);
   MT__all->SetBinError(11,0.7938884);
   MT__all->SetBinError(16,1.257797);
   MT__all->SetMinimum(0);
   MT__all->SetMaximum(2);
   MT__all->SetEntries(8.04525);
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
   canvasDiMuon_275_325/MT__all->cd();
   canvasDiMuon_275_325/MT__all->Modified();
   canvasDiMuon_275_325/MT__all->cd();
   canvasDiMuon_275_325/MT__all->SetSelected(canvasDiMuon_275_325/MT__all);
}
