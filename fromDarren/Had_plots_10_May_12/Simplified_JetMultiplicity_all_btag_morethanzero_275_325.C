{
//=========Macro generated from canvas: canvasbtag_morethanzero_275_325/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:24:40 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_275_325/JetMultiplicity_all = new TCanvas("canvasbtag_morethanzero_275_325/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->SetHighLightColor(2);
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->Range(0,0,1,1);
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->SetFillColor(0);
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->SetBorderMode(0);
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->SetBorderSize(2);
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->SetTickx(1);
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->SetTicky(1);
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-1.251819,16.875,8.256069);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3834[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3834);
   JetMultiplicity_all->SetBinContent(3,1147);
   JetMultiplicity_all->SetBinContent(4,1239);
   JetMultiplicity_all->SetBinContent(5,3130);
   JetMultiplicity_all->SetBinContent(6,1240);
   JetMultiplicity_all->SetBinContent(7,3);
   JetMultiplicity_all->SetBinError(3,33.86739);
   JetMultiplicity_all->SetBinError(4,35.19943);
   JetMultiplicity_all->SetBinError(5,55.9464);
   JetMultiplicity_all->SetBinError(6,35.21363);
   JetMultiplicity_all->SetBinError(7,2.14);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(2.019669e+07);
   JetMultiplicity_all->SetEntries(6759);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   Double_t xAxis3835[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3835);
   JetMultiplicity_all->SetBinContent(3,329.7914);
   JetMultiplicity_all->SetBinContent(4,422.3003);
   JetMultiplicity_all->SetBinContent(5,182.7597);
   JetMultiplicity_all->SetBinContent(6,17.40233);
   JetMultiplicity_all->SetBinError(3,5.094191);
   JetMultiplicity_all->SetBinError(4,5.927372);
   JetMultiplicity_all->SetBinError(5,4.312158);
   JetMultiplicity_all->SetBinError(6,2.053891);
   JetMultiplicity_all->SetEntries(16558);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_256 = new TH1F("_stack_256","",15,0,15);
   _stack_256->SetMinimum(813.6956);
   _stack_256->SetMaximum(3254782);
   _stack_256->SetDirectory(0);
   _stack_256->SetStats(0);
   _stack_256->GetXaxis()->SetLabelFont(42);
   _stack_256->GetXaxis()->SetLabelOffset(0.007);
   _stack_256->GetXaxis()->SetLabelSize(0.05);
   _stack_256->GetXaxis()->SetTitleSize(0.05);
   _stack_256->GetYaxis()->SetLabelFont(42);
   _stack_256->GetYaxis()->SetLabelOffset(0.007);
   _stack_256->GetYaxis()->SetLabelSize(0.05);
   _stack_256->GetZaxis()->SetLabelFont(42);
   _stack_256->GetZaxis()->SetLabelOffset(0.007);
   _stack_256->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_256);
   
   Double_t xAxis3836[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3836);
   JetMultiplicity_all->SetBinContent(3,1281.908);
   JetMultiplicity_all->SetBinContent(4,4537.605);
   JetMultiplicity_all->SetBinContent(5,5852.799);
   JetMultiplicity_all->SetBinContent(6,876.6879);
   JetMultiplicity_all->SetBinContent(7,3.601339);
   JetMultiplicity_all->SetBinError(3,50.2561);
   JetMultiplicity_all->SetBinError(4,78.22744);
   JetMultiplicity_all->SetBinError(5,72.39565);
   JetMultiplicity_all->SetBinError(6,26.55076);
   JetMultiplicity_all->SetBinError(7,1.324265);
   JetMultiplicity_all->SetEntries(98475);
   JetMultiplicity_all->SetLineColor(3);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerColor(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis3837[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3837);
   JetMultiplicity_all->SetBinContent(3,1671440);
   JetMultiplicity_all->SetBinContent(4,2015131);
   JetMultiplicity_all->SetBinContent(5,1018821);
   JetMultiplicity_all->SetBinContent(6,160325.8);
   JetMultiplicity_all->SetBinContent(7,2382.973);
   JetMultiplicity_all->SetBinError(3,16513.61);
   JetMultiplicity_all->SetBinError(4,19108.03);
   JetMultiplicity_all->SetBinError(5,28358.12);
   JetMultiplicity_all->SetBinError(6,16050.42);
   JetMultiplicity_all->SetBinError(7,2328.335);
   JetMultiplicity_all->SetEntries(88340);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_275_325    Jet Multiplicity=all");
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
   Double_t xAxis3838[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3838);
   JetMultiplicity_all->SetBinContent(3,1147);
   JetMultiplicity_all->SetBinContent(4,1239);
   JetMultiplicity_all->SetBinContent(5,3130);
   JetMultiplicity_all->SetBinContent(6,1240);
   JetMultiplicity_all->SetBinContent(7,3);
   JetMultiplicity_all->SetBinError(3,33.86739);
   JetMultiplicity_all->SetBinError(4,35.19943);
   JetMultiplicity_all->SetBinError(5,55.9464);
   JetMultiplicity_all->SetBinError(6,35.21363);
   JetMultiplicity_all->SetBinError(7,2.14);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(2.019669e+07);
   JetMultiplicity_all->SetEntries(6759);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->cd();
  
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
   Double_t xAxis3839[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3839);
   JetMultiplicity_all->SetBinContent(3,0.89476);
   JetMultiplicity_all->SetBinContent(4,0.2730516);
   JetMultiplicity_all->SetBinContent(5,0.5347869);
   JetMultiplicity_all->SetBinContent(6,1.414414);
   JetMultiplicity_all->SetBinContent(7,0.8330235);
   JetMultiplicity_all->SetBinError(3,0.04907957);
   JetMultiplicity_all->SetBinError(4,0.03323121);
   JetMultiplicity_all->SetBinError(5,0.02173686);
   JetMultiplicity_all->SetBinError(6,0.04151688);
   JetMultiplicity_all->SetBinError(7,0.8025326);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(34.47942);
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
   gre->SetPointError(2,0.5,0.03920414);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.01723981);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.01236941);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.03028531);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.3677147);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all640 = new TH1F("Graph_Graph_from_JetMultiplicity_all640","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all640->SetMinimum(0.5587423);
   Graph_Graph_from_JetMultiplicity_all640->SetMaximum(1.441258);
   Graph_Graph_from_JetMultiplicity_all640->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all640->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all640->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all640->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all640->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all640->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all640->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all640->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all640->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all640->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all640->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all640->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all640);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3840[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis3840);
   JetMultiplicity_all->SetBinContent(3,0.89476);
   JetMultiplicity_all->SetBinContent(4,0.2730516);
   JetMultiplicity_all->SetBinContent(5,0.5347869);
   JetMultiplicity_all->SetBinContent(6,1.414414);
   JetMultiplicity_all->SetBinContent(7,0.8330235);
   JetMultiplicity_all->SetBinError(3,0.04907957);
   JetMultiplicity_all->SetBinError(4,0.03323121);
   JetMultiplicity_all->SetBinError(5,0.02173686);
   JetMultiplicity_all->SetBinError(6,0.04151688);
   JetMultiplicity_all->SetBinError(7,0.8025326);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(34.47942);
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
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->Modified();
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_275_325/JetMultiplicity_all->SetSelected(canvasbtag_morethanzero_275_325/JetMultiplicity_all);
}
