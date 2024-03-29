{
//=========Macro generated from canvas: canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all/cannameBtag_Post_AlphaT_5_55_all
//=========  (Thu May 10 12:25:53 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all = new TCanvas("canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all", "cannameBtag_Post_AlphaT_5_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->SetHighLightColor(2);
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->Range(0,0,1,1);
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->SetFillColor(0);
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->SetBorderMode(0);
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->SetBorderSize(2);
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->SetTickx(1);
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->SetTicky(1);
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.6344683,6.75,2.699915);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5833[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5833);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,20);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,11);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,4.472136);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,3.316625);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(232.5287);
   Btag_Post_AlphaT_5_55_all->SetEntries(31);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_389 = new TH1F("_stack_389","",6,0,6);
   _stack_389->SetMinimum(0.009301148);
   _stack_389->SetMaximum(37.20459);
   _stack_389->SetDirectory(0);
   _stack_389->SetStats(0);
   _stack_389->GetXaxis()->SetLabelFont(42);
   _stack_389->GetXaxis()->SetLabelOffset(0.007);
   _stack_389->GetXaxis()->SetLabelSize(0.05);
   _stack_389->GetXaxis()->SetTitleSize(0.05);
   _stack_389->GetYaxis()->SetLabelFont(42);
   _stack_389->GetYaxis()->SetLabelOffset(0.007);
   _stack_389->GetYaxis()->SetLabelSize(0.05);
   _stack_389->GetZaxis()->SetLabelFont(42);
   _stack_389->GetZaxis()->SetLabelOffset(0.007);
   _stack_389->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_389);
   
   Double_t xAxis5834[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5834);
   Btag_Post_AlphaT_5_55_all->SetFillColor(6);
   Btag_Post_AlphaT_5_55_all->SetLineColor(6);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis5835[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5835);
   Btag_Post_AlphaT_5_55_all->SetFillColor(7);
   Btag_Post_AlphaT_5_55_all->SetLineColor(7);
   Btag_Post_AlphaT_5_55_all->SetLineStyle(10);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis5836[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5836);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.1135324);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.02595664);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.03962349);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.01397161);
   Btag_Post_AlphaT_5_55_all->SetEntries(15);
   Btag_Post_AlphaT_5_55_all->SetFillColor(44);
   Btag_Post_AlphaT_5_55_all->SetLineColor(44);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis5837[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5837);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.7436615);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.5478294);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,0.05487837);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.2148468);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.180216);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.05487837);
   Btag_Post_AlphaT_5_55_all->SetEntries(29);
   Btag_Post_AlphaT_5_55_all->SetFillColor(40);
   Btag_Post_AlphaT_5_55_all->SetLineColor(40);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis5838[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5838);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,5.012113);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,1.3789);
   Btag_Post_AlphaT_5_55_all->SetBinContent(5,0.2237792);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.6039999);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.7383064);
   Btag_Post_AlphaT_5_55_all->SetBinError(5,0.2237792);
   Btag_Post_AlphaT_5_55_all->SetEntries(117);
   Btag_Post_AlphaT_5_55_all->SetFillColor(4);
   Btag_Post_AlphaT_5_55_all->SetLineColor(4);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis5839[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5839);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,6.86137);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,1.069381);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.6989845);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.2739329);
   Btag_Post_AlphaT_5_55_all->SetEntries(143);
   Btag_Post_AlphaT_5_55_all->SetFillColor(5);
   Btag_Post_AlphaT_5_55_all->SetLineColor(5);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis5840[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5840);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,10.52219);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,6.97995);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,0.2440702);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,1.785297);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,1.388806);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.2440702);
   Btag_Post_AlphaT_5_55_all->SetEntries(92);
   Btag_Post_AlphaT_5_55_all->SetFillColor(2);
   Btag_Post_AlphaT_5_55_all->SetLineColor(2);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
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
   leg->Draw();
   Double_t xAxis5841[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5841);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,20);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,11);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,4.472136);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,3.316625);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(232.5287);
   Btag_Post_AlphaT_5_55_all->SetEntries(31);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_575_675    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->cd();
  
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
   Double_t xAxis5842[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5842);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.8601089);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,1.099778);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.2399195);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.3416352);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(20.90416);
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
   
   TGraphErrors *gre = new TGraphErrors(6);
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
   gre->SetPointError(1,0.5,0.08695621);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.1606409);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.836812);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,1);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all974 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all974","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->SetMinimum(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->SetMaximum(2.2);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all974->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all974);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5843[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis5843);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.8601089);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,1.099778);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.2399195);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.3416352);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(20.90416);
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
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->cd();
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->Modified();
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->cd();
   canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all->SetSelected(canvasbtag_morethanzero_575_675/Btag_Post_AlphaT_5_55_all);
}
