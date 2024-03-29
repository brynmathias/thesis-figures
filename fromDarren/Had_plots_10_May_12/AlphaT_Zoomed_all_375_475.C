{
//=========Macro generated from canvas: canvas375_475/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:22:53 2012) by ROOT version5.32/00
   TCanvas *canvas375_475/AlphaT_Zoomed_all = new TCanvas("canvas375_475/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvas375_475/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvas375_475/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvas375_475/AlphaT_Zoomed_all->SetFillColor(0);
   canvas375_475/AlphaT_Zoomed_all->SetBorderMode(0);
   canvas375_475/AlphaT_Zoomed_all->SetBorderSize(2);
   canvas375_475/AlphaT_Zoomed_all->SetTickx(1);
   canvas375_475/AlphaT_Zoomed_all->SetTicky(1);
   canvas375_475/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-1.27539,0.61875,8.468208);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis841[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis841);
   AlphaT_Zoomed_all->SetBinContent(0,20545);
   AlphaT_Zoomed_all->SetBinContent(1,4612);
   AlphaT_Zoomed_all->SetBinContent(2,5178);
   AlphaT_Zoomed_all->SetBinContent(3,6253);
   AlphaT_Zoomed_all->SetBinContent(4,7713);
   AlphaT_Zoomed_all->SetBinContent(5,5710);
   AlphaT_Zoomed_all->SetBinContent(6,1599);
   AlphaT_Zoomed_all->SetBinContent(7,599);
   AlphaT_Zoomed_all->SetBinContent(8,287);
   AlphaT_Zoomed_all->SetBinContent(9,178);
   AlphaT_Zoomed_all->SetBinContent(10,134);
   AlphaT_Zoomed_all->SetBinContent(11,92);
   AlphaT_Zoomed_all->SetBinContent(12,95);
   AlphaT_Zoomed_all->SetBinContent(13,544);
   AlphaT_Zoomed_all->SetBinError(0,143.3353);
   AlphaT_Zoomed_all->SetBinError(1,67.91171);
   AlphaT_Zoomed_all->SetBinError(2,71.95832);
   AlphaT_Zoomed_all->SetBinError(3,79.07591);
   AlphaT_Zoomed_all->SetBinError(4,87.82369);
   AlphaT_Zoomed_all->SetBinError(5,75.56454);
   AlphaT_Zoomed_all->SetBinError(6,39.9875);
   AlphaT_Zoomed_all->SetBinError(7,24.47448);
   AlphaT_Zoomed_all->SetBinError(8,16.94107);
   AlphaT_Zoomed_all->SetBinError(9,13.34166);
   AlphaT_Zoomed_all->SetBinError(10,11.57584);
   AlphaT_Zoomed_all->SetBinError(11,9.591663);
   AlphaT_Zoomed_all->SetBinError(12,9.746794);
   AlphaT_Zoomed_all->SetBinError(13,23.32381);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(3.117802e+07);
   AlphaT_Zoomed_all->SetEntries(53539);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PE0");
   Double_t xAxis842[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis842);
   AlphaT_Zoomed_all->SetBinContent(0,2840.218);
   AlphaT_Zoomed_all->SetBinContent(1,821.2329);
   AlphaT_Zoomed_all->SetBinContent(2,927.115);
   AlphaT_Zoomed_all->SetBinContent(3,1046.361);
   AlphaT_Zoomed_all->SetBinContent(4,1143.886);
   AlphaT_Zoomed_all->SetBinContent(5,621.6209);
   AlphaT_Zoomed_all->SetBinContent(6,287.539);
   AlphaT_Zoomed_all->SetBinContent(7,156.1427);
   AlphaT_Zoomed_all->SetBinContent(8,100.4754);
   AlphaT_Zoomed_all->SetBinContent(9,63.93215);
   AlphaT_Zoomed_all->SetBinContent(10,49.09465);
   AlphaT_Zoomed_all->SetBinContent(11,36.0939);
   AlphaT_Zoomed_all->SetBinContent(12,25.76479);
   AlphaT_Zoomed_all->SetBinContent(13,195.4842);
   AlphaT_Zoomed_all->SetBinError(0,13.41292);
   AlphaT_Zoomed_all->SetBinError(1,7.432381);
   AlphaT_Zoomed_all->SetBinError(2,8.000069);
   AlphaT_Zoomed_all->SetBinError(3,8.350285);
   AlphaT_Zoomed_all->SetBinError(4,8.81108);
   AlphaT_Zoomed_all->SetBinError(5,6.483735);
   AlphaT_Zoomed_all->SetBinError(6,4.349955);
   AlphaT_Zoomed_all->SetBinError(7,3.260985);
   AlphaT_Zoomed_all->SetBinError(8,2.660523);
   AlphaT_Zoomed_all->SetBinError(9,1.97592);
   AlphaT_Zoomed_all->SetBinError(10,1.784222);
   AlphaT_Zoomed_all->SetBinError(11,1.453653);
   AlphaT_Zoomed_all->SetBinError(12,1.257337);
   AlphaT_Zoomed_all->SetBinError(13,3.6078);
   AlphaT_Zoomed_all->SetEntries(195003);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis843[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis843);
   AlphaT_Zoomed_all->SetBinContent(0,993.7798);
   AlphaT_Zoomed_all->SetBinContent(1,535.6846);
   AlphaT_Zoomed_all->SetBinContent(2,775.8906);
   AlphaT_Zoomed_all->SetBinContent(3,1015.604);
   AlphaT_Zoomed_all->SetBinContent(4,1316.638);
   AlphaT_Zoomed_all->SetBinContent(5,584.8643);
   AlphaT_Zoomed_all->SetBinContent(6,191.3283);
   AlphaT_Zoomed_all->SetBinContent(7,109.5687);
   AlphaT_Zoomed_all->SetBinContent(8,61.99133);
   AlphaT_Zoomed_all->SetBinContent(9,44.65761);
   AlphaT_Zoomed_all->SetBinContent(10,27.6028);
   AlphaT_Zoomed_all->SetBinContent(11,16.55749);
   AlphaT_Zoomed_all->SetBinContent(12,16.47174);
   AlphaT_Zoomed_all->SetBinContent(13,71.79743);
   AlphaT_Zoomed_all->SetBinError(0,17.52628);
   AlphaT_Zoomed_all->SetBinError(1,12.60925);
   AlphaT_Zoomed_all->SetBinError(2,15.77199);
   AlphaT_Zoomed_all->SetBinError(3,17.96399);
   AlphaT_Zoomed_all->SetBinError(4,20.61566);
   AlphaT_Zoomed_all->SetBinError(5,12.99771);
   AlphaT_Zoomed_all->SetBinError(6,7.114925);
   AlphaT_Zoomed_all->SetBinError(7,5.651488);
   AlphaT_Zoomed_all->SetBinError(8,4.219293);
   AlphaT_Zoomed_all->SetBinError(9,3.438031);
   AlphaT_Zoomed_all->SetBinError(10,2.739985);
   AlphaT_Zoomed_all->SetBinError(11,2.034371);
   AlphaT_Zoomed_all->SetBinError(12,1.990668);
   AlphaT_Zoomed_all->SetBinError(13,4.889416);
   AlphaT_Zoomed_all->SetEntries(27613);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis844[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis844);
   AlphaT_Zoomed_all->SetBinContent(0,1403.508);
   AlphaT_Zoomed_all->SetBinContent(1,302.6511);
   AlphaT_Zoomed_all->SetBinContent(2,350.8568);
   AlphaT_Zoomed_all->SetBinContent(3,365.1529);
   AlphaT_Zoomed_all->SetBinContent(4,407.3899);
   AlphaT_Zoomed_all->SetBinContent(5,271.79);
   AlphaT_Zoomed_all->SetBinContent(6,180.5508);
   AlphaT_Zoomed_all->SetBinContent(7,122.5815);
   AlphaT_Zoomed_all->SetBinContent(8,84.47027);
   AlphaT_Zoomed_all->SetBinContent(9,60.4432);
   AlphaT_Zoomed_all->SetBinContent(10,44.13784);
   AlphaT_Zoomed_all->SetBinContent(11,35.30865);
   AlphaT_Zoomed_all->SetBinContent(12,28.39785);
   AlphaT_Zoomed_all->SetBinContent(13,298.9253);
   AlphaT_Zoomed_all->SetBinError(0,10.45193);
   AlphaT_Zoomed_all->SetBinError(1,5.0499);
   AlphaT_Zoomed_all->SetBinError(2,5.365551);
   AlphaT_Zoomed_all->SetBinError(3,5.391561);
   AlphaT_Zoomed_all->SetBinError(4,5.753689);
   AlphaT_Zoomed_all->SetBinError(5,4.822286);
   AlphaT_Zoomed_all->SetBinError(6,4.01633);
   AlphaT_Zoomed_all->SetBinError(7,3.152936);
   AlphaT_Zoomed_all->SetBinError(8,2.560873);
   AlphaT_Zoomed_all->SetBinError(9,2.418253);
   AlphaT_Zoomed_all->SetBinError(10,1.979038);
   AlphaT_Zoomed_all->SetBinError(11,1.78882);
   AlphaT_Zoomed_all->SetBinError(12,1.398981);
   AlphaT_Zoomed_all->SetBinError(13,5.086043);
   AlphaT_Zoomed_all->SetEntries(71391);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis845[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis845);
   AlphaT_Zoomed_all->SetBinContent(0,198.423);
   AlphaT_Zoomed_all->SetBinContent(1,64.86983);
   AlphaT_Zoomed_all->SetBinContent(2,91.62101);
   AlphaT_Zoomed_all->SetBinContent(3,90.9344);
   AlphaT_Zoomed_all->SetBinContent(4,110.1214);
   AlphaT_Zoomed_all->SetBinContent(5,28.56456);
   AlphaT_Zoomed_all->SetBinContent(6,6.081874);
   AlphaT_Zoomed_all->SetBinContent(7,2.379875);
   AlphaT_Zoomed_all->SetBinContent(8,0.4684294);
   AlphaT_Zoomed_all->SetBinContent(9,1.541766);
   AlphaT_Zoomed_all->SetBinContent(10,0.8965959);
   AlphaT_Zoomed_all->SetBinContent(12,0.9012411);
   AlphaT_Zoomed_all->SetBinContent(13,1.271118);
   AlphaT_Zoomed_all->SetBinError(0,10.34579);
   AlphaT_Zoomed_all->SetBinError(1,5.712307);
   AlphaT_Zoomed_all->SetBinError(2,8.345536);
   AlphaT_Zoomed_all->SetBinError(3,7.051144);
   AlphaT_Zoomed_all->SetBinError(4,11.53775);
   AlphaT_Zoomed_all->SetBinError(5,3.816003);
   AlphaT_Zoomed_all->SetBinError(6,1.844233);
   AlphaT_Zoomed_all->SetBinError(7,1.116293);
   AlphaT_Zoomed_all->SetBinError(8,0.4684294);
   AlphaT_Zoomed_all->SetBinError(9,0.8028864);
   AlphaT_Zoomed_all->SetBinError(10,0.5650549);
   AlphaT_Zoomed_all->SetBinError(12,0.6823787);
   AlphaT_Zoomed_all->SetBinError(13,0.7553524);
   AlphaT_Zoomed_all->SetEntries(1391);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis846[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis846);
   AlphaT_Zoomed_all->SetBinContent(0,56.63335);
   AlphaT_Zoomed_all->SetBinContent(1,29.47452);
   AlphaT_Zoomed_all->SetBinContent(2,38.53303);
   AlphaT_Zoomed_all->SetBinContent(3,45.19898);
   AlphaT_Zoomed_all->SetBinContent(4,58.49077);
   AlphaT_Zoomed_all->SetBinContent(5,12.26911);
   AlphaT_Zoomed_all->SetBinContent(6,4.122622);
   AlphaT_Zoomed_all->SetBinContent(7,1.945449);
   AlphaT_Zoomed_all->SetBinContent(8,1.338637);
   AlphaT_Zoomed_all->SetBinContent(9,1.163285);
   AlphaT_Zoomed_all->SetBinContent(10,1.132151);
   AlphaT_Zoomed_all->SetBinContent(11,0.5651074);
   AlphaT_Zoomed_all->SetBinContent(12,0.5572914);
   AlphaT_Zoomed_all->SetBinContent(13,5.752455);
   AlphaT_Zoomed_all->SetBinError(0,1.255379);
   AlphaT_Zoomed_all->SetBinError(1,0.8939497);
   AlphaT_Zoomed_all->SetBinError(2,1.027866);
   AlphaT_Zoomed_all->SetBinError(3,1.097009);
   AlphaT_Zoomed_all->SetBinError(4,1.264905);
   AlphaT_Zoomed_all->SetBinError(5,0.5729446);
   AlphaT_Zoomed_all->SetBinError(6,0.337307);
   AlphaT_Zoomed_all->SetBinError(7,0.2161659);
   AlphaT_Zoomed_all->SetBinError(8,0.1806616);
   AlphaT_Zoomed_all->SetBinError(9,0.1659085);
   AlphaT_Zoomed_all->SetBinError(10,0.1688601);
   AlphaT_Zoomed_all->SetBinError(11,0.1059929);
   AlphaT_Zoomed_all->SetBinError(12,0.1213665);
   AlphaT_Zoomed_all->SetBinError(13,0.3232486);
   AlphaT_Zoomed_all->SetEntries(17833);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis847[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis847);
   AlphaT_Zoomed_all->SetBinContent(0,2357604);
   AlphaT_Zoomed_all->SetBinContent(1,1394510);
   AlphaT_Zoomed_all->SetBinContent(2,1954960);
   AlphaT_Zoomed_all->SetBinContent(3,2610893);
   AlphaT_Zoomed_all->SetBinContent(4,3114566);
   AlphaT_Zoomed_all->SetBinContent(5,211092.8);
   AlphaT_Zoomed_all->SetBinContent(6,1603.791);
   AlphaT_Zoomed_all->SetBinContent(7,80.5268);
   AlphaT_Zoomed_all->SetBinContent(8,17.77216);
   AlphaT_Zoomed_all->SetBinContent(9,57.43201);
   AlphaT_Zoomed_all->SetBinContent(10,5.318401);
   AlphaT_Zoomed_all->SetBinContent(12,0.1350632);
   AlphaT_Zoomed_all->SetBinContent(13,1.33223);
   AlphaT_Zoomed_all->SetBinError(0,13641.99);
   AlphaT_Zoomed_all->SetBinError(1,10301.07);
   AlphaT_Zoomed_all->SetBinError(2,12089.67);
   AlphaT_Zoomed_all->SetBinError(3,13886.67);
   AlphaT_Zoomed_all->SetBinError(4,14948.78);
   AlphaT_Zoomed_all->SetBinError(5,4605.85);
   AlphaT_Zoomed_all->SetBinError(6,341.2855);
   AlphaT_Zoomed_all->SetBinError(7,33.3171);
   AlphaT_Zoomed_all->SetBinError(8,6.970455);
   AlphaT_Zoomed_all->SetBinError(9,57.43201);
   AlphaT_Zoomed_all->SetBinError(10,3.788807);
   AlphaT_Zoomed_all->SetBinError(12,0.1350632);
   AlphaT_Zoomed_all->SetBinError(13,1.33223);
   AlphaT_Zoomed_all->SetEntries(356508);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis848[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis848);
   AlphaT_Zoomed_all->SetBinContent(0,248.7335);
   AlphaT_Zoomed_all->SetBinContent(1,116.5958);
   AlphaT_Zoomed_all->SetBinContent(2,145.7973);
   AlphaT_Zoomed_all->SetBinContent(3,172.394);
   AlphaT_Zoomed_all->SetBinContent(4,199.8023);
   AlphaT_Zoomed_all->SetBinContent(5,66.18681);
   AlphaT_Zoomed_all->SetBinContent(6,14.26077);
   AlphaT_Zoomed_all->SetBinContent(7,5.815046);
   AlphaT_Zoomed_all->SetBinContent(8,3.556408);
   AlphaT_Zoomed_all->SetBinContent(9,2.809376);
   AlphaT_Zoomed_all->SetBinContent(10,1.854736);
   AlphaT_Zoomed_all->SetBinContent(11,0.9904065);
   AlphaT_Zoomed_all->SetBinContent(12,0.7684903);
   AlphaT_Zoomed_all->SetBinContent(13,6.314301);
   AlphaT_Zoomed_all->SetBinError(0,4.152711);
   AlphaT_Zoomed_all->SetBinError(1,2.881851);
   AlphaT_Zoomed_all->SetBinError(2,3.269399);
   AlphaT_Zoomed_all->SetBinError(3,3.522268);
   AlphaT_Zoomed_all->SetBinError(4,3.665823);
   AlphaT_Zoomed_all->SetBinError(5,2.040137);
   AlphaT_Zoomed_all->SetBinError(6,0.9371098);
   AlphaT_Zoomed_all->SetBinError(7,0.5530808);
   AlphaT_Zoomed_all->SetBinError(8,0.4308559);
   AlphaT_Zoomed_all->SetBinError(9,0.4142468);
   AlphaT_Zoomed_all->SetBinError(10,0.3167027);
   AlphaT_Zoomed_all->SetBinError(11,0.2207599);
   AlphaT_Zoomed_all->SetBinError(12,0.2067773);
   AlphaT_Zoomed_all->SetBinError(13,0.5900227);
   AlphaT_Zoomed_all->SetEntries(21272);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis849[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis849);
   AlphaT_Zoomed_all->SetBinContent(0,2363345);
   AlphaT_Zoomed_all->SetBinContent(1,1396380);
   AlphaT_Zoomed_all->SetBinContent(2,1957290);
   AlphaT_Zoomed_all->SetBinContent(3,2613628);
   AlphaT_Zoomed_all->SetBinContent(4,3117802);
   AlphaT_Zoomed_all->SetBinContent(5,212678.1);
   AlphaT_Zoomed_all->SetBinContent(6,2287.675);
   AlphaT_Zoomed_all->SetBinContent(7,478.9601);
   AlphaT_Zoomed_all->SetBinContent(8,270.0726);
   AlphaT_Zoomed_all->SetBinContent(9,231.9794);
   AlphaT_Zoomed_all->SetBinContent(10,130.0372);
   AlphaT_Zoomed_all->SetBinContent(11,89.51555);
   AlphaT_Zoomed_all->SetBinContent(12,72.99647);
   AlphaT_Zoomed_all->SetBinContent(13,580.877);
   AlphaT_Zoomed_all->SetBinError(0,13642.02);
   AlphaT_Zoomed_all->SetBinError(1,10301.08);
   AlphaT_Zoomed_all->SetBinError(2,12089.69);
   AlphaT_Zoomed_all->SetBinError(3,13886.69);
   AlphaT_Zoomed_all->SetBinError(4,14948.8);
   AlphaT_Zoomed_all->SetBinError(5,4605.877);
   AlphaT_Zoomed_all->SetBinError(6,341.4175);
   AlphaT_Zoomed_all->SetBinError(7,34.11952);
   AlphaT_Zoomed_all->SetBinError(8,8.970163);
   AlphaT_Zoomed_all->SetBinError(9,57.62683);
   AlphaT_Zoomed_all->SetBinError(10,5.423165);
   AlphaT_Zoomed_all->SetBinError(11,3.084091);
   AlphaT_Zoomed_all->SetBinError(12,2.835872);
   AlphaT_Zoomed_all->SetBinError(13,8.098669);
   AlphaT_Zoomed_all->SetEntries(691011);
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
   gre->SetPoint(0,0.45625,1394510);
   gre->SetPointError(0,0.00625,10301.07);
   gre->SetPoint(1,0.46875,1954960);
   gre->SetPointError(1,0.00625,12089.67);
   gre->SetPoint(2,0.48125,2610893);
   gre->SetPointError(2,0.00625,13886.67);
   gre->SetPoint(3,0.49375,3114566);
   gre->SetPointError(3,0.00625,14948.78);
   gre->SetPoint(4,0.50625,211092.8);
   gre->SetPointError(4,0.00625,4605.85);
   gre->SetPoint(5,0.51875,1603.791);
   gre->SetPointError(5,0.00625,341.2855);
   gre->SetPoint(6,0.53125,80.5268);
   gre->SetPointError(6,0.00625,33.3171);
   gre->SetPoint(7,0.54375,17.77216);
   gre->SetPointError(7,0.00625,6.970455);
   gre->SetPoint(8,0.55625,57.43201);
   gre->SetPointError(8,0.00625,57.43201);
   gre->SetPoint(9,0.56875,5.318401);
   gre->SetPointError(9,0.00625,3.788807);
   gre->SetPoint(10,0.58125,0);
   gre->SetPointError(10,0.00625,0);
   gre->SetPoint(11,0.59375,0.1350632);
   gre->SetPointError(11,0.00625,0.1350632);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all141 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all141","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all141->SetMinimum(3442.466);
   Graph_Graph_from_AlphaT_Zoomed_all141->SetMaximum(3442466);
   Graph_Graph_from_AlphaT_Zoomed_all141->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all141->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all141->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all141);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,1396380);
   gre->SetPointError(0,0.00625,10301.08);
   gre->SetPoint(1,0.46875,1957290);
   gre->SetPointError(1,0.00625,12089.69);
   gre->SetPoint(2,0.48125,2613628);
   gre->SetPointError(2,0.00625,13886.69);
   gre->SetPoint(3,0.49375,3117802);
   gre->SetPointError(3,0.00625,14948.8);
   gre->SetPoint(4,0.50625,212678.1);
   gre->SetPointError(4,0.00625,4605.877);
   gre->SetPoint(5,0.51875,2287.675);
   gre->SetPointError(5,0.00625,341.4175);
   gre->SetPoint(6,0.53125,478.9601);
   gre->SetPointError(6,0.00625,34.11952);
   gre->SetPoint(7,0.54375,270.0726);
   gre->SetPointError(7,0.00625,8.970163);
   gre->SetPoint(8,0.55625,231.9794);
   gre->SetPointError(8,0.00625,57.62683);
   gre->SetPoint(9,0.56875,130.0372);
   gre->SetPointError(9,0.00625,5.423165);
   gre->SetPoint(10,0.58125,89.51555);
   gre->SetPointError(10,0.00625,3.084091);
   gre->SetPoint(11,0.59375,72.99647);
   gre->SetPointError(11,0.00625,2.835872);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all142 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all142","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all142->SetMinimum(63.14454);
   Graph_Graph_from_AlphaT_Zoomed_all142->SetMaximum(3446019);
   Graph_Graph_from_AlphaT_Zoomed_all142->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all142->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all142->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all142);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"375_475    Jet Multiplicity=all");
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
   Double_t xAxis850[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis850);
   AlphaT_Zoomed_all->SetBinContent(0,20545);
   AlphaT_Zoomed_all->SetBinContent(1,4612);
   AlphaT_Zoomed_all->SetBinContent(2,5178);
   AlphaT_Zoomed_all->SetBinContent(3,6253);
   AlphaT_Zoomed_all->SetBinContent(4,7713);
   AlphaT_Zoomed_all->SetBinContent(5,5710);
   AlphaT_Zoomed_all->SetBinContent(6,1599);
   AlphaT_Zoomed_all->SetBinContent(7,599);
   AlphaT_Zoomed_all->SetBinContent(8,287);
   AlphaT_Zoomed_all->SetBinContent(9,178);
   AlphaT_Zoomed_all->SetBinContent(10,134);
   AlphaT_Zoomed_all->SetBinContent(11,92);
   AlphaT_Zoomed_all->SetBinContent(12,95);
   AlphaT_Zoomed_all->SetBinContent(13,544);
   AlphaT_Zoomed_all->SetBinError(0,143.3353);
   AlphaT_Zoomed_all->SetBinError(1,67.91171);
   AlphaT_Zoomed_all->SetBinError(2,71.95832);
   AlphaT_Zoomed_all->SetBinError(3,79.07591);
   AlphaT_Zoomed_all->SetBinError(4,87.82369);
   AlphaT_Zoomed_all->SetBinError(5,75.56454);
   AlphaT_Zoomed_all->SetBinError(6,39.9875);
   AlphaT_Zoomed_all->SetBinError(7,24.47448);
   AlphaT_Zoomed_all->SetBinError(8,16.94107);
   AlphaT_Zoomed_all->SetBinError(9,13.34166);
   AlphaT_Zoomed_all->SetBinError(10,11.57584);
   AlphaT_Zoomed_all->SetBinError(11,9.591663);
   AlphaT_Zoomed_all->SetBinError(12,9.746794);
   AlphaT_Zoomed_all->SetBinError(13,23.32381);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(3.117802e+07);
   AlphaT_Zoomed_all->SetEntries(53539);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvas375_475/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis851[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis851);
   AlphaT_Zoomed_all->SetBinContent(0,0.008693187);
   AlphaT_Zoomed_all->SetBinContent(1,0.003302826);
   AlphaT_Zoomed_all->SetBinContent(2,0.002645494);
   AlphaT_Zoomed_all->SetBinContent(3,0.00239246);
   AlphaT_Zoomed_all->SetBinContent(4,0.002473858);
   AlphaT_Zoomed_all->SetBinContent(5,0.02684808);
   AlphaT_Zoomed_all->SetBinContent(6,0.698963);
   AlphaT_Zoomed_all->SetBinContent(7,1.250626);
   AlphaT_Zoomed_all->SetBinContent(8,1.062677);
   AlphaT_Zoomed_all->SetBinContent(9,0.7673095);
   AlphaT_Zoomed_all->SetBinContent(10,1.030475);
   AlphaT_Zoomed_all->SetBinContent(11,1.027754);
   AlphaT_Zoomed_all->SetBinContent(12,1.301433);
   AlphaT_Zoomed_all->SetBinContent(13,0.936515);
   AlphaT_Zoomed_all->SetBinError(0,7.871703e-05);
   AlphaT_Zoomed_all->SetBinError(1,0.01646954);
   AlphaT_Zoomed_all->SetBinError(2,0.01520779);
   AlphaT_Zoomed_all->SetBinError(3,0.01371689);
   AlphaT_Zoomed_all->SetBinError(4,0.01235476);
   AlphaT_Zoomed_all->SetBinError(5,0.02537987);
   AlphaT_Zoomed_all->SetBinError(6,0.1513229);
   AlphaT_Zoomed_all->SetBinError(7,0.08212255);
   AlphaT_Zoomed_all->SetBinError(8,0.06773096);
   AlphaT_Zoomed_all->SetBinError(9,0.259475);
   AlphaT_Zoomed_all->SetBinError(10,0.0959269);
   AlphaT_Zoomed_all->SetBinError(11,0.1098025);
   AlphaT_Zoomed_all->SetBinError(12,0.1097069);
   AlphaT_Zoomed_all->SetBinError(13,0.04222238);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(470.6163);
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
   gre->SetPointError(0,0.00625,0.00737699);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.006176747);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.005313184);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.00479466);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.02165656);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.1492421);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.07123668);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.03321389);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.2484136);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.04170473);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.03445313);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.03884945);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all143 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all143","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all143->SetMinimum(0.7019037);
   Graph_Graph_from_AlphaT_Zoomed_all143->SetMaximum(1.298096);
   Graph_Graph_from_AlphaT_Zoomed_all143->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all143->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all143->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all143);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis852[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis852);
   AlphaT_Zoomed_all->SetBinContent(0,0.008693187);
   AlphaT_Zoomed_all->SetBinContent(1,0.003302826);
   AlphaT_Zoomed_all->SetBinContent(2,0.002645494);
   AlphaT_Zoomed_all->SetBinContent(3,0.00239246);
   AlphaT_Zoomed_all->SetBinContent(4,0.002473858);
   AlphaT_Zoomed_all->SetBinContent(5,0.02684808);
   AlphaT_Zoomed_all->SetBinContent(6,0.698963);
   AlphaT_Zoomed_all->SetBinContent(7,1.250626);
   AlphaT_Zoomed_all->SetBinContent(8,1.062677);
   AlphaT_Zoomed_all->SetBinContent(9,0.7673095);
   AlphaT_Zoomed_all->SetBinContent(10,1.030475);
   AlphaT_Zoomed_all->SetBinContent(11,1.027754);
   AlphaT_Zoomed_all->SetBinContent(12,1.301433);
   AlphaT_Zoomed_all->SetBinContent(13,0.936515);
   AlphaT_Zoomed_all->SetBinError(0,7.871703e-05);
   AlphaT_Zoomed_all->SetBinError(1,0.01646954);
   AlphaT_Zoomed_all->SetBinError(2,0.01520779);
   AlphaT_Zoomed_all->SetBinError(3,0.01371689);
   AlphaT_Zoomed_all->SetBinError(4,0.01235476);
   AlphaT_Zoomed_all->SetBinError(5,0.02537987);
   AlphaT_Zoomed_all->SetBinError(6,0.1513229);
   AlphaT_Zoomed_all->SetBinError(7,0.08212255);
   AlphaT_Zoomed_all->SetBinError(8,0.06773096);
   AlphaT_Zoomed_all->SetBinError(9,0.259475);
   AlphaT_Zoomed_all->SetBinError(10,0.0959269);
   AlphaT_Zoomed_all->SetBinError(11,0.1098025);
   AlphaT_Zoomed_all->SetBinError(12,0.1097069);
   AlphaT_Zoomed_all->SetBinError(13,0.04222238);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(470.6163);
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
   canvas375_475/AlphaT_Zoomed_all->cd();
   canvas375_475/AlphaT_Zoomed_all->Modified();
   canvas375_475/AlphaT_Zoomed_all->cd();
   canvas375_475/AlphaT_Zoomed_all->SetSelected(canvas375_475/AlphaT_Zoomed_all);
}
