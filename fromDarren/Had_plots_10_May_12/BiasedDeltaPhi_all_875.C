{
//=========Macro generated from canvas: canvas875/BiasedDeltaPhi_all/cannameBiasedDeltaPhi_all
//=========  (Thu May 10 12:24:20 2012) by ROOT version5.32/00
   TCanvas *canvas875/BiasedDeltaPhi_all = new TCanvas("canvas875/BiasedDeltaPhi_all", "cannameBiasedDeltaPhi_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvas875/BiasedDeltaPhi_all->SetHighLightColor(2);
   canvas875/BiasedDeltaPhi_all->Range(0,0,1,1);
   canvas875/BiasedDeltaPhi_all->SetFillColor(0);
   canvas875/BiasedDeltaPhi_all->SetBorderMode(0);
   canvas875/BiasedDeltaPhi_all->SetBorderSize(2);
   canvas875/BiasedDeltaPhi_all->SetTickx(1);
   canvas875/BiasedDeltaPhi_all->SetTicky(1);
   canvas875/BiasedDeltaPhi_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-0.8416756,3.534292,4.56478);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3331[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3331);
   BiasedDeltaPhi_all->SetBinContent(1,83);
   BiasedDeltaPhi_all->SetBinContent(2,7);
   BiasedDeltaPhi_all->SetBinContent(3,2);
   BiasedDeltaPhi_all->SetBinContent(4,2);
   BiasedDeltaPhi_all->SetBinError(1,9.110434);
   BiasedDeltaPhi_all->SetBinError(2,2.86);
   BiasedDeltaPhi_all->SetBinError(3,2);
   BiasedDeltaPhi_all->SetBinError(4,2);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(10571.45);
   BiasedDeltaPhi_all->SetEntries(94);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PE0");
   Double_t xAxis3332[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3332);
   BiasedDeltaPhi_all->SetBinContent(1,8.415559);
   BiasedDeltaPhi_all->SetBinContent(2,1.72037);
   BiasedDeltaPhi_all->SetBinContent(3,0.9655669);
   BiasedDeltaPhi_all->SetBinContent(4,0.2509153);
   BiasedDeltaPhi_all->SetBinContent(8,0.05645457);
   BiasedDeltaPhi_all->SetBinError(1,0.7480068);
   BiasedDeltaPhi_all->SetBinError(2,0.3292974);
   BiasedDeltaPhi_all->SetBinError(3,0.2622287);
   BiasedDeltaPhi_all->SetBinError(4,0.1141931);
   BiasedDeltaPhi_all->SetBinError(8,0.05645457);
   BiasedDeltaPhi_all->SetEntries(222);
   BiasedDeltaPhi_all->SetLineColor(4);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3333[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3333);
   BiasedDeltaPhi_all->SetBinContent(1,13.13915);
   BiasedDeltaPhi_all->SetBinContent(2,1.937571);
   BiasedDeltaPhi_all->SetBinContent(3,0.5168559);
   BiasedDeltaPhi_all->SetBinError(1,2.026622);
   BiasedDeltaPhi_all->SetBinError(2,0.8888681);
   BiasedDeltaPhi_all->SetBinError(3,0.358592);
   BiasedDeltaPhi_all->SetEntries(64);
   BiasedDeltaPhi_all->SetLineColor(2);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3334[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3334);
   BiasedDeltaPhi_all->SetBinContent(1,4.517497);
   BiasedDeltaPhi_all->SetBinContent(2,2.351715);
   BiasedDeltaPhi_all->SetBinContent(3,1.35027);
   BiasedDeltaPhi_all->SetBinContent(4,0.1283663);
   BiasedDeltaPhi_all->SetBinContent(5,0.1083401);
   BiasedDeltaPhi_all->SetBinContent(6,0.0703144);
   BiasedDeltaPhi_all->SetBinContent(7,0.135287);
   BiasedDeltaPhi_all->SetBinContent(8,0.1370789);
   BiasedDeltaPhi_all->SetBinError(1,0.9022676);
   BiasedDeltaPhi_all->SetBinError(2,0.7111624);
   BiasedDeltaPhi_all->SetBinError(3,0.3220259);
   BiasedDeltaPhi_all->SetBinError(4,0.09081912);
   BiasedDeltaPhi_all->SetBinError(5,0.07941373);
   BiasedDeltaPhi_all->SetBinError(6,0.06644249);
   BiasedDeltaPhi_all->SetBinError(7,0.09568062);
   BiasedDeltaPhi_all->SetBinError(8,0.08481784);
   BiasedDeltaPhi_all->SetEntries(126);
   BiasedDeltaPhi_all->SetLineColor(5);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3335[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3335);
   BiasedDeltaPhi_all->SetBinContent(1,0.8628843);
   BiasedDeltaPhi_all->SetBinError(1,0.8628843);
   BiasedDeltaPhi_all->SetEntries(1);
   BiasedDeltaPhi_all->SetLineColor(6);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3336[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3336);
   BiasedDeltaPhi_all->SetBinContent(1,0.1496068);
   BiasedDeltaPhi_all->SetBinContent(2,0.02621504);
   BiasedDeltaPhi_all->SetBinContent(4,0.00908894);
   BiasedDeltaPhi_all->SetBinError(1,0.04256466);
   BiasedDeltaPhi_all->SetBinError(2,0.01855993);
   BiasedDeltaPhi_all->SetBinError(4,0.00908894);
   BiasedDeltaPhi_all->SetEntries(23);
   BiasedDeltaPhi_all->SetLineColor(44);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3337[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3337);
   BiasedDeltaPhi_all->SetBinContent(1,1029.143);
   BiasedDeltaPhi_all->SetBinContent(2,55.29419);
   BiasedDeltaPhi_all->SetBinError(1,57.42185);
   BiasedDeltaPhi_all->SetBinError(2,55.29419);
   BiasedDeltaPhi_all->SetEntries(3664);
   BiasedDeltaPhi_all->SetLineColor(7);
   BiasedDeltaPhi_all->SetLineStyle(10);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3338[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3338);
   BiasedDeltaPhi_all->SetBinContent(1,0.91713);
   BiasedDeltaPhi_all->SetBinContent(2,0.1118245);
   BiasedDeltaPhi_all->SetBinContent(3,0.06129568);
   BiasedDeltaPhi_all->SetBinContent(4,0.06728108);
   BiasedDeltaPhi_all->SetBinError(1,0.2583233);
   BiasedDeltaPhi_all->SetBinError(2,0.07940024);
   BiasedDeltaPhi_all->SetBinError(3,0.06129568);
   BiasedDeltaPhi_all->SetBinError(4,0.06728108);
   BiasedDeltaPhi_all->SetEntries(20);
   BiasedDeltaPhi_all->SetLineColor(40);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3339[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3339);
   BiasedDeltaPhi_all->SetBinContent(1,1057.145);
   BiasedDeltaPhi_all->SetBinContent(2,61.44189);
   BiasedDeltaPhi_all->SetBinContent(3,2.893989);
   BiasedDeltaPhi_all->SetBinContent(4,0.4556516);
   BiasedDeltaPhi_all->SetBinContent(5,0.1083401);
   BiasedDeltaPhi_all->SetBinContent(6,0.0703144);
   BiasedDeltaPhi_all->SetBinContent(7,0.135287);
   BiasedDeltaPhi_all->SetBinContent(8,0.1935334);
   BiasedDeltaPhi_all->SetBinError(1,57.47663);
   BiasedDeltaPhi_all->SetBinError(2,55.30695);
   BiasedDeltaPhi_all->SetBinError(3,0.5520959);
   BiasedDeltaPhi_all->SetBinError(4,0.1609271);
   BiasedDeltaPhi_all->SetBinError(5,0.07941373);
   BiasedDeltaPhi_all->SetBinError(6,0.06644249);
   BiasedDeltaPhi_all->SetBinError(7,0.09568062);
   BiasedDeltaPhi_all->SetBinError(8,0.1018881);
   BiasedDeltaPhi_all->SetEntries(4120);
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
   gre->SetPoint(0,0.1308997,1029.143);
   gre->SetPointError(0,0.1308997,57.42185);
   gre->SetPoint(1,0.3926991,55.29419);
   gre->SetPointError(1,0.1308997,55.29419);
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
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all556 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all556","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all556->SetMinimum(1.195221);
   Graph_Graph_from_BiasedDeltaPhi_all556->SetMaximum(1195.221);
   Graph_Graph_from_BiasedDeltaPhi_all556->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all556->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all556->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all556);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.1308997,1057.145);
   gre->SetPointError(0,0.1308997,57.47663);
   gre->SetPoint(1,0.3926991,61.44189);
   gre->SetPointError(1,0.1308997,55.30695);
   gre->SetPoint(2,0.6544985,2.893989);
   gre->SetPointError(2,0.1308997,0.5520959);
   gre->SetPoint(3,0.9162979,0.4556516);
   gre->SetPointError(3,0.1308997,0.1609271);
   gre->SetPoint(4,1.178097,0.1083401);
   gre->SetPointError(4,0.1308997,0.07941373);
   gre->SetPoint(5,1.439897,0.0703144);
   gre->SetPointError(5,0.1308997,0.06644249);
   gre->SetPoint(6,1.701696,0.135287);
   gre->SetPointError(6,0.1308997,0.09568062);
   gre->SetPoint(7,1.963495,0.1935334);
   gre->SetPointError(7,0.1308997,0.1018881);
   gre->SetPoint(8,2.225295,0);
   gre->SetPointError(8,0.1308997,0);
   gre->SetPoint(9,2.487094,0);
   gre->SetPointError(9,0.1308997,0);
   gre->SetPoint(10,2.748894,0);
   gre->SetPointError(10,0.1308997,0);
   gre->SetPoint(11,3.010693,0);
   gre->SetPointError(11,0.1308997,0);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all557 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all557","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all557->SetMinimum(1.226083);
   Graph_Graph_from_BiasedDeltaPhi_all557->SetMaximum(1226.083);
   Graph_Graph_from_BiasedDeltaPhi_all557->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all557->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all557->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all557);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"875    Jet Multiplicity=all");
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
   Double_t xAxis3340[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3340);
   BiasedDeltaPhi_all->SetBinContent(1,83);
   BiasedDeltaPhi_all->SetBinContent(2,7);
   BiasedDeltaPhi_all->SetBinContent(3,2);
   BiasedDeltaPhi_all->SetBinContent(4,2);
   BiasedDeltaPhi_all->SetBinError(1,9.110434);
   BiasedDeltaPhi_all->SetBinError(2,2.86);
   BiasedDeltaPhi_all->SetBinError(3,2);
   BiasedDeltaPhi_all->SetBinError(4,2);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(10571.45);
   BiasedDeltaPhi_all->SetEntries(94);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PSAME");
   u->Modified();
   canvas875/BiasedDeltaPhi_all->cd();
  
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
   Double_t xAxis3341[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3341);
   BiasedDeltaPhi_all->SetBinContent(1,0.07851338);
   BiasedDeltaPhi_all->SetBinContent(2,0.1139288);
   BiasedDeltaPhi_all->SetBinContent(3,0.6910877);
   BiasedDeltaPhi_all->SetBinContent(4,4.389318);
   BiasedDeltaPhi_all->SetBinError(1,0.1224919);
   BiasedDeltaPhi_all->SetBinError(2,0.9885351);
   BiasedDeltaPhi_all->SetBinError(3,1.018035);
   BiasedDeltaPhi_all->SetBinError(4,1.060536);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(1.25368);
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
   gre->SetPointError(0,0.1308997,0.05436969);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.9001505);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.1907734);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.35318);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.7330043);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.9449343);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.7072416);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0.5264625);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,0);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,0);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all558 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all558","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all558->SetMinimum(0);
   Graph_Graph_from_BiasedDeltaPhi_all558->SetMaximum(2.133921);
   Graph_Graph_from_BiasedDeltaPhi_all558->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all558->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all558->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all558);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3342[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3342);
   BiasedDeltaPhi_all->SetBinContent(1,0.07851338);
   BiasedDeltaPhi_all->SetBinContent(2,0.1139288);
   BiasedDeltaPhi_all->SetBinContent(3,0.6910877);
   BiasedDeltaPhi_all->SetBinContent(4,4.389318);
   BiasedDeltaPhi_all->SetBinError(1,0.1224919);
   BiasedDeltaPhi_all->SetBinError(2,0.9885351);
   BiasedDeltaPhi_all->SetBinError(3,1.018035);
   BiasedDeltaPhi_all->SetBinError(4,1.060536);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(1.25368);
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
   canvas875/BiasedDeltaPhi_all->cd();
   canvas875/BiasedDeltaPhi_all->Modified();
   canvas875/BiasedDeltaPhi_all->cd();
   canvas875/BiasedDeltaPhi_all->SetSelected(canvas875/BiasedDeltaPhi_all);
}
