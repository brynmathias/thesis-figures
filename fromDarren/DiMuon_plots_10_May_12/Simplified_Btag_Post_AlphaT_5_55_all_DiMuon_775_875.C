{
//=========Macro generated from canvas: canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all/cannameBtag_Post_AlphaT_5_55_all
//=========  (Thu May 10 12:46:01 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all = new TCanvas("canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all", "cannameBtag_Post_AlphaT_5_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->SetHighLightColor(2);
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->Range(0,0,1,1);
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->SetFillColor(0);
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->SetBorderMode(0);
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->SetBorderSize(2);
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->SetTickx(1);
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->SetTicky(1);
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.3604379,6.75,0.233641);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2154[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis2154);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(1.493596);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("");
   Double_t xAxis2155[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis2155);
   Btag_Post_AlphaT_5_55_all->SetLineColor(5);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_144 = new TH1F("_stack_144","",6,0,6);
   _stack_144->SetMinimum(0.0001194877);
   _stack_144->SetMaximum(0.4779507);
   _stack_144->SetDirectory(0);
   _stack_144->SetStats(0);
   _stack_144->GetXaxis()->SetLabelFont(42);
   _stack_144->GetXaxis()->SetLabelOffset(0.007);
   _stack_144->GetXaxis()->SetLabelSize(0.05);
   _stack_144->GetXaxis()->SetTitleSize(0.05);
   _stack_144->GetYaxis()->SetLabelFont(42);
   _stack_144->GetYaxis()->SetLabelOffset(0.007);
   _stack_144->GetYaxis()->SetLabelSize(0.05);
   _stack_144->GetZaxis()->SetLabelFont(42);
   _stack_144->GetZaxis()->SetLabelOffset(0.007);
   _stack_144->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_144);
   
   Double_t xAxis2156[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis2156);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.1493596);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.1493596);
   Btag_Post_AlphaT_5_55_all->SetEntries(1);
   Btag_Post_AlphaT_5_55_all->SetLineColor(3);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->SetMarkerColor(3);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis2157[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis2157);
   Btag_Post_AlphaT_5_55_all->SetLineColor(7);
   Btag_Post_AlphaT_5_55_all->SetLineStyle(10);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
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
   TLegendEntry *entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Combined EWK","L");
   entry->SetLineColor(3);
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_775_875    Jet Multiplicity=all");
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
   Double_t xAxis2158[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis2158);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(1.493596);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->cd();
  
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
   Double_t xAxis2159[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis2159);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
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
   gre->SetPointError(1,0.5,1);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all360 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all360","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->SetMinimum(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->SetMaximum(2.2);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all360->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all360);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2160[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis2160);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
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
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->cd();
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->Modified();
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->cd();
   canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all->SetSelected(canvasDiMuon_775_875/Btag_Post_AlphaT_5_55_all);
}
