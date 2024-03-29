{
//=========Macro generated from canvas: canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all/cannameJetMultiplicityAfterAlphaT_55_all
//=========  (Thu May 10 12:46:33 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all = new TCanvas("canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all", "cannameJetMultiplicityAfterAlphaT_55_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->SetHighLightColor(2);
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->Range(0,0,1,1);
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->SetFillColor(0);
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->SetBorderMode(0);
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->SetBorderSize(2);
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->SetTickx(1);
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->SetTicky(1);
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.6585366,16.875,2.916529);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3091[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3091);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,31);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,21);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,13);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,5.567764);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4.582576);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,3.605551);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(362.2618);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(65);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PE0");
   Double_t xAxis3092[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3092);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3093[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3093);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.4143607);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.3147322);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3094[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3094);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3095[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3095);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,35.82279);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,33.15727);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,12.79599);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,4.332564);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4.195774);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,5.283451);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(189);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3096[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3096);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.003262842);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.09722538);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.003262842);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.05754447);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3097[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3097);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.4001269);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.4569009);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.1161141);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.02321013);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.0774619);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.06645638);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.0318912);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.01782333);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(126);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3098[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3098);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineStyle(10);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3099[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3099);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,36.22618);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,34.12575);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,12.9121);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.02321013);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,4.333258);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4.20848);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,5.283547);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.01782333);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(324);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(3);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicityAfterAlphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,0);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,0);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,2.5,0);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,3.5,0);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,4.5,0);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,0);
   gre->SetPointError(5,0.5,0);
   gre->SetPoint(6,6.5,0);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7.5,0);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8.5,0);
   gre->SetPointError(8,0.5,0);
   gre->SetPoint(9,9.5,0);
   gre->SetPointError(9,0.5,0);
   gre->SetPoint(10,10.5,0);
   gre->SetPointError(10,0.5,0);
   gre->SetPoint(11,11.5,0);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,0);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,0);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,0);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->SetMinimum(0.0011);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->SetMaximum(1.1);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all516);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicityAfterAlphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,0);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,0);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,2.5,36.22618);
   gre->SetPointError(2,0.5,4.333258);
   gre->SetPoint(3,3.5,34.12575);
   gre->SetPointError(3,0.5,4.20848);
   gre->SetPoint(4,4.5,12.9121);
   gre->SetPointError(4,0.5,5.283547);
   gre->SetPoint(5,5.5,0.02321013);
   gre->SetPointError(5,0.5,0.01782333);
   gre->SetPoint(6,6.5,0);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7.5,0);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8.5,0);
   gre->SetPointError(8,0.5,0);
   gre->SetPoint(9,9.5,0);
   gre->SetPointError(9,0.5,0);
   gre->SetPoint(10,10.5,0);
   gre->SetPointError(10,0.5,0);
   gre->SetPoint(11,11.5,0);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,0);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,0);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,0);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->SetMinimum(0.04461538);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->SetMaximum(44.61538);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all517);
   
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
   TLegendEntry *entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_325_375    Jet Multiplicity=all");
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
   Double_t xAxis3100[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3100);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,31);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,21);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,13);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,5.567764);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4.582576);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,3.605551);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(362.2618);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(65);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->cd();
  
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
   Double_t xAxis3101[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3101);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.8557347);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.615371);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.006808);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.2157921);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.2506542);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.4943302);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(20.09233);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicityAfterAlphaT_55_all->Draw("P");
   
   gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicityAfterAlphaT_55_all");
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
   gre->SetPointError(2,0.5,0.1196168);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.1233227);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.4091935);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.7679116);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0);
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
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->SetMinimum(0.07850604);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->SetMaximum(1.921494);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all518);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3102[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3102);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.8557347);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.615371);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.006808);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.2157921);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.2506542);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.4943302);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(20.09233);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
   d->Modified();
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->cd();
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->Modified();
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->cd();
   canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all->SetSelected(canvasDiMuon_325_375/JetMultiplicityAfterAlphaT_55_all);
}
