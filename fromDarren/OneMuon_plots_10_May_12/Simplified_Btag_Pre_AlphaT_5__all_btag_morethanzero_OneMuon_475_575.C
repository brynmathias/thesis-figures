{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:08:23 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all = new TCanvas("canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.7710828,6.75,3.929445);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3924[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3924);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,288);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,152);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,16);
   Btag_Pre_AlphaT_5__all->SetBinError(2,16.97056);
   Btag_Pre_AlphaT_5__all->SetBinError(3,12.32883);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(2880);
   Btag_Pre_AlphaT_5__all->SetEntries(456);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   Double_t xAxis3925[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3925);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_262 = new TH1F("_stack_262","",6,0,6);
   _stack_262->SetMinimum(0.1180387);
   _stack_262->SetMaximum(472.1546);
   _stack_262->SetDirectory(0);
   _stack_262->SetStats(0);
   _stack_262->GetXaxis()->SetLabelFont(42);
   _stack_262->GetXaxis()->SetLabelOffset(0.007);
   _stack_262->GetXaxis()->SetLabelSize(0.05);
   _stack_262->GetXaxis()->SetTitleSize(0.05);
   _stack_262->GetYaxis()->SetLabelFont(42);
   _stack_262->GetYaxis()->SetLabelOffset(0.007);
   _stack_262->GetYaxis()->SetLabelSize(0.05);
   _stack_262->GetZaxis()->SetLabelFont(42);
   _stack_262->GetZaxis()->SetLabelOffset(0.007);
   _stack_262->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_262);
   
   Double_t xAxis3926[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3926);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,287.6031);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,156.5376);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,14.11506);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.073444);
   Btag_Pre_AlphaT_5__all->SetBinError(2,7.493556);
   Btag_Pre_AlphaT_5__all->SetBinError(3,6.231607);
   Btag_Pre_AlphaT_5__all->SetBinError(4,2.76554);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.5521638);
   Btag_Pre_AlphaT_5__all->SetEntries(4359);
   Btag_Pre_AlphaT_5__all->SetLineColor(3);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerColor(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis3927[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3927);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_OneMuon_475_575    Jet Multiplicity=all");
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
   Double_t xAxis3928[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3928);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,288);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,152);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,16);
   Btag_Pre_AlphaT_5__all->SetBinError(2,16.97056);
   Btag_Pre_AlphaT_5__all->SetBinError(3,12.32883);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(2880);
   Btag_Pre_AlphaT_5__all->SetEntries(456);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis3929[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3929);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1.00138);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.9710124);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.133541);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.064429);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.09035322);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.3176286);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(68.17917);
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
   gre->SetPointError(1,0.5,0.0260552);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.039809);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.1959283);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.5143854);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all655 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all655","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->SetMinimum(0.3827375);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->SetMaximum(1.617262);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all655->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all655);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3930[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3930);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1.00138);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.9710124);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.133541);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.064429);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.09035322);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.3176286);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(68.17917);
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
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->Modified();
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all->SetSelected(canvasbtag_morethanzero_OneMuon_475_575/Btag_Pre_AlphaT_5__all);
}
