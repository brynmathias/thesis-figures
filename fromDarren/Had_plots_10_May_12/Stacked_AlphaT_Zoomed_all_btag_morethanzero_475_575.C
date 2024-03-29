{
//=========Macro generated from canvas: canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:25:28 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all = new TCanvas("canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->SetFillColor(0);
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->SetTickx(1);
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->SetTicky(1);
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-1.096698,0.61875,6.859981);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5113[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5113);
   AlphaT_Zoomed_all->SetBinContent(0,3907);
   AlphaT_Zoomed_all->SetBinContent(1,1815);
   AlphaT_Zoomed_all->SetBinContent(2,2606);
   AlphaT_Zoomed_all->SetBinContent(3,3918);
   AlphaT_Zoomed_all->SetBinContent(4,6515);
   AlphaT_Zoomed_all->SetBinContent(5,2977);
   AlphaT_Zoomed_all->SetBinContent(6,301);
   AlphaT_Zoomed_all->SetBinContent(7,86);
   AlphaT_Zoomed_all->SetBinContent(8,34);
   AlphaT_Zoomed_all->SetBinContent(9,19);
   AlphaT_Zoomed_all->SetBinContent(10,17);
   AlphaT_Zoomed_all->SetBinContent(11,6);
   AlphaT_Zoomed_all->SetBinContent(12,3);
   AlphaT_Zoomed_all->SetBinContent(13,46);
   AlphaT_Zoomed_all->SetBinError(0,62.506);
   AlphaT_Zoomed_all->SetBinError(1,42.60282);
   AlphaT_Zoomed_all->SetBinError(2,51.049);
   AlphaT_Zoomed_all->SetBinError(3,62.59393);
   AlphaT_Zoomed_all->SetBinError(4,80.71555);
   AlphaT_Zoomed_all->SetBinError(5,54.56189);
   AlphaT_Zoomed_all->SetBinError(6,17.34935);
   AlphaT_Zoomed_all->SetBinError(7,9.273618);
   AlphaT_Zoomed_all->SetBinError(8,5.830952);
   AlphaT_Zoomed_all->SetBinError(9,4.358899);
   AlphaT_Zoomed_all->SetBinError(10,4.123106);
   AlphaT_Zoomed_all->SetBinError(11,2.68);
   AlphaT_Zoomed_all->SetBinError(12,1.732051);
   AlphaT_Zoomed_all->SetBinError(13,6.78233);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(1159614);
   AlphaT_Zoomed_all->SetEntries(22250);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_341 = new TH1F("_stack_341","",12,0.45,0.6);
   _stack_341->SetMinimum(46.85453);
   _stack_341->SetMaximum(187418.1);
   _stack_341->SetDirectory(0);
   _stack_341->SetStats(0);
   _stack_341->GetXaxis()->SetLabelFont(42);
   _stack_341->GetXaxis()->SetLabelOffset(0.007);
   _stack_341->GetXaxis()->SetLabelSize(0.05);
   _stack_341->GetXaxis()->SetTitleSize(0.05);
   _stack_341->GetYaxis()->SetLabelFont(42);
   _stack_341->GetYaxis()->SetLabelOffset(0.007);
   _stack_341->GetYaxis()->SetLabelSize(0.05);
   _stack_341->GetZaxis()->SetLabelFont(42);
   _stack_341->GetZaxis()->SetLabelOffset(0.007);
   _stack_341->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_341);
   
   Double_t xAxis5114[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5114);
   AlphaT_Zoomed_all->SetBinContent(0,3.370322);
   AlphaT_Zoomed_all->SetBinContent(1,2.800508);
   AlphaT_Zoomed_all->SetBinContent(2,4.019315);
   AlphaT_Zoomed_all->SetBinContent(3,6.454433);
   AlphaT_Zoomed_all->SetBinContent(4,7.353269);
   AlphaT_Zoomed_all->SetBinContent(5,1.785683);
   AlphaT_Zoomed_all->SetBinContent(6,0.3494116);
   AlphaT_Zoomed_all->SetBinContent(7,0.338485);
   AlphaT_Zoomed_all->SetBinContent(8,0.08712544);
   AlphaT_Zoomed_all->SetBinContent(9,0.1497824);
   AlphaT_Zoomed_all->SetBinContent(10,0.01766141);
   AlphaT_Zoomed_all->SetBinContent(11,0.1059817);
   AlphaT_Zoomed_all->SetBinContent(13,0.3794923);
   AlphaT_Zoomed_all->SetBinError(0,0.2837773);
   AlphaT_Zoomed_all->SetBinError(1,0.2567414);
   AlphaT_Zoomed_all->SetBinError(2,0.3058128);
   AlphaT_Zoomed_all->SetBinError(3,0.4002243);
   AlphaT_Zoomed_all->SetBinError(4,0.40943);
   AlphaT_Zoomed_all->SetBinError(5,0.2100038);
   AlphaT_Zoomed_all->SetBinError(6,0.08332572);
   AlphaT_Zoomed_all->SetBinError(7,0.1015796);
   AlphaT_Zoomed_all->SetBinError(8,0.02804567);
   AlphaT_Zoomed_all->SetBinError(9,0.05757982);
   AlphaT_Zoomed_all->SetBinError(10,0.009347479);
   AlphaT_Zoomed_all->SetBinError(11,0.06480872);
   AlphaT_Zoomed_all->SetBinError(13,0.09590939);
   AlphaT_Zoomed_all->SetEntries(2263);
   AlphaT_Zoomed_all->SetFillColor(44);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5115[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5115);
   AlphaT_Zoomed_all->SetBinContent(0,11.47404);
   AlphaT_Zoomed_all->SetBinContent(1,3.35233);
   AlphaT_Zoomed_all->SetBinContent(2,4.405094);
   AlphaT_Zoomed_all->SetBinContent(3,11.10549);
   AlphaT_Zoomed_all->SetBinContent(4,7.090492);
   AlphaT_Zoomed_all->SetBinContent(5,2.200012);
   AlphaT_Zoomed_all->SetBinContent(6,1.020909);
   AlphaT_Zoomed_all->SetBinContent(7,0.4684294);
   AlphaT_Zoomed_all->SetBinContent(11,0.4382102);
   AlphaT_Zoomed_all->SetBinError(0,2.4819);
   AlphaT_Zoomed_all->SetBinError(1,1.289041);
   AlphaT_Zoomed_all->SetBinError(2,1.396425);
   AlphaT_Zoomed_all->SetBinError(3,2.412889);
   AlphaT_Zoomed_all->SetBinError(4,1.906081);
   AlphaT_Zoomed_all->SetBinError(5,0.9357731);
   AlphaT_Zoomed_all->SetBinError(6,0.9931143);
   AlphaT_Zoomed_all->SetBinError(7,0.4684294);
   AlphaT_Zoomed_all->SetBinError(11,0.4382102);
   AlphaT_Zoomed_all->SetEntries(107);
   AlphaT_Zoomed_all->SetFillColor(6);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5116[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5116);
   AlphaT_Zoomed_all->SetBinContent(0,56.90491);
   AlphaT_Zoomed_all->SetBinContent(1,16.83206);
   AlphaT_Zoomed_all->SetBinContent(2,19.28079);
   AlphaT_Zoomed_all->SetBinContent(3,21.9068);
   AlphaT_Zoomed_all->SetBinContent(4,26.71323);
   AlphaT_Zoomed_all->SetBinContent(5,17.62989);
   AlphaT_Zoomed_all->SetBinContent(6,9.340576);
   AlphaT_Zoomed_all->SetBinContent(7,7.018189);
   AlphaT_Zoomed_all->SetBinContent(8,4.582354);
   AlphaT_Zoomed_all->SetBinContent(9,3.518831);
   AlphaT_Zoomed_all->SetBinContent(10,1.869358);
   AlphaT_Zoomed_all->SetBinContent(11,2.412359);
   AlphaT_Zoomed_all->SetBinContent(12,1.549375);
   AlphaT_Zoomed_all->SetBinContent(13,11.66793);
   AlphaT_Zoomed_all->SetBinError(0,2.411664);
   AlphaT_Zoomed_all->SetBinError(1,1.137725);
   AlphaT_Zoomed_all->SetBinError(2,1.183419);
   AlphaT_Zoomed_all->SetBinError(3,1.345487);
   AlphaT_Zoomed_all->SetBinError(4,1.459698);
   AlphaT_Zoomed_all->SetBinError(5,1.141271);
   AlphaT_Zoomed_all->SetBinError(6,0.8961478);
   AlphaT_Zoomed_all->SetBinError(7,0.7085619);
   AlphaT_Zoomed_all->SetBinError(8,0.5656712);
   AlphaT_Zoomed_all->SetBinError(9,0.4858528);
   AlphaT_Zoomed_all->SetBinError(10,0.368782);
   AlphaT_Zoomed_all->SetBinError(11,0.4479057);
   AlphaT_Zoomed_all->SetBinError(12,0.3487971);
   AlphaT_Zoomed_all->SetBinError(13,1.387481);
   AlphaT_Zoomed_all->SetEntries(3609);
   AlphaT_Zoomed_all->SetFillColor(5);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5117[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5117);
   AlphaT_Zoomed_all->SetBinContent(0,59.35211);
   AlphaT_Zoomed_all->SetBinContent(1,42.30472);
   AlphaT_Zoomed_all->SetBinContent(2,55.01479);
   AlphaT_Zoomed_all->SetBinContent(3,71.25295);
   AlphaT_Zoomed_all->SetBinContent(4,94.67811);
   AlphaT_Zoomed_all->SetBinContent(5,29.38725);
   AlphaT_Zoomed_all->SetBinContent(6,5.247259);
   AlphaT_Zoomed_all->SetBinContent(7,2.60159);
   AlphaT_Zoomed_all->SetBinContent(8,1.513014);
   AlphaT_Zoomed_all->SetBinContent(9,0.9495245);
   AlphaT_Zoomed_all->SetBinContent(10,0.3640655);
   AlphaT_Zoomed_all->SetBinContent(11,0.4649979);
   AlphaT_Zoomed_all->SetBinContent(12,0.2591389);
   AlphaT_Zoomed_all->SetBinContent(13,1.237528);
   AlphaT_Zoomed_all->SetBinError(0,1.922008);
   AlphaT_Zoomed_all->SetBinError(1,1.701566);
   AlphaT_Zoomed_all->SetBinError(2,2.281302);
   AlphaT_Zoomed_all->SetBinError(3,2.227279);
   AlphaT_Zoomed_all->SetBinError(4,2.733078);
   AlphaT_Zoomed_all->SetBinError(5,1.71181);
   AlphaT_Zoomed_all->SetBinError(6,0.5359935);
   AlphaT_Zoomed_all->SetBinError(7,0.3708868);
   AlphaT_Zoomed_all->SetBinError(8,0.2810757);
   AlphaT_Zoomed_all->SetBinError(9,0.2335149);
   AlphaT_Zoomed_all->SetBinError(10,0.1482496);
   AlphaT_Zoomed_all->SetBinError(11,0.1685189);
   AlphaT_Zoomed_all->SetBinError(12,0.1146527);
   AlphaT_Zoomed_all->SetBinError(13,0.2609655);
   AlphaT_Zoomed_all->SetEntries(7819);
   AlphaT_Zoomed_all->SetFillColor(40);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5118[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5118);
   AlphaT_Zoomed_all->SetBinContent(0,125.4646);
   AlphaT_Zoomed_all->SetBinContent(1,47.01474);
   AlphaT_Zoomed_all->SetBinContent(2,57.72866);
   AlphaT_Zoomed_all->SetBinContent(3,72.72254);
   AlphaT_Zoomed_all->SetBinContent(4,79.50432);
   AlphaT_Zoomed_all->SetBinContent(5,42.9637);
   AlphaT_Zoomed_all->SetBinContent(6,16.05942);
   AlphaT_Zoomed_all->SetBinContent(7,8.674511);
   AlphaT_Zoomed_all->SetBinContent(8,5.297787);
   AlphaT_Zoomed_all->SetBinContent(9,3.05159);
   AlphaT_Zoomed_all->SetBinContent(10,2.55378);
   AlphaT_Zoomed_all->SetBinContent(11,1.282562);
   AlphaT_Zoomed_all->SetBinContent(12,2.034785);
   AlphaT_Zoomed_all->SetBinContent(13,7.611091);
   AlphaT_Zoomed_all->SetBinError(0,2.836376);
   AlphaT_Zoomed_all->SetBinError(1,1.784741);
   AlphaT_Zoomed_all->SetBinError(2,1.917834);
   AlphaT_Zoomed_all->SetBinError(3,2.38863);
   AlphaT_Zoomed_all->SetBinError(4,2.336687);
   AlphaT_Zoomed_all->SetBinError(5,1.781325);
   AlphaT_Zoomed_all->SetBinError(6,0.9937177);
   AlphaT_Zoomed_all->SetBinError(7,0.7212071);
   AlphaT_Zoomed_all->SetBinError(8,0.6003647);
   AlphaT_Zoomed_all->SetBinError(9,0.4410133);
   AlphaT_Zoomed_all->SetBinError(10,0.3811429);
   AlphaT_Zoomed_all->SetBinError(11,0.2724456);
   AlphaT_Zoomed_all->SetBinError(12,0.4768536);
   AlphaT_Zoomed_all->SetBinError(13,0.8540222);
   AlphaT_Zoomed_all->SetEntries(10073);
   AlphaT_Zoomed_all->SetFillColor(4);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5119[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5119);
   AlphaT_Zoomed_all->SetBinContent(0,269.1656);
   AlphaT_Zoomed_all->SetBinContent(1,232.485);
   AlphaT_Zoomed_all->SetBinContent(2,343.0444);
   AlphaT_Zoomed_all->SetBinContent(3,536.4702);
   AlphaT_Zoomed_all->SetBinContent(4,912.3941);
   AlphaT_Zoomed_all->SetBinContent(5,390.0959);
   AlphaT_Zoomed_all->SetBinContent(6,103.596);
   AlphaT_Zoomed_all->SetBinContent(7,55.53086);
   AlphaT_Zoomed_all->SetBinContent(8,25.29043);
   AlphaT_Zoomed_all->SetBinContent(9,16.51697);
   AlphaT_Zoomed_all->SetBinContent(10,9.865309);
   AlphaT_Zoomed_all->SetBinContent(11,8.1879);
   AlphaT_Zoomed_all->SetBinContent(12,4.404211);
   AlphaT_Zoomed_all->SetBinContent(13,18.59754);
   AlphaT_Zoomed_all->SetBinError(0,9.514913);
   AlphaT_Zoomed_all->SetBinError(1,9.259772);
   AlphaT_Zoomed_all->SetBinError(2,9.525255);
   AlphaT_Zoomed_all->SetBinError(3,13.05262);
   AlphaT_Zoomed_all->SetBinError(4,16.84827);
   AlphaT_Zoomed_all->SetBinError(5,11.17846);
   AlphaT_Zoomed_all->SetBinError(6,5.406233);
   AlphaT_Zoomed_all->SetBinError(7,4.930046);
   AlphaT_Zoomed_all->SetBinError(8,2.82594);
   AlphaT_Zoomed_all->SetBinError(9,2.070697);
   AlphaT_Zoomed_all->SetBinError(10,1.672953);
   AlphaT_Zoomed_all->SetBinError(11,1.859674);
   AlphaT_Zoomed_all->SetBinError(12,1.069191);
   AlphaT_Zoomed_all->SetBinError(13,3.111835);
   AlphaT_Zoomed_all->SetEntries(13934);
   AlphaT_Zoomed_all->SetFillColor(2);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5120[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5120);
   AlphaT_Zoomed_all->SetBinContent(0,68800.66);
   AlphaT_Zoomed_all->SetBinContent(1,47278.78);
   AlphaT_Zoomed_all->SetBinContent(2,66273.44);
   AlphaT_Zoomed_all->SetBinContent(3,87544.19);
   AlphaT_Zoomed_all->SetBinContent(4,114833.7);
   AlphaT_Zoomed_all->SetBinContent(5,9213.567);
   AlphaT_Zoomed_all->SetBinContent(6,97.177);
   AlphaT_Zoomed_all->SetBinContent(7,10.92125);
   AlphaT_Zoomed_all->SetBinContent(8,5.675376);
   AlphaT_Zoomed_all->SetBinError(0,1584.974);
   AlphaT_Zoomed_all->SetBinError(1,1334.939);
   AlphaT_Zoomed_all->SetBinError(2,1921.203);
   AlphaT_Zoomed_all->SetBinError(3,1891.249);
   AlphaT_Zoomed_all->SetBinError(4,2302.665);
   AlphaT_Zoomed_all->SetBinError(5,720.0736);
   AlphaT_Zoomed_all->SetBinError(6,15.78947);
   AlphaT_Zoomed_all->SetBinError(7,4.966062);
   AlphaT_Zoomed_all->SetBinError(8,3.349145);
   AlphaT_Zoomed_all->SetEntries(109595);
   AlphaT_Zoomed_all->SetFillColor(7);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   ->Draw("histsame");
   
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
   leg->Draw();
   Double_t xAxis5121[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5121);
   AlphaT_Zoomed_all->SetBinContent(0,3907);
   AlphaT_Zoomed_all->SetBinContent(1,1815);
   AlphaT_Zoomed_all->SetBinContent(2,2606);
   AlphaT_Zoomed_all->SetBinContent(3,3918);
   AlphaT_Zoomed_all->SetBinContent(4,6515);
   AlphaT_Zoomed_all->SetBinContent(5,2977);
   AlphaT_Zoomed_all->SetBinContent(6,301);
   AlphaT_Zoomed_all->SetBinContent(7,86);
   AlphaT_Zoomed_all->SetBinContent(8,34);
   AlphaT_Zoomed_all->SetBinContent(9,19);
   AlphaT_Zoomed_all->SetBinContent(10,17);
   AlphaT_Zoomed_all->SetBinContent(11,6);
   AlphaT_Zoomed_all->SetBinContent(12,3);
   AlphaT_Zoomed_all->SetBinContent(13,46);
   AlphaT_Zoomed_all->SetBinError(0,62.506);
   AlphaT_Zoomed_all->SetBinError(1,42.60282);
   AlphaT_Zoomed_all->SetBinError(2,51.049);
   AlphaT_Zoomed_all->SetBinError(3,62.59393);
   AlphaT_Zoomed_all->SetBinError(4,80.71555);
   AlphaT_Zoomed_all->SetBinError(5,54.56189);
   AlphaT_Zoomed_all->SetBinError(6,17.34935);
   AlphaT_Zoomed_all->SetBinError(7,9.273618);
   AlphaT_Zoomed_all->SetBinError(8,5.830952);
   AlphaT_Zoomed_all->SetBinError(9,4.358899);
   AlphaT_Zoomed_all->SetBinError(10,4.123106);
   AlphaT_Zoomed_all->SetBinError(11,2.68);
   AlphaT_Zoomed_all->SetBinError(12,1.732051);
   AlphaT_Zoomed_all->SetBinError(13,6.78233);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(1159614);
   AlphaT_Zoomed_all->SetEntries(22250);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_475_575    Jet Multiplicity=all");
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
   u->Modified();
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis5122[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5122);
   AlphaT_Zoomed_all->SetBinContent(0,0.05635661);
   AlphaT_Zoomed_all->SetBinContent(1,0.03811138);
   AlphaT_Zoomed_all->SetBinContent(2,0.03903715);
   AlphaT_Zoomed_all->SetBinContent(3,0.04438951);
   AlphaT_Zoomed_all->SetBinContent(4,0.0561825);
   AlphaT_Zoomed_all->SetBinContent(5,0.3069823);
   AlphaT_Zoomed_all->SetBinContent(6,1.293008);
   AlphaT_Zoomed_all->SetBinContent(7,1.005221);
   AlphaT_Zoomed_all->SetBinContent(8,0.8010161);
   AlphaT_Zoomed_all->SetBinContent(9,0.7855556);
   AlphaT_Zoomed_all->SetBinContent(10,1.158814);
   AlphaT_Zoomed_all->SetBinContent(11,0.4654045);
   AlphaT_Zoomed_all->SetBinContent(12,0.3637461);
   AlphaT_Zoomed_all->SetBinContent(13,1.164746);
   AlphaT_Zoomed_all->SetBinError(0,0.00157261);
   AlphaT_Zoomed_all->SetBinError(1,0.03656154);
   AlphaT_Zoomed_all->SetBinError(2,0.03481362);
   AlphaT_Zoomed_all->SetBinError(3,0.02672788);
   AlphaT_Zoomed_all->SetBinError(4,0.02340559);
   AlphaT_Zoomed_all->SetBinError(5,0.07649029);
   AlphaT_Zoomed_all->SetBinError(6,0.09229712);
   AlphaT_Zoomed_all->SetBinError(7,0.1360435);
   AlphaT_Zoomed_all->SetBinError(8,0.2012262);
   AlphaT_Zoomed_all->SetBinError(9,0.2465685);
   AlphaT_Zoomed_all->SetBinError(10,0.2706244);
   AlphaT_Zoomed_all->SetBinError(11,0.4725721);
   AlphaT_Zoomed_all->SetBinError(12,0.5962081);
   AlphaT_Zoomed_all->SetBinError(13,0.2007252);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(139.0102);
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
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.45625,1);
   gre->SetPointError(0,0.00625,0.0280318);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.02877947);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.02142772);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.01985773);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.07426208);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.07208675);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.08294524);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.1052627);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.09035735);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.1200585);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.1543155);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.148764);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all854 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all854","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all854->SetMinimum(0.8148214);
   Graph_Graph_from_AlphaT_Zoomed_all854->SetMaximum(1.185179);
   Graph_Graph_from_AlphaT_Zoomed_all854->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all854->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all854->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all854);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5123[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5123);
   AlphaT_Zoomed_all->SetBinContent(0,0.05635661);
   AlphaT_Zoomed_all->SetBinContent(1,0.03811138);
   AlphaT_Zoomed_all->SetBinContent(2,0.03903715);
   AlphaT_Zoomed_all->SetBinContent(3,0.04438951);
   AlphaT_Zoomed_all->SetBinContent(4,0.0561825);
   AlphaT_Zoomed_all->SetBinContent(5,0.3069823);
   AlphaT_Zoomed_all->SetBinContent(6,1.293008);
   AlphaT_Zoomed_all->SetBinContent(7,1.005221);
   AlphaT_Zoomed_all->SetBinContent(8,0.8010161);
   AlphaT_Zoomed_all->SetBinContent(9,0.7855556);
   AlphaT_Zoomed_all->SetBinContent(10,1.158814);
   AlphaT_Zoomed_all->SetBinContent(11,0.4654045);
   AlphaT_Zoomed_all->SetBinContent(12,0.3637461);
   AlphaT_Zoomed_all->SetBinContent(13,1.164746);
   AlphaT_Zoomed_all->SetBinError(0,0.00157261);
   AlphaT_Zoomed_all->SetBinError(1,0.03656154);
   AlphaT_Zoomed_all->SetBinError(2,0.03481362);
   AlphaT_Zoomed_all->SetBinError(3,0.02672788);
   AlphaT_Zoomed_all->SetBinError(4,0.02340559);
   AlphaT_Zoomed_all->SetBinError(5,0.07649029);
   AlphaT_Zoomed_all->SetBinError(6,0.09229712);
   AlphaT_Zoomed_all->SetBinError(7,0.1360435);
   AlphaT_Zoomed_all->SetBinError(8,0.2012262);
   AlphaT_Zoomed_all->SetBinError(9,0.2465685);
   AlphaT_Zoomed_all->SetBinError(10,0.2706244);
   AlphaT_Zoomed_all->SetBinError(11,0.4725721);
   AlphaT_Zoomed_all->SetBinError(12,0.5962081);
   AlphaT_Zoomed_all->SetBinError(13,0.2007252);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(139.0102);
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
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->Modified();
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all->SetSelected(canvasbtag_morethanzero_475_575/AlphaT_Zoomed_all);
}
