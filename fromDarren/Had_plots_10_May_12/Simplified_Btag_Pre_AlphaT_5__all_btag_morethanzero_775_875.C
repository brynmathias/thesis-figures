{
//=========Macro generated from canvas: canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:26:18 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all = new TCanvas("canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-1.0092,6.75,6.072503);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis6594[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6594);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,2088);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,466);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,48);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,6);
   Btag_Pre_AlphaT_5__all->SetBinError(2,45.69464);
   Btag_Pre_AlphaT_5__all->SetBinError(3,21.58703);
   Btag_Pre_AlphaT_5__all->SetBinError(4,6.928203);
   Btag_Pre_AlphaT_5__all->SetBinError(5,2.68);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(231383.5);
   Btag_Pre_AlphaT_5__all->SetEntries(2608);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   Double_t xAxis6595[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6595);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,19.55829);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,1.935257);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.2260143);
   Btag_Pre_AlphaT_5__all->SetBinError(2,1.17761);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.3446765);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1307449);
   Btag_Pre_AlphaT_5__all->SetEntries(410);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_440 = new TH1F("_stack_440","",6,0,6);
   _stack_440->SetMinimum(9.255339);
   _stack_440->SetMaximum(37021.36);
   _stack_440->SetDirectory(0);
   _stack_440->SetStats(0);
   _stack_440->GetXaxis()->SetLabelFont(42);
   _stack_440->GetXaxis()->SetLabelOffset(0.007);
   _stack_440->GetXaxis()->SetLabelSize(0.05);
   _stack_440->GetXaxis()->SetTitleSize(0.05);
   _stack_440->GetYaxis()->SetLabelFont(42);
   _stack_440->GetYaxis()->SetLabelOffset(0.007);
   _stack_440->GetYaxis()->SetLabelSize(0.05);
   _stack_440->GetZaxis()->SetLabelFont(42);
   _stack_440->GetZaxis()->SetLabelOffset(0.007);
   _stack_440->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_440);
   
   Double_t xAxis6596[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6596);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,296.1094);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,186.8988);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,27.75016);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,2.461193);
   Btag_Pre_AlphaT_5__all->SetBinError(2,8.14918);
   Btag_Pre_AlphaT_5__all->SetBinError(3,7.587342);
   Btag_Pre_AlphaT_5__all->SetBinError(4,2.600135);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.7744565);
   Btag_Pre_AlphaT_5__all->SetEntries(4616);
   Btag_Pre_AlphaT_5__all->SetLineColor(3);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerColor(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis6597[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6597);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,22842.24);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,2561.22);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,148.5768);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,4.150271);
   Btag_Pre_AlphaT_5__all->SetBinError(2,258.7591);
   Btag_Pre_AlphaT_5__all->SetBinError(3,90.12957);
   Btag_Pre_AlphaT_5__all->SetBinError(4,22.40929);
   Btag_Pre_AlphaT_5__all->SetBinError(5,2.588086);
   Btag_Pre_AlphaT_5__all->SetEntries(14335);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
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
   TLegendEntry *entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Combined EWK","L");
   entry->SetLineColor(3);
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_775_875    Jet Multiplicity=all");
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
   Double_t xAxis6598[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6598);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,2088);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,466);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,48);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,6);
   Btag_Pre_AlphaT_5__all->SetBinError(2,45.69464);
   Btag_Pre_AlphaT_5__all->SetBinError(3,21.58703);
   Btag_Pre_AlphaT_5__all->SetBinError(4,6.928203);
   Btag_Pre_AlphaT_5__all->SetBinError(5,2.68);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(231383.5);
   Btag_Pre_AlphaT_5__all->SetEntries(2608);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis6599[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6599);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,7.051449);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,2.493328);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.72972);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,2.437842);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.0351614);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.0615951);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1720833);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.5463758);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(96.5325);
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
   gre->SetPointError(1,0.5,0.02752085);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.04059599);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.09369802);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.3146671);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all1100 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all1100","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->SetMinimum(0.6223995);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->SetMaximum(1.3776);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1100->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all1100);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis6600[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6600);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,7.051449);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,2.493328);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.72972);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,2.437842);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.0351614);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.0615951);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1720833);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.5463758);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(96.5325);
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
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->Modified();
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all->SetSelected(canvasbtag_morethanzero_775_875/Btag_Pre_AlphaT_5__all);
}
