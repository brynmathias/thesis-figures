{
//=========Macro generated from canvas: canvas475_575/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:23:31 2012) by ROOT version5.32/00
   TCanvas *canvas475_575/JetMultiplicity_all = new TCanvas("canvas475_575/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas475_575/JetMultiplicity_all->SetHighLightColor(2);
   canvas475_575/JetMultiplicity_all->Range(0,0,1,1);
   canvas475_575/JetMultiplicity_all->SetFillColor(0);
   canvas475_575/JetMultiplicity_all->SetBorderMode(0);
   canvas475_575/JetMultiplicity_all->SetBorderSize(2);
   canvas475_575/JetMultiplicity_all->SetTickx(1);
   canvas475_575/JetMultiplicity_all->SetTicky(1);
   canvas475_575/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-1.228876,16.875,8.049587);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1884[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis1884);
   JetMultiplicity_all->SetBinContent(3,2228);
   JetMultiplicity_all->SetBinContent(4,15397);
   JetMultiplicity_all->SetBinContent(5,22416);
   JetMultiplicity_all->SetBinContent(6,36259);
   JetMultiplicity_all->SetBinContent(7,6673);
   JetMultiplicity_all->SetBinContent(8,250);
   JetMultiplicity_all->SetBinError(3,47.20169);
   JetMultiplicity_all->SetBinError(4,124.0846);
   JetMultiplicity_all->SetBinError(5,149.7197);
   JetMultiplicity_all->SetBinError(6,190.418);
   JetMultiplicity_all->SetBinError(7,81.68843);
   JetMultiplicity_all->SetBinError(8,15.81139);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1.32355e+07);
   JetMultiplicity_all->SetEntries(83223);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   Double_t xAxis1885[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis1885);
   JetMultiplicity_all->SetBinContent(3,734.707);
   JetMultiplicity_all->SetBinContent(4,645.7069);
   JetMultiplicity_all->SetBinContent(5,276.5958);
   JetMultiplicity_all->SetBinContent(6,57.30135);
   JetMultiplicity_all->SetBinContent(7,4.620895);
   JetMultiplicity_all->SetBinError(3,7.786624);
   JetMultiplicity_all->SetBinError(4,7.302968);
   JetMultiplicity_all->SetBinError(5,4.731126);
   JetMultiplicity_all->SetBinError(6,2.45256);
   JetMultiplicity_all->SetBinError(7,0.6533134);
   JetMultiplicity_all->SetEntries(30922);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_126 = new TH1F("_stack_126","",15,0,15);
   _stack_126->SetMinimum(531.2828);
   _stack_126->SetMaximum(2125131);
   _stack_126->SetDirectory(0);
   _stack_126->SetStats(0);
   _stack_126->GetXaxis()->SetLabelFont(42);
   _stack_126->GetXaxis()->SetLabelOffset(0.007);
   _stack_126->GetXaxis()->SetLabelSize(0.05);
   _stack_126->GetXaxis()->SetTitleSize(0.05);
   _stack_126->GetYaxis()->SetLabelFont(42);
   _stack_126->GetYaxis()->SetLabelOffset(0.007);
   _stack_126->GetYaxis()->SetLabelSize(0.05);
   _stack_126->GetZaxis()->SetLabelFont(42);
   _stack_126->GetZaxis()->SetLabelOffset(0.007);
   _stack_126->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_126);
   
   Double_t xAxis1886[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis1886);
   JetMultiplicity_all->SetBinContent(3,1986.907);
   JetMultiplicity_all->SetBinContent(4,2921.757);
   JetMultiplicity_all->SetBinContent(5,2729.979);
   JetMultiplicity_all->SetBinContent(6,1707.658);
   JetMultiplicity_all->SetBinContent(7,413.2388);
   JetMultiplicity_all->SetBinContent(8,24.25561);
   JetMultiplicity_all->SetBinError(3,12.84619);
   JetMultiplicity_all->SetBinError(4,18.70142);
   JetMultiplicity_all->SetBinError(5,23.50051);
   JetMultiplicity_all->SetBinError(6,22.43786);
   JetMultiplicity_all->SetBinError(7,11.61881);
   JetMultiplicity_all->SetBinError(8,4.049091);
   JetMultiplicity_all->SetEntries(145486);
   JetMultiplicity_all->SetLineColor(3);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerColor(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis1887[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis1887);
   JetMultiplicity_all->SetBinContent(3,1321563);
   JetMultiplicity_all->SetBinContent(4,1108667);
   JetMultiplicity_all->SetBinContent(5,525843.2);
   JetMultiplicity_all->SetBinContent(6,146500.1);
   JetMultiplicity_all->SetBinContent(7,17578.36);
   JetMultiplicity_all->SetBinContent(8,212.1886);
   JetMultiplicity_all->SetBinError(3,6644.287);
   JetMultiplicity_all->SetBinError(4,6726.731);
   JetMultiplicity_all->SetBinError(5,5919.288);
   JetMultiplicity_all->SetBinError(6,3248.692);
   JetMultiplicity_all->SetBinError(7,2594.383);
   JetMultiplicity_all->SetBinError(8,109.1172);
   JetMultiplicity_all->SetEntries(841399);
   JetMultiplicity_all->SetLineColor(7);
   JetMultiplicity_all->SetLineStyle(10);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
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
   TLegendEntry *entry=leg->AddEntry("JetMultiplicity_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("JetMultiplicity_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","Combined EWK","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"475_575    Jet Multiplicity=all");
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
   Double_t xAxis1888[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis1888);
   JetMultiplicity_all->SetBinContent(3,2228);
   JetMultiplicity_all->SetBinContent(4,15397);
   JetMultiplicity_all->SetBinContent(5,22416);
   JetMultiplicity_all->SetBinContent(6,36259);
   JetMultiplicity_all->SetBinContent(7,6673);
   JetMultiplicity_all->SetBinContent(8,250);
   JetMultiplicity_all->SetBinError(3,47.20169);
   JetMultiplicity_all->SetBinError(4,124.0846);
   JetMultiplicity_all->SetBinError(5,149.7197);
   JetMultiplicity_all->SetBinError(6,190.418);
   JetMultiplicity_all->SetBinError(7,81.68843);
   JetMultiplicity_all->SetBinError(8,15.81139);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1.32355e+07);
   JetMultiplicity_all->SetEntries(83223);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvas475_575/JetMultiplicity_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-1.875,-0.25,16.875,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis1889[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis1889);
   JetMultiplicity_all->SetBinContent(3,1.121341);
   JetMultiplicity_all->SetBinContent(4,5.269773);
   JetMultiplicity_all->SetBinContent(5,8.211053);
   JetMultiplicity_all->SetBinContent(6,21.23317);
   JetMultiplicity_all->SetBinContent(7,16.14805);
   JetMultiplicity_all->SetBinContent(8,10.30689);
   JetMultiplicity_all->SetBinError(3,0.02215027);
   JetMultiplicity_all->SetBinError(4,0.01029161);
   JetMultiplicity_all->SetBinError(5,0.0108956);
   JetMultiplicity_all->SetBinError(6,0.01415016);
   JetMultiplicity_all->SetBinError(7,0.03066582);
   JetMultiplicity_all->SetBinError(8,0.1785134);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(1039.581);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicity_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicity_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicity_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicity_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicity_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicity_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicity_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.5,1);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.006465419);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.006400742);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.008608313);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.01313955);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.02811645);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.1669342);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,0);
   gre->SetPoint(9,9.5,1);
   gre->SetPointError(9,0.5,0);
   gre->SetPoint(10,10.5,1);
   gre->SetPointError(10,0.5,0);
   gre->SetPoint(11,11.5,1);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,1);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,1);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,1);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicity_all315 = new TH1F("Graph_Graph_from_JetMultiplicity_all315","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all315->SetMinimum(0.799679);
   Graph_Graph_from_JetMultiplicity_all315->SetMaximum(1.200321);
   Graph_Graph_from_JetMultiplicity_all315->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all315->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all315->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all315->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all315->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all315->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all315->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all315->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all315->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all315->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all315->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all315->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all315);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1890[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis1890);
   JetMultiplicity_all->SetBinContent(3,1.121341);
   JetMultiplicity_all->SetBinContent(4,5.269773);
   JetMultiplicity_all->SetBinContent(5,8.211053);
   JetMultiplicity_all->SetBinContent(6,21.23317);
   JetMultiplicity_all->SetBinContent(7,16.14805);
   JetMultiplicity_all->SetBinContent(8,10.30689);
   JetMultiplicity_all->SetBinError(3,0.02215027);
   JetMultiplicity_all->SetBinError(4,0.01029161);
   JetMultiplicity_all->SetBinError(5,0.0108956);
   JetMultiplicity_all->SetBinError(6,0.01415016);
   JetMultiplicity_all->SetBinError(7,0.03066582);
   JetMultiplicity_all->SetBinError(8,0.1785134);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(1039.581);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicity_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicity_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicity_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicity_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicity_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicity_all->Draw("PSAME");
   d->Modified();
   canvas475_575/JetMultiplicity_all->cd();
   canvas475_575/JetMultiplicity_all->Modified();
   canvas475_575/JetMultiplicity_all->cd();
   canvas475_575/JetMultiplicity_all->SetSelected(canvas475_575/JetMultiplicity_all);
}
