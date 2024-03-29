{
//=========Macro generated from canvas: canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:24:54 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all = new TCanvas("canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-1.247226,6.75,8.21473);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4254[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis4254);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,4460);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,873);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,75);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,5);
   Btag_Pre_AlphaT_5__all->SetBinError(2,66.78323);
   Btag_Pre_AlphaT_5__all->SetBinError(3,29.54657);
   Btag_Pre_AlphaT_5__all->SetBinError(4,8.660254);
   Btag_Pre_AlphaT_5__all->SetBinError(5,2.49);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(1.855813e+07);
   Btag_Pre_AlphaT_5__all->SetEntries(5413);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   Double_t xAxis4255[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis4255);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,434.7923);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,50.85537);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.820184);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.02124635);
   Btag_Pre_AlphaT_5__all->SetBinError(2,5.846586);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.121238);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.3536665);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.02124635);
   Btag_Pre_AlphaT_5__all->SetEntries(8622);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_284 = new TH1F("_stack_284","",6,0,6);
   _stack_284->SetMinimum(745.5283);
   _stack_284->SetMaximum(2982113);
   _stack_284->SetDirectory(0);
   _stack_284->SetStats(0);
   _stack_284->GetXaxis()->SetLabelFont(42);
   _stack_284->GetXaxis()->SetLabelOffset(0.007);
   _stack_284->GetXaxis()->SetLabelSize(0.05);
   _stack_284->GetXaxis()->SetTitleSize(0.05);
   _stack_284->GetYaxis()->SetLabelFont(42);
   _stack_284->GetYaxis()->SetLabelOffset(0.007);
   _stack_284->GetYaxis()->SetLabelSize(0.05);
   _stack_284->GetZaxis()->SetLabelFont(42);
   _stack_284->GetZaxis()->SetLabelOffset(0.007);
   _stack_284->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_284);
   
   Double_t xAxis4256[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis4256);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,4724.081);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,2023.515);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,175.4748);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,3.102183);
   Btag_Pre_AlphaT_5__all->SetBinError(2,71.17485);
   Btag_Pre_AlphaT_5__all->SetBinError(3,32.57432);
   Btag_Pre_AlphaT_5__all->SetBinError(4,6.898251);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.7615021);
   Btag_Pre_AlphaT_5__all->SetEntries(52976);
   Btag_Pre_AlphaT_5__all->SetLineColor(3);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerColor(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis4257[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis4257);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1851089);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,196369.8);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,7174.278);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,64.14793);
   Btag_Pre_AlphaT_5__all->SetBinError(2,12731.71);
   Btag_Pre_AlphaT_5__all->SetBinError(3,4755.636);
   Btag_Pre_AlphaT_5__all->SetBinError(4,674.053);
   Btag_Pre_AlphaT_5__all->SetBinError(5,64.14793);
   Btag_Pre_AlphaT_5__all->SetEntries(40829);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_325_375    Jet Multiplicity=all");
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
   Double_t xAxis4258[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis4258);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,4460);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,873);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,75);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,5);
   Btag_Pre_AlphaT_5__all->SetBinError(2,66.78323);
   Btag_Pre_AlphaT_5__all->SetBinError(3,29.54657);
   Btag_Pre_AlphaT_5__all->SetBinError(4,8.660254);
   Btag_Pre_AlphaT_5__all->SetBinError(5,2.49);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(1.855813e+07);
   Btag_Pre_AlphaT_5__all->SetEntries(5413);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis4259[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis4259);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.9440991);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.4314275);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.4274117);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.611768);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.02124174);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.03747823);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1219785);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.5552125);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(14.4995);
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
   gre->SetPointError(1,0.5,0.01506639);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.01609789);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.03931191);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.2454729);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all710 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all710","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->SetMinimum(0.7054325);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->SetMaximum(1.294568);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all710->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all710);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4260[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis4260);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.9440991);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.4314275);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.4274117);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.611768);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.02124174);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.03747823);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1219785);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.5552125);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(14.4995);
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
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->Modified();
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all->SetSelected(canvasbtag_morethanzero_325_375/Btag_Pre_AlphaT_5__all);
}
