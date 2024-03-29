{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:08:10 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all = new TCanvas("canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.8150275,16.875,4.324947);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3504[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3504);
   JetMultiplicity_all->SetBinContent(3,210);
   JetMultiplicity_all->SetBinContent(4,555);
   JetMultiplicity_all->SetBinContent(5,592);
   JetMultiplicity_all->SetBinContent(6,223);
   JetMultiplicity_all->SetBinContent(7,60);
   JetMultiplicity_all->SetBinContent(8,12);
   JetMultiplicity_all->SetBinContent(9,3);
   JetMultiplicity_all->SetBinContent(10,1);
   JetMultiplicity_all->SetBinError(3,14.49138);
   JetMultiplicity_all->SetBinError(4,23.55844);
   JetMultiplicity_all->SetBinError(5,24.33105);
   JetMultiplicity_all->SetBinError(6,14.93318);
   JetMultiplicity_all->SetBinError(7,7.745967);
   JetMultiplicity_all->SetBinError(8,3.464102);
   JetMultiplicity_all->SetBinError(9,2.14);
   JetMultiplicity_all->SetBinError(10,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(6470.679);
   JetMultiplicity_all->SetEntries(1656);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   Double_t xAxis3505[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3505);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_234 = new TH1F("_stack_234","",15,0,15);
   _stack_234->SetMinimum(0.2638441);
   _stack_234->SetMaximum(1055.376);
   _stack_234->SetDirectory(0);
   _stack_234->SetStats(0);
   _stack_234->GetXaxis()->SetLabelFont(42);
   _stack_234->GetXaxis()->SetLabelOffset(0.007);
   _stack_234->GetXaxis()->SetLabelSize(0.05);
   _stack_234->GetXaxis()->SetTitleSize(0.05);
   _stack_234->GetYaxis()->SetLabelFont(42);
   _stack_234->GetYaxis()->SetLabelOffset(0.007);
   _stack_234->GetYaxis()->SetLabelSize(0.05);
   _stack_234->GetZaxis()->SetLabelFont(42);
   _stack_234->GetZaxis()->SetLabelOffset(0.007);
   _stack_234->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_234);
   
   Double_t xAxis3506[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3506);
   JetMultiplicity_all->SetBinContent(3,206.1795);
   JetMultiplicity_all->SetBinContent(4,578.868);
   JetMultiplicity_all->SetBinContent(5,647.0679);
   JetMultiplicity_all->SetBinContent(6,242.48);
   JetMultiplicity_all->SetBinContent(7,69.12285);
   JetMultiplicity_all->SetBinContent(8,12.29027);
   JetMultiplicity_all->SetBinContent(9,0.7029665);
   JetMultiplicity_all->SetBinContent(10,0.3235712);
   JetMultiplicity_all->SetBinContent(11,0.2440702);
   JetMultiplicity_all->SetBinError(3,5.065044);
   JetMultiplicity_all->SetBinError(4,10.72986);
   JetMultiplicity_all->SetBinError(5,12.54227);
   JetMultiplicity_all->SetBinError(6,8.218074);
   JetMultiplicity_all->SetBinError(7,5.208075);
   JetMultiplicity_all->SetBinError(8,1.882339);
   JetMultiplicity_all->SetBinError(9,0.3960716);
   JetMultiplicity_all->SetBinError(10,0.2429587);
   JetMultiplicity_all->SetBinError(11,0.2440702);
   JetMultiplicity_all->SetEntries(16978);
   JetMultiplicity_all->SetLineColor(3);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerColor(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis3507[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3507);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_OneMuon_375_    Jet Multiplicity=all");
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
   Double_t xAxis3508[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3508);
   JetMultiplicity_all->SetBinContent(3,210);
   JetMultiplicity_all->SetBinContent(4,555);
   JetMultiplicity_all->SetBinContent(5,592);
   JetMultiplicity_all->SetBinContent(6,223);
   JetMultiplicity_all->SetBinContent(7,60);
   JetMultiplicity_all->SetBinContent(8,12);
   JetMultiplicity_all->SetBinContent(9,3);
   JetMultiplicity_all->SetBinContent(10,1);
   JetMultiplicity_all->SetBinError(3,14.49138);
   JetMultiplicity_all->SetBinError(4,23.55844);
   JetMultiplicity_all->SetBinError(5,24.33105);
   JetMultiplicity_all->SetBinError(6,14.93318);
   JetMultiplicity_all->SetBinError(7,7.745967);
   JetMultiplicity_all->SetBinError(8,3.464102);
   JetMultiplicity_all->SetBinError(9,2.14);
   JetMultiplicity_all->SetBinError(10,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(6470.679);
   JetMultiplicity_all->SetEntries(1656);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->cd();
  
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
   Double_t xAxis3509[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3509);
   JetMultiplicity_all->SetBinContent(3,1.01853);
   JetMultiplicity_all->SetBinContent(4,0.9587678);
   JetMultiplicity_all->SetBinContent(5,0.9148962);
   JetMultiplicity_all->SetBinContent(6,0.9196636);
   JetMultiplicity_all->SetBinContent(7,0.8680197);
   JetMultiplicity_all->SetBinContent(8,0.9763825);
   JetMultiplicity_all->SetBinContent(9,4.267628);
   JetMultiplicity_all->SetBinContent(10,3.09051);
   JetMultiplicity_all->SetBinError(3,0.07324891);
   JetMultiplicity_all->SetBinError(4,0.04631828);
   JetMultiplicity_all->SetBinError(5,0.04544116);
   JetMultiplicity_all->SetBinError(6,0.07505302);
   JetMultiplicity_all->SetBinError(7,0.1494776);
   JetMultiplicity_all->SetBinError(8,0.326788);
   JetMultiplicity_all->SetBinError(9,0.9090085);
   JetMultiplicity_all->SetBinError(10,1.25052);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(5.623704);
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
   gre->SetPointError(2,0.5,0.02456619);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.01853593);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.01938323);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.03389176);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.0753452);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.1531569);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,0.5634288);
   gre->SetPoint(9,9.5,1);
   gre->SetPointError(9,0.5,0.7508663);
   gre->SetPoint(10,10.5,1);
   gre->SetPointError(10,0.5,1);
   gre->SetPoint(11,11.5,1);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,1);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,1);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,1);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicity_all585 = new TH1F("Graph_Graph_from_JetMultiplicity_all585","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all585->SetMinimum(0);
   Graph_Graph_from_JetMultiplicity_all585->SetMaximum(2.2);
   Graph_Graph_from_JetMultiplicity_all585->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all585->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all585->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all585->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all585->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all585->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all585->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all585->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all585->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all585->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all585->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all585->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all585);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3510[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3510);
   JetMultiplicity_all->SetBinContent(3,1.01853);
   JetMultiplicity_all->SetBinContent(4,0.9587678);
   JetMultiplicity_all->SetBinContent(5,0.9148962);
   JetMultiplicity_all->SetBinContent(6,0.9196636);
   JetMultiplicity_all->SetBinContent(7,0.8680197);
   JetMultiplicity_all->SetBinContent(8,0.9763825);
   JetMultiplicity_all->SetBinContent(9,4.267628);
   JetMultiplicity_all->SetBinContent(10,3.09051);
   JetMultiplicity_all->SetBinError(3,0.07324891);
   JetMultiplicity_all->SetBinError(4,0.04631828);
   JetMultiplicity_all->SetBinError(5,0.04544116);
   JetMultiplicity_all->SetBinError(6,0.07505302);
   JetMultiplicity_all->SetBinError(7,0.1494776);
   JetMultiplicity_all->SetBinError(8,0.326788);
   JetMultiplicity_all->SetBinError(9,0.9090085);
   JetMultiplicity_all->SetBinError(10,1.25052);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(5.623704);
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
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->Modified();
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all->SetSelected(canvasbtag_morethanzero_OneMuon_375_475/JetMultiplicity_all);
}
