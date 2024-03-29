{
//=========Macro generated from canvas: canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all/cannameBtag_Post_AlphaT_5_55_all
//=========  (Thu May 10 12:25:25 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all = new TCanvas("canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all", "cannameBtag_Post_AlphaT_5_55_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->SetHighLightColor(2);
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->Range(0,0,1,1);
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->SetFillColor(0);
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->SetBorderMode(0);
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->SetBorderSize(2);
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->SetTickx(1);
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->SetTicky(1);
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.7549605,6.75,3.784344);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5011[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5011);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,214);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,52);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,8);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,14.62874);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,7.211103);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,3.03);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2140);
   Btag_Post_AlphaT_5_55_all->SetEntries(274);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("PE0");
   Double_t xAxis5012[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5012);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,38.59764);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,3.735108);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,0.003397991);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,1.650645);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.5077378);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.003397991);
   Btag_Post_AlphaT_5_55_all->SetEntries(898);
   Btag_Post_AlphaT_5_55_all->SetLineColor(4);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis5013[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5013);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,94.64016);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,43.79213);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,3.959197);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,5.069091);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,4.036086);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,1.016801);
   Btag_Post_AlphaT_5_55_all->SetEntries(708);
   Btag_Post_AlphaT_5_55_all->SetLineColor(2);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis5014[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5014);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,42.2653);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,7.184762);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,0.2773793);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,1.744035);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.7816418);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.1523775);
   Btag_Post_AlphaT_5_55_all->SetEntries(908);
   Btag_Post_AlphaT_5_55_all->SetLineColor(5);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis5015[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5015);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,1.508298);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.8551412);
   Btag_Post_AlphaT_5_55_all->SetEntries(4);
   Btag_Post_AlphaT_5_55_all->SetLineColor(6);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis5016[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5016);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,1.563014);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.3287122);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,0.006241758);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.1791277);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.07635064);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.006241758);
   Btag_Post_AlphaT_5_55_all->SetEntries(196);
   Btag_Post_AlphaT_5_55_all->SetLineColor(44);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis5017[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5017);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,57.43201);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,57.43201);
   Btag_Post_AlphaT_5_55_all->SetEntries(1);
   Btag_Post_AlphaT_5_55_all->SetLineColor(7);
   Btag_Post_AlphaT_5_55_all->SetLineStyle(10);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis5018[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5018);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,7.337489);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,1.671777);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,0.2884472);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.6422193);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.2862304);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.1783802);
   Btag_Post_AlphaT_5_55_all->SetEntries(220);
   Btag_Post_AlphaT_5_55_all->SetLineColor(40);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis5019[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5019);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,185.9119);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,114.1445);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,4.534663);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,5.712947);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,57.58196);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,1.043539);
   Btag_Post_AlphaT_5_55_all->SetEntries(2935);
   Btag_Post_AlphaT_5_55_all->SetLineColor(3);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Post_AlphaT_5_55_all");
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
   gre->SetPoint(2,2.5,57.43201);
   gre->SetPointError(2,0.5,57.43201);
   gre->SetPoint(3,3.5,0);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,4.5,0);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,0);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all836 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all836","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->SetMinimum(0.1263504);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->SetMaximum(126.3504);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all836->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all836);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Post_AlphaT_5_55_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,0);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,185.9119);
   gre->SetPointError(1,0.5,5.712947);
   gre->SetPoint(2,2.5,114.1445);
   gre->SetPointError(2,0.5,57.58196);
   gre->SetPoint(3,3.5,4.534663);
   gre->SetPointError(3,0.5,1.043539);
   gre->SetPoint(4,4.5,0);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,0);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all837 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all837","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->SetMinimum(0.2107873);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->SetMaximum(210.7873);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all837->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all837);
   
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
   TLegendEntry *entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_375_475    Jet Multiplicity=all");
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
   Double_t xAxis5020[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5020);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,214);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,52);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,8);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,14.62874);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,7.211103);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,3.03);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2140);
   Btag_Post_AlphaT_5_55_all->SetEntries(274);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->cd();
  
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
   Double_t xAxis5021[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5021);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,1.151083);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.4555629);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,1.764188);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.07494791);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.5231789);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.4431806);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(16.81979);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetLabelSize(0.12);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitle("Data/MC");
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetNdivisions(505);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetLabelSize(0.11);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitleSize(0.1);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitleOffset(0.5);
   Btag_Post_AlphaT_5_55_all->Draw("P");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Post_AlphaT_5_55_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.5,1);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.03072932);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.5044655);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.2301248);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all838 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all838","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->SetMinimum(0.3946414);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->SetMaximum(1.605359);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all838->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all838);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5022[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5022);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,1.151083);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.4555629);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,1.764188);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.07494791);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.5231789);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.4431806);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(16.81979);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetLabelSize(0.12);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitle("Data/MC");
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetNdivisions(505);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetLabelSize(0.11);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitleSize(0.1);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitleOffset(0.5);
   Btag_Post_AlphaT_5_55_all->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->cd();
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->Modified();
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->cd();
   canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all->SetSelected(canvasbtag_morethanzero_375_475/Btag_Post_AlphaT_5_55_all);
}
