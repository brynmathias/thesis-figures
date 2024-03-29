{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:08:23 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all = new TCanvas("canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.7472275,16.875,3.714747);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3894[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3894);
   JetMultiplicity_all->SetBinContent(3,53);
   JetMultiplicity_all->SetBinContent(4,110);
   JetMultiplicity_all->SetBinContent(5,182);
   JetMultiplicity_all->SetBinContent(6,89);
   JetMultiplicity_all->SetBinContent(7,21);
   JetMultiplicity_all->SetBinContent(8,1);
   JetMultiplicity_all->SetBinError(3,7.28011);
   JetMultiplicity_all->SetBinError(4,10.48809);
   JetMultiplicity_all->SetBinError(5,13.49074);
   JetMultiplicity_all->SetBinError(6,9.433981);
   JetMultiplicity_all->SetBinError(7,4.582576);
   JetMultiplicity_all->SetBinError(8,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1855.878);
   JetMultiplicity_all->SetEntries(456);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   Double_t xAxis3895[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3895);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_260 = new TH1F("_stack_260","",15,0,15);
   _stack_260->SetMinimum(0.07702094);
   _stack_260->SetMaximum(308.0838);
   _stack_260->SetDirectory(0);
   _stack_260->SetStats(0);
   _stack_260->GetXaxis()->SetLabelFont(42);
   _stack_260->GetXaxis()->SetLabelOffset(0.007);
   _stack_260->GetXaxis()->SetLabelSize(0.05);
   _stack_260->GetXaxis()->SetTitleSize(0.05);
   _stack_260->GetYaxis()->SetLabelFont(42);
   _stack_260->GetYaxis()->SetLabelOffset(0.007);
   _stack_260->GetYaxis()->SetLabelSize(0.05);
   _stack_260->GetZaxis()->SetLabelFont(42);
   _stack_260->GetZaxis()->SetLabelOffset(0.007);
   _stack_260->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_260);
   
   Double_t xAxis3896[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3896);
   JetMultiplicity_all->SetBinContent(3,44.20771);
   JetMultiplicity_all->SetBinContent(4,122.1693);
   JetMultiplicity_all->SetBinContent(5,185.5878);
   JetMultiplicity_all->SetBinContent(6,92.30667);
   JetMultiplicity_all->SetBinContent(7,14.98253);
   JetMultiplicity_all->SetBinContent(8,0.07519226);
   JetMultiplicity_all->SetBinError(3,2.194307);
   JetMultiplicity_all->SetBinError(4,4.679574);
   JetMultiplicity_all->SetBinError(5,6.964513);
   JetMultiplicity_all->SetBinError(6,4.897742);
   JetMultiplicity_all->SetBinError(7,1.93081);
   JetMultiplicity_all->SetBinError(8,0.07519226);
   JetMultiplicity_all->SetEntries(4359);
   JetMultiplicity_all->SetLineColor(3);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerColor(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis3897[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3897);
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
   Double_t xAxis3898[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3898);
   JetMultiplicity_all->SetBinContent(3,53);
   JetMultiplicity_all->SetBinContent(4,110);
   JetMultiplicity_all->SetBinContent(5,182);
   JetMultiplicity_all->SetBinContent(6,89);
   JetMultiplicity_all->SetBinContent(7,21);
   JetMultiplicity_all->SetBinContent(8,1);
   JetMultiplicity_all->SetBinError(3,7.28011);
   JetMultiplicity_all->SetBinError(4,10.48809);
   JetMultiplicity_all->SetBinError(5,13.49074);
   JetMultiplicity_all->SetBinError(6,9.433981);
   JetMultiplicity_all->SetBinError(7,4.582576);
   JetMultiplicity_all->SetBinError(8,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1855.878);
   JetMultiplicity_all->SetEntries(456);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->cd();
  
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
   Double_t xAxis3899[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3899);
   JetMultiplicity_all->SetBinContent(3,1.198886);
   JetMultiplicity_all->SetBinContent(4,0.9003898);
   JetMultiplicity_all->SetBinContent(5,0.9806677);
   JetMultiplicity_all->SetBinContent(6,0.9641773);
   JetMultiplicity_all->SetBinContent(7,1.401632);
   JetMultiplicity_all->SetBinContent(8,13.29924);
   JetMultiplicity_all->SetBinError(3,0.1460537);
   JetMultiplicity_all->SetBinError(4,0.1027526);
   JetMultiplicity_all->SetBinError(5,0.08308288);
   JetMultiplicity_all->SetBinError(6,0.118538);
   JetMultiplicity_all->SetBinError(7,0.2534299);
   JetMultiplicity_all->SetBinError(8,1.414214);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(0.9927953);
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
   gre->SetPointError(2,0.5,0.04963629);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.03830401);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.03752678);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.05305946);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.1288708);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,1);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all650 = new TH1F("Graph_Graph_from_JetMultiplicity_all650","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all650->SetMinimum(-0.2);
   Graph_Graph_from_JetMultiplicity_all650->SetMaximum(2.2);
   Graph_Graph_from_JetMultiplicity_all650->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all650->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all650->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all650->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all650->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all650->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all650->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all650->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all650->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all650->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all650->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all650->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all650);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3900[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3900);
   JetMultiplicity_all->SetBinContent(3,1.198886);
   JetMultiplicity_all->SetBinContent(4,0.9003898);
   JetMultiplicity_all->SetBinContent(5,0.9806677);
   JetMultiplicity_all->SetBinContent(6,0.9641773);
   JetMultiplicity_all->SetBinContent(7,1.401632);
   JetMultiplicity_all->SetBinContent(8,13.29924);
   JetMultiplicity_all->SetBinError(3,0.1460537);
   JetMultiplicity_all->SetBinError(4,0.1027526);
   JetMultiplicity_all->SetBinError(5,0.08308288);
   JetMultiplicity_all->SetBinError(6,0.118538);
   JetMultiplicity_all->SetBinError(7,0.2534299);
   JetMultiplicity_all->SetBinError(8,1.414214);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(0.9927953);
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
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->Modified();
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all->SetSelected(canvasbtag_morethanzero_OneMuon_475_575/JetMultiplicity_all);
}
