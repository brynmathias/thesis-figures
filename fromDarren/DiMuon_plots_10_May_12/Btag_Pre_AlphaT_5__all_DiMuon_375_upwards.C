{
//=========Macro generated from canvas: canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:45:15 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all = new TCanvas("canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.8060052,6.75,4.243746);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis631[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis631);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,160);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,38);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,6);
   Btag_Pre_AlphaT_5__all->SetBinError(1,12.64911);
   Btag_Pre_AlphaT_5__all->SetBinError(2,6.164414);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.68);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(5479.882);
   Btag_Pre_AlphaT_5__all->SetEntries(204);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PE0");
   Double_t xAxis632[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis632);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.04907353);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.04907353);
   Btag_Pre_AlphaT_5__all->SetEntries(1);
   Btag_Pre_AlphaT_5__all->SetLineColor(4);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis633[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis633);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,3.856956);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,15.26682);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,11.98138);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.7351326);
   Btag_Pre_AlphaT_5__all->SetBinError(1,1.031761);
   Btag_Pre_AlphaT_5__all->SetBinError(2,2.006873);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1.782058);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.5372024);
   Btag_Pre_AlphaT_5__all->SetEntries(152);
   Btag_Pre_AlphaT_5__all->SetLineColor(2);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis634[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis634);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis635[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis635);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,540.8187);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,51.11688);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,7.310034);
   Btag_Pre_AlphaT_5__all->SetBinError(1,17.3111);
   Btag_Pre_AlphaT_5__all->SetBinError(2,5.138209);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1.928438);
   Btag_Pre_AlphaT_5__all->SetEntries(1469);
   Btag_Pre_AlphaT_5__all->SetLineColor(6);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis636[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis636);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.2998366);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.4304603);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.8152108);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.1215933);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.1419499);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.2077949);
   Btag_Pre_AlphaT_5__all->SetEntries(40);
   Btag_Pre_AlphaT_5__all->SetLineColor(40);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis637[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis637);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,3.01273);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.5194214);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.08012265);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.00977444);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.2062326);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.07252259);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.02132328);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.007672544);
   Btag_Pre_AlphaT_5__all->SetEntries(417);
   Btag_Pre_AlphaT_5__all->SetLineColor(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis638[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis638);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis639[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis639);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,547.9882);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,67.38266);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,20.18675);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.7449071);
   Btag_Pre_AlphaT_5__all->SetBinError(1,17.34348);
   Btag_Pre_AlphaT_5__all->SetBinError(2,5.518745);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.634053);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.5372572);
   Btag_Pre_AlphaT_5__all->SetEntries(2079);
   Btag_Pre_AlphaT_5__all->SetLineColor(3);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Pre_AlphaT_5__all");
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
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all106 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all106","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->SetMinimum(0.0011);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->SetMaximum(1.1);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all106->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all106);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Pre_AlphaT_5__all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,547.9882);
   gre->SetPointError(0,0.5,17.34348);
   gre->SetPoint(1,1.5,67.38266);
   gre->SetPointError(1,0.5,5.518745);
   gre->SetPoint(2,2.5,20.18675);
   gre->SetPointError(2,0.5,2.634053);
   gre->SetPoint(3,3.5,0.7449071);
   gre->SetPointError(3,0.5,0.5372572);
   gre->SetPoint(4,4.5,0);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,0);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all107 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all107","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->SetMinimum(0.6218649);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->SetMaximum(621.8649);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all107->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all107);
   
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
   TLegendEntry *entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_375_    Jet Multiplicity=all");
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
   Double_t xAxis640[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis640);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,160);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,38);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,6);
   Btag_Pre_AlphaT_5__all->SetBinError(1,12.64911);
   Btag_Pre_AlphaT_5__all->SetBinError(2,6.164414);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.68);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(5479.882);
   Btag_Pre_AlphaT_5__all->SetEntries(204);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-0.7500001,-0.25,6.75,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis641[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis641);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.2919771);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.5639433);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.2972247);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.08515681);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.1817241);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.4653356);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(43.95812);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetLabelSize(0.12);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitle("Data/MC");
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetNdivisions(505);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetLabelSize(0.11);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitleSize(0.1);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitleOffset(0.5);
   Btag_Pre_AlphaT_5__all->Draw("P");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Pre_AlphaT_5__all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.5,1);
   gre->SetPointError(0,0.5,0.03164936);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.08190156);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.1304843);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.7212405);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all108 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all108","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->SetMinimum(0.1345114);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->SetMaximum(1.865489);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all108->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all108);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis642[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis642);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.2919771);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.5639433);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.2972247);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.08515681);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.1817241);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.4653356);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(43.95812);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetLabelSize(0.12);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitle("Data/MC");
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetNdivisions(505);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetLabelSize(0.11);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitleSize(0.1);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitleOffset(0.5);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   d->Modified();
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->cd();
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->Modified();
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->cd();
   canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all->SetSelected(canvasDiMuon_375_475/Btag_Pre_AlphaT_5__all);
}
