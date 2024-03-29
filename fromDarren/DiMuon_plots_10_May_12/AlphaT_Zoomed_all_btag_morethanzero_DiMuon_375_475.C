{
//=========Macro generated from canvas: canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:46:41 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all = new TCanvas("canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->SetFillColor(0);
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->SetTickx(1);
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->SetTicky(1);
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-0.5572159,0.61875,2.004643);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3301[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3301);
   AlphaT_Zoomed_all->SetBinContent(0,14);
   AlphaT_Zoomed_all->SetBinContent(1,4);
   AlphaT_Zoomed_all->SetBinContent(2,4);
   AlphaT_Zoomed_all->SetBinContent(3,4);
   AlphaT_Zoomed_all->SetBinContent(4,2);
   AlphaT_Zoomed_all->SetBinContent(5,5);
   AlphaT_Zoomed_all->SetBinContent(6,2);
   AlphaT_Zoomed_all->SetBinContent(8,1);
   AlphaT_Zoomed_all->SetBinContent(9,1);
   AlphaT_Zoomed_all->SetBinContent(11,2);
   AlphaT_Zoomed_all->SetBinContent(13,4);
   AlphaT_Zoomed_all->SetBinError(0,3.741657);
   AlphaT_Zoomed_all->SetBinError(1,2.3);
   AlphaT_Zoomed_all->SetBinError(2,2.3);
   AlphaT_Zoomed_all->SetBinError(3,2.3);
   AlphaT_Zoomed_all->SetBinError(4,2);
   AlphaT_Zoomed_all->SetBinError(5,2.49);
   AlphaT_Zoomed_all->SetBinError(6,2);
   AlphaT_Zoomed_all->SetBinError(8,1);
   AlphaT_Zoomed_all->SetBinError(9,1);
   AlphaT_Zoomed_all->SetBinError(11,2);
   AlphaT_Zoomed_all->SetBinError(13,2);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(56.0347);
   AlphaT_Zoomed_all->SetEntries(43);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PE0");
   Double_t xAxis3302[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3302);
   AlphaT_Zoomed_all->SetBinContent(2,0.04907353);
   AlphaT_Zoomed_all->SetBinError(2,0.04907353);
   AlphaT_Zoomed_all->SetEntries(1);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis3303[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3303);
   AlphaT_Zoomed_all->SetBinContent(0,3.625412);
   AlphaT_Zoomed_all->SetBinContent(1,1.856424);
   AlphaT_Zoomed_all->SetBinContent(2,0.6007149);
   AlphaT_Zoomed_all->SetBinContent(3,0.5199691);
   AlphaT_Zoomed_all->SetBinContent(4,3.023233);
   AlphaT_Zoomed_all->SetBinContent(5,1.348604);
   AlphaT_Zoomed_all->SetBinContent(6,0.8915921);
   AlphaT_Zoomed_all->SetBinContent(7,0.3034843);
   AlphaT_Zoomed_all->SetBinContent(8,0.4232055);
   AlphaT_Zoomed_all->SetBinContent(11,0.2515751);
   AlphaT_Zoomed_all->SetBinContent(13,0.2615972);
   AlphaT_Zoomed_all->SetBinError(0,0.955834);
   AlphaT_Zoomed_all->SetBinError(1,0.7386867);
   AlphaT_Zoomed_all->SetBinError(2,0.3448219);
   AlphaT_Zoomed_all->SetBinError(3,0.321732);
   AlphaT_Zoomed_all->SetBinError(4,0.9881604);
   AlphaT_Zoomed_all->SetBinError(5,0.5717646);
   AlphaT_Zoomed_all->SetBinError(6,0.4820056);
   AlphaT_Zoomed_all->SetBinError(7,0.3034843);
   AlphaT_Zoomed_all->SetBinError(8,0.2889414);
   AlphaT_Zoomed_all->SetBinError(11,0.2515751);
   AlphaT_Zoomed_all->SetBinError(13,0.2615972);
   AlphaT_Zoomed_all->SetEntries(64);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis3304[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3304);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis3305[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3305);
   AlphaT_Zoomed_all->SetBinContent(0,9.738476);
   AlphaT_Zoomed_all->SetBinContent(1,1.609386);
   AlphaT_Zoomed_all->SetBinContent(2,3.832222);
   AlphaT_Zoomed_all->SetBinContent(3,1.57741);
   AlphaT_Zoomed_all->SetBinContent(4,2.503578);
   AlphaT_Zoomed_all->SetBinContent(5,0.502068);
   AlphaT_Zoomed_all->SetBinContent(6,3.029859);
   AlphaT_Zoomed_all->SetBinContent(7,1.044138);
   AlphaT_Zoomed_all->SetBinContent(8,0.522069);
   AlphaT_Zoomed_all->SetBinContent(9,0.03021939);
   AlphaT_Zoomed_all->SetBinContent(10,0.2980766);
   AlphaT_Zoomed_all->SetBinContent(11,0.502068);
   AlphaT_Zoomed_all->SetBinContent(12,0.1608371);
   AlphaT_Zoomed_all->SetBinContent(13,2.441668);
   AlphaT_Zoomed_all->SetBinError(0,2.135118);
   AlphaT_Zoomed_all->SetBinError(1,0.9599664);
   AlphaT_Zoomed_all->SetBinError(2,1.350173);
   AlphaT_Zoomed_all->SetBinError(3,0.9162412);
   AlphaT_Zoomed_all->SetBinError(4,1.108739);
   AlphaT_Zoomed_all->SetBinError(5,0.502068);
   AlphaT_Zoomed_all->SetBinError(6,1.677317);
   AlphaT_Zoomed_all->SetBinError(7,0.738317);
   AlphaT_Zoomed_all->SetBinError(8,0.522069);
   AlphaT_Zoomed_all->SetBinError(9,0.03021939);
   AlphaT_Zoomed_all->SetBinError(10,0.2980766);
   AlphaT_Zoomed_all->SetBinError(11,0.502068);
   AlphaT_Zoomed_all->SetBinError(12,0.1608371);
   AlphaT_Zoomed_all->SetBinError(13,1.163854);
   AlphaT_Zoomed_all->SetEntries(66);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis3306[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3306);
   AlphaT_Zoomed_all->SetBinContent(0,0.08664413);
   AlphaT_Zoomed_all->SetBinContent(1,0.03561089);
   AlphaT_Zoomed_all->SetBinContent(3,0.03233293);
   AlphaT_Zoomed_all->SetBinContent(4,0.05881926);
   AlphaT_Zoomed_all->SetBinContent(6,0.03218387);
   AlphaT_Zoomed_all->SetBinContent(8,0.009818749);
   AlphaT_Zoomed_all->SetBinContent(10,0.04396456);
   AlphaT_Zoomed_all->SetBinContent(12,0.1166797);
   AlphaT_Zoomed_all->SetBinContent(13,0.1299113);
   AlphaT_Zoomed_all->SetBinError(0,0.06325916);
   AlphaT_Zoomed_all->SetBinError(1,0.03249867);
   AlphaT_Zoomed_all->SetBinError(3,0.03233293);
   AlphaT_Zoomed_all->SetBinError(4,0.05881926);
   AlphaT_Zoomed_all->SetBinError(6,0.03218387);
   AlphaT_Zoomed_all->SetBinError(8,0.005668871);
   AlphaT_Zoomed_all->SetBinError(10,0.04396456);
   AlphaT_Zoomed_all->SetBinError(12,0.09033156);
   AlphaT_Zoomed_all->SetBinError(13,0.07973496);
   AlphaT_Zoomed_all->SetEntries(16);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis3307[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3307);
   AlphaT_Zoomed_all->SetBinContent(0,0.07186894);
   AlphaT_Zoomed_all->SetBinContent(1,0.02059009);
   AlphaT_Zoomed_all->SetBinContent(2,0.03188026);
   AlphaT_Zoomed_all->SetBinContent(3,0.01194659);
   AlphaT_Zoomed_all->SetBinContent(4,0.01784026);
   AlphaT_Zoomed_all->SetBinContent(6,0.01209507);
   AlphaT_Zoomed_all->SetBinContent(7,0.008616553);
   AlphaT_Zoomed_all->SetBinContent(9,0.0297363);
   AlphaT_Zoomed_all->SetBinContent(12,0.005405084);
   AlphaT_Zoomed_all->SetBinContent(13,0.05734759);
   AlphaT_Zoomed_all->SetBinError(0,0.02533341);
   AlphaT_Zoomed_all->SetBinError(1,0.01518576);
   AlphaT_Zoomed_all->SetBinError(2,0.0202788);
   AlphaT_Zoomed_all->SetBinError(3,0.008447513);
   AlphaT_Zoomed_all->SetBinError(4,0.01059322);
   AlphaT_Zoomed_all->SetBinError(6,0.008600631);
   AlphaT_Zoomed_all->SetBinError(7,0.006274922);
   AlphaT_Zoomed_all->SetBinError(9,0.01900143);
   AlphaT_Zoomed_all->SetBinError(12,0.005405084);
   AlphaT_Zoomed_all->SetBinError(13,0.02313957);
   AlphaT_Zoomed_all->SetEntries(36);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis3308[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3308);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis3309[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3309);
   AlphaT_Zoomed_all->SetBinContent(0,13.5224);
   AlphaT_Zoomed_all->SetBinContent(1,3.522011);
   AlphaT_Zoomed_all->SetBinContent(2,4.51389);
   AlphaT_Zoomed_all->SetBinContent(3,2.141658);
   AlphaT_Zoomed_all->SetBinContent(4,5.60347);
   AlphaT_Zoomed_all->SetBinContent(5,1.850672);
   AlphaT_Zoomed_all->SetBinContent(6,3.96573);
   AlphaT_Zoomed_all->SetBinContent(7,1.356239);
   AlphaT_Zoomed_all->SetBinContent(8,0.9550932);
   AlphaT_Zoomed_all->SetBinContent(9,0.05995568);
   AlphaT_Zoomed_all->SetBinContent(10,0.3420412);
   AlphaT_Zoomed_all->SetBinContent(11,0.7536431);
   AlphaT_Zoomed_all->SetBinContent(12,0.2829219);
   AlphaT_Zoomed_all->SetBinContent(13,2.890524);
   AlphaT_Zoomed_all->SetBinError(0,2.340298);
   AlphaT_Zoomed_all->SetBinError(1,1.211809);
   AlphaT_Zoomed_all->SetBinError(2,1.39452);
   AlphaT_Zoomed_all->SetBinError(3,0.9716615);
   AlphaT_Zoomed_all->SetBinError(4,1.486383);
   AlphaT_Zoomed_all->SetBinError(5,0.7609119);
   AlphaT_Zoomed_all->SetBinError(6,1.745517);
   AlphaT_Zoomed_all->SetBinError(7,0.798282);
   AlphaT_Zoomed_all->SetBinError(8,0.5967204);
   AlphaT_Zoomed_all->SetBinError(9,0.03569686);
   AlphaT_Zoomed_all->SetBinError(10,0.3013014);
   AlphaT_Zoomed_all->SetBinError(11,0.5615713);
   AlphaT_Zoomed_all->SetBinError(12,0.184547);
   AlphaT_Zoomed_all->SetBinError(13,1.195777);
   AlphaT_Zoomed_all->SetEntries(183);
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
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all551 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all551","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all551->SetMinimum(0.0011);
   Graph_Graph_from_AlphaT_Zoomed_all551->SetMaximum(1.1);
   Graph_Graph_from_AlphaT_Zoomed_all551->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all551->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all551->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all551);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,3.522011);
   gre->SetPointError(0,0.00625,1.211809);
   gre->SetPoint(1,0.46875,4.51389);
   gre->SetPointError(1,0.00625,1.39452);
   gre->SetPoint(2,0.48125,2.141658);
   gre->SetPointError(2,0.00625,0.9716615);
   gre->SetPoint(3,0.49375,5.60347);
   gre->SetPointError(3,0.00625,1.486383);
   gre->SetPoint(4,0.50625,1.850672);
   gre->SetPointError(4,0.00625,0.7609119);
   gre->SetPoint(5,0.51875,3.96573);
   gre->SetPointError(5,0.00625,1.745517);
   gre->SetPoint(6,0.53125,1.356239);
   gre->SetPointError(6,0.00625,0.798282);
   gre->SetPoint(7,0.54375,0.9550932);
   gre->SetPointError(7,0.00625,0.5967204);
   gre->SetPoint(8,0.55625,0.05995568);
   gre->SetPointError(8,0.00625,0.03569686);
   gre->SetPoint(9,0.56875,0.3420412);
   gre->SetPointError(9,0.00625,0.3013014);
   gre->SetPoint(10,0.58125,0.7536431);
   gre->SetPointError(10,0.00625,0.5615713);
   gre->SetPoint(11,0.59375,0.2829219);
   gre->SetPointError(11,0.00625,0.184547);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all552 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all552","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all552->SetMinimum(0.02183294);
   Graph_Graph_from_AlphaT_Zoomed_all552->SetMaximum(7.796413);
   Graph_Graph_from_AlphaT_Zoomed_all552->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all552->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all552->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all552);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_DiMuon_375_475    Jet Multiplicity=all");
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
   Double_t xAxis3310[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3310);
   AlphaT_Zoomed_all->SetBinContent(0,14);
   AlphaT_Zoomed_all->SetBinContent(1,4);
   AlphaT_Zoomed_all->SetBinContent(2,4);
   AlphaT_Zoomed_all->SetBinContent(3,4);
   AlphaT_Zoomed_all->SetBinContent(4,2);
   AlphaT_Zoomed_all->SetBinContent(5,5);
   AlphaT_Zoomed_all->SetBinContent(6,2);
   AlphaT_Zoomed_all->SetBinContent(8,1);
   AlphaT_Zoomed_all->SetBinContent(9,1);
   AlphaT_Zoomed_all->SetBinContent(11,2);
   AlphaT_Zoomed_all->SetBinContent(13,4);
   AlphaT_Zoomed_all->SetBinError(0,3.741657);
   AlphaT_Zoomed_all->SetBinError(1,2.3);
   AlphaT_Zoomed_all->SetBinError(2,2.3);
   AlphaT_Zoomed_all->SetBinError(3,2.3);
   AlphaT_Zoomed_all->SetBinError(4,2);
   AlphaT_Zoomed_all->SetBinError(5,2.49);
   AlphaT_Zoomed_all->SetBinError(6,2);
   AlphaT_Zoomed_all->SetBinError(8,1);
   AlphaT_Zoomed_all->SetBinError(9,1);
   AlphaT_Zoomed_all->SetBinError(11,2);
   AlphaT_Zoomed_all->SetBinError(13,2);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(56.0347);
   AlphaT_Zoomed_all->SetEntries(43);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis3311[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3311);
   AlphaT_Zoomed_all->SetBinContent(0,1.035319);
   AlphaT_Zoomed_all->SetBinContent(1,1.135715);
   AlphaT_Zoomed_all->SetBinContent(2,0.8861536);
   AlphaT_Zoomed_all->SetBinContent(3,1.867712);
   AlphaT_Zoomed_all->SetBinContent(4,0.3569217);
   AlphaT_Zoomed_all->SetBinContent(5,2.701722);
   AlphaT_Zoomed_all->SetBinContent(6,0.5043207);
   AlphaT_Zoomed_all->SetBinContent(8,1.047018);
   AlphaT_Zoomed_all->SetBinContent(9,16.67899);
   AlphaT_Zoomed_all->SetBinContent(11,2.653776);
   AlphaT_Zoomed_all->SetBinContent(13,1.383832);
   AlphaT_Zoomed_all->SetBinError(0,0.3296498);
   AlphaT_Zoomed_all->SetBinError(1,0.6700801);
   AlphaT_Zoomed_all->SetBinError(2,0.6527395);
   AlphaT_Zoomed_all->SetBinError(3,0.7324377);
   AlphaT_Zoomed_all->SetBinError(4,1.034584);
   AlphaT_Zoomed_all->SetBinError(5,0.6457956);
   AlphaT_Zoomed_all->SetBinError(6,1.092581);
   AlphaT_Zoomed_all->SetBinError(8,1.17913);
   AlphaT_Zoomed_all->SetBinError(9,1.163824);
   AlphaT_Zoomed_all->SetBinError(11,1.247091);
   AlphaT_Zoomed_all->SetBinError(13,0.8980401);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(1.958389);
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
   gre->SetPointError(0,0.00625,0.3440673);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.3089398);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.4536959);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.2652612);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.4111545);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.4401503);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.5885999);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.6247771);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.5953874);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.8808923);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.7451422);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.6522895);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all553 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all553","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all553->SetMinimum(0);
   Graph_Graph_from_AlphaT_Zoomed_all553->SetMaximum(2.057071);
   Graph_Graph_from_AlphaT_Zoomed_all553->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all553->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all553->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all553);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3312[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis3312);
   AlphaT_Zoomed_all->SetBinContent(0,1.035319);
   AlphaT_Zoomed_all->SetBinContent(1,1.135715);
   AlphaT_Zoomed_all->SetBinContent(2,0.8861536);
   AlphaT_Zoomed_all->SetBinContent(3,1.867712);
   AlphaT_Zoomed_all->SetBinContent(4,0.3569217);
   AlphaT_Zoomed_all->SetBinContent(5,2.701722);
   AlphaT_Zoomed_all->SetBinContent(6,0.5043207);
   AlphaT_Zoomed_all->SetBinContent(8,1.047018);
   AlphaT_Zoomed_all->SetBinContent(9,16.67899);
   AlphaT_Zoomed_all->SetBinContent(11,2.653776);
   AlphaT_Zoomed_all->SetBinContent(13,1.383832);
   AlphaT_Zoomed_all->SetBinError(0,0.3296498);
   AlphaT_Zoomed_all->SetBinError(1,0.6700801);
   AlphaT_Zoomed_all->SetBinError(2,0.6527395);
   AlphaT_Zoomed_all->SetBinError(3,0.7324377);
   AlphaT_Zoomed_all->SetBinError(4,1.034584);
   AlphaT_Zoomed_all->SetBinError(5,0.6457956);
   AlphaT_Zoomed_all->SetBinError(6,1.092581);
   AlphaT_Zoomed_all->SetBinError(8,1.17913);
   AlphaT_Zoomed_all->SetBinError(9,1.163824);
   AlphaT_Zoomed_all->SetBinError(11,1.247091);
   AlphaT_Zoomed_all->SetBinError(13,0.8980401);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(1.958389);
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
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->Modified();
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all->SetSelected(canvasbtag_morethanzero_DiMuon_375_475/AlphaT_Zoomed_all);
}
