{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:09:15 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all = new TCanvas("canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.8757876,6.75,4.871788);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5563[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5563);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,497);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,187);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,18);
   Btag_Pre_AlphaT_5__all->SetBinError(2,22.2935);
   Btag_Pre_AlphaT_5__all->SetBinError(3,13.67479);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.242641);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(19816.67);
   Btag_Pre_AlphaT_5__all->SetEntries(702);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_371 = new TH1F("_stack_371","",6,0,6);
   _stack_371->SetMinimum(0.7926666);
   _stack_371->SetMaximum(3170.667);
   _stack_371->SetDirectory(0);
   _stack_371->SetStats(0);
   _stack_371->GetXaxis()->SetLabelFont(42);
   _stack_371->GetXaxis()->SetLabelOffset(0.007);
   _stack_371->GetXaxis()->SetLabelSize(0.05);
   _stack_371->GetXaxis()->SetTitleSize(0.05);
   _stack_371->GetYaxis()->SetLabelFont(42);
   _stack_371->GetYaxis()->SetLabelOffset(0.007);
   _stack_371->GetYaxis()->SetLabelSize(0.05);
   _stack_371->GetZaxis()->SetLabelFont(42);
   _stack_371->GetZaxis()->SetLabelOffset(0.007);
   _stack_371->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_371);
   
   Double_t xAxis5564[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5564);
   Btag_Pre_AlphaT_5__all->SetFillColor(5);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis5565[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5565);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,7.086454);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,1.045848);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.005065964);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.4772888);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.1489398);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.005065964);
   Btag_Pre_AlphaT_5__all->SetEntries(386);
   Btag_Pre_AlphaT_5__all->SetFillColor(44);
   Btag_Pre_AlphaT_5__all->SetLineColor(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis5566[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5566);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,17.17104);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,1.333399);
   Btag_Pre_AlphaT_5__all->SetBinError(2,2.929864);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.7578966);
   Btag_Pre_AlphaT_5__all->SetEntries(51);
   Btag_Pre_AlphaT_5__all->SetFillColor(6);
   Btag_Pre_AlphaT_5__all->SetLineColor(6);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis5567[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5567);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,49.74534);
   Btag_Pre_AlphaT_5__all->SetBinError(2,49.74534);
   Btag_Pre_AlphaT_5__all->SetEntries(1);
   Btag_Pre_AlphaT_5__all->SetFillColor(7);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis5568[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5568);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,149.4135);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,48.71752);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,2.201642);
   Btag_Pre_AlphaT_5__all->SetBinError(2,2.945216);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1.70147);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.3320218);
   Btag_Pre_AlphaT_5__all->SetEntries(4820);
   Btag_Pre_AlphaT_5__all->SetFillColor(40);
   Btag_Pre_AlphaT_5__all->SetLineColor(40);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis5569[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5569);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,645.0017);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,70.88713);
   Btag_Pre_AlphaT_5__all->SetBinError(2,52.97244);
   Btag_Pre_AlphaT_5__all->SetBinError(3,20.68687);
   Btag_Pre_AlphaT_5__all->SetEntries(222);
   Btag_Pre_AlphaT_5__all->SetFillColor(4);
   Btag_Pre_AlphaT_5__all->SetLineColor(4);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis5570[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5570);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1113.249);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,810.9725);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,64.268);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.663919);
   Btag_Pre_AlphaT_5__all->SetBinError(2,17.95701);
   Btag_Pre_AlphaT_5__all->SetBinError(3,14.64122);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.56686);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.6655328);
   Btag_Pre_AlphaT_5__all->SetEntries(10413);
   Btag_Pre_AlphaT_5__all->SetFillColor(2);
   Btag_Pre_AlphaT_5__all->SetLineColor(2);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
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
   leg->Draw();
   Double_t xAxis5571[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5571);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,497);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,187);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,18);
   Btag_Pre_AlphaT_5__all->SetBinError(2,22.2935);
   Btag_Pre_AlphaT_5__all->SetBinError(3,13.67479);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.242641);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(19816.67);
   Btag_Pre_AlphaT_5__all->SetEntries(702);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_OneMuon_275_325    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis5572[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5572);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.250799);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.2004381);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.2707797);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.05868004);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.07803556);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2455612);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(106.7696);
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
   
   TGraphErrors *gre = new TGraphErrors(6);
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
   gre->SetPointError(1,0.5,0.03783219);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.02723886);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.06888207);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.3999791);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all929 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all929","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->SetMinimum(0.5200251);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->SetMaximum(1.479975);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all929->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all929);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5573[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis5573);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.250799);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.2004381);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.2707797);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.05868004);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.07803556);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2455612);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(106.7696);
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
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->Modified();
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all->SetSelected(canvasbtag_morethanzero_OneMuon_275_325/Btag_Pre_AlphaT_5__all);
}
