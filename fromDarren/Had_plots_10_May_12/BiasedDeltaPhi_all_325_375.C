{
//=========Macro generated from canvas: canvas325_375/BiasedDeltaPhi_all/cannameBiasedDeltaPhi_all
//=========  (Thu May 10 12:22:44 2012) by ROOT version5.32/00
   TCanvas *canvas325_375/BiasedDeltaPhi_all = new TCanvas("canvas325_375/BiasedDeltaPhi_all", "cannameBiasedDeltaPhi_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvas325_375/BiasedDeltaPhi_all->SetHighLightColor(2);
   canvas325_375/BiasedDeltaPhi_all->Range(0,0,1,1);
   canvas325_375/BiasedDeltaPhi_all->SetFillColor(0);
   canvas325_375/BiasedDeltaPhi_all->SetBorderMode(0);
   canvas325_375/BiasedDeltaPhi_all->SetBorderSize(2);
   canvas325_375/BiasedDeltaPhi_all->SetTickx(1);
   canvas325_375/BiasedDeltaPhi_all->SetTicky(1);
   canvas325_375/BiasedDeltaPhi_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-1.139512,3.534292,7.245311);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis601[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis601);
   BiasedDeltaPhi_all->SetBinContent(1,2100);
   BiasedDeltaPhi_all->SetBinContent(2,709);
   BiasedDeltaPhi_all->SetBinContent(3,244);
   BiasedDeltaPhi_all->SetBinContent(4,75);
   BiasedDeltaPhi_all->SetBinContent(5,30);
   BiasedDeltaPhi_all->SetBinContent(6,20);
   BiasedDeltaPhi_all->SetBinContent(7,14);
   BiasedDeltaPhi_all->SetBinContent(8,12);
   BiasedDeltaPhi_all->SetBinContent(9,5);
   BiasedDeltaPhi_all->SetBinContent(10,6);
   BiasedDeltaPhi_all->SetBinContent(12,1);
   BiasedDeltaPhi_all->SetBinError(1,45.82576);
   BiasedDeltaPhi_all->SetBinError(2,26.62705);
   BiasedDeltaPhi_all->SetBinError(3,15.6205);
   BiasedDeltaPhi_all->SetBinError(4,8.660254);
   BiasedDeltaPhi_all->SetBinError(5,5.477226);
   BiasedDeltaPhi_all->SetBinError(6,4.472136);
   BiasedDeltaPhi_all->SetBinError(7,3.741657);
   BiasedDeltaPhi_all->SetBinError(8,3.464102);
   BiasedDeltaPhi_all->SetBinError(9,2.49);
   BiasedDeltaPhi_all->SetBinError(10,2.68);
   BiasedDeltaPhi_all->SetBinError(12,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(2551693);
   BiasedDeltaPhi_all->SetEntries(3216);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PE0");
   Double_t xAxis602[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis602);
   BiasedDeltaPhi_all->SetBinContent(1,224.7457);
   BiasedDeltaPhi_all->SetBinContent(2,176.9278);
   BiasedDeltaPhi_all->SetBinContent(3,94.95274);
   BiasedDeltaPhi_all->SetBinContent(4,39.08311);
   BiasedDeltaPhi_all->SetBinContent(5,13.42139);
   BiasedDeltaPhi_all->SetBinContent(6,4.4333);
   BiasedDeltaPhi_all->SetBinContent(7,3.675011);
   BiasedDeltaPhi_all->SetBinError(1,40.5483);
   BiasedDeltaPhi_all->SetBinError(2,48.1528);
   BiasedDeltaPhi_all->SetBinError(3,23.14975);
   BiasedDeltaPhi_all->SetBinError(4,13.48505);
   BiasedDeltaPhi_all->SetBinError(5,6.157927);
   BiasedDeltaPhi_all->SetBinError(6,4.4333);
   BiasedDeltaPhi_all->SetBinError(7,3.675011);
   BiasedDeltaPhi_all->SetEntries(126);
   BiasedDeltaPhi_all->SetLineColor(4);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis603[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis603);
   BiasedDeltaPhi_all->SetBinContent(1,206.0407);
   BiasedDeltaPhi_all->SetBinContent(2,88.45154);
   BiasedDeltaPhi_all->SetBinContent(3,44.75899);
   BiasedDeltaPhi_all->SetBinContent(4,16.02433);
   BiasedDeltaPhi_all->SetBinContent(5,6.391468);
   BiasedDeltaPhi_all->SetBinContent(6,2.322227);
   BiasedDeltaPhi_all->SetBinContent(7,0.2195774);
   BiasedDeltaPhi_all->SetBinContent(8,0.7417657);
   BiasedDeltaPhi_all->SetBinContent(9,0.4323722);
   BiasedDeltaPhi_all->SetBinError(1,9.090999);
   BiasedDeltaPhi_all->SetBinError(2,6.303925);
   BiasedDeltaPhi_all->SetBinError(3,3.820198);
   BiasedDeltaPhi_all->SetBinError(4,2.000278);
   BiasedDeltaPhi_all->SetBinError(5,1.42431);
   BiasedDeltaPhi_all->SetBinError(6,0.7198374);
   BiasedDeltaPhi_all->SetBinError(7,0.2195774);
   BiasedDeltaPhi_all->SetBinError(8,0.4059774);
   BiasedDeltaPhi_all->SetBinError(9,0.4323722);
   BiasedDeltaPhi_all->SetEntries(1533);
   BiasedDeltaPhi_all->SetLineColor(2);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis604[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis604);
   BiasedDeltaPhi_all->SetBinContent(1,74.87345);
   BiasedDeltaPhi_all->SetBinContent(2,58.18464);
   BiasedDeltaPhi_all->SetBinContent(3,52.14888);
   BiasedDeltaPhi_all->SetBinContent(4,29.17783);
   BiasedDeltaPhi_all->SetBinContent(5,19.42865);
   BiasedDeltaPhi_all->SetBinContent(6,11.15312);
   BiasedDeltaPhi_all->SetBinContent(7,7.735147);
   BiasedDeltaPhi_all->SetBinContent(8,6.150349);
   BiasedDeltaPhi_all->SetBinContent(9,3.716022);
   BiasedDeltaPhi_all->SetBinContent(10,2.823063);
   BiasedDeltaPhi_all->SetBinContent(11,0.5158996);
   BiasedDeltaPhi_all->SetBinContent(12,0.3142313);
   BiasedDeltaPhi_all->SetBinError(1,3.45646);
   BiasedDeltaPhi_all->SetBinError(2,2.65857);
   BiasedDeltaPhi_all->SetBinError(3,2.425295);
   BiasedDeltaPhi_all->SetBinError(4,2.004817);
   BiasedDeltaPhi_all->SetBinError(5,1.29532);
   BiasedDeltaPhi_all->SetBinError(6,0.9608296);
   BiasedDeltaPhi_all->SetBinError(7,0.8199122);
   BiasedDeltaPhi_all->SetBinError(8,0.7270711);
   BiasedDeltaPhi_all->SetBinError(9,0.5191246);
   BiasedDeltaPhi_all->SetBinError(10,0.4734541);
   BiasedDeltaPhi_all->SetBinError(11,0.180366);
   BiasedDeltaPhi_all->SetBinError(12,0.145474);
   BiasedDeltaPhi_all->SetEntries(3772);
   BiasedDeltaPhi_all->SetLineColor(5);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis605[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis605);
   BiasedDeltaPhi_all->SetBinContent(1,11.23202);
   BiasedDeltaPhi_all->SetBinContent(2,3.167033);
   BiasedDeltaPhi_all->SetBinContent(3,1.797719);
   BiasedDeltaPhi_all->SetBinContent(4,0.4870903);
   BiasedDeltaPhi_all->SetBinContent(5,0.515285);
   BiasedDeltaPhi_all->SetBinError(1,2.538428);
   BiasedDeltaPhi_all->SetBinError(2,1.350939);
   BiasedDeltaPhi_all->SetBinError(3,1.075555);
   BiasedDeltaPhi_all->SetBinError(4,0.4870903);
   BiasedDeltaPhi_all->SetBinError(5,0.4879057);
   BiasedDeltaPhi_all->SetEntries(39);
   BiasedDeltaPhi_all->SetLineColor(6);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis606[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis606);
   BiasedDeltaPhi_all->SetBinContent(1,9.209652);
   BiasedDeltaPhi_all->SetBinContent(2,3.046855);
   BiasedDeltaPhi_all->SetBinContent(3,1.158863);
   BiasedDeltaPhi_all->SetBinContent(4,0.8778191);
   BiasedDeltaPhi_all->SetBinContent(5,0.4514008);
   BiasedDeltaPhi_all->SetBinContent(6,0.3459717);
   BiasedDeltaPhi_all->SetBinContent(7,0.07445641);
   BiasedDeltaPhi_all->SetBinContent(8,0.1436624);
   BiasedDeltaPhi_all->SetBinContent(9,0.0586291);
   BiasedDeltaPhi_all->SetBinContent(10,0.03180025);
   BiasedDeltaPhi_all->SetBinContent(11,0.01140568);
   BiasedDeltaPhi_all->SetBinContent(12,0.00908894);
   BiasedDeltaPhi_all->SetBinError(1,0.4326586);
   BiasedDeltaPhi_all->SetBinError(2,0.2557617);
   BiasedDeltaPhi_all->SetBinError(3,0.1488327);
   BiasedDeltaPhi_all->SetBinError(4,0.1388822);
   BiasedDeltaPhi_all->SetBinError(5,0.09257719);
   BiasedDeltaPhi_all->SetBinError(6,0.0755607);
   BiasedDeltaPhi_all->SetBinError(7,0.02372104);
   BiasedDeltaPhi_all->SetBinError(8,0.05462678);
   BiasedDeltaPhi_all->SetBinError(9,0.0253001);
   BiasedDeltaPhi_all->SetBinError(10,0.0189332);
   BiasedDeltaPhi_all->SetBinError(11,0.008067119);
   BiasedDeltaPhi_all->SetBinError(12,0.00908894);
   BiasedDeltaPhi_all->SetEntries(1669);
   BiasedDeltaPhi_all->SetLineColor(44);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis607[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis607);
   BiasedDeltaPhi_all->SetBinContent(1,254611.7);
   BiasedDeltaPhi_all->SetBinContent(2,25608.96);
   BiasedDeltaPhi_all->SetBinContent(3,3941.364);
   BiasedDeltaPhi_all->SetBinError(1,10337.75);
   BiasedDeltaPhi_all->SetBinError(2,6761.193);
   BiasedDeltaPhi_all->SetBinError(3,2408.126);
   BiasedDeltaPhi_all->SetEntries(3394);
   BiasedDeltaPhi_all->SetLineColor(7);
   BiasedDeltaPhi_all->SetLineStyle(10);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis608[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis608);
   BiasedDeltaPhi_all->SetBinContent(1,31.54759);
   BiasedDeltaPhi_all->SetBinContent(2,8.585853);
   BiasedDeltaPhi_all->SetBinContent(3,2.578265);
   BiasedDeltaPhi_all->SetBinContent(4,1.095853);
   BiasedDeltaPhi_all->SetBinContent(5,0.3025559);
   BiasedDeltaPhi_all->SetBinContent(6,0.1227183);
   BiasedDeltaPhi_all->SetBinContent(7,0.04101893);
   BiasedDeltaPhi_all->SetBinContent(8,0.04120891);
   BiasedDeltaPhi_all->SetBinContent(9,0.09622551);
   BiasedDeltaPhi_all->SetBinContent(10,0.07770011);
   BiasedDeltaPhi_all->SetBinError(1,1.905713);
   BiasedDeltaPhi_all->SetBinError(2,1.109092);
   BiasedDeltaPhi_all->SetBinError(3,0.3929802);
   BiasedDeltaPhi_all->SetBinError(4,0.2395734);
   BiasedDeltaPhi_all->SetBinError(5,0.1294696);
   BiasedDeltaPhi_all->SetBinError(6,0.08877777);
   BiasedDeltaPhi_all->SetBinError(7,0.04101893);
   BiasedDeltaPhi_all->SetBinError(8,0.04120891);
   BiasedDeltaPhi_all->SetBinError(9,0.09321736);
   BiasedDeltaPhi_all->SetBinError(10,0.05629794);
   BiasedDeltaPhi_all->SetEntries(753);
   BiasedDeltaPhi_all->SetLineColor(40);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis609[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis609);
   BiasedDeltaPhi_all->SetBinContent(1,255169.3);
   BiasedDeltaPhi_all->SetBinContent(2,25947.33);
   BiasedDeltaPhi_all->SetBinContent(3,4138.759);
   BiasedDeltaPhi_all->SetBinContent(4,86.74604);
   BiasedDeltaPhi_all->SetBinContent(5,40.51075);
   BiasedDeltaPhi_all->SetBinContent(6,18.37734);
   BiasedDeltaPhi_all->SetBinContent(7,11.74521);
   BiasedDeltaPhi_all->SetBinContent(8,7.076986);
   BiasedDeltaPhi_all->SetBinContent(9,4.303248);
   BiasedDeltaPhi_all->SetBinContent(10,2.932564);
   BiasedDeltaPhi_all->SetBinContent(11,0.5273052);
   BiasedDeltaPhi_all->SetBinContent(12,0.3233202);
   BiasedDeltaPhi_all->SetBinError(1,10337.83);
   BiasedDeltaPhi_all->SetBinError(2,6761.369);
   BiasedDeltaPhi_all->SetBinError(3,2408.242);
   BiasedDeltaPhi_all->SetBinError(4,13.79061);
   BiasedDeltaPhi_all->SetBinError(5,6.472245);
   BiasedDeltaPhi_all->SetBinError(6,4.594464);
   BiasedDeltaPhi_all->SetBinError(7,3.772058);
   BiasedDeltaPhi_all->SetBinError(8,0.8355431);
   BiasedDeltaPhi_all->SetBinError(9,0.6824702);
   BiasedDeltaPhi_all->SetBinError(10,0.4771653);
   BiasedDeltaPhi_all->SetBinError(11,0.1805463);
   BiasedDeltaPhi_all->SetBinError(12,0.1457577);
   BiasedDeltaPhi_all->SetEntries(11286);
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
   gre->SetPoint(0,0.1308997,254611.7);
   gre->SetPointError(0,0.1308997,10337.75);
   gre->SetPoint(1,0.3926991,25608.96);
   gre->SetPointError(1,0.1308997,6761.193);
   gre->SetPoint(2,0.6544985,3941.364);
   gre->SetPointError(2,0.1308997,2408.126);
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
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all101 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all101","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all101->SetMinimum(291.4444);
   Graph_Graph_from_BiasedDeltaPhi_all101->SetMaximum(291444.4);
   Graph_Graph_from_BiasedDeltaPhi_all101->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all101->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all101->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all101);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.1308997,255169.3);
   gre->SetPointError(0,0.1308997,10337.83);
   gre->SetPoint(1,0.3926991,25947.33);
   gre->SetPointError(1,0.1308997,6761.369);
   gre->SetPoint(2,0.6544985,4138.759);
   gre->SetPointError(2,0.1308997,2408.242);
   gre->SetPoint(3,0.9162979,86.74604);
   gre->SetPointError(3,0.1308997,13.79061);
   gre->SetPoint(4,1.178097,40.51075);
   gre->SetPointError(4,0.1308997,6.472245);
   gre->SetPoint(5,1.439897,18.37734);
   gre->SetPointError(5,0.1308997,4.594464);
   gre->SetPoint(6,1.701696,11.74521);
   gre->SetPointError(6,0.1308997,3.772058);
   gre->SetPoint(7,1.963495,7.076986);
   gre->SetPointError(7,0.1308997,0.8355431);
   gre->SetPoint(8,2.225295,4.303248);
   gre->SetPointError(8,0.1308997,0.6824702);
   gre->SetPoint(9,2.487094,2.932564);
   gre->SetPointError(9,0.1308997,0.4771653);
   gre->SetPoint(10,2.748894,0.5273052);
   gre->SetPointError(10,0.1308997,0.1805463);
   gre->SetPoint(11,3.010693,0.3233202);
   gre->SetPointError(11,0.1308997,0.1457577);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all102 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all102","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all102->SetMinimum(0.1598063);
   Graph_Graph_from_BiasedDeltaPhi_all102->SetMaximum(292057.9);
   Graph_Graph_from_BiasedDeltaPhi_all102->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all102->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all102->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all102);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"325_375    Jet Multiplicity=all");
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
   Double_t xAxis610[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis610);
   BiasedDeltaPhi_all->SetBinContent(1,2100);
   BiasedDeltaPhi_all->SetBinContent(2,709);
   BiasedDeltaPhi_all->SetBinContent(3,244);
   BiasedDeltaPhi_all->SetBinContent(4,75);
   BiasedDeltaPhi_all->SetBinContent(5,30);
   BiasedDeltaPhi_all->SetBinContent(6,20);
   BiasedDeltaPhi_all->SetBinContent(7,14);
   BiasedDeltaPhi_all->SetBinContent(8,12);
   BiasedDeltaPhi_all->SetBinContent(9,5);
   BiasedDeltaPhi_all->SetBinContent(10,6);
   BiasedDeltaPhi_all->SetBinContent(12,1);
   BiasedDeltaPhi_all->SetBinError(1,45.82576);
   BiasedDeltaPhi_all->SetBinError(2,26.62705);
   BiasedDeltaPhi_all->SetBinError(3,15.6205);
   BiasedDeltaPhi_all->SetBinError(4,8.660254);
   BiasedDeltaPhi_all->SetBinError(5,5.477226);
   BiasedDeltaPhi_all->SetBinError(6,4.472136);
   BiasedDeltaPhi_all->SetBinError(7,3.741657);
   BiasedDeltaPhi_all->SetBinError(8,3.464102);
   BiasedDeltaPhi_all->SetBinError(9,2.49);
   BiasedDeltaPhi_all->SetBinError(10,2.68);
   BiasedDeltaPhi_all->SetBinError(12,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(2551693);
   BiasedDeltaPhi_all->SetEntries(3216);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PSAME");
   u->Modified();
   canvas325_375/BiasedDeltaPhi_all->cd();
  
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
   Double_t xAxis611[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis611);
   BiasedDeltaPhi_all->SetBinContent(1,0.008229829);
   BiasedDeltaPhi_all->SetBinContent(2,0.02732459);
   BiasedDeltaPhi_all->SetBinContent(3,0.05895486);
   BiasedDeltaPhi_all->SetBinContent(4,0.8645928);
   BiasedDeltaPhi_all->SetBinContent(5,0.7405441);
   BiasedDeltaPhi_all->SetBinContent(6,1.088297);
   BiasedDeltaPhi_all->SetBinContent(7,1.191975);
   BiasedDeltaPhi_all->SetBinContent(8,1.695637);
   BiasedDeltaPhi_all->SetBinContent(9,1.161913);
   BiasedDeltaPhi_all->SetBinContent(10,2.045991);
   BiasedDeltaPhi_all->SetBinContent(12,3.092909);
   BiasedDeltaPhi_all->SetBinError(1,0.04601678);
   BiasedDeltaPhi_all->SetBinError(2,0.263273);
   BiasedDeltaPhi_all->SetBinError(3,0.5853864);
   BiasedDeltaPhi_all->SetBinError(4,0.1964865);
   BiasedDeltaPhi_all->SetBinError(5,0.2426078);
   BiasedDeltaPhi_all->SetBinError(6,0.3354154);
   BiasedDeltaPhi_all->SetBinError(7,0.4178163);
   BiasedDeltaPhi_all->SetBinError(8,0.3118856);
   BiasedDeltaPhi_all->SetBinError(9,0.5226434);
   BiasedDeltaPhi_all->SetBinError(10,0.4753804);
   BiasedDeltaPhi_all->SetBinError(12,1.09692);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(10.58678);
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
   gre->SetPointError(0,0.1308997,0.04051362);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.2605805);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.5818753);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.1589768);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.1597661);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.250007);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.3211571);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0.1180648);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0.1585942);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0.1627127);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,0.3423943);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,0.4508152);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all103 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all103","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all103->SetMinimum(0.3017496);
   Graph_Graph_from_BiasedDeltaPhi_all103->SetMaximum(1.69825);
   Graph_Graph_from_BiasedDeltaPhi_all103->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all103->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all103->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all103);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis612[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis612);
   BiasedDeltaPhi_all->SetBinContent(1,0.008229829);
   BiasedDeltaPhi_all->SetBinContent(2,0.02732459);
   BiasedDeltaPhi_all->SetBinContent(3,0.05895486);
   BiasedDeltaPhi_all->SetBinContent(4,0.8645928);
   BiasedDeltaPhi_all->SetBinContent(5,0.7405441);
   BiasedDeltaPhi_all->SetBinContent(6,1.088297);
   BiasedDeltaPhi_all->SetBinContent(7,1.191975);
   BiasedDeltaPhi_all->SetBinContent(8,1.695637);
   BiasedDeltaPhi_all->SetBinContent(9,1.161913);
   BiasedDeltaPhi_all->SetBinContent(10,2.045991);
   BiasedDeltaPhi_all->SetBinContent(12,3.092909);
   BiasedDeltaPhi_all->SetBinError(1,0.04601678);
   BiasedDeltaPhi_all->SetBinError(2,0.263273);
   BiasedDeltaPhi_all->SetBinError(3,0.5853864);
   BiasedDeltaPhi_all->SetBinError(4,0.1964865);
   BiasedDeltaPhi_all->SetBinError(5,0.2426078);
   BiasedDeltaPhi_all->SetBinError(6,0.3354154);
   BiasedDeltaPhi_all->SetBinError(7,0.4178163);
   BiasedDeltaPhi_all->SetBinError(8,0.3118856);
   BiasedDeltaPhi_all->SetBinError(9,0.5226434);
   BiasedDeltaPhi_all->SetBinError(10,0.4753804);
   BiasedDeltaPhi_all->SetBinError(12,1.09692);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(10.58678);
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
   canvas325_375/BiasedDeltaPhi_all->cd();
   canvas325_375/BiasedDeltaPhi_all->Modified();
   canvas325_375/BiasedDeltaPhi_all->cd();
   canvas325_375/BiasedDeltaPhi_all->SetSelected(canvas325_375/BiasedDeltaPhi_all);
}
