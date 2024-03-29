{
//=========Macro generated from canvas: canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all/cannameJetMultiplicityAfterAlphaT_55_all
//=========  (Thu May 10 12:45:26 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all = new TCanvas("canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all", "cannameJetMultiplicityAfterAlphaT_55_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->SetHighLightColor(2);
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->Range(0,0,1,1);
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->SetFillColor(0);
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->SetBorderMode(0);
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->SetBorderSize(2);
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->SetTickx(1);
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->SetTicky(1);
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.5928051,16.875,2.324946);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis931[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis931);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,5);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,6);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,3);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,1);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,2.49);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,2.68);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,2.14);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,1);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(107.9371);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(15);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PE0");
   Double_t xAxis932[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis932);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis933[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis933);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.2615972);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.3914381);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.6726459);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.2040316);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.2615972);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.3914381);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.399281);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.2040316);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis934[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis934);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis935[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis935);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,5.471302);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,10.25195);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.612161);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,1.774626);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,2.503652);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.8583593);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(38);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis936[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis936);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.003277954);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.01736587);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.003277954);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.01736587);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis937[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis937);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.005699849);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.1470469);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.04485686);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.00253158);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.00431768);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.04118066);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.02168691);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.00253158);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(25);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis938[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis938);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineStyle(10);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis939[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis939);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,5.7386);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,10.79371);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,2.347029);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.2065632);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,1.793809);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,2.534404);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.9470891);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.2040473);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(71);
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
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->SetMinimum(0.0011);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->SetMaximum(1.1);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all156);
   
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
   gre->SetPoint(2,2.5,5.7386);
   gre->SetPointError(2,0.5,1.793809);
   gre->SetPoint(3,3.5,10.79371);
   gre->SetPointError(3,0.5,2.534404);
   gre->SetPoint(4,4.5,2.347029);
   gre->SetPointError(4,0.5,0.9470891);
   gre->SetPoint(5,5.5,0.2065632);
   gre->SetPointError(5,0.5,0.2040473);
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
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->SetMinimum(0.01466093);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->SetMaximum(14.66093);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all157);
   
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
   Double_t xAxis940[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis940);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,5);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,6);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,3);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,1);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,2.49);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,2.68);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,2.14);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,1);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(107.9371);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(15);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->cd();
  
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
   Double_t xAxis941[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis941);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.8712927);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.5558792);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.278212);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,4.841133);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.5879748);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.5046225);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.8195598);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,1.405628);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(1.192812);
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
   gre->SetPointError(2,0.5,0.3125866);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.2348037);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.4035268);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.9878203);
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
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->SetMinimum(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->SetMaximum(2.185384);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all158);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis942[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis942);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.8712927);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.5558792);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.278212);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,4.841133);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.5879748);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.5046225);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.8195598);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,1.405628);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(1.192812);
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
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->cd();
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->Modified();
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->cd();
   canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all->SetSelected(canvasDiMuon_475_575/JetMultiplicityAfterAlphaT_55_all);
}
