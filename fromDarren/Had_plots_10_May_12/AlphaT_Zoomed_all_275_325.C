{
//=========Macro generated from canvas: canvas275_325/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:22:26 2012) by ROOT version5.32/00
   TCanvas *canvas275_325/AlphaT_Zoomed_all = new TCanvas("canvas275_325/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvas275_325/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvas275_325/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvas275_325/AlphaT_Zoomed_all->SetFillColor(0);
   canvas275_325/AlphaT_Zoomed_all->SetBorderMode(0);
   canvas275_325/AlphaT_Zoomed_all->SetBorderSize(2);
   canvas275_325/AlphaT_Zoomed_all->SetTickx(1);
   canvas275_325/AlphaT_Zoomed_all->SetTicky(1);
   canvas275_325/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-1.337031,0.61875,9.022974);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis31[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis31);
   AlphaT_Zoomed_all->SetBinContent(0,5397);
   AlphaT_Zoomed_all->SetBinContent(1,1254);
   AlphaT_Zoomed_all->SetBinContent(2,1980);
   AlphaT_Zoomed_all->SetBinContent(3,2653);
   AlphaT_Zoomed_all->SetBinContent(4,3429);
   AlphaT_Zoomed_all->SetBinContent(5,3786);
   AlphaT_Zoomed_all->SetBinContent(6,3535);
   AlphaT_Zoomed_all->SetBinContent(7,2583);
   AlphaT_Zoomed_all->SetBinContent(8,1321);
   AlphaT_Zoomed_all->SetBinContent(9,731);
   AlphaT_Zoomed_all->SetBinContent(10,460);
   AlphaT_Zoomed_all->SetBinContent(11,299);
   AlphaT_Zoomed_all->SetBinContent(12,238);
   AlphaT_Zoomed_all->SetBinContent(13,1975);
   AlphaT_Zoomed_all->SetBinError(0,73.46428);
   AlphaT_Zoomed_all->SetBinError(1,35.41186);
   AlphaT_Zoomed_all->SetBinError(2,44.49719);
   AlphaT_Zoomed_all->SetBinError(3,51.50728);
   AlphaT_Zoomed_all->SetBinError(4,58.55766);
   AlphaT_Zoomed_all->SetBinError(5,61.53048);
   AlphaT_Zoomed_all->SetBinError(6,59.45587);
   AlphaT_Zoomed_all->SetBinError(7,50.82322);
   AlphaT_Zoomed_all->SetBinError(8,36.34556);
   AlphaT_Zoomed_all->SetBinError(9,27.03701);
   AlphaT_Zoomed_all->SetBinError(10,21.44761);
   AlphaT_Zoomed_all->SetBinError(11,17.29162);
   AlphaT_Zoomed_all->SetBinError(12,15.42725);
   AlphaT_Zoomed_all->SetBinError(13,44.44097);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(9.704511e+07);
   AlphaT_Zoomed_all->SetEntries(29641);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PE0");
   Double_t xAxis32[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis32);
   AlphaT_Zoomed_all->SetBinContent(0,7233.821);
   AlphaT_Zoomed_all->SetBinContent(1,2243.456);
   AlphaT_Zoomed_all->SetBinContent(2,2505.661);
   AlphaT_Zoomed_all->SetBinContent(3,2947.442);
   AlphaT_Zoomed_all->SetBinContent(4,3299.008);
   AlphaT_Zoomed_all->SetBinContent(5,2322.551);
   AlphaT_Zoomed_all->SetBinContent(6,1227.4);
   AlphaT_Zoomed_all->SetBinContent(7,670.7155);
   AlphaT_Zoomed_all->SetBinContent(8,525.4412);
   AlphaT_Zoomed_all->SetBinContent(9,298.5274);
   AlphaT_Zoomed_all->SetBinContent(10,169.1292);
   AlphaT_Zoomed_all->SetBinContent(11,174.7211);
   AlphaT_Zoomed_all->SetBinContent(12,100.836);
   AlphaT_Zoomed_all->SetBinContent(13,862.3545);
   AlphaT_Zoomed_all->SetBinError(0,177.0527);
   AlphaT_Zoomed_all->SetBinError(1,99.63874);
   AlphaT_Zoomed_all->SetBinError(2,105.7174);
   AlphaT_Zoomed_all->SetBinError(3,120.1836);
   AlphaT_Zoomed_all->SetBinError(4,130.864);
   AlphaT_Zoomed_all->SetBinError(5,122.4687);
   AlphaT_Zoomed_all->SetBinError(6,79.84293);
   AlphaT_Zoomed_all->SetBinError(7,54.18784);
   AlphaT_Zoomed_all->SetBinError(8,46.27029);
   AlphaT_Zoomed_all->SetBinError(9,36.16298);
   AlphaT_Zoomed_all->SetBinError(10,25.10614);
   AlphaT_Zoomed_all->SetBinError(11,26.71233);
   AlphaT_Zoomed_all->SetBinError(12,19.72614);
   AlphaT_Zoomed_all->SetBinError(13,60.75345);
   AlphaT_Zoomed_all->SetEntries(7520);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis33[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis33);
   AlphaT_Zoomed_all->SetBinContent(0,1308.168);
   AlphaT_Zoomed_all->SetBinContent(1,584.9932);
   AlphaT_Zoomed_all->SetBinContent(2,852.8494);
   AlphaT_Zoomed_all->SetBinContent(3,1172.654);
   AlphaT_Zoomed_all->SetBinContent(4,1527.227);
   AlphaT_Zoomed_all->SetBinContent(5,1126.718);
   AlphaT_Zoomed_all->SetBinContent(6,506.0266);
   AlphaT_Zoomed_all->SetBinContent(7,279.6943);
   AlphaT_Zoomed_all->SetBinContent(8,175.7159);
   AlphaT_Zoomed_all->SetBinContent(9,118.2751);
   AlphaT_Zoomed_all->SetBinContent(10,81.72658);
   AlphaT_Zoomed_all->SetBinContent(11,54.37972);
   AlphaT_Zoomed_all->SetBinContent(12,38.73735);
   AlphaT_Zoomed_all->SetBinContent(13,245.6223);
   AlphaT_Zoomed_all->SetBinError(0,18.51669);
   AlphaT_Zoomed_all->SetBinError(1,12.50875);
   AlphaT_Zoomed_all->SetBinError(2,15.13921);
   AlphaT_Zoomed_all->SetBinError(3,18.01511);
   AlphaT_Zoomed_all->SetBinError(4,21.00584);
   AlphaT_Zoomed_all->SetBinError(5,18.02);
   AlphaT_Zoomed_all->SetBinError(6,11.74094);
   AlphaT_Zoomed_all->SetBinError(7,9.470819);
   AlphaT_Zoomed_all->SetBinError(8,7.479497);
   AlphaT_Zoomed_all->SetBinError(9,5.481397);
   AlphaT_Zoomed_all->SetBinError(10,4.72379);
   AlphaT_Zoomed_all->SetBinError(11,3.759806);
   AlphaT_Zoomed_all->SetBinError(12,3.103134);
   AlphaT_Zoomed_all->SetBinError(13,8.134803);
   AlphaT_Zoomed_all->SetEntries(40867);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis34[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis34);
   AlphaT_Zoomed_all->SetBinContent(0,2643.614);
   AlphaT_Zoomed_all->SetBinContent(1,564.6533);
   AlphaT_Zoomed_all->SetBinContent(2,636.3476);
   AlphaT_Zoomed_all->SetBinContent(3,719.4629);
   AlphaT_Zoomed_all->SetBinContent(4,762.7162);
   AlphaT_Zoomed_all->SetBinContent(5,639.7177);
   AlphaT_Zoomed_all->SetBinContent(6,469.0509);
   AlphaT_Zoomed_all->SetBinContent(7,312.2523);
   AlphaT_Zoomed_all->SetBinContent(8,222.7117);
   AlphaT_Zoomed_all->SetBinContent(9,180.8833);
   AlphaT_Zoomed_all->SetBinContent(10,133.2998);
   AlphaT_Zoomed_all->SetBinContent(11,107.7406);
   AlphaT_Zoomed_all->SetBinContent(12,95.93139);
   AlphaT_Zoomed_all->SetBinContent(13,979.9898);
   AlphaT_Zoomed_all->SetBinError(0,14.44564);
   AlphaT_Zoomed_all->SetBinError(1,6.817316);
   AlphaT_Zoomed_all->SetBinError(2,7.547062);
   AlphaT_Zoomed_all->SetBinError(3,8.096897);
   AlphaT_Zoomed_all->SetBinError(4,8.716588);
   AlphaT_Zoomed_all->SetBinError(5,7.932584);
   AlphaT_Zoomed_all->SetBinError(6,6.884799);
   AlphaT_Zoomed_all->SetBinError(7,5.272964);
   AlphaT_Zoomed_all->SetBinError(8,4.300202);
   AlphaT_Zoomed_all->SetBinError(9,4.0052);
   AlphaT_Zoomed_all->SetBinError(10,3.442947);
   AlphaT_Zoomed_all->SetBinError(11,3.140849);
   AlphaT_Zoomed_all->SetBinError(12,2.933821);
   AlphaT_Zoomed_all->SetBinError(13,9.074978);
   AlphaT_Zoomed_all->SetEntries(149845);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis35[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis35);
   AlphaT_Zoomed_all->SetBinContent(0,558.4401);
   AlphaT_Zoomed_all->SetBinContent(1,227.0219);
   AlphaT_Zoomed_all->SetBinContent(2,249.7138);
   AlphaT_Zoomed_all->SetBinContent(3,263.0866);
   AlphaT_Zoomed_all->SetBinContent(4,300.636);
   AlphaT_Zoomed_all->SetBinContent(5,140.3127);
   AlphaT_Zoomed_all->SetBinContent(6,47.82529);
   AlphaT_Zoomed_all->SetBinContent(7,25.47621);
   AlphaT_Zoomed_all->SetBinContent(8,8.21315);
   AlphaT_Zoomed_all->SetBinContent(9,2.798977);
   AlphaT_Zoomed_all->SetBinContent(10,1.582139);
   AlphaT_Zoomed_all->SetBinContent(11,0.8181143);
   AlphaT_Zoomed_all->SetBinContent(12,1.613529);
   AlphaT_Zoomed_all->SetBinContent(13,6.496475);
   AlphaT_Zoomed_all->SetBinError(0,17.89513);
   AlphaT_Zoomed_all->SetBinError(1,15.16451);
   AlphaT_Zoomed_all->SetBinError(2,12.94605);
   AlphaT_Zoomed_all->SetBinError(3,13.26645);
   AlphaT_Zoomed_all->SetBinError(4,14.10506);
   AlphaT_Zoomed_all->SetBinError(5,11.021);
   AlphaT_Zoomed_all->SetBinError(6,5.300657);
   AlphaT_Zoomed_all->SetBinError(7,5.697497);
   AlphaT_Zoomed_all->SetBinError(8,2.055911);
   AlphaT_Zoomed_all->SetBinError(9,1.150738);
   AlphaT_Zoomed_all->SetBinError(10,0.8505421);
   AlphaT_Zoomed_all->SetBinError(11,0.5799614);
   AlphaT_Zoomed_all->SetBinError(12,0.8236218);
   AlphaT_Zoomed_all->SetBinError(13,1.703489);
   AlphaT_Zoomed_all->SetEntries(4070);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis36[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis36);
   AlphaT_Zoomed_all->SetBinContent(0,155.3882);
   AlphaT_Zoomed_all->SetBinContent(1,65.5706);
   AlphaT_Zoomed_all->SetBinContent(2,84.0358);
   AlphaT_Zoomed_all->SetBinContent(3,103.7006);
   AlphaT_Zoomed_all->SetBinContent(4,119.535);
   AlphaT_Zoomed_all->SetBinContent(5,52.72433);
   AlphaT_Zoomed_all->SetBinContent(6,16.79315);
   AlphaT_Zoomed_all->SetBinContent(7,7.942763);
   AlphaT_Zoomed_all->SetBinContent(8,5.139801);
   AlphaT_Zoomed_all->SetBinContent(9,3.987007);
   AlphaT_Zoomed_all->SetBinContent(10,3.681695);
   AlphaT_Zoomed_all->SetBinContent(11,2.463852);
   AlphaT_Zoomed_all->SetBinContent(12,2.179869);
   AlphaT_Zoomed_all->SetBinContent(13,33.05244);
   AlphaT_Zoomed_all->SetBinError(0,2.093628);
   AlphaT_Zoomed_all->SetBinError(1,1.333045);
   AlphaT_Zoomed_all->SetBinError(2,1.515958);
   AlphaT_Zoomed_all->SetBinError(3,1.676883);
   AlphaT_Zoomed_all->SetBinError(4,1.780503);
   AlphaT_Zoomed_all->SetBinError(5,1.168496);
   AlphaT_Zoomed_all->SetBinError(6,0.6733418);
   AlphaT_Zoomed_all->SetBinError(7,0.4450546);
   AlphaT_Zoomed_all->SetBinError(8,0.3442351);
   AlphaT_Zoomed_all->SetBinError(9,0.3210355);
   AlphaT_Zoomed_all->SetBinError(10,0.3006984);
   AlphaT_Zoomed_all->SetBinError(11,0.2390479);
   AlphaT_Zoomed_all->SetBinError(12,0.2214357);
   AlphaT_Zoomed_all->SetBinError(13,0.7971789);
   AlphaT_Zoomed_all->SetEntries(45686);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis37[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis37);
   AlphaT_Zoomed_all->SetBinContent(0,1.046447e+07);
   AlphaT_Zoomed_all->SetBinContent(1,5581492);
   AlphaT_Zoomed_all->SetBinContent(2,7211021);
   AlphaT_Zoomed_all->SetBinContent(3,8627196);
   AlphaT_Zoomed_all->SetBinContent(4,9698061);
   AlphaT_Zoomed_all->SetBinContent(5,1602523);
   AlphaT_Zoomed_all->SetBinContent(6,162637.3);
   AlphaT_Zoomed_all->SetBinContent(7,16410.79);
   AlphaT_Zoomed_all->SetBinContent(8,3038.159);
   AlphaT_Zoomed_all->SetBinContent(9,1368.113);
   AlphaT_Zoomed_all->SetBinContent(11,55.29419);
   AlphaT_Zoomed_all->SetBinContent(13,0.8539122);
   AlphaT_Zoomed_all->SetBinError(0,53362.15);
   AlphaT_Zoomed_all->SetBinError(1,48742.74);
   AlphaT_Zoomed_all->SetBinError(2,63888.16);
   AlphaT_Zoomed_all->SetBinError(3,58978.02);
   AlphaT_Zoomed_all->SetBinError(4,62737.22);
   AlphaT_Zoomed_all->SetBinError(5,42621.93);
   AlphaT_Zoomed_all->SetBinError(6,11907.11);
   AlphaT_Zoomed_all->SetBinError(7,3944.745);
   AlphaT_Zoomed_all->SetBinError(8,1736.51);
   AlphaT_Zoomed_all->SetBinError(9,1325.688);
   AlphaT_Zoomed_all->SetBinError(11,55.29419);
   AlphaT_Zoomed_all->SetBinError(13,0.7314273);
   AlphaT_Zoomed_all->SetEntries(789898);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis38[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis38);
   AlphaT_Zoomed_all->SetBinContent(0,618.8919);
   AlphaT_Zoomed_all->SetBinContent(1,220.5538);
   AlphaT_Zoomed_all->SetBinContent(2,293.7845);
   AlphaT_Zoomed_all->SetBinContent(3,352.7712);
   AlphaT_Zoomed_all->SetBinContent(4,440.9721);
   AlphaT_Zoomed_all->SetBinContent(5,199.7873);
   AlphaT_Zoomed_all->SetBinContent(6,62.25146);
   AlphaT_Zoomed_all->SetBinContent(7,28.1816);
   AlphaT_Zoomed_all->SetBinContent(8,14.93652);
   AlphaT_Zoomed_all->SetBinContent(9,9.175678);
   AlphaT_Zoomed_all->SetBinContent(10,6.610473);
   AlphaT_Zoomed_all->SetBinContent(11,3.746298);
   AlphaT_Zoomed_all->SetBinContent(12,4.855303);
   AlphaT_Zoomed_all->SetBinContent(13,24.49889);
   AlphaT_Zoomed_all->SetBinError(0,6.190731);
   AlphaT_Zoomed_all->SetBinError(1,3.947552);
   AlphaT_Zoomed_all->SetBinError(2,4.632734);
   AlphaT_Zoomed_all->SetBinError(3,4.989195);
   AlphaT_Zoomed_all->SetBinError(4,5.675777);
   AlphaT_Zoomed_all->SetBinError(5,3.741868);
   AlphaT_Zoomed_all->SetBinError(6,2.110145);
   AlphaT_Zoomed_all->SetBinError(7,1.390156);
   AlphaT_Zoomed_all->SetBinError(8,0.9602516);
   AlphaT_Zoomed_all->SetBinError(9,0.7191054);
   AlphaT_Zoomed_all->SetBinError(10,0.6285534);
   AlphaT_Zoomed_all->SetBinError(11,0.4483931);
   AlphaT_Zoomed_all->SetBinError(12,0.5682012);
   AlphaT_Zoomed_all->SetBinError(13,1.234873);
   AlphaT_Zoomed_all->SetEntries(48541);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis39[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis39);
   AlphaT_Zoomed_all->SetBinContent(0,1.047699e+07);
   AlphaT_Zoomed_all->SetBinContent(1,5585398);
   AlphaT_Zoomed_all->SetBinContent(2,7215644);
   AlphaT_Zoomed_all->SetBinContent(3,8632755);
   AlphaT_Zoomed_all->SetBinContent(4,9704511);
   AlphaT_Zoomed_all->SetBinContent(5,1607005);
   AlphaT_Zoomed_all->SetBinContent(6,164966.6);
   AlphaT_Zoomed_all->SetBinContent(7,17735.06);
   AlphaT_Zoomed_all->SetBinContent(8,3990.317);
   AlphaT_Zoomed_all->SetBinContent(9,1981.761);
   AlphaT_Zoomed_all->SetBinContent(10,396.0298);
   AlphaT_Zoomed_all->SetBinContent(11,399.1639);
   AlphaT_Zoomed_all->SetBinContent(12,244.1534);
   AlphaT_Zoomed_all->SetBinContent(13,2152.868);
   AlphaT_Zoomed_all->SetBinError(0,53362.45);
   AlphaT_Zoomed_all->SetBinError(1,48742.84);
   AlphaT_Zoomed_all->SetBinError(2,63888.25);
   AlphaT_Zoomed_all->SetBinError(3,58978.15);
   AlphaT_Zoomed_all->SetBinError(4,62737.37);
   AlphaT_Zoomed_all->SetBinError(5,42622.11);
   AlphaT_Zoomed_all->SetBinError(6,11907.39);
   AlphaT_Zoomed_all->SetBinError(7,3945.137);
   AlphaT_Zoomed_all->SetBinError(8,1737.15);
   AlphaT_Zoomed_all->SetBinError(9,1326.2);
   AlphaT_Zoomed_all->SetBinError(10,25.80107);
   AlphaT_Zoomed_all->SetBinError(11,61.60838);
   AlphaT_Zoomed_all->SetBinError(12,20.2091);
   AlphaT_Zoomed_all->SetBinError(13,62.00895);
   AlphaT_Zoomed_all->SetEntries(1086427);
   AlphaT_Zoomed_all->SetLineColor(3);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,5581492);
   gre->SetPointError(0,0.00625,48742.74);
   gre->SetPoint(1,0.46875,7211021);
   gre->SetPointError(1,0.00625,63888.16);
   gre->SetPoint(2,0.48125,8627196);
   gre->SetPointError(2,0.00625,58978.02);
   gre->SetPoint(3,0.49375,9698061);
   gre->SetPointError(3,0.00625,62737.22);
   gre->SetPoint(4,0.50625,1602523);
   gre->SetPointError(4,0.00625,42621.93);
   gre->SetPoint(5,0.51875,162637.3);
   gre->SetPointError(5,0.00625,11907.11);
   gre->SetPoint(6,0.53125,16410.79);
   gre->SetPointError(6,0.00625,3944.745);
   gre->SetPoint(7,0.54375,3038.159);
   gre->SetPointError(7,0.00625,1736.51);
   gre->SetPoint(8,0.55625,1368.113);
   gre->SetPointError(8,0.00625,1325.688);
   gre->SetPoint(9,0.56875,0);
   gre->SetPointError(9,0.00625,0);
   gre->SetPoint(10,0.58125,55.29419);
   gre->SetPointError(10,0.00625,55.29419);
   gre->SetPoint(11,0.59375,0);
   gre->SetPointError(11,0.00625,0);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all6 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all6","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all6->SetMinimum(10736.88);
   Graph_Graph_from_AlphaT_Zoomed_all6->SetMaximum(1.073688e+07);
   Graph_Graph_from_AlphaT_Zoomed_all6->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all6->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all6->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all6);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,5585398);
   gre->SetPointError(0,0.00625,48742.84);
   gre->SetPoint(1,0.46875,7215644);
   gre->SetPointError(1,0.00625,63888.25);
   gre->SetPoint(2,0.48125,8632755);
   gre->SetPointError(2,0.00625,58978.15);
   gre->SetPoint(3,0.49375,9704511);
   gre->SetPointError(3,0.00625,62737.37);
   gre->SetPoint(4,0.50625,1607005);
   gre->SetPointError(4,0.00625,42622.11);
   gre->SetPoint(5,0.51875,164966.6);
   gre->SetPointError(5,0.00625,11907.39);
   gre->SetPoint(6,0.53125,17735.06);
   gre->SetPointError(6,0.00625,3945.137);
   gre->SetPoint(7,0.54375,3990.317);
   gre->SetPointError(7,0.00625,1737.15);
   gre->SetPoint(8,0.55625,1981.761);
   gre->SetPointError(8,0.00625,1326.2);
   gre->SetPoint(9,0.56875,396.0298);
   gre->SetPointError(9,0.00625,25.80107);
   gre->SetPoint(10,0.58125,399.1639);
   gre->SetPointError(10,0.00625,61.60838);
   gre->SetPoint(11,0.59375,244.1534);
   gre->SetPointError(11,0.00625,20.2091);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all7 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all7","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all7->SetMinimum(201.5499);
   Graph_Graph_from_AlphaT_Zoomed_all7->SetMaximum(1.074395e+07);
   Graph_Graph_from_AlphaT_Zoomed_all7->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all7->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all7->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all7);
   
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
   TLegendEntry *entry=leg->AddEntry("AlphaT_Zoomed_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("AlphaT_Zoomed_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"275_325    Jet Multiplicity=all");
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
   Double_t xAxis40[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis40);
   AlphaT_Zoomed_all->SetBinContent(0,5397);
   AlphaT_Zoomed_all->SetBinContent(1,1254);
   AlphaT_Zoomed_all->SetBinContent(2,1980);
   AlphaT_Zoomed_all->SetBinContent(3,2653);
   AlphaT_Zoomed_all->SetBinContent(4,3429);
   AlphaT_Zoomed_all->SetBinContent(5,3786);
   AlphaT_Zoomed_all->SetBinContent(6,3535);
   AlphaT_Zoomed_all->SetBinContent(7,2583);
   AlphaT_Zoomed_all->SetBinContent(8,1321);
   AlphaT_Zoomed_all->SetBinContent(9,731);
   AlphaT_Zoomed_all->SetBinContent(10,460);
   AlphaT_Zoomed_all->SetBinContent(11,299);
   AlphaT_Zoomed_all->SetBinContent(12,238);
   AlphaT_Zoomed_all->SetBinContent(13,1975);
   AlphaT_Zoomed_all->SetBinError(0,73.46428);
   AlphaT_Zoomed_all->SetBinError(1,35.41186);
   AlphaT_Zoomed_all->SetBinError(2,44.49719);
   AlphaT_Zoomed_all->SetBinError(3,51.50728);
   AlphaT_Zoomed_all->SetBinError(4,58.55766);
   AlphaT_Zoomed_all->SetBinError(5,61.53048);
   AlphaT_Zoomed_all->SetBinError(6,59.45587);
   AlphaT_Zoomed_all->SetBinError(7,50.82322);
   AlphaT_Zoomed_all->SetBinError(8,36.34556);
   AlphaT_Zoomed_all->SetBinError(9,27.03701);
   AlphaT_Zoomed_all->SetBinError(10,21.44761);
   AlphaT_Zoomed_all->SetBinError(11,17.29162);
   AlphaT_Zoomed_all->SetBinError(12,15.42725);
   AlphaT_Zoomed_all->SetBinError(13,44.44097);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(9.704511e+07);
   AlphaT_Zoomed_all->SetEntries(29641);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvas275_325/AlphaT_Zoomed_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(0.43125,-0.25,0.61875,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis41[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis41);
   AlphaT_Zoomed_all->SetBinContent(0,0.000515129);
   AlphaT_Zoomed_all->SetBinContent(1,0.000224514);
   AlphaT_Zoomed_all->SetBinContent(2,0.0002744038);
   AlphaT_Zoomed_all->SetBinContent(3,0.0003073179);
   AlphaT_Zoomed_all->SetBinContent(4,0.0003533408);
   AlphaT_Zoomed_all->SetBinContent(5,0.002355935);
   AlphaT_Zoomed_all->SetBinContent(6,0.02142858);
   AlphaT_Zoomed_all->SetBinContent(7,0.1456437);
   AlphaT_Zoomed_all->SetBinContent(8,0.3310514);
   AlphaT_Zoomed_all->SetBinContent(9,0.3688639);
   AlphaT_Zoomed_all->SetBinContent(10,1.161529);
   AlphaT_Zoomed_all->SetBinContent(11,0.7490658);
   AlphaT_Zoomed_all->SetBinContent(12,0.974797);
   AlphaT_Zoomed_all->SetBinContent(13,0.9173808);
   AlphaT_Zoomed_all->SetBinError(0,7.486755e-06);
   AlphaT_Zoomed_all->SetBinError(1,0.02955682);
   AlphaT_Zoomed_all->SetBinError(2,0.02415463);
   AlphaT_Zoomed_all->SetBinError(3,0.02058171);
   AlphaT_Zoomed_all->SetBinError(4,0.01825988);
   AlphaT_Zoomed_all->SetBinError(5,0.03110602);
   AlphaT_Zoomed_all->SetBinError(6,0.07411427);
   AlphaT_Zoomed_all->SetBinError(7,0.223317);
   AlphaT_Zoomed_all->SetBinError(8,0.4362098);
   AlphaT_Zoomed_all->SetBinError(9,0.670224);
   AlphaT_Zoomed_all->SetBinError(10,0.08011459);
   AlphaT_Zoomed_all->SetBinError(11,0.1648224);
   AlphaT_Zoomed_all->SetBinError(12,0.1051328);
   AlphaT_Zoomed_all->SetBinError(13,0.03353072);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(120.1212);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetLabelSize(0.12);
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Data/MC");
   AlphaT_Zoomed_all->GetYaxis()->SetNdivisions(505);
   AlphaT_Zoomed_all->GetYaxis()->SetLabelSize(0.11);
   AlphaT_Zoomed_all->GetYaxis()->SetTitleSize(0.1);
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(0.5);
   AlphaT_Zoomed_all->Draw("P");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.45625,1);
   gre->SetPointError(0,0.00625,0.008726834);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.008854131);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.006831904);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.006464763);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.0265227);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.0721806);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.2224485);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.4353412);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.6692027);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.06514932);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.1543436);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.08277212);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all8 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all8","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all8->SetMinimum(0.1969568);
   Graph_Graph_from_AlphaT_Zoomed_all8->SetMaximum(1.803043);
   Graph_Graph_from_AlphaT_Zoomed_all8->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all8->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all8->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all8);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis42[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis42);
   AlphaT_Zoomed_all->SetBinContent(0,0.000515129);
   AlphaT_Zoomed_all->SetBinContent(1,0.000224514);
   AlphaT_Zoomed_all->SetBinContent(2,0.0002744038);
   AlphaT_Zoomed_all->SetBinContent(3,0.0003073179);
   AlphaT_Zoomed_all->SetBinContent(4,0.0003533408);
   AlphaT_Zoomed_all->SetBinContent(5,0.002355935);
   AlphaT_Zoomed_all->SetBinContent(6,0.02142858);
   AlphaT_Zoomed_all->SetBinContent(7,0.1456437);
   AlphaT_Zoomed_all->SetBinContent(8,0.3310514);
   AlphaT_Zoomed_all->SetBinContent(9,0.3688639);
   AlphaT_Zoomed_all->SetBinContent(10,1.161529);
   AlphaT_Zoomed_all->SetBinContent(11,0.7490658);
   AlphaT_Zoomed_all->SetBinContent(12,0.974797);
   AlphaT_Zoomed_all->SetBinContent(13,0.9173808);
   AlphaT_Zoomed_all->SetBinError(0,7.486755e-06);
   AlphaT_Zoomed_all->SetBinError(1,0.02955682);
   AlphaT_Zoomed_all->SetBinError(2,0.02415463);
   AlphaT_Zoomed_all->SetBinError(3,0.02058171);
   AlphaT_Zoomed_all->SetBinError(4,0.01825988);
   AlphaT_Zoomed_all->SetBinError(5,0.03110602);
   AlphaT_Zoomed_all->SetBinError(6,0.07411427);
   AlphaT_Zoomed_all->SetBinError(7,0.223317);
   AlphaT_Zoomed_all->SetBinError(8,0.4362098);
   AlphaT_Zoomed_all->SetBinError(9,0.670224);
   AlphaT_Zoomed_all->SetBinError(10,0.08011459);
   AlphaT_Zoomed_all->SetBinError(11,0.1648224);
   AlphaT_Zoomed_all->SetBinError(12,0.1051328);
   AlphaT_Zoomed_all->SetBinError(13,0.03353072);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(120.1212);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetLabelSize(0.12);
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Data/MC");
   AlphaT_Zoomed_all->GetYaxis()->SetNdivisions(505);
   AlphaT_Zoomed_all->GetYaxis()->SetLabelSize(0.11);
   AlphaT_Zoomed_all->GetYaxis()->SetTitleSize(0.1);
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(0.5);
   AlphaT_Zoomed_all->Draw("PSAME");
   d->Modified();
   canvas275_325/AlphaT_Zoomed_all->cd();
   canvas275_325/AlphaT_Zoomed_all->Modified();
   canvas275_325/AlphaT_Zoomed_all->cd();
   canvas275_325/AlphaT_Zoomed_all->SetSelected(canvas275_325/AlphaT_Zoomed_all);
}
