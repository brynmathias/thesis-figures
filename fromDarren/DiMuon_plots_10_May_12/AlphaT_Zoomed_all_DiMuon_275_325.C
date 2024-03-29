{
//=========Macro generated from canvas: canvasDiMuon_275_325/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:46:14 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_275_325/AlphaT_Zoomed_all = new TCanvas("canvasDiMuon_275_325/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasDiMuon_275_325/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasDiMuon_275_325/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasDiMuon_275_325/AlphaT_Zoomed_all->SetFillColor(0);
   canvasDiMuon_275_325/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasDiMuon_275_325/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasDiMuon_275_325/AlphaT_Zoomed_all->SetTickx(1);
   canvasDiMuon_275_325/AlphaT_Zoomed_all->SetTicky(1);
   canvasDiMuon_275_325/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-0.6839375,0.61875,3.145138);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2551[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2551);
   AlphaT_Zoomed_all->SetBinContent(0,15);
   AlphaT_Zoomed_all->SetBinContent(3,1);
   AlphaT_Zoomed_all->SetBinContent(4,2);
   AlphaT_Zoomed_all->SetBinContent(5,4);
   AlphaT_Zoomed_all->SetBinContent(6,3);
   AlphaT_Zoomed_all->SetBinContent(7,6);
   AlphaT_Zoomed_all->SetBinContent(8,6);
   AlphaT_Zoomed_all->SetBinContent(9,14);
   AlphaT_Zoomed_all->SetBinContent(10,11);
   AlphaT_Zoomed_all->SetBinContent(11,2);
   AlphaT_Zoomed_all->SetBinContent(12,9);
   AlphaT_Zoomed_all->SetBinContent(13,78);
   AlphaT_Zoomed_all->SetBinError(0,3.872983);
   AlphaT_Zoomed_all->SetBinError(3,1);
   AlphaT_Zoomed_all->SetBinError(4,2);
   AlphaT_Zoomed_all->SetBinError(5,2.3);
   AlphaT_Zoomed_all->SetBinError(6,2.14);
   AlphaT_Zoomed_all->SetBinError(7,2.68);
   AlphaT_Zoomed_all->SetBinError(8,2.68);
   AlphaT_Zoomed_all->SetBinError(9,3.741657);
   AlphaT_Zoomed_all->SetBinError(10,3.316625);
   AlphaT_Zoomed_all->SetBinError(11,2);
   AlphaT_Zoomed_all->SetBinError(12,3);
   AlphaT_Zoomed_all->SetBinError(13,8.831761);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(578.4025);
   AlphaT_Zoomed_all->SetEntries(151);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PE0");
   Double_t xAxis2552[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2552);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis2553[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2553);
   AlphaT_Zoomed_all->SetBinContent(0,10.81956);
   AlphaT_Zoomed_all->SetBinContent(1,3.626583);
   AlphaT_Zoomed_all->SetBinContent(2,1.657471);
   AlphaT_Zoomed_all->SetBinContent(3,2.437397);
   AlphaT_Zoomed_all->SetBinContent(4,4.166711);
   AlphaT_Zoomed_all->SetBinContent(5,2.22311);
   AlphaT_Zoomed_all->SetBinContent(6,1.994051);
   AlphaT_Zoomed_all->SetBinContent(7,2.226147);
   AlphaT_Zoomed_all->SetBinContent(8,1.582652);
   AlphaT_Zoomed_all->SetBinContent(9,1.500865);
   AlphaT_Zoomed_all->SetBinContent(10,0.5333084);
   AlphaT_Zoomed_all->SetBinContent(11,0.9503421);
   AlphaT_Zoomed_all->SetBinContent(12,0.5603163);
   AlphaT_Zoomed_all->SetBinContent(13,3.850628);
   AlphaT_Zoomed_all->SetBinError(0,1.696398);
   AlphaT_Zoomed_all->SetBinError(1,0.9462906);
   AlphaT_Zoomed_all->SetBinError(2,0.6012096);
   AlphaT_Zoomed_all->SetBinError(3,0.774734);
   AlphaT_Zoomed_all->SetBinError(4,1.151295);
   AlphaT_Zoomed_all->SetBinError(5,0.8283272);
   AlphaT_Zoomed_all->SetBinError(6,0.7756903);
   AlphaT_Zoomed_all->SetBinError(7,0.7233873);
   AlphaT_Zoomed_all->SetBinError(8,0.6494683);
   AlphaT_Zoomed_all->SetBinError(9,0.6151972);
   AlphaT_Zoomed_all->SetBinError(10,0.3771738);
   AlphaT_Zoomed_all->SetBinError(11,0.57744);
   AlphaT_Zoomed_all->SetBinError(12,0.3362286);
   AlphaT_Zoomed_all->SetBinError(13,1.063792);
   AlphaT_Zoomed_all->SetEntries(188);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis2554[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2554);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis2555[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2555);
   AlphaT_Zoomed_all->SetBinContent(0,206.1448);
   AlphaT_Zoomed_all->SetBinContent(1,41.42107);
   AlphaT_Zoomed_all->SetBinContent(2,37.57908);
   AlphaT_Zoomed_all->SetBinContent(3,48.23434);
   AlphaT_Zoomed_all->SetBinContent(4,53.21693);
   AlphaT_Zoomed_all->SetBinContent(5,47.0293);
   AlphaT_Zoomed_all->SetBinContent(6,32.42455);
   AlphaT_Zoomed_all->SetBinContent(7,23.04232);
   AlphaT_Zoomed_all->SetBinContent(8,14.52381);
   AlphaT_Zoomed_all->SetBinContent(9,12.40846);
   AlphaT_Zoomed_all->SetBinContent(10,11.47173);
   AlphaT_Zoomed_all->SetBinContent(11,5.503781);
   AlphaT_Zoomed_all->SetBinContent(12,8.546813);
   AlphaT_Zoomed_all->SetBinContent(13,95.24131);
   AlphaT_Zoomed_all->SetBinError(0,10.66517);
   AlphaT_Zoomed_all->SetBinError(1,5.054911);
   AlphaT_Zoomed_all->SetBinError(2,4.373232);
   AlphaT_Zoomed_all->SetBinError(3,5.128783);
   AlphaT_Zoomed_all->SetBinError(4,5.459768);
   AlphaT_Zoomed_all->SetBinError(5,5.238398);
   AlphaT_Zoomed_all->SetBinError(6,4.121828);
   AlphaT_Zoomed_all->SetBinError(7,4.372397);
   AlphaT_Zoomed_all->SetBinError(8,2.74312);
   AlphaT_Zoomed_all->SetBinError(9,2.566315);
   AlphaT_Zoomed_all->SetBinError(10,2.301805);
   AlphaT_Zoomed_all->SetBinError(11,1.662827);
   AlphaT_Zoomed_all->SetBinError(12,2.065168);
   AlphaT_Zoomed_all->SetBinError(13,7.012135);
   AlphaT_Zoomed_all->SetEntries(1567);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis2556[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2556);
   AlphaT_Zoomed_all->SetBinContent(0,0.4353762);
   AlphaT_Zoomed_all->SetBinContent(1,0.003262842);
   AlphaT_Zoomed_all->SetBinContent(2,0.1315741);
   AlphaT_Zoomed_all->SetBinContent(3,0.09663822);
   AlphaT_Zoomed_all->SetBinContent(4,0.03233293);
   AlphaT_Zoomed_all->SetBinContent(5,0.05990776);
   AlphaT_Zoomed_all->SetBinContent(6,0.0885526);
   AlphaT_Zoomed_all->SetBinContent(7,0.05881926);
   AlphaT_Zoomed_all->SetBinContent(12,0.03233293);
   AlphaT_Zoomed_all->SetBinContent(13,0.3128787);
   AlphaT_Zoomed_all->SetBinError(0,0.1646257);
   AlphaT_Zoomed_all->SetBinError(1,0.003262842);
   AlphaT_Zoomed_all->SetBinError(2,0.09517301);
   AlphaT_Zoomed_all->SetBinError(3,0.06359694);
   AlphaT_Zoomed_all->SetBinError(4,0.03233293);
   AlphaT_Zoomed_all->SetBinError(5,0.0567246);
   AlphaT_Zoomed_all->SetBinError(6,0.06490944);
   AlphaT_Zoomed_all->SetBinError(7,0.05881926);
   AlphaT_Zoomed_all->SetBinError(12,0.03233293);
   AlphaT_Zoomed_all->SetBinError(13,0.1506248);
   AlphaT_Zoomed_all->SetEntries(32);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis2557[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2557);
   AlphaT_Zoomed_all->SetBinContent(0,0.8723418);
   AlphaT_Zoomed_all->SetBinContent(1,0.1749176);
   AlphaT_Zoomed_all->SetBinContent(2,0.2989635);
   AlphaT_Zoomed_all->SetBinContent(3,0.3455503);
   AlphaT_Zoomed_all->SetBinContent(4,0.4242816);
   AlphaT_Zoomed_all->SetBinContent(5,0.2727505);
   AlphaT_Zoomed_all->SetBinContent(6,0.2018472);
   AlphaT_Zoomed_all->SetBinContent(7,0.1543547);
   AlphaT_Zoomed_all->SetBinContent(8,0.115702);
   AlphaT_Zoomed_all->SetBinContent(9,0.1080717);
   AlphaT_Zoomed_all->SetBinContent(10,0.1525265);
   AlphaT_Zoomed_all->SetBinContent(11,0.06904479);
   AlphaT_Zoomed_all->SetBinContent(12,0.0779894);
   AlphaT_Zoomed_all->SetBinContent(13,2.101148);
   AlphaT_Zoomed_all->SetBinError(0,0.1077292);
   AlphaT_Zoomed_all->SetBinError(1,0.04596769);
   AlphaT_Zoomed_all->SetBinError(2,0.05469052);
   AlphaT_Zoomed_all->SetBinError(3,0.06382877);
   AlphaT_Zoomed_all->SetBinError(4,0.06680434);
   AlphaT_Zoomed_all->SetBinError(5,0.05278304);
   AlphaT_Zoomed_all->SetBinError(6,0.04634512);
   AlphaT_Zoomed_all->SetBinError(7,0.03811458);
   AlphaT_Zoomed_all->SetBinError(8,0.03224309);
   AlphaT_Zoomed_all->SetBinError(9,0.03538478);
   AlphaT_Zoomed_all->SetBinError(10,0.04104407);
   AlphaT_Zoomed_all->SetBinError(11,0.02743986);
   AlphaT_Zoomed_all->SetBinError(12,0.0300771);
   AlphaT_Zoomed_all->SetBinError(13,0.1616573);
   AlphaT_Zoomed_all->SetEntries(641);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis2558[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2558);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis2559[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2559);
   AlphaT_Zoomed_all->SetBinContent(0,218.272);
   AlphaT_Zoomed_all->SetBinContent(1,45.22583);
   AlphaT_Zoomed_all->SetBinContent(2,39.66709);
   AlphaT_Zoomed_all->SetBinContent(3,51.11392);
   AlphaT_Zoomed_all->SetBinContent(4,57.84025);
   AlphaT_Zoomed_all->SetBinContent(5,49.58507);
   AlphaT_Zoomed_all->SetBinContent(6,34.70901);
   AlphaT_Zoomed_all->SetBinContent(7,25.48164);
   AlphaT_Zoomed_all->SetBinContent(8,16.22216);
   AlphaT_Zoomed_all->SetBinContent(9,14.0174);
   AlphaT_Zoomed_all->SetBinContent(10,12.15756);
   AlphaT_Zoomed_all->SetBinContent(11,6.523168);
   AlphaT_Zoomed_all->SetBinContent(12,9.217452);
   AlphaT_Zoomed_all->SetBinContent(13,101.506);
   AlphaT_Zoomed_all->SetBinError(0,10.80104);
   AlphaT_Zoomed_all->SetBinError(1,5.142928);
   AlphaT_Zoomed_all->SetBinError(2,4.415729);
   AlphaT_Zoomed_all->SetBinError(3,5.18775);
   AlphaT_Zoomed_all->SetBinError(4,5.580328);
   AlphaT_Zoomed_all->SetBinError(5,5.30405);
   AlphaT_Zoomed_all->SetBinError(6,4.19494);
   AlphaT_Zoomed_all->SetBinError(7,4.432388);
   AlphaT_Zoomed_all->SetBinError(8,2.819141);
   AlphaT_Zoomed_all->SetBinError(9,2.63926);
   AlphaT_Zoomed_all->SetBinError(10,2.332863);
   AlphaT_Zoomed_all->SetBinError(11,1.76045);
   AlphaT_Zoomed_all->SetBinError(12,2.092826);
   AlphaT_Zoomed_all->SetBinError(13,7.09581);
   AlphaT_Zoomed_all->SetEntries(2428);
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
   gre->SetPoint(0,0.45625,0);
   gre->SetPointError(0,0.00625,0);
   gre->SetPoint(1,0.46875,0);
   gre->SetPointError(1,0.00625,0);
   gre->SetPoint(2,0.48125,0);
   gre->SetPointError(2,0.00625,0);
   gre->SetPoint(3,0.49375,0);
   gre->SetPointError(3,0.00625,0);
   gre->SetPoint(4,0.50625,0);
   gre->SetPointError(4,0.00625,0);
   gre->SetPoint(5,0.51875,0);
   gre->SetPointError(5,0.00625,0);
   gre->SetPoint(6,0.53125,0);
   gre->SetPointError(6,0.00625,0);
   gre->SetPoint(7,0.54375,0);
   gre->SetPointError(7,0.00625,0);
   gre->SetPoint(8,0.55625,0);
   gre->SetPointError(8,0.00625,0);
   gre->SetPoint(9,0.56875,0);
   gre->SetPointError(9,0.00625,0);
   gre->SetPoint(10,0.58125,0);
   gre->SetPointError(10,0.00625,0);
   gre->SetPoint(11,0.59375,0);
   gre->SetPointError(11,0.00625,0);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all426 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all426","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all426->SetMinimum(0.0011);
   Graph_Graph_from_AlphaT_Zoomed_all426->SetMaximum(1.1);
   Graph_Graph_from_AlphaT_Zoomed_all426->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all426->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all426->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all426);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,45.22583);
   gre->SetPointError(0,0.00625,5.142928);
   gre->SetPoint(1,0.46875,39.66709);
   gre->SetPointError(1,0.00625,4.415729);
   gre->SetPoint(2,0.48125,51.11392);
   gre->SetPointError(2,0.00625,5.18775);
   gre->SetPoint(3,0.49375,57.84025);
   gre->SetPointError(3,0.00625,5.580328);
   gre->SetPoint(4,0.50625,49.58507);
   gre->SetPointError(4,0.00625,5.30405);
   gre->SetPoint(5,0.51875,34.70901);
   gre->SetPointError(5,0.00625,4.19494);
   gre->SetPoint(6,0.53125,25.48164);
   gre->SetPointError(6,0.00625,4.432388);
   gre->SetPoint(7,0.54375,16.22216);
   gre->SetPointError(7,0.00625,2.819141);
   gre->SetPoint(8,0.55625,14.0174);
   gre->SetPointError(8,0.00625,2.63926);
   gre->SetPoint(9,0.56875,12.15756);
   gre->SetPointError(9,0.00625,2.332863);
   gre->SetPoint(10,0.58125,6.523168);
   gre->SetPointError(10,0.00625,1.76045);
   gre->SetPoint(11,0.59375,9.217452);
   gre->SetPointError(11,0.00625,2.092826);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all427 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all427","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all427->SetMinimum(4.286446);
   Graph_Graph_from_AlphaT_Zoomed_all427->SetMaximum(69.28637);
   Graph_Graph_from_AlphaT_Zoomed_all427->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all427->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all427->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all427);
   
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
   entry=leg->AddEntry("AlphaT_Zoomed_all","Single Top","L");
   entry->SetLineColor(40);
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
   entry=leg->AddEntry("AlphaT_Zoomed_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_275_325    Jet Multiplicity=all");
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
   Double_t xAxis2560[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2560);
   AlphaT_Zoomed_all->SetBinContent(0,15);
   AlphaT_Zoomed_all->SetBinContent(3,1);
   AlphaT_Zoomed_all->SetBinContent(4,2);
   AlphaT_Zoomed_all->SetBinContent(5,4);
   AlphaT_Zoomed_all->SetBinContent(6,3);
   AlphaT_Zoomed_all->SetBinContent(7,6);
   AlphaT_Zoomed_all->SetBinContent(8,6);
   AlphaT_Zoomed_all->SetBinContent(9,14);
   AlphaT_Zoomed_all->SetBinContent(10,11);
   AlphaT_Zoomed_all->SetBinContent(11,2);
   AlphaT_Zoomed_all->SetBinContent(12,9);
   AlphaT_Zoomed_all->SetBinContent(13,78);
   AlphaT_Zoomed_all->SetBinError(0,3.872983);
   AlphaT_Zoomed_all->SetBinError(3,1);
   AlphaT_Zoomed_all->SetBinError(4,2);
   AlphaT_Zoomed_all->SetBinError(5,2.3);
   AlphaT_Zoomed_all->SetBinError(6,2.14);
   AlphaT_Zoomed_all->SetBinError(7,2.68);
   AlphaT_Zoomed_all->SetBinError(8,2.68);
   AlphaT_Zoomed_all->SetBinError(9,3.741657);
   AlphaT_Zoomed_all->SetBinError(10,3.316625);
   AlphaT_Zoomed_all->SetBinError(11,2);
   AlphaT_Zoomed_all->SetBinError(12,3);
   AlphaT_Zoomed_all->SetBinError(13,8.831761);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(578.4025);
   AlphaT_Zoomed_all->SetEntries(151);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_275_325/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis2561[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2561);
   AlphaT_Zoomed_all->SetBinContent(0,0.06872158);
   AlphaT_Zoomed_all->SetBinContent(3,0.01956414);
   AlphaT_Zoomed_all->SetBinContent(4,0.034578);
   AlphaT_Zoomed_all->SetBinContent(5,0.08066945);
   AlphaT_Zoomed_all->SetBinContent(6,0.0864329);
   AlphaT_Zoomed_all->SetBinContent(7,0.2354636);
   AlphaT_Zoomed_all->SetBinContent(8,0.3698643);
   AlphaT_Zoomed_all->SetBinContent(9,0.9987588);
   AlphaT_Zoomed_all->SetBinContent(10,0.9047867);
   AlphaT_Zoomed_all->SetBinContent(11,0.3065995);
   AlphaT_Zoomed_all->SetBinContent(12,0.9764087);
   AlphaT_Zoomed_all->SetBinContent(13,0.7684277);
   AlphaT_Zoomed_all->SetBinError(0,0.01806677);
   AlphaT_Zoomed_all->SetBinError(3,1.005137);
   AlphaT_Zoomed_all->SetBinError(4,1.004643);
   AlphaT_Zoomed_all->SetBinError(5,0.5848652);
   AlphaT_Zoomed_all->SetBinError(6,0.7234996);
   AlphaT_Zoomed_all->SetBinError(7,0.479341);
   AlphaT_Zoomed_all->SetBinError(8,0.4792825);
   AlphaT_Zoomed_all->SetBinError(9,0.3269245);
   AlphaT_Zoomed_all->SetBinError(10,0.3573923);
   AlphaT_Zoomed_all->SetBinError(11,1.035777);
   AlphaT_Zoomed_all->SetBinError(12,0.403315);
   AlphaT_Zoomed_all->SetBinError(13,0.1022537);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(31.03114);
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
   gre->SetPointError(0,0.00625,0.1137166);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.1113197);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.1014939);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.09647827);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.1069687);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.1208603);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.1739444);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.1737833);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.1882846);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.1918858);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.2698765);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.2270503);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all428 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all428","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all428->SetMinimum(0.6761482);
   Graph_Graph_from_AlphaT_Zoomed_all428->SetMaximum(1.323852);
   Graph_Graph_from_AlphaT_Zoomed_all428->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all428->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all428->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all428);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2562[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2562);
   AlphaT_Zoomed_all->SetBinContent(0,0.06872158);
   AlphaT_Zoomed_all->SetBinContent(3,0.01956414);
   AlphaT_Zoomed_all->SetBinContent(4,0.034578);
   AlphaT_Zoomed_all->SetBinContent(5,0.08066945);
   AlphaT_Zoomed_all->SetBinContent(6,0.0864329);
   AlphaT_Zoomed_all->SetBinContent(7,0.2354636);
   AlphaT_Zoomed_all->SetBinContent(8,0.3698643);
   AlphaT_Zoomed_all->SetBinContent(9,0.9987588);
   AlphaT_Zoomed_all->SetBinContent(10,0.9047867);
   AlphaT_Zoomed_all->SetBinContent(11,0.3065995);
   AlphaT_Zoomed_all->SetBinContent(12,0.9764087);
   AlphaT_Zoomed_all->SetBinContent(13,0.7684277);
   AlphaT_Zoomed_all->SetBinError(0,0.01806677);
   AlphaT_Zoomed_all->SetBinError(3,1.005137);
   AlphaT_Zoomed_all->SetBinError(4,1.004643);
   AlphaT_Zoomed_all->SetBinError(5,0.5848652);
   AlphaT_Zoomed_all->SetBinError(6,0.7234996);
   AlphaT_Zoomed_all->SetBinError(7,0.479341);
   AlphaT_Zoomed_all->SetBinError(8,0.4792825);
   AlphaT_Zoomed_all->SetBinError(9,0.3269245);
   AlphaT_Zoomed_all->SetBinError(10,0.3573923);
   AlphaT_Zoomed_all->SetBinError(11,1.035777);
   AlphaT_Zoomed_all->SetBinError(12,0.403315);
   AlphaT_Zoomed_all->SetBinError(13,0.1022537);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(31.03114);
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
   canvasDiMuon_275_325/AlphaT_Zoomed_all->cd();
   canvasDiMuon_275_325/AlphaT_Zoomed_all->Modified();
   canvasDiMuon_275_325/AlphaT_Zoomed_all->cd();
   canvasDiMuon_275_325/AlphaT_Zoomed_all->SetSelected(canvasDiMuon_275_325/AlphaT_Zoomed_all);
}
