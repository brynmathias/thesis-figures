{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:09:04 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all = new TCanvas("canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.6480027,6.75,2.821724);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5221[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5221);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,26);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,14);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,4);
   Btag_Pre_AlphaT_5__all->SetBinError(2,5.09902);
   Btag_Pre_AlphaT_5__all->SetBinError(3,3.741657);
   Btag_Pre_AlphaT_5__all->SetBinError(4,2.3);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(298.3676);
   Btag_Pre_AlphaT_5__all->SetEntries(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PE0");
   Double_t xAxis5222[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5222);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,13.26489);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.9737063);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.9336009);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.2255871);
   Btag_Pre_AlphaT_5__all->SetEntries(305);
   Btag_Pre_AlphaT_5__all->SetLineColor(4);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis5223[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5223);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,14.59641);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,13.15295);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.630367);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.1393525);
   Btag_Pre_AlphaT_5__all->SetBinError(2,1.998836);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1.998459);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.6076802);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.1393525);
   Btag_Pre_AlphaT_5__all->SetEntries(150);
   Btag_Pre_AlphaT_5__all->SetLineColor(2);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis5224[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5224);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis5225[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5225);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.4281665);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.3160079);
   Btag_Pre_AlphaT_5__all->SetEntries(2);
   Btag_Pre_AlphaT_5__all->SetLineColor(6);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis5226[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5226);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.06332855);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.04403133);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.04958044);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.04403133);
   Btag_Pre_AlphaT_5__all->SetEntries(3);
   Btag_Pre_AlphaT_5__all->SetLineColor(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis5227[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5227);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis5228[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5228);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1.483958);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.9270046);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.1085466);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.2736984);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.2338839);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.07734358);
   Btag_Pre_AlphaT_5__all->SetEntries(58);
   Btag_Pre_AlphaT_5__all->SetLineColor(40);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis5229[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5229);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,29.83676);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,15.09769);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.738914);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.1393525);
   Btag_Pre_AlphaT_5__all->SetBinError(2,2.245927);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.025184);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.6125825);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.1393525);
   Btag_Pre_AlphaT_5__all->SetEntries(518);
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
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all871 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all871","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->SetMinimum(0.0011);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->SetMaximum(1.1);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all871->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all871);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Pre_AlphaT_5__all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,0);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,29.83676);
   gre->SetPointError(1,0.5,2.245927);
   gre->SetPoint(2,2.5,15.09769);
   gre->SetPointError(2,0.5,2.025184);
   gre->SetPoint(3,3.5,1.738914);
   gre->SetPointError(3,0.5,0.6125825);
   gre->SetPoint(4,4.5,0.1393525);
   gre->SetPointError(4,0.5,0.1393525);
   gre->SetPoint(5,5.5,0);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all872 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all872","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->SetMinimum(0.03529095);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->SetMaximum(35.29095);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all872->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all872);
   
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
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_OneMuon_875    Jet Multiplicity=all");
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
   Double_t xAxis5230[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5230);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,26);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,14);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,4);
   Btag_Pre_AlphaT_5__all->SetBinError(2,5.09902);
   Btag_Pre_AlphaT_5__all->SetBinError(3,3.741657);
   Btag_Pre_AlphaT_5__all->SetBinError(4,2.3);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(298.3676);
   Btag_Pre_AlphaT_5__all->SetEntries(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis5231[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5231);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.8714084);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.9272943);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,2.300287);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.2100659);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.2990347);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.6743333);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(6.676629);
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
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.07527383);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.1341387);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.3522788);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,1);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all873 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all873","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->SetMinimum(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->SetMaximum(2.2);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all873->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all873);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5232[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5232);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.8714084);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.9272943);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,2.300287);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.2100659);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.2990347);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.6743333);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(6.676629);
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
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->Modified();
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all->SetSelected(canvasbtag_morethanzero_OneMuon_875/Btag_Pre_AlphaT_5__all);
}
