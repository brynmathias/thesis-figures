{
//=========Macro generated from canvas: canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all/cannameBiasedDeltaPhi_after_alphaT_55_all
//=========  (Thu May 10 12:25:47 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all = new TCanvas("canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all", "cannameBiasedDeltaPhi_after_alphaT_55_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->SetHighLightColor(2);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->Range(0,0,1,1);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->SetFillColor(0);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->SetBorderMode(0);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->SetBorderSize(2);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->SetTickx(1);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->SetTicky(1);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-0.5945143,3.534292,2.340329);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5641[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5641);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,7);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,8);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,7);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,4);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,2);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,2);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(12,1);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,2.86);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,3.03);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,2.86);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,2.3);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,2);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,2);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(12,1);
   BiasedDeltaPhi_after_alphaT_55_all->SetMinimum(0.5);
   BiasedDeltaPhi_after_alphaT_55_all->SetMaximum(111.3895);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(31);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(2);
   BiasedDeltaPhi_after_alphaT_55_all->SetMarkerStyle(20);
   BiasedDeltaPhi_after_alphaT_55_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_after_alphaT_55_all->Draw("PE0");
   Double_t xAxis5642[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5642);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,2.046439);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,1.256434);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,0.7668864);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,1.589266);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,0.3187);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,0.1578001);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(7,0.1234885);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(8,0.2244253);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(9,0.1245578);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(10,0.006795982);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,0.4445753);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,0.3267885);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,0.2271862);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,0.7437648);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,0.1264472);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,0.09418706);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(7,0.07371493);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(8,0.1122921);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(9,0.08845997);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(10,0.004805485);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(117);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineColor(4);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(3);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_after_alphaT_55_all->Draw("HISTSAME");
   Double_t xAxis5643[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5643);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,7.519225);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,5.332101);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,3.517967);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,0.8723545);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,0.3652118);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,0.1393525);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,1.47686);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,1.108327);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,1.204894);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,0.4019513);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,0.3652118);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,0.1393525);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(92);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineColor(2);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(3);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_after_alphaT_55_all->Draw("HISTSAME");
   Double_t xAxis5644[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5644);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,1.048678);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,0.6391038);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,0.9807875);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,1.293854);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,1.450758);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,0.4913011);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(7,0.4321657);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(8,0.4416807);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(9,0.2208021);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(10,0.4393368);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(11,0.2441988);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(12,0.2480839);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,0.3091911);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,0.2049591);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,0.2625256);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,0.2897299);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,0.3227803);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,0.1852766);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(7,0.1667644);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(8,0.1729145);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(9,0.1155485);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(10,0.1669811);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(11,0.1224368);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(12,0.1438708);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(143);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineColor(5);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(3);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_after_alphaT_55_all->Draw("HISTSAME");
   Double_t xAxis5645[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5645);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineColor(6);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(3);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_after_alphaT_55_all->Draw("HISTSAME");
   Double_t xAxis5646[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5646);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,0.01494431);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,0.01561587);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,0.042966);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(7,0.04292338);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(8,0.006640789);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(9,0.01639866);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,0.01147591);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,0.008709121);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,0.0270312);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(7,0.02267111);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(8,0.006640789);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(9,0.01639866);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(15);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineColor(44);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(3);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_after_alphaT_55_all->Draw("HISTSAME");
   Double_t xAxis5647[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5647);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineColor(7);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineStyle(10);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(3);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_after_alphaT_55_all->Draw("HISTSAME");
   Double_t xAxis5648[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5648);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,0.5246087);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,0.2961198);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,0.1238122);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,0.1510898);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,0.1397086);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,0.05057472);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(7,0.05741128);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(8,0.003044231);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,0.1876707);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,0.1232979);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,0.07328522);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,0.1081713);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,0.09957701);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,0.04763068);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(7,0.04427969);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(8,0.003044231);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(29);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineColor(40);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(3);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_after_alphaT_55_all->Draw("HISTSAME");
   Double_t xAxis5649[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5649);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,11.13895);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,7.538703);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,5.405069);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,3.949531);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,2.274379);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,0.8390285);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(7,0.6559888);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(8,0.675791);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(9,0.3617585);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(10,0.4461328);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(11,0.2441988);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(12,0.2480839);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,1.584166);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,1.180052);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,1.256084);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,0.9006254);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,0.5132945);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,0.2547281);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(7,0.1889945);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(8,0.2063063);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(9,0.146443);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(10,0.1670503);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(11,0.1224368);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(12,0.1438708);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(396);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineColor(3);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(3);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_after_alphaT_55_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_after_alphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.1308997,0);
   gre->SetPointError(0,0.1308997,0);
   gre->SetPoint(1,0.3926991,0);
   gre->SetPointError(1,0.1308997,0);
   gre->SetPoint(2,0.6544985,0);
   gre->SetPointError(2,0.1308997,0);
   gre->SetPoint(3,0.9162979,0);
   gre->SetPointError(3,0.1308997,0);
   gre->SetPoint(4,1.178097,0);
   gre->SetPointError(4,0.1308997,0);
   gre->SetPoint(5,1.439897,0);
   gre->SetPointError(5,0.1308997,0);
   gre->SetPoint(6,1.701696,0);
   gre->SetPointError(6,0.1308997,0);
   gre->SetPoint(7,1.963495,0);
   gre->SetPointError(7,0.1308997,0);
   gre->SetPoint(8,2.225295,0);
   gre->SetPointError(8,0.1308997,0);
   gre->SetPoint(9,2.487094,0);
   gre->SetPointError(9,0.1308997,0);
   gre->SetPoint(10,2.748894,0);
   gre->SetPointError(10,0.1308997,0);
   gre->SetPoint(11,3.010693,0);
   gre->SetPointError(11,0.1308997,0);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->SetMinimum(0.0011);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->SetMaximum(1.1);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all941);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_after_alphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.1308997,11.13895);
   gre->SetPointError(0,0.1308997,1.584166);
   gre->SetPoint(1,0.3926991,7.538703);
   gre->SetPointError(1,0.1308997,1.180052);
   gre->SetPoint(2,0.6544985,5.405069);
   gre->SetPointError(2,0.1308997,1.256084);
   gre->SetPoint(3,0.9162979,3.949531);
   gre->SetPointError(3,0.1308997,0.9006254);
   gre->SetPoint(4,1.178097,2.274379);
   gre->SetPointError(4,0.1308997,0.5132945);
   gre->SetPoint(5,1.439897,0.8390285);
   gre->SetPointError(5,0.1308997,0.2547281);
   gre->SetPoint(6,1.701696,0.6559888);
   gre->SetPointError(6,0.1308997,0.1889945);
   gre->SetPoint(7,1.963495,0.675791);
   gre->SetPointError(7,0.1308997,0.2063063);
   gre->SetPoint(8,2.225295,0.3617585);
   gre->SetPointError(8,0.1308997,0.146443);
   gre->SetPoint(9,2.487094,0.4461328);
   gre->SetPointError(9,0.1308997,0.1670503);
   gre->SetPoint(10,2.748894,0.2441988);
   gre->SetPointError(10,0.1308997,0.1224368);
   gre->SetPoint(11,3.010693,0.2480839);
   gre->SetPointError(11,0.1308997,0.1438708);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->SetMinimum(0.09379177);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->SetMaximum(13.98501);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all942);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.68,0.53,0.9,0.75,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_after_alphaT_55_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_575_675    Jet Multiplicity=all");
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
   Double_t xAxis5650[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5650);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,7);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,8);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,7);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,4);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,2);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,2);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(12,1);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,2.86);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,3.03);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,2.86);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,2.3);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,2);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,2);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(12,1);
   BiasedDeltaPhi_after_alphaT_55_all->SetMinimum(0.5);
   BiasedDeltaPhi_after_alphaT_55_all->SetMaximum(111.3895);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(31);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(2);
   BiasedDeltaPhi_after_alphaT_55_all->SetMarkerStyle(20);
   BiasedDeltaPhi_after_alphaT_55_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_after_alphaT_55_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->cd();
  
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
   Double_t xAxis5651[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5651);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,0.6284254);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,1.061191);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,1.295081);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,1.012779);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,0.879361);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,2.383709);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(12,4.030894);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,0.4326162);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,0.4098219);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,0.470038);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,0.6185663);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,1.025151);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,1.04507);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(12,1.155992);
   BiasedDeltaPhi_after_alphaT_55_all->SetMinimum(0);
   BiasedDeltaPhi_after_alphaT_55_all->SetMaximum(2);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(4.28457);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(2);
   BiasedDeltaPhi_after_alphaT_55_all->SetMarkerStyle(20);
   BiasedDeltaPhi_after_alphaT_55_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetNdivisions(505);
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   BiasedDeltaPhi_after_alphaT_55_all->Draw("P");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_after_alphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.1308997,1);
   gre->SetPointError(0,0.1308997,0.1422186);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.1565325);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.2323901);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.2280335);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.2256856);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.3035989);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.2881063);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0.3052812);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0.4048086);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0.3744407);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,0.5013816);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,0.5799281);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->SetMinimum(0.3040862);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->SetMaximum(1.695914);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_after_alphaT_55_all943);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5652[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_after_alphaT_55_all = new TH1D("BiasedDeltaPhi_after_alphaT_55_all","",12, xAxis5652);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(1,0.6284254);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(2,1.061191);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(3,1.295081);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(4,1.012779);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(5,0.879361);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(6,2.383709);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinContent(12,4.030894);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(1,0.4326162);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(2,0.4098219);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(3,0.470038);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(4,0.6185663);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(5,1.025151);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(6,1.04507);
   BiasedDeltaPhi_after_alphaT_55_all->SetBinError(12,1.155992);
   BiasedDeltaPhi_after_alphaT_55_all->SetMinimum(0);
   BiasedDeltaPhi_after_alphaT_55_all->SetMaximum(2);
   BiasedDeltaPhi_after_alphaT_55_all->SetEntries(4.28457);
   BiasedDeltaPhi_after_alphaT_55_all->SetLineWidth(2);
   BiasedDeltaPhi_after_alphaT_55_all->SetMarkerStyle(20);
   BiasedDeltaPhi_after_alphaT_55_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_after_alphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetNdivisions(505);
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   BiasedDeltaPhi_after_alphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   BiasedDeltaPhi_after_alphaT_55_all->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->cd();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->Modified();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->cd();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all->SetSelected(canvasbtag_morethanzero_575_675/BiasedDeltaPhi_after_alphaT_55_all);
}
