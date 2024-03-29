{
//=========Macro generated from canvas: canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:06:41 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all = new TCanvas("canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.8527994,6.75,4.664895);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis954[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis954);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,451);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,241);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,154);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,17);
   Btag_Pre_AlphaT_5__all->SetBinError(1,21.23676);
   Btag_Pre_AlphaT_5__all->SetBinError(2,15.52417);
   Btag_Pre_AlphaT_5__all->SetBinError(3,12.40967);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.123106);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(12975.53);
   Btag_Pre_AlphaT_5__all->SetEntries(863);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   Double_t xAxis955[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis955);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_64 = new TH1F("_stack_64","",6,0,6);
   _stack_64->SetMinimum(0.5228359);
   _stack_64->SetMaximum(2091.344);
   _stack_64->SetDirectory(0);
   _stack_64->SetStats(0);
   _stack_64->GetXaxis()->SetLabelFont(42);
   _stack_64->GetXaxis()->SetLabelOffset(0.007);
   _stack_64->GetXaxis()->SetLabelSize(0.05);
   _stack_64->GetXaxis()->SetTitleSize(0.05);
   _stack_64->GetYaxis()->SetLabelFont(42);
   _stack_64->GetYaxis()->SetLabelOffset(0.007);
   _stack_64->GetYaxis()->SetLabelSize(0.05);
   _stack_64->GetZaxis()->SetLabelFont(42);
   _stack_64->GetZaxis()->SetLabelOffset(0.007);
   _stack_64->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_64);
   
   Double_t xAxis956[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis956);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,1296.221);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,439.1321);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,239.3173);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,20.64433);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.32695);
   Btag_Pre_AlphaT_5__all->SetBinError(1,10.86885);
   Btag_Pre_AlphaT_5__all->SetBinError(2,9.681893);
   Btag_Pre_AlphaT_5__all->SetBinError(3,7.634776);
   Btag_Pre_AlphaT_5__all->SetBinError(4,3.027871);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.6075775);
   Btag_Pre_AlphaT_5__all->SetEntries(32868);
   Btag_Pre_AlphaT_5__all->SetLineColor(3);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerColor(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis957[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis957);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,1.33223);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,2.243954);
   Btag_Pre_AlphaT_5__all->SetBinError(1,1.33223);
   Btag_Pre_AlphaT_5__all->SetBinError(4,2.243954);
   Btag_Pre_AlphaT_5__all->SetEntries(2);
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
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_475_575    Jet Multiplicity=all");
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
   Double_t xAxis958[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis958);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,451);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,241);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,154);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,17);
   Btag_Pre_AlphaT_5__all->SetBinError(1,21.23676);
   Btag_Pre_AlphaT_5__all->SetBinError(2,15.52417);
   Btag_Pre_AlphaT_5__all->SetBinError(3,12.40967);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.123106);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(12975.53);
   Btag_Pre_AlphaT_5__all->SetEntries(863);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis959[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis959);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.3479345);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.5488098);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.6434971);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.8234707);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.0478289);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.06808438);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.08666755);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2834346);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(94.28327);
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
   gre->SetPointError(0,0.5,0.008385025);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.02204779);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.03190231);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.1466684);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.4578751);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all160 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all160","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->SetMinimum(0.4505499);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->SetMaximum(1.54945);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all160->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all160);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis960[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis960);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.3479345);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.5488098);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.6434971);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.8234707);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.0478289);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.06808438);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.08666755);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2834346);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(94.28327);
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
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->cd();
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->Modified();
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->cd();
   canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all->SetSelected(canvasOneMuon_475_575/Btag_Pre_AlphaT_5__all);
}
