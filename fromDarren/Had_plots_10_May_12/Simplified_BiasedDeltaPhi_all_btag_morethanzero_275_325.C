{
//=========Macro generated from canvas: canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all/cannameBiasedDeltaPhi_all
//=========  (Thu May 10 12:24:35 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all = new TCanvas("canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all", "cannameBiasedDeltaPhi_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetHighLightColor(2);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->Range(0,0,1,1);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetFillColor(0);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetBorderMode(0);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetBorderSize(2);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetTickx(1);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetTicky(1);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-1.048493,3.534292,6.426139);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3744[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3744);
   BiasedDeltaPhi_all->SetBinContent(1,368);
   BiasedDeltaPhi_all->SetBinContent(2,151);
   BiasedDeltaPhi_all->SetBinContent(3,76);
   BiasedDeltaPhi_all->SetBinContent(4,22);
   BiasedDeltaPhi_all->SetBinContent(5,16);
   BiasedDeltaPhi_all->SetBinContent(6,5);
   BiasedDeltaPhi_all->SetBinContent(7,8);
   BiasedDeltaPhi_all->SetBinContent(9,2);
   BiasedDeltaPhi_all->SetBinContent(11,1);
   BiasedDeltaPhi_all->SetBinError(1,19.18333);
   BiasedDeltaPhi_all->SetBinError(2,12.28821);
   BiasedDeltaPhi_all->SetBinError(3,8.717798);
   BiasedDeltaPhi_all->SetBinError(4,4.690416);
   BiasedDeltaPhi_all->SetBinError(5,4);
   BiasedDeltaPhi_all->SetBinError(6,2.49);
   BiasedDeltaPhi_all->SetBinError(7,3.03);
   BiasedDeltaPhi_all->SetBinError(9,2);
   BiasedDeltaPhi_all->SetBinError(11,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(477172.5);
   BiasedDeltaPhi_all->SetEntries(649);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("");
   Double_t xAxis3745[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3745);
   BiasedDeltaPhi_all->SetBinContent(1,14.23762);
   BiasedDeltaPhi_all->SetBinContent(2,10.9205);
   BiasedDeltaPhi_all->SetBinContent(3,10.07508);
   BiasedDeltaPhi_all->SetBinContent(4,5.181345);
   BiasedDeltaPhi_all->SetBinContent(5,3.410067);
   BiasedDeltaPhi_all->SetBinContent(6,1.788964);
   BiasedDeltaPhi_all->SetBinContent(7,1.376245);
   BiasedDeltaPhi_all->SetBinContent(8,1.853185);
   BiasedDeltaPhi_all->SetBinContent(9,0.6820486);
   BiasedDeltaPhi_all->SetBinContent(10,0.2178129);
   BiasedDeltaPhi_all->SetBinContent(11,0.2710208);
   BiasedDeltaPhi_all->SetBinError(1,1.749729);
   BiasedDeltaPhi_all->SetBinError(2,1.050185);
   BiasedDeltaPhi_all->SetBinError(3,1.640513);
   BiasedDeltaPhi_all->SetBinError(4,0.6383522);
   BiasedDeltaPhi_all->SetBinError(5,0.778844);
   BiasedDeltaPhi_all->SetBinError(6,0.3640954);
   BiasedDeltaPhi_all->SetBinError(7,0.3635545);
   BiasedDeltaPhi_all->SetBinError(8,1.19058);
   BiasedDeltaPhi_all->SetBinError(9,0.2279949);
   BiasedDeltaPhi_all->SetBinError(10,0.1205897);
   BiasedDeltaPhi_all->SetBinError(11,0.1395841);
   BiasedDeltaPhi_all->SetEntries(622);
   BiasedDeltaPhi_all->SetLineColor(5);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_250 = new TH1F("_stack_250","",12,0,3.141593);
   _stack_250->SetMinimum(21.20286);
   _stack_250->SetMaximum(84811.44);
   _stack_250->SetDirectory(0);
   _stack_250->SetStats(0);
   _stack_250->GetXaxis()->SetLabelFont(42);
   _stack_250->GetXaxis()->SetLabelOffset(0.007);
   _stack_250->GetXaxis()->SetLabelSize(0.05);
   _stack_250->GetXaxis()->SetTitleSize(0.05);
   _stack_250->GetYaxis()->SetLabelFont(42);
   _stack_250->GetYaxis()->SetLabelOffset(0.007);
   _stack_250->GetYaxis()->SetLabelSize(0.05);
   _stack_250->GetZaxis()->SetLabelFont(42);
   _stack_250->GetZaxis()->SetLabelOffset(0.007);
   _stack_250->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_250);
   
   Double_t xAxis3746[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3746);
   BiasedDeltaPhi_all->SetBinContent(1,238.4932);
   BiasedDeltaPhi_all->SetBinContent(2,123.3196);
   BiasedDeltaPhi_all->SetBinContent(3,97.80377);
   BiasedDeltaPhi_all->SetBinContent(4,35.74421);
   BiasedDeltaPhi_all->SetBinContent(5,16.40515);
   BiasedDeltaPhi_all->SetBinContent(6,4.612454);
   BiasedDeltaPhi_all->SetBinContent(7,3.543262);
   BiasedDeltaPhi_all->SetBinContent(8,3.120898);
   BiasedDeltaPhi_all->SetBinContent(9,5.40637);
   BiasedDeltaPhi_all->SetBinContent(10,0.6028434);
   BiasedDeltaPhi_all->SetBinContent(11,0.2772626);
   BiasedDeltaPhi_all->SetBinContent(12,0.03547385);
   BiasedDeltaPhi_all->SetBinError(1,12.90329);
   BiasedDeltaPhi_all->SetBinError(2,8.835767);
   BiasedDeltaPhi_all->SetBinError(3,9.38894);
   BiasedDeltaPhi_all->SetBinError(4,7.343584);
   BiasedDeltaPhi_all->SetBinError(5,4.725721);
   BiasedDeltaPhi_all->SetBinError(6,1.009497);
   BiasedDeltaPhi_all->SetBinError(7,0.7848332);
   BiasedDeltaPhi_all->SetBinError(8,1.31449);
   BiasedDeltaPhi_all->SetBinError(9,4.014141);
   BiasedDeltaPhi_all->SetBinError(10,0.2950177);
   BiasedDeltaPhi_all->SetBinError(11,0.1397236);
   BiasedDeltaPhi_all->SetBinError(12,0.03547385);
   BiasedDeltaPhi_all->SetEntries(3593);
   BiasedDeltaPhi_all->SetLineColor(3);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->SetMarkerColor(3);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis3747[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3747);
   BiasedDeltaPhi_all->SetBinContent(1,47478.76);
   BiasedDeltaPhi_all->SetBinContent(2,12670.8);
   BiasedDeltaPhi_all->SetBinContent(3,6667.505);
   BiasedDeltaPhi_all->SetBinContent(4,1708.986);
   BiasedDeltaPhi_all->SetBinError(1,5528.389);
   BiasedDeltaPhi_all->SetBinError(2,4654.704);
   BiasedDeltaPhi_all->SetBinError(3,6373.768);
   BiasedDeltaPhi_all->SetBinError(4,1708.986);
   BiasedDeltaPhi_all->SetEntries(604);
   BiasedDeltaPhi_all->SetLineColor(7);
   BiasedDeltaPhi_all->SetLineStyle(10);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
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
   TLegendEntry *entry=leg->AddEntry("BiasedDeltaPhi_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("BiasedDeltaPhi_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","Combined EWK","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","QCD","L");
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
   Double_t xAxis3748[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3748);
   BiasedDeltaPhi_all->SetBinContent(1,368);
   BiasedDeltaPhi_all->SetBinContent(2,151);
   BiasedDeltaPhi_all->SetBinContent(3,76);
   BiasedDeltaPhi_all->SetBinContent(4,22);
   BiasedDeltaPhi_all->SetBinContent(5,16);
   BiasedDeltaPhi_all->SetBinContent(6,5);
   BiasedDeltaPhi_all->SetBinContent(7,8);
   BiasedDeltaPhi_all->SetBinContent(9,2);
   BiasedDeltaPhi_all->SetBinContent(11,1);
   BiasedDeltaPhi_all->SetBinError(1,19.18333);
   BiasedDeltaPhi_all->SetBinError(2,12.28821);
   BiasedDeltaPhi_all->SetBinError(3,8.717798);
   BiasedDeltaPhi_all->SetBinError(4,4.690416);
   BiasedDeltaPhi_all->SetBinError(5,4);
   BiasedDeltaPhi_all->SetBinError(6,2.49);
   BiasedDeltaPhi_all->SetBinError(7,3.03);
   BiasedDeltaPhi_all->SetBinError(9,2);
   BiasedDeltaPhi_all->SetBinError(11,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(477172.5);
   BiasedDeltaPhi_all->SetEntries(649);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-0.3926991,-0.25,3.534292,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis3749[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3749);
   BiasedDeltaPhi_all->SetBinContent(1,1.543021);
   BiasedDeltaPhi_all->SetBinContent(2,1.224461);
   BiasedDeltaPhi_all->SetBinContent(3,0.7770662);
   BiasedDeltaPhi_all->SetBinContent(4,0.6154843);
   BiasedDeltaPhi_all->SetBinContent(5,0.9753037);
   BiasedDeltaPhi_all->SetBinContent(6,1.084022);
   BiasedDeltaPhi_all->SetBinContent(7,2.257807);
   BiasedDeltaPhi_all->SetBinContent(9,0.369934);
   BiasedDeltaPhi_all->SetBinContent(11,3.606689);
   BiasedDeltaPhi_all->SetBinError(1,0.07513034);
   BiasedDeltaPhi_all->SetBinError(2,0.1084258);
   BiasedDeltaPhi_all->SetBinError(3,0.1495776);
   BiasedDeltaPhi_all->SetBinError(4,0.2960802);
   BiasedDeltaPhi_all->SetBinError(5,0.381419);
   BiasedDeltaPhi_all->SetBinError(6,0.5439716);
   BiasedDeltaPhi_all->SetBinError(7,0.4387641);
   BiasedDeltaPhi_all->SetBinError(9,1.245505);
   BiasedDeltaPhi_all->SetBinError(11,1.119801);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(8.58346);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetLabelSize(0.12);
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Data/MC");
   BiasedDeltaPhi_all->GetYaxis()->SetNdivisions(505);
   BiasedDeltaPhi_all->GetYaxis()->SetLabelSize(0.11);
   BiasedDeltaPhi_all->GetYaxis()->SetTitleSize(0.1);
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(0.5);
   BiasedDeltaPhi_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.1308997,1);
   gre->SetPointError(0,0.1308997,0.05410339);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.07164934);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.09599773);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.2054482);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.2880633);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.2188632);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.2215002);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0.4211896);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0.7424835);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0.4893769);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,0.5039396);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,1);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all625 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all625","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all625->SetMinimum(0);
   Graph_Graph_from_BiasedDeltaPhi_all625->SetMaximum(2.2);
   Graph_Graph_from_BiasedDeltaPhi_all625->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all625->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all625->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all625);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3750[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3750);
   BiasedDeltaPhi_all->SetBinContent(1,1.543021);
   BiasedDeltaPhi_all->SetBinContent(2,1.224461);
   BiasedDeltaPhi_all->SetBinContent(3,0.7770662);
   BiasedDeltaPhi_all->SetBinContent(4,0.6154843);
   BiasedDeltaPhi_all->SetBinContent(5,0.9753037);
   BiasedDeltaPhi_all->SetBinContent(6,1.084022);
   BiasedDeltaPhi_all->SetBinContent(7,2.257807);
   BiasedDeltaPhi_all->SetBinContent(9,0.369934);
   BiasedDeltaPhi_all->SetBinContent(11,3.606689);
   BiasedDeltaPhi_all->SetBinError(1,0.07513034);
   BiasedDeltaPhi_all->SetBinError(2,0.1084258);
   BiasedDeltaPhi_all->SetBinError(3,0.1495776);
   BiasedDeltaPhi_all->SetBinError(4,0.2960802);
   BiasedDeltaPhi_all->SetBinError(5,0.381419);
   BiasedDeltaPhi_all->SetBinError(6,0.5439716);
   BiasedDeltaPhi_all->SetBinError(7,0.4387641);
   BiasedDeltaPhi_all->SetBinError(9,1.245505);
   BiasedDeltaPhi_all->SetBinError(11,1.119801);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(8.58346);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetLabelSize(0.12);
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Data/MC");
   BiasedDeltaPhi_all->GetYaxis()->SetNdivisions(505);
   BiasedDeltaPhi_all->GetYaxis()->SetLabelSize(0.11);
   BiasedDeltaPhi_all->GetYaxis()->SetTitleSize(0.1);
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(0.5);
   BiasedDeltaPhi_all->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->cd();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->Modified();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->cd();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetSelected(canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all);
}
