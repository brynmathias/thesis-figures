{
//=========Macro generated from canvas: canvasbtag_morethanzero_475_575/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:25:39 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_475_575/JetMultiplicity_all = new TCanvas("canvasbtag_morethanzero_475_575/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->SetHighLightColor(2);
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->Range(0,0,1,1);
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->SetFillColor(0);
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->SetBorderMode(0);
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->SetBorderSize(2);
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->SetTickx(1);
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->SetTicky(1);
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-1.110231,16.875,6.98178);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5394[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis5394);
   JetMultiplicity_all->SetBinContent(3,595);
   JetMultiplicity_all->SetBinContent(4,3309);
   JetMultiplicity_all->SetBinContent(5,6411);
   JetMultiplicity_all->SetBinContent(6,9852);
   JetMultiplicity_all->SetBinContent(7,2008);
   JetMultiplicity_all->SetBinContent(8,75);
   JetMultiplicity_all->SetBinError(3,24.39262);
   JetMultiplicity_all->SetBinError(4,57.52391);
   JetMultiplicity_all->SetBinError(5,80.06872);
   JetMultiplicity_all->SetBinError(6,99.25724);
   JetMultiplicity_all->SetBinError(7,44.81071);
   JetMultiplicity_all->SetBinError(8,8.660254);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1487917);
   JetMultiplicity_all->SetEntries(22250);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   Double_t xAxis5395[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis5395);
   JetMultiplicity_all->SetBinContent(3,60.92351);
   JetMultiplicity_all->SetBinContent(4,80.63846);
   JetMultiplicity_all->SetBinContent(5,46.32546);
   JetMultiplicity_all->SetBinContent(6,12.27637);
   JetMultiplicity_all->SetBinContent(7,1.062861);
   JetMultiplicity_all->SetBinError(3,2.474637);
   JetMultiplicity_all->SetBinError(4,2.591152);
   JetMultiplicity_all->SetBinError(5,1.931679);
   JetMultiplicity_all->SetBinError(6,1.15854);
   JetMultiplicity_all->SetBinError(7,0.2960417);
   JetMultiplicity_all->SetEntries(3609);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_360 = new TH1F("_stack_360","",15,0,15);
   _stack_360->SetMinimum(60.23327);
   _stack_360->SetMaximum(240933.1);
   _stack_360->SetDirectory(0);
   _stack_360->SetStats(0);
   _stack_360->GetXaxis()->SetLabelFont(42);
   _stack_360->GetXaxis()->SetLabelOffset(0.007);
   _stack_360->GetXaxis()->SetLabelSize(0.05);
   _stack_360->GetXaxis()->SetTitleSize(0.05);
   _stack_360->GetYaxis()->SetLabelFont(42);
   _stack_360->GetYaxis()->SetLabelOffset(0.007);
   _stack_360->GetYaxis()->SetLabelSize(0.05);
   _stack_360->GetZaxis()->SetLabelFont(42);
   _stack_360->GetZaxis()->SetLabelOffset(0.007);
   _stack_360->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_360);
   
   Double_t xAxis5396[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis5396);
   JetMultiplicity_all->SetBinContent(3,208.164);
   JetMultiplicity_all->SetBinContent(4,761.4728);
   JetMultiplicity_all->SetBinContent(5,1446.995);
   JetMultiplicity_all->SetBinContent(6,1252.259);
   JetMultiplicity_all->SetBinContent(7,345.4173);
   JetMultiplicity_all->SetBinContent(8,17.92117);
   JetMultiplicity_all->SetBinError(3,4.939297);
   JetMultiplicity_all->SetBinError(4,11.44321);
   JetMultiplicity_all->SetBinError(5,19.01565);
   JetMultiplicity_all->SetBinError(6,19.67343);
   JetMultiplicity_all->SetBinError(7,10.90348);
   JetMultiplicity_all->SetBinError(8,2.588188);
   JetMultiplicity_all->SetEntries(37805);
   JetMultiplicity_all->SetLineColor(3);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerColor(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis5397[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis5397);
   JetMultiplicity_all->SetBinContent(3,122783.9);
   JetMultiplicity_all->SetBinContent(4,148030.2);
   JetMultiplicity_all->SetBinContent(5,90906.77);
   JetMultiplicity_all->SetBinContent(6,28363.51);
   JetMultiplicity_all->SetBinContent(7,3850.961);
   JetMultiplicity_all->SetBinContent(8,122.7273);
   JetMultiplicity_all->SetBinError(3,1917.937);
   JetMultiplicity_all->SetBinError(4,2552.973);
   JetMultiplicity_all->SetBinError(5,2198.636);
   JetMultiplicity_all->SetBinError(6,1364.575);
   JetMultiplicity_all->SetBinError(7,695.2669);
   JetMultiplicity_all->SetBinError(8,86.5072);
   JetMultiplicity_all->SetEntries(109595);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_475_575    Jet Multiplicity=all");
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
   Double_t xAxis5398[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis5398);
   JetMultiplicity_all->SetBinContent(3,595);
   JetMultiplicity_all->SetBinContent(4,3309);
   JetMultiplicity_all->SetBinContent(5,6411);
   JetMultiplicity_all->SetBinContent(6,9852);
   JetMultiplicity_all->SetBinContent(7,2008);
   JetMultiplicity_all->SetBinContent(8,75);
   JetMultiplicity_all->SetBinError(3,24.39262);
   JetMultiplicity_all->SetBinError(4,57.52391);
   JetMultiplicity_all->SetBinError(5,80.06872);
   JetMultiplicity_all->SetBinError(6,99.25724);
   JetMultiplicity_all->SetBinError(7,44.81071);
   JetMultiplicity_all->SetBinError(8,8.660254);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1487917);
   JetMultiplicity_all->SetEntries(22250);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->cd();
  
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
   Double_t xAxis5399[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis5399);
   JetMultiplicity_all->SetBinContent(3,2.858323);
   JetMultiplicity_all->SetBinContent(4,4.345526);
   JetMultiplicity_all->SetBinContent(5,4.430562);
   JetMultiplicity_all->SetBinContent(6,7.867385);
   JetMultiplicity_all->SetBinContent(7,5.813259);
   JetMultiplicity_all->SetBinContent(8,4.184994);
   JetMultiplicity_all->SetBinError(3,0.04736756);
   JetMultiplicity_all->SetBinError(4,0.0229791);
   JetMultiplicity_all->SetBinError(5,0.01812955);
   JetMultiplicity_all->SetBinError(6,0.01866327);
   JetMultiplicity_all->SetBinError(7,0.03865782);
   JetMultiplicity_all->SetBinError(8,0.1849072);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(1233.287);
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
   gre->SetPointError(2,0.5,0.02372791);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.01502774);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.01314148);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.01571035);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.03156611);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.1444206);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all900 = new TH1F("Graph_Graph_from_JetMultiplicity_all900","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all900->SetMinimum(0.8266952);
   Graph_Graph_from_JetMultiplicity_all900->SetMaximum(1.173305);
   Graph_Graph_from_JetMultiplicity_all900->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all900->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all900->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all900->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all900->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all900->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all900->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all900->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all900->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all900->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all900->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all900->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all900);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5400[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis5400);
   JetMultiplicity_all->SetBinContent(3,2.858323);
   JetMultiplicity_all->SetBinContent(4,4.345526);
   JetMultiplicity_all->SetBinContent(5,4.430562);
   JetMultiplicity_all->SetBinContent(6,7.867385);
   JetMultiplicity_all->SetBinContent(7,5.813259);
   JetMultiplicity_all->SetBinContent(8,4.184994);
   JetMultiplicity_all->SetBinError(3,0.04736756);
   JetMultiplicity_all->SetBinError(4,0.0229791);
   JetMultiplicity_all->SetBinError(5,0.01812955);
   JetMultiplicity_all->SetBinError(6,0.01866327);
   JetMultiplicity_all->SetBinError(7,0.03865782);
   JetMultiplicity_all->SetBinError(8,0.1849072);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(1233.287);
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
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->Modified();
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_475_575/JetMultiplicity_all->SetSelected(canvasbtag_morethanzero_475_575/JetMultiplicity_all);
}
