{
//=========Macro generated from canvas: canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all/cannameBiasedDeltaPhi_all
//=========  (Thu May 10 12:24:49 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all = new TCanvas("canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all", "cannameBiasedDeltaPhi_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->SetHighLightColor(2);
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->Range(0,0,1,1);
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->SetFillColor(0);
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->SetBorderMode(0);
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->SetBorderSize(2);
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->SetTickx(1);
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->SetTicky(1);
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-1.020301,3.534292,6.172412);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4111[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4111);
   BiasedDeltaPhi_all->SetBinContent(1,397);
   BiasedDeltaPhi_all->SetBinContent(2,136);
   BiasedDeltaPhi_all->SetBinContent(3,58);
   BiasedDeltaPhi_all->SetBinContent(4,22);
   BiasedDeltaPhi_all->SetBinContent(5,5);
   BiasedDeltaPhi_all->SetBinContent(6,5);
   BiasedDeltaPhi_all->SetBinContent(7,1);
   BiasedDeltaPhi_all->SetBinContent(8,3);
   BiasedDeltaPhi_all->SetBinContent(10,1);
   BiasedDeltaPhi_all->SetBinError(1,19.92486);
   BiasedDeltaPhi_all->SetBinError(2,11.6619);
   BiasedDeltaPhi_all->SetBinError(3,7.615773);
   BiasedDeltaPhi_all->SetBinError(4,4.690416);
   BiasedDeltaPhi_all->SetBinError(5,2.49);
   BiasedDeltaPhi_all->SetBinError(6,2.49);
   BiasedDeltaPhi_all->SetBinError(7,1);
   BiasedDeltaPhi_all->SetBinError(8,2.14);
   BiasedDeltaPhi_all->SetBinError(10,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(283883.8);
   BiasedDeltaPhi_all->SetEntries(628);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PE0");
   Double_t xAxis4112[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4112);
   BiasedDeltaPhi_all->SetBinContent(1,20.3076);
   BiasedDeltaPhi_all->SetBinContent(2,7.413795);
   BiasedDeltaPhi_all->SetBinContent(3,22.26904);
   BiasedDeltaPhi_all->SetBinContent(4,9.687289);
   BiasedDeltaPhi_all->SetBinError(1,9.048741);
   BiasedDeltaPhi_all->SetBinError(2,5.34205);
   BiasedDeltaPhi_all->SetBinError(3,15.45078);
   BiasedDeltaPhi_all->SetBinError(4,6.960692);
   BiasedDeltaPhi_all->SetEntries(15);
   BiasedDeltaPhi_all->SetLineColor(4);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis4113[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4113);
   BiasedDeltaPhi_all->SetBinContent(1,169.8035);
   BiasedDeltaPhi_all->SetBinContent(2,67.27234);
   BiasedDeltaPhi_all->SetBinContent(3,34.03357);
   BiasedDeltaPhi_all->SetBinContent(4,9.992983);
   BiasedDeltaPhi_all->SetBinContent(5,2.625783);
   BiasedDeltaPhi_all->SetBinContent(6,2.10265);
   BiasedDeltaPhi_all->SetBinContent(7,0.2195774);
   BiasedDeltaPhi_all->SetBinContent(8,0.7417657);
   BiasedDeltaPhi_all->SetBinError(1,8.299486);
   BiasedDeltaPhi_all->SetBinError(2,5.597008);
   BiasedDeltaPhi_all->SetBinError(3,3.190974);
   BiasedDeltaPhi_all->SetBinError(4,1.591514);
   BiasedDeltaPhi_all->SetBinError(5,0.8151209);
   BiasedDeltaPhi_all->SetBinError(6,0.6855301);
   BiasedDeltaPhi_all->SetBinError(7,0.2195774);
   BiasedDeltaPhi_all->SetBinError(8,0.4059774);
   BiasedDeltaPhi_all->SetEntries(1190);
   BiasedDeltaPhi_all->SetLineColor(2);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis4114[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4114);
   BiasedDeltaPhi_all->SetBinContent(1,8.049556);
   BiasedDeltaPhi_all->SetBinContent(2,6.000242);
   BiasedDeltaPhi_all->SetBinContent(3,6.34189);
   BiasedDeltaPhi_all->SetBinContent(4,2.920718);
   BiasedDeltaPhi_all->SetBinContent(5,1.825124);
   BiasedDeltaPhi_all->SetBinContent(6,0.9728038);
   BiasedDeltaPhi_all->SetBinContent(7,0.6734948);
   BiasedDeltaPhi_all->SetBinContent(8,0.6004931);
   BiasedDeltaPhi_all->SetBinContent(9,0.4728128);
   BiasedDeltaPhi_all->SetBinContent(10,0.204448);
   BiasedDeltaPhi_all->SetBinContent(11,0.08000721);
   BiasedDeltaPhi_all->SetBinError(1,1.065087);
   BiasedDeltaPhi_all->SetBinError(2,0.6855399);
   BiasedDeltaPhi_all->SetBinError(3,0.761248);
   BiasedDeltaPhi_all->SetBinError(4,0.5268376);
   BiasedDeltaPhi_all->SetBinError(5,0.3718962);
   BiasedDeltaPhi_all->SetBinError(6,0.2808752);
   BiasedDeltaPhi_all->SetBinError(7,0.2138203);
   BiasedDeltaPhi_all->SetBinError(8,0.2324399);
   BiasedDeltaPhi_all->SetBinError(9,0.1834777);
   BiasedDeltaPhi_all->SetBinError(10,0.1322938);
   BiasedDeltaPhi_all->SetBinError(11,0.08000721);
   BiasedDeltaPhi_all->SetEntries(418);
   BiasedDeltaPhi_all->SetLineColor(5);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis4115[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4115);
   BiasedDeltaPhi_all->SetBinContent(1,2.956762);
   BiasedDeltaPhi_all->SetBinContent(2,0.4382102);
   BiasedDeltaPhi_all->SetBinContent(3,1.301094);
   BiasedDeltaPhi_all->SetBinError(1,1.347037);
   BiasedDeltaPhi_all->SetBinError(2,0.4382102);
   BiasedDeltaPhi_all->SetBinError(3,0.9677797);
   BiasedDeltaPhi_all->SetEntries(9);
   BiasedDeltaPhi_all->SetLineColor(6);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis4116[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4116);
   BiasedDeltaPhi_all->SetBinContent(1,1.956629);
   BiasedDeltaPhi_all->SetBinContent(2,0.5553248);
   BiasedDeltaPhi_all->SetBinContent(3,0.1537098);
   BiasedDeltaPhi_all->SetBinContent(4,0.1490502);
   BiasedDeltaPhi_all->SetBinContent(5,0.05524282);
   BiasedDeltaPhi_all->SetBinContent(6,0.0640181);
   BiasedDeltaPhi_all->SetBinContent(8,0.03948566);
   BiasedDeltaPhi_all->SetBinContent(9,0.01848659);
   BiasedDeltaPhi_all->SetBinContent(10,0.008602637);
   BiasedDeltaPhi_all->SetBinError(1,0.1879329);
   BiasedDeltaPhi_all->SetBinError(2,0.09161177);
   BiasedDeltaPhi_all->SetBinError(3,0.04671023);
   BiasedDeltaPhi_all->SetBinError(4,0.05342613);
   BiasedDeltaPhi_all->SetBinError(5,0.02005945);
   BiasedDeltaPhi_all->SetBinError(6,0.02062823);
   BiasedDeltaPhi_all->SetBinError(8,0.02432173);
   BiasedDeltaPhi_all->SetBinError(9,0.01575113);
   BiasedDeltaPhi_all->SetBinError(10,0.0063433);
   BiasedDeltaPhi_all->SetEntries(404);
   BiasedDeltaPhi_all->SetLineColor(44);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis4117[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4117);
   BiasedDeltaPhi_all->SetBinContent(1,28163.35);
   BiasedDeltaPhi_all->SetBinContent(2,3729.173);
   BiasedDeltaPhi_all->SetBinContent(3,2872.64);
   BiasedDeltaPhi_all->SetBinError(1,2055.824);
   BiasedDeltaPhi_all->SetBinError(2,1045.987);
   BiasedDeltaPhi_all->SetBinError(3,2342.017);
   BiasedDeltaPhi_all->SetEntries(416);
   BiasedDeltaPhi_all->SetLineColor(7);
   BiasedDeltaPhi_all->SetLineStyle(10);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis4118[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4118);
   BiasedDeltaPhi_all->SetBinContent(1,21.95121);
   BiasedDeltaPhi_all->SetBinContent(2,7.174694);
   BiasedDeltaPhi_all->SetBinContent(3,2.084257);
   BiasedDeltaPhi_all->SetBinContent(4,0.6822567);
   BiasedDeltaPhi_all->SetBinContent(5,0.2238604);
   BiasedDeltaPhi_all->SetBinContent(6,0.1196741);
   BiasedDeltaPhi_all->SetBinContent(7,0.04101893);
   BiasedDeltaPhi_all->SetBinContent(9,0.09316718);
   BiasedDeltaPhi_all->SetBinContent(10,0.04753348);
   BiasedDeltaPhi_all->SetBinError(1,1.688417);
   BiasedDeltaPhi_all->SetBinError(2,1.068655);
   BiasedDeltaPhi_all->SetBinError(3,0.3609776);
   BiasedDeltaPhi_all->SetBinError(4,0.1886126);
   BiasedDeltaPhi_all->SetBinError(5,0.1028075);
   BiasedDeltaPhi_all->SetBinError(6,0.08872556);
   BiasedDeltaPhi_all->SetBinError(7,0.04101893);
   BiasedDeltaPhi_all->SetBinError(9,0.09316718);
   BiasedDeltaPhi_all->SetBinError(10,0.04753348);
   BiasedDeltaPhi_all->SetEntries(525);
   BiasedDeltaPhi_all->SetLineColor(40);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis4119[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4119);
   BiasedDeltaPhi_all->SetBinContent(1,28388.38);
   BiasedDeltaPhi_all->SetBinContent(2,3818.028);
   BiasedDeltaPhi_all->SetBinContent(3,2938.824);
   BiasedDeltaPhi_all->SetBinContent(4,23.4323);
   BiasedDeltaPhi_all->SetBinContent(5,4.73001);
   BiasedDeltaPhi_all->SetBinContent(6,3.259146);
   BiasedDeltaPhi_all->SetBinContent(7,0.9340911);
   BiasedDeltaPhi_all->SetBinContent(8,1.381744);
   BiasedDeltaPhi_all->SetBinContent(9,0.5844665);
   BiasedDeltaPhi_all->SetBinContent(10,0.2605841);
   BiasedDeltaPhi_all->SetBinContent(11,0.08000721);
   BiasedDeltaPhi_all->SetBinError(1,2055.862);
   BiasedDeltaPhi_all->SetBinError(2,1046.016);
   BiasedDeltaPhi_all->SetBinError(3,2342.07);
   BiasedDeltaPhi_all->SetBinError(4,7.162411);
   BiasedDeltaPhi_all->SetBinError(5,0.9020535);
   BiasedDeltaPhi_all->SetBinError(6,0.7464183);
   BiasedDeltaPhi_all->SetBinError(7,0.3092182);
   BiasedDeltaPhi_all->SetBinError(8,0.4684415);
   BiasedDeltaPhi_all->SetBinError(9,0.206379);
   BiasedDeltaPhi_all->SetBinError(10,0.1407171);
   BiasedDeltaPhi_all->SetBinError(11,0.08000721);
   BiasedDeltaPhi_all->SetEntries(2977);
   BiasedDeltaPhi_all->SetLineColor(3);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.1308997,28163.35);
   gre->SetPointError(0,0.1308997,2055.824);
   gre->SetPoint(1,0.3926991,3729.173);
   gre->SetPointError(1,0.1308997,1045.987);
   gre->SetPoint(2,0.6544985,2872.64);
   gre->SetPointError(2,0.1308997,2342.017);
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
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all686 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all686","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all686->SetMinimum(33.2411);
   Graph_Graph_from_BiasedDeltaPhi_all686->SetMaximum(33241.1);
   Graph_Graph_from_BiasedDeltaPhi_all686->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all686->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all686->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all686);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.1308997,28388.38);
   gre->SetPointError(0,0.1308997,2055.862);
   gre->SetPoint(1,0.3926991,3818.028);
   gre->SetPointError(1,0.1308997,1046.016);
   gre->SetPoint(2,0.6544985,2938.824);
   gre->SetPointError(2,0.1308997,2342.07);
   gre->SetPoint(3,0.9162979,23.4323);
   gre->SetPointError(3,0.1308997,7.162411);
   gre->SetPoint(4,1.178097,4.73001);
   gre->SetPointError(4,0.1308997,0.9020535);
   gre->SetPoint(5,1.439897,3.259146);
   gre->SetPointError(5,0.1308997,0.7464183);
   gre->SetPoint(6,1.701696,0.9340911);
   gre->SetPointError(6,0.1308997,0.3092182);
   gre->SetPoint(7,1.963495,1.381744);
   gre->SetPointError(7,0.1308997,0.4684415);
   gre->SetPoint(8,2.225295,0.5844665);
   gre->SetPointError(8,0.1308997,0.206379);
   gre->SetPoint(9,2.487094,0.2605841);
   gre->SetPointError(9,0.1308997,0.1407171);
   gre->SetPoint(10,2.748894,0.08000721);
   gre->SetPointError(10,0.1308997,0.08000721);
   gre->SetPoint(11,3.010693,0);
   gre->SetPointError(11,0.1308997,0);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all687 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all687","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all687->SetMinimum(33.48867);
   Graph_Graph_from_BiasedDeltaPhi_all687->SetMaximum(33488.67);
   Graph_Graph_from_BiasedDeltaPhi_all687->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all687->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all687->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all687);
   
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
   TLegendEntry *entry=leg->AddEntry("BiasedDeltaPhi_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("BiasedDeltaPhi_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
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
   entry=leg->AddEntry("BiasedDeltaPhi_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
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
   Double_t xAxis4120[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4120);
   BiasedDeltaPhi_all->SetBinContent(1,397);
   BiasedDeltaPhi_all->SetBinContent(2,136);
   BiasedDeltaPhi_all->SetBinContent(3,58);
   BiasedDeltaPhi_all->SetBinContent(4,22);
   BiasedDeltaPhi_all->SetBinContent(5,5);
   BiasedDeltaPhi_all->SetBinContent(6,5);
   BiasedDeltaPhi_all->SetBinContent(7,1);
   BiasedDeltaPhi_all->SetBinContent(8,3);
   BiasedDeltaPhi_all->SetBinContent(10,1);
   BiasedDeltaPhi_all->SetBinError(1,19.92486);
   BiasedDeltaPhi_all->SetBinError(2,11.6619);
   BiasedDeltaPhi_all->SetBinError(3,7.615773);
   BiasedDeltaPhi_all->SetBinError(4,4.690416);
   BiasedDeltaPhi_all->SetBinError(5,2.49);
   BiasedDeltaPhi_all->SetBinError(6,2.49);
   BiasedDeltaPhi_all->SetBinError(7,1);
   BiasedDeltaPhi_all->SetBinError(8,2.14);
   BiasedDeltaPhi_all->SetBinError(10,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(283883.8);
   BiasedDeltaPhi_all->SetEntries(628);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->cd();
  
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
   Double_t xAxis4121[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4121);
   BiasedDeltaPhi_all->SetBinContent(1,0.0139846);
   BiasedDeltaPhi_all->SetBinContent(2,0.03562048);
   BiasedDeltaPhi_all->SetBinContent(3,0.01973579);
   BiasedDeltaPhi_all->SetBinContent(4,0.9388751);
   BiasedDeltaPhi_all->SetBinContent(5,1.05708);
   BiasedDeltaPhi_all->SetBinContent(6,1.534144);
   BiasedDeltaPhi_all->SetBinContent(7,1.070559);
   BiasedDeltaPhi_all->SetBinContent(8,2.171168);
   BiasedDeltaPhi_all->SetBinContent(10,3.837533);
   BiasedDeltaPhi_all->SetBinError(1,0.0881103);
   BiasedDeltaPhi_all->SetBinError(2,0.2870735);
   BiasedDeltaPhi_all->SetBinError(3,0.8076862);
   BiasedDeltaPhi_all->SetBinError(4,0.3726729);
   BiasedDeltaPhi_all->SetBinError(5,0.5332671);
   BiasedDeltaPhi_all->SetBinError(6,0.5481381);
   BiasedDeltaPhi_all->SetBinError(7,1.053368);
   BiasedDeltaPhi_all->SetBinError(8,0.7897976);
   BiasedDeltaPhi_all->SetBinError(10,1.136489);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(4.677206);
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
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.1308997,1);
   gre->SetPointError(0,0.1308997,0.07241915);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.2739677);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.7969414);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.3056641);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.1907086);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.2290227);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.3310365);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0.3390218);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0.3531066);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0.5400067);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,1);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,0);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all688 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all688","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all688->SetMinimum(0);
   Graph_Graph_from_BiasedDeltaPhi_all688->SetMaximum(2.2);
   Graph_Graph_from_BiasedDeltaPhi_all688->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all688->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all688->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all688);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4122[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis4122);
   BiasedDeltaPhi_all->SetBinContent(1,0.0139846);
   BiasedDeltaPhi_all->SetBinContent(2,0.03562048);
   BiasedDeltaPhi_all->SetBinContent(3,0.01973579);
   BiasedDeltaPhi_all->SetBinContent(4,0.9388751);
   BiasedDeltaPhi_all->SetBinContent(5,1.05708);
   BiasedDeltaPhi_all->SetBinContent(6,1.534144);
   BiasedDeltaPhi_all->SetBinContent(7,1.070559);
   BiasedDeltaPhi_all->SetBinContent(8,2.171168);
   BiasedDeltaPhi_all->SetBinContent(10,3.837533);
   BiasedDeltaPhi_all->SetBinError(1,0.0881103);
   BiasedDeltaPhi_all->SetBinError(2,0.2870735);
   BiasedDeltaPhi_all->SetBinError(3,0.8076862);
   BiasedDeltaPhi_all->SetBinError(4,0.3726729);
   BiasedDeltaPhi_all->SetBinError(5,0.5332671);
   BiasedDeltaPhi_all->SetBinError(6,0.5481381);
   BiasedDeltaPhi_all->SetBinError(7,1.053368);
   BiasedDeltaPhi_all->SetBinError(8,0.7897976);
   BiasedDeltaPhi_all->SetBinError(10,1.136489);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(4.677206);
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
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->cd();
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->Modified();
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->cd();
   canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all->SetSelected(canvasbtag_morethanzero_325_375/BiasedDeltaPhi_all);
}
