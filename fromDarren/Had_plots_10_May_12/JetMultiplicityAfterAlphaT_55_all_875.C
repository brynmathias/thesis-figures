{
//=========Macro generated from canvas: canvas875/JetMultiplicityAfterAlphaT_55_all/cannameJetMultiplicityAfterAlphaT_55_all
//=========  (Thu May 10 12:24:22 2012) by ROOT version5.32/00
   TCanvas *canvas875/JetMultiplicityAfterAlphaT_55_all = new TCanvas("canvas875/JetMultiplicityAfterAlphaT_55_all", "cannameJetMultiplicityAfterAlphaT_55_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvas875/JetMultiplicityAfterAlphaT_55_all->SetHighLightColor(2);
   canvas875/JetMultiplicityAfterAlphaT_55_all->Range(0,0,1,1);
   canvas875/JetMultiplicityAfterAlphaT_55_all->SetFillColor(0);
   canvas875/JetMultiplicityAfterAlphaT_55_all->SetBorderMode(0);
   canvas875/JetMultiplicityAfterAlphaT_55_all->SetBorderSize(2);
   canvas875/JetMultiplicityAfterAlphaT_55_all->SetTickx(1);
   canvas875/JetMultiplicityAfterAlphaT_55_all->SetTicky(1);
   canvas875/JetMultiplicityAfterAlphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.5379015,16.875,1.830813);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3391[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3391);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,2);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,3);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,2);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,1);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,2.14);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(39.25923);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PE0");
   Double_t xAxis3392[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3392);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.2635278);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,1.351519);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.523165);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,1.029712);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.3211644);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.1114329);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.2754024);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.3089379);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.2346122);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.1330775);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(96);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3393[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3393);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.1903615);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.4335353);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.5409119);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.1903615);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.3024601);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.3503799);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(8);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3394[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3394);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,1.534891);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,1.833348);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.759447);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.8496004);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.1233746);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(9,0.08000721);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.3087735);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.3409618);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.3449669);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.2514268);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.08926096);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(9,0.08000721);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(118);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3395[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3395);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3396[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3396);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.0338584);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.01245296);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.02272555);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.01245296);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3397[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3397);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.2881785);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.1712419);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.1667379);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.1249594);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineStyle(10);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3398[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3398);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.1309119);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.05565036);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.2736508);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.08096214);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.05268087);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.1255913);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(11);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   Double_t xAxis3399[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3399);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,1.798418);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,3.184867);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,3.925923);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,2.552193);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,1.259102);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(9,0.08000721);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.3282657);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.4382938);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.5343736);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.4777925);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.4052362);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(9,0.08000721);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(242);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(3);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicityAfterAlphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,0);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,0);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,2.5,0);
   gre->SetPointError(2,0.5,0);
   gre->SetPoint(3,3.5,0);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,4.5,0.2881785);
   gre->SetPointError(4,0.5,0.1667379);
   gre->SetPoint(5,5.5,0.1712419);
   gre->SetPointError(5,0.5,0.1249594);
   gre->SetPoint(6,6.5,0);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7.5,0);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8.5,0);
   gre->SetPointError(8,0.5,0);
   gre->SetPoint(9,9.5,0);
   gre->SetPointError(9,0.5,0);
   gre->SetPoint(10,10.5,0);
   gre->SetPointError(10,0.5,0);
   gre->SetPoint(11,11.5,0);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,0);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,0);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,0);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->SetMinimum(0.0005004081);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->SetMaximum(0.5004081);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all566);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicityAfterAlphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,0);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,0);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,2.5,1.798418);
   gre->SetPointError(2,0.5,0.3282657);
   gre->SetPoint(3,3.5,3.184867);
   gre->SetPointError(3,0.5,0.4382938);
   gre->SetPoint(4,4.5,3.925923);
   gre->SetPointError(4,0.5,0.5343736);
   gre->SetPoint(5,5.5,2.552193);
   gre->SetPointError(5,0.5,0.4777925);
   gre->SetPoint(6,6.5,1.259102);
   gre->SetPointError(6,0.5,0.4052362);
   gre->SetPoint(7,7.5,0);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8.5,0.08000721);
   gre->SetPointError(8,0.5,0.08000721);
   gre->SetPoint(9,9.5,0);
   gre->SetPointError(9,0.5,0);
   gre->SetPoint(10,10.5,0);
   gre->SetPointError(10,0.5,0);
   gre->SetPoint(11,11.5,0);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,0);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,0);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,0);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->SetMinimum(0.004906326);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->SetMaximum(4.906326);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all567);
   
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
   TLegendEntry *entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Combined SM","L");
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
   Double_t xAxis3400[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3400);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,2);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,3);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,2);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,1);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,2.14);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(39.25923);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
   u->Modified();
   canvas875/JetMultiplicityAfterAlphaT_55_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-1.875,-0.25,16.875,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis3401[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3401);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.6279697);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.2547172);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,1.17546);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,1.009425);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,1.009221);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.73749);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(3.473827);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicityAfterAlphaT_55_all->Draw("P");
   
   gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicityAfterAlphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.5,1);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.1825302);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.1376176);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.1361141);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.1872086);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.3218455);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,1);
   gre->SetPoint(9,9.5,1);
   gre->SetPointError(9,0.5,0);
   gre->SetPoint(10,10.5,1);
   gre->SetPointError(10,0.5,0);
   gre->SetPoint(11,11.5,1);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,1);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,1);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,1);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->SetMinimum(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->SetMaximum(2.2);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all568);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3402[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis3402);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.6279697);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.2547172);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,1.17546);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,1.009425);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,1.009221);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.73749);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(3.473827);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
   d->Modified();
   canvas875/JetMultiplicityAfterAlphaT_55_all->cd();
   canvas875/JetMultiplicityAfterAlphaT_55_all->Modified();
   canvas875/JetMultiplicityAfterAlphaT_55_all->cd();
   canvas875/JetMultiplicityAfterAlphaT_55_all->SetSelected(canvas875/JetMultiplicityAfterAlphaT_55_all);
}
