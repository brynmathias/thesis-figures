{
//=========Macro generated from canvas: canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:26:08 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all = new TCanvas("canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->SetFillColor(0);
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->SetTickx(1);
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->SetTicky(1);
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-0.9629828,0.61875,5.656545);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis6283[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6283);
   AlphaT_Zoomed_all->SetBinContent(0,560);
   AlphaT_Zoomed_all->SetBinContent(1,132);
   AlphaT_Zoomed_all->SetBinContent(2,229);
   AlphaT_Zoomed_all->SetBinContent(3,436);
   AlphaT_Zoomed_all->SetBinContent(4,982);
   AlphaT_Zoomed_all->SetBinContent(5,247);
   AlphaT_Zoomed_all->SetBinContent(6,14);
   AlphaT_Zoomed_all->SetBinContent(7,3);
   AlphaT_Zoomed_all->SetBinContent(8,1);
   AlphaT_Zoomed_all->SetBinContent(9,2);
   AlphaT_Zoomed_all->SetBinContent(11,1);
   AlphaT_Zoomed_all->SetBinContent(13,1);
   AlphaT_Zoomed_all->SetBinError(0,23.66432);
   AlphaT_Zoomed_all->SetBinError(1,11.48913);
   AlphaT_Zoomed_all->SetBinError(2,15.13275);
   AlphaT_Zoomed_all->SetBinError(3,20.88061);
   AlphaT_Zoomed_all->SetBinError(4,31.33688);
   AlphaT_Zoomed_all->SetBinError(5,15.71623);
   AlphaT_Zoomed_all->SetBinError(6,3.741657);
   AlphaT_Zoomed_all->SetBinError(7,2.14);
   AlphaT_Zoomed_all->SetBinError(8,1);
   AlphaT_Zoomed_all->SetBinError(9,2);
   AlphaT_Zoomed_all->SetBinError(11,1);
   AlphaT_Zoomed_all->SetBinError(13,1);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(98762.53);
   AlphaT_Zoomed_all->SetEntries(2608);
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
   
   TH1F *_stack_419 = new TH1F("_stack_419","",12,0.45,0.6);
   _stack_419->SetMinimum(3.950501);
   _stack_419->SetMaximum(15802);
   _stack_419->SetDirectory(0);
   _stack_419->SetStats(0);
   _stack_419->GetXaxis()->SetLabelFont(42);
   _stack_419->GetXaxis()->SetLabelOffset(0.007);
   _stack_419->GetXaxis()->SetLabelSize(0.05);
   _stack_419->GetXaxis()->SetTitleSize(0.05);
   _stack_419->GetYaxis()->SetLabelFont(42);
   _stack_419->GetYaxis()->SetLabelOffset(0.007);
   _stack_419->GetYaxis()->SetLabelSize(0.05);
   _stack_419->GetZaxis()->SetLabelFont(42);
   _stack_419->GetZaxis()->SetLabelOffset(0.007);
   _stack_419->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_419);
   
   Double_t xAxis6284[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6284);
   AlphaT_Zoomed_all->SetBinContent(0,0.3935102);
   AlphaT_Zoomed_all->SetBinContent(1,0.1993998);
   AlphaT_Zoomed_all->SetBinContent(2,0.5260761);
   AlphaT_Zoomed_all->SetBinContent(3,0.5976692);
   AlphaT_Zoomed_all->SetBinContent(4,1.019052);
   AlphaT_Zoomed_all->SetBinContent(5,0.08965599);
   AlphaT_Zoomed_all->SetBinContent(6,0.1354956);
   AlphaT_Zoomed_all->SetBinContent(13,0.004307484);
   AlphaT_Zoomed_all->SetBinError(0,0.100892);
   AlphaT_Zoomed_all->SetBinError(1,0.07355664);
   AlphaT_Zoomed_all->SetBinError(2,0.118559);
   AlphaT_Zoomed_all->SetBinError(3,0.1130204);
   AlphaT_Zoomed_all->SetBinError(4,0.161583);
   AlphaT_Zoomed_all->SetBinError(5,0.03692218);
   AlphaT_Zoomed_all->SetBinError(6,0.06507222);
   AlphaT_Zoomed_all->SetBinError(13,0.004307484);
   AlphaT_Zoomed_all->SetEntries(227);
   AlphaT_Zoomed_all->SetFillColor(44);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis6285[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6285);
   AlphaT_Zoomed_all->SetBinContent(0,0.3799041);
   AlphaT_Zoomed_all->SetBinContent(1,0.02819469);
   AlphaT_Zoomed_all->SetBinContent(3,0.4870903);
   AlphaT_Zoomed_all->SetBinContent(4,2.824488);
   AlphaT_Zoomed_all->SetBinContent(8,0.3799041);
   AlphaT_Zoomed_all->SetBinError(0,0.3799041);
   AlphaT_Zoomed_all->SetBinError(1,0.02819469);
   AlphaT_Zoomed_all->SetBinError(3,0.4870903);
   AlphaT_Zoomed_all->SetBinError(4,1.084194);
   AlphaT_Zoomed_all->SetBinError(8,0.3799041);
   AlphaT_Zoomed_all->SetEntries(12);
   AlphaT_Zoomed_all->SetFillColor(6);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis6286[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6286);
   AlphaT_Zoomed_all->SetBinContent(0,5.017505);
   AlphaT_Zoomed_all->SetBinContent(1,1.385774);
   AlphaT_Zoomed_all->SetBinContent(2,2.24165);
   AlphaT_Zoomed_all->SetBinContent(3,3.059628);
   AlphaT_Zoomed_all->SetBinContent(4,4.51676);
   AlphaT_Zoomed_all->SetBinContent(5,1.835601);
   AlphaT_Zoomed_all->SetBinContent(6,1.508543);
   AlphaT_Zoomed_all->SetBinContent(7,0.7508079);
   AlphaT_Zoomed_all->SetBinContent(8,0.4747248);
   AlphaT_Zoomed_all->SetBinContent(9,0.02124635);
   AlphaT_Zoomed_all->SetBinContent(10,0.1542623);
   AlphaT_Zoomed_all->SetBinContent(11,0.1310084);
   AlphaT_Zoomed_all->SetBinContent(13,0.6220511);
   AlphaT_Zoomed_all->SetBinError(0,0.5940184);
   AlphaT_Zoomed_all->SetBinError(1,0.3050336);
   AlphaT_Zoomed_all->SetBinError(2,0.389287);
   AlphaT_Zoomed_all->SetBinError(3,0.4747152);
   AlphaT_Zoomed_all->SetBinError(4,0.565847);
   AlphaT_Zoomed_all->SetBinError(5,0.3348303);
   AlphaT_Zoomed_all->SetBinError(6,0.3372325);
   AlphaT_Zoomed_all->SetBinError(7,0.2299664);
   AlphaT_Zoomed_all->SetBinError(8,0.173886);
   AlphaT_Zoomed_all->SetBinError(9,0.02124635);
   AlphaT_Zoomed_all->SetBinError(10,0.1079319);
   AlphaT_Zoomed_all->SetBinError(11,0.09276612);
   AlphaT_Zoomed_all->SetBinError(13,0.2236337);
   AlphaT_Zoomed_all->SetEntries(410);
   AlphaT_Zoomed_all->SetFillColor(5);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis6287[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6287);
   AlphaT_Zoomed_all->SetBinContent(0,2.914443);
   AlphaT_Zoomed_all->SetBinContent(1,2.637647);
   AlphaT_Zoomed_all->SetBinContent(2,5.811591);
   AlphaT_Zoomed_all->SetBinContent(3,10.31188);
   AlphaT_Zoomed_all->SetBinContent(4,14.85019);
   AlphaT_Zoomed_all->SetBinContent(5,3.131855);
   AlphaT_Zoomed_all->SetBinContent(6,0.6989789);
   AlphaT_Zoomed_all->SetBinContent(7,0.2914781);
   AlphaT_Zoomed_all->SetBinContent(8,0.09380094);
   AlphaT_Zoomed_all->SetBinContent(11,0.05283561);
   AlphaT_Zoomed_all->SetBinError(0,0.4211688);
   AlphaT_Zoomed_all->SetBinError(1,0.395991);
   AlphaT_Zoomed_all->SetBinError(2,0.6139026);
   AlphaT_Zoomed_all->SetBinError(3,0.9478015);
   AlphaT_Zoomed_all->SetBinError(4,0.8960299);
   AlphaT_Zoomed_all->SetBinError(5,0.4564563);
   AlphaT_Zoomed_all->SetBinError(6,0.1932953);
   AlphaT_Zoomed_all->SetBinError(7,0.1291296);
   AlphaT_Zoomed_all->SetBinError(8,0.06681389);
   AlphaT_Zoomed_all->SetBinError(11,0.05283561);
   AlphaT_Zoomed_all->SetEntries(914);
   AlphaT_Zoomed_all->SetFillColor(40);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis6288[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6288);
   AlphaT_Zoomed_all->SetBinContent(0,10.66182);
   AlphaT_Zoomed_all->SetBinContent(1,4.584673);
   AlphaT_Zoomed_all->SetBinContent(2,8.31789);
   AlphaT_Zoomed_all->SetBinContent(3,10.35464);
   AlphaT_Zoomed_all->SetBinContent(4,12.37674);
   AlphaT_Zoomed_all->SetBinContent(5,5.791032);
   AlphaT_Zoomed_all->SetBinContent(6,2.347214);
   AlphaT_Zoomed_all->SetBinContent(7,0.9621875);
   AlphaT_Zoomed_all->SetBinContent(8,0.4144886);
   AlphaT_Zoomed_all->SetBinContent(9,0.4314989);
   AlphaT_Zoomed_all->SetBinContent(10,0.2067293);
   AlphaT_Zoomed_all->SetBinContent(11,0.0715012);
   AlphaT_Zoomed_all->SetBinContent(12,0.08270055);
   AlphaT_Zoomed_all->SetBinContent(13,0.4822603);
   AlphaT_Zoomed_all->SetBinError(0,0.8229173);
   AlphaT_Zoomed_all->SetBinError(1,0.5166539);
   AlphaT_Zoomed_all->SetBinError(2,1.011021);
   AlphaT_Zoomed_all->SetBinError(3,0.8698048);
   AlphaT_Zoomed_all->SetBinError(4,0.8669811);
   AlphaT_Zoomed_all->SetBinError(5,0.6031209);
   AlphaT_Zoomed_all->SetBinError(6,0.3744126);
   AlphaT_Zoomed_all->SetBinError(7,0.2225662);
   AlphaT_Zoomed_all->SetBinError(8,0.1596977);
   AlphaT_Zoomed_all->SetBinError(9,0.159094);
   AlphaT_Zoomed_all->SetBinError(10,0.1040474);
   AlphaT_Zoomed_all->SetBinError(11,0.06818793);
   AlphaT_Zoomed_all->SetBinError(12,0.05684412);
   AlphaT_Zoomed_all->SetBinError(13,0.1873555);
   AlphaT_Zoomed_all->SetEntries(1168);
   AlphaT_Zoomed_all->SetFillColor(4);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis6289[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6289);
   AlphaT_Zoomed_all->SetBinContent(0,18.02307);
   AlphaT_Zoomed_all->SetBinContent(1,16.33554);
   AlphaT_Zoomed_all->SetBinContent(2,40.84948);
   AlphaT_Zoomed_all->SetBinContent(3,68.24965);
   AlphaT_Zoomed_all->SetBinContent(4,169.1407);
   AlphaT_Zoomed_all->SetBinContent(5,57.32367);
   AlphaT_Zoomed_all->SetBinContent(6,10.40546);
   AlphaT_Zoomed_all->SetBinContent(7,4.434295);
   AlphaT_Zoomed_all->SetBinContent(8,0.4735123);
   AlphaT_Zoomed_all->SetBinContent(9,0.8830769);
   AlphaT_Zoomed_all->SetBinContent(10,0.01412773);
   AlphaT_Zoomed_all->SetBinContent(11,0.1393525);
   AlphaT_Zoomed_all->SetBinContent(13,0.2831508);
   AlphaT_Zoomed_all->SetBinError(0,2.095131);
   AlphaT_Zoomed_all->SetBinError(1,1.997995);
   AlphaT_Zoomed_all->SetBinError(2,3.290312);
   AlphaT_Zoomed_all->SetBinError(3,4.268644);
   AlphaT_Zoomed_all->SetBinError(4,7.483167);
   AlphaT_Zoomed_all->SetBinError(5,4.809226);
   AlphaT_Zoomed_all->SetBinError(6,1.781326);
   AlphaT_Zoomed_all->SetBinError(7,1.042611);
   AlphaT_Zoomed_all->SetBinError(8,0.3411919);
   AlphaT_Zoomed_all->SetBinError(9,0.4382162);
   AlphaT_Zoomed_all->SetBinError(10,0.01412773);
   AlphaT_Zoomed_all->SetBinError(11,0.1393525);
   AlphaT_Zoomed_all->SetBinError(13,0.2831508);
   AlphaT_Zoomed_all->SetEntries(1885);
   AlphaT_Zoomed_all->SetFillColor(2);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis6290[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6290);
   AlphaT_Zoomed_all->SetBinContent(0,2454.343);
   AlphaT_Zoomed_all->SetBinContent(1,2049.001);
   AlphaT_Zoomed_all->SetBinContent(2,4237.327);
   AlphaT_Zoomed_all->SetBinContent(3,6525.179);
   AlphaT_Zoomed_all->SetBinContent(4,9671.525);
   AlphaT_Zoomed_all->SetBinContent(5,616.7854);
   AlphaT_Zoomed_all->SetBinContent(6,1.939176);
   AlphaT_Zoomed_all->SetBinContent(7,0.08714326);
   AlphaT_Zoomed_all->SetBinError(0,80.99464);
   AlphaT_Zoomed_all->SetBinError(1,75.18991);
   AlphaT_Zoomed_all->SetBinError(2,105.9383);
   AlphaT_Zoomed_all->SetBinError(3,145.7921);
   AlphaT_Zoomed_all->SetBinError(4,170.4429);
   AlphaT_Zoomed_all->SetBinError(5,42.95554);
   AlphaT_Zoomed_all->SetBinError(6,0.7984172);
   AlphaT_Zoomed_all->SetBinError(7,0.08714326);
   AlphaT_Zoomed_all->SetEntries(14335);
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
   Double_t xAxis6291[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6291);
   AlphaT_Zoomed_all->SetBinContent(0,560);
   AlphaT_Zoomed_all->SetBinContent(1,132);
   AlphaT_Zoomed_all->SetBinContent(2,229);
   AlphaT_Zoomed_all->SetBinContent(3,436);
   AlphaT_Zoomed_all->SetBinContent(4,982);
   AlphaT_Zoomed_all->SetBinContent(5,247);
   AlphaT_Zoomed_all->SetBinContent(6,14);
   AlphaT_Zoomed_all->SetBinContent(7,3);
   AlphaT_Zoomed_all->SetBinContent(8,1);
   AlphaT_Zoomed_all->SetBinContent(9,2);
   AlphaT_Zoomed_all->SetBinContent(11,1);
   AlphaT_Zoomed_all->SetBinContent(13,1);
   AlphaT_Zoomed_all->SetBinError(0,23.66432);
   AlphaT_Zoomed_all->SetBinError(1,11.48913);
   AlphaT_Zoomed_all->SetBinError(2,15.13275);
   AlphaT_Zoomed_all->SetBinError(3,20.88061);
   AlphaT_Zoomed_all->SetBinError(4,31.33688);
   AlphaT_Zoomed_all->SetBinError(5,15.71623);
   AlphaT_Zoomed_all->SetBinError(6,3.741657);
   AlphaT_Zoomed_all->SetBinError(7,2.14);
   AlphaT_Zoomed_all->SetBinError(8,1);
   AlphaT_Zoomed_all->SetBinError(9,2);
   AlphaT_Zoomed_all->SetBinError(11,1);
   AlphaT_Zoomed_all->SetBinError(13,1);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(98762.53);
   AlphaT_Zoomed_all->SetEntries(2608);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_775_875    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis6292[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6292);
   AlphaT_Zoomed_all->SetBinContent(0,0.2247432);
   AlphaT_Zoomed_all->SetBinContent(1,0.06363984);
   AlphaT_Zoomed_all->SetBinContent(2,0.0533169);
   AlphaT_Zoomed_all->SetBinContent(3,0.06587855);
   AlphaT_Zoomed_all->SetBinContent(4,0.09943042);
   AlphaT_Zoomed_all->SetBinContent(5,0.3606065);
   AlphaT_Zoomed_all->SetBinContent(6,0.821844);
   AlphaT_Zoomed_all->SetBinContent(7,0.4597059);
   AlphaT_Zoomed_all->SetBinContent(8,0.5445346);
   AlphaT_Zoomed_all->SetBinContent(9,1.497205);
   AlphaT_Zoomed_all->SetBinContent(11,2.533584);
   AlphaT_Zoomed_all->SetBinContent(13,0.7185097);
   AlphaT_Zoomed_all->SetBinError(0,0.01198376);
   AlphaT_Zoomed_all->SetBinError(1,0.09429162);
   AlphaT_Zoomed_all->SetBinError(2,0.0705397);
   AlphaT_Zoomed_all->SetBinError(3,0.05271918);
   AlphaT_Zoomed_all->SetBinError(4,0.03628731);
   AlphaT_Zoomed_all->SetBinError(5,0.08962271);
   AlphaT_Zoomed_all->SetBinError(6,0.2925379);
   AlphaT_Zoomed_all->SetBinError(7,0.7330375);
   AlphaT_Zoomed_all->SetBinError(8,1.046501);
   AlphaT_Zoomed_all->SetBinError(9,1.059271);
   AlphaT_Zoomed_all->SetBinError(11,1.107997);
   AlphaT_Zoomed_all->SetBinError(13,0.7485412);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(3.878396);
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
   gre->SetPointError(0,0.00625,0.03626503);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.02467869);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.02203938);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.01727538);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.06311614);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.1189532);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.1688182);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.3084887);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.3493623);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.4014226);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.4771343);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.6873488);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all1049 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all1049","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all1049->SetMinimum(0.1751815);
   Graph_Graph_from_AlphaT_Zoomed_all1049->SetMaximum(1.824819);
   Graph_Graph_from_AlphaT_Zoomed_all1049->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all1049->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all1049->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all1049);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis6293[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis6293);
   AlphaT_Zoomed_all->SetBinContent(0,0.2247432);
   AlphaT_Zoomed_all->SetBinContent(1,0.06363984);
   AlphaT_Zoomed_all->SetBinContent(2,0.0533169);
   AlphaT_Zoomed_all->SetBinContent(3,0.06587855);
   AlphaT_Zoomed_all->SetBinContent(4,0.09943042);
   AlphaT_Zoomed_all->SetBinContent(5,0.3606065);
   AlphaT_Zoomed_all->SetBinContent(6,0.821844);
   AlphaT_Zoomed_all->SetBinContent(7,0.4597059);
   AlphaT_Zoomed_all->SetBinContent(8,0.5445346);
   AlphaT_Zoomed_all->SetBinContent(9,1.497205);
   AlphaT_Zoomed_all->SetBinContent(11,2.533584);
   AlphaT_Zoomed_all->SetBinContent(13,0.7185097);
   AlphaT_Zoomed_all->SetBinError(0,0.01198376);
   AlphaT_Zoomed_all->SetBinError(1,0.09429162);
   AlphaT_Zoomed_all->SetBinError(2,0.0705397);
   AlphaT_Zoomed_all->SetBinError(3,0.05271918);
   AlphaT_Zoomed_all->SetBinError(4,0.03628731);
   AlphaT_Zoomed_all->SetBinError(5,0.08962271);
   AlphaT_Zoomed_all->SetBinError(6,0.2925379);
   AlphaT_Zoomed_all->SetBinError(7,0.7330375);
   AlphaT_Zoomed_all->SetBinError(8,1.046501);
   AlphaT_Zoomed_all->SetBinError(9,1.059271);
   AlphaT_Zoomed_all->SetBinError(11,1.107997);
   AlphaT_Zoomed_all->SetBinError(13,0.7485412);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(3.878396);
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
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->Modified();
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all->SetSelected(canvasbtag_morethanzero_775_875/AlphaT_Zoomed_all);
}
