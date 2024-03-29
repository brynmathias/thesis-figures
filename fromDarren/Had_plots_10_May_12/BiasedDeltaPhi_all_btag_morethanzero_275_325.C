{
//=========Macro generated from canvas: canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all/cannameBiasedDeltaPhi_all
//=========  (Thu May 10 12:24:35 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all = new TCanvas("canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all", "cannameBiasedDeltaPhi_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetHighLightColor(2);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->Range(0,0,1,1);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetFillColor(0);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetBorderMode(0);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetBorderSize(2);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetTickx(1);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetTicky(1);
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-1.048493,3.534292,6.426139);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3721[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3721);
   BiasedDeltaPhi_all->SetBinContent(1,368);
   BiasedDeltaPhi_all->SetBinContent(2,151);
   BiasedDeltaPhi_all->SetBinContent(3,76);
   BiasedDeltaPhi_all->SetBinContent(4,22);
   BiasedDeltaPhi_all->SetBinContent(5,16);
   BiasedDeltaPhi_all->SetBinContent(6,5);
   BiasedDeltaPhi_all->SetBinContent(7,8);
   BiasedDeltaPhi_all->SetBinContent(9,2);
   BiasedDeltaPhi_all->SetBinContent(11,1);
   BiasedDeltaPhi_all->SetBinError(1,19.18333);
   BiasedDeltaPhi_all->SetBinError(2,12.28821);
   BiasedDeltaPhi_all->SetBinError(3,8.717798);
   BiasedDeltaPhi_all->SetBinError(4,4.690416);
   BiasedDeltaPhi_all->SetBinError(5,4);
   BiasedDeltaPhi_all->SetBinError(6,2.49);
   BiasedDeltaPhi_all->SetBinError(7,3.03);
   BiasedDeltaPhi_all->SetBinError(9,2);
   BiasedDeltaPhi_all->SetBinError(11,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(477172.5);
   BiasedDeltaPhi_all->SetEntries(649);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PE0");
   Double_t xAxis3722[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3722);
   BiasedDeltaPhi_all->SetBinContent(1,24.51957);
   BiasedDeltaPhi_all->SetBinContent(2,12.91064);
   BiasedDeltaPhi_all->SetBinContent(3,12.48058);
   BiasedDeltaPhi_all->SetBinContent(4,6.769663);
   BiasedDeltaPhi_all->SetBinContent(5,4.654498);
   BiasedDeltaPhi_all->SetBinContent(9,3.969158);
   BiasedDeltaPhi_all->SetBinError(1,9.911496);
   BiasedDeltaPhi_all->SetBinError(2,6.511856);
   BiasedDeltaPhi_all->SetBinError(3,6.520292);
   BiasedDeltaPhi_all->SetBinError(4,6.769663);
   BiasedDeltaPhi_all->SetBinError(5,4.438815);
   BiasedDeltaPhi_all->SetBinError(9,3.969158);
   BiasedDeltaPhi_all->SetEntries(20);
   BiasedDeltaPhi_all->SetLineColor(4);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3723[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3723);
   BiasedDeltaPhi_all->SetBinContent(1,161.6235);
   BiasedDeltaPhi_all->SetBinContent(2,87.10163);
   BiasedDeltaPhi_all->SetBinContent(3,70.3853);
   BiasedDeltaPhi_all->SetBinContent(4,22.21134);
   BiasedDeltaPhi_all->SetBinContent(5,7.372289);
   BiasedDeltaPhi_all->SetBinContent(6,2.757684);
   BiasedDeltaPhi_all->SetBinContent(7,1.977741);
   BiasedDeltaPhi_all->SetBinContent(8,1.168159);
   BiasedDeltaPhi_all->SetBinContent(9,0.7414971);
   BiasedDeltaPhi_all->SetBinContent(10,0.380723);
   BiasedDeltaPhi_all->SetBinError(1,7.489132);
   BiasedDeltaPhi_all->SetBinError(2,5.629658);
   BiasedDeltaPhi_all->SetBinError(3,6.490137);
   BiasedDeltaPhi_all->SetBinError(4,2.751955);
   BiasedDeltaPhi_all->SetBinError(5,1.399355);
   BiasedDeltaPhi_all->SetBinError(6,0.9411493);
   BiasedDeltaPhi_all->SetBinError(7,0.6897863);
   BiasedDeltaPhi_all->SetBinError(8,0.554218);
   BiasedDeltaPhi_all->SetBinError(9,0.5540793);
   BiasedDeltaPhi_all->SetBinError(10,0.2692118);
   BiasedDeltaPhi_all->SetEntries(1528);
   BiasedDeltaPhi_all->SetLineColor(2);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3724[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3724);
   BiasedDeltaPhi_all->SetBinContent(1,14.23762);
   BiasedDeltaPhi_all->SetBinContent(2,10.9205);
   BiasedDeltaPhi_all->SetBinContent(3,10.07508);
   BiasedDeltaPhi_all->SetBinContent(4,5.181345);
   BiasedDeltaPhi_all->SetBinContent(5,3.410067);
   BiasedDeltaPhi_all->SetBinContent(6,1.788964);
   BiasedDeltaPhi_all->SetBinContent(7,1.376245);
   BiasedDeltaPhi_all->SetBinContent(8,1.853185);
   BiasedDeltaPhi_all->SetBinContent(9,0.6820486);
   BiasedDeltaPhi_all->SetBinContent(10,0.2178129);
   BiasedDeltaPhi_all->SetBinContent(11,0.2710208);
   BiasedDeltaPhi_all->SetBinError(1,1.749729);
   BiasedDeltaPhi_all->SetBinError(2,1.050185);
   BiasedDeltaPhi_all->SetBinError(3,1.640513);
   BiasedDeltaPhi_all->SetBinError(4,0.6383522);
   BiasedDeltaPhi_all->SetBinError(5,0.778844);
   BiasedDeltaPhi_all->SetBinError(6,0.3640954);
   BiasedDeltaPhi_all->SetBinError(7,0.3635545);
   BiasedDeltaPhi_all->SetBinError(8,1.19058);
   BiasedDeltaPhi_all->SetBinError(9,0.2279949);
   BiasedDeltaPhi_all->SetBinError(10,0.1205897);
   BiasedDeltaPhi_all->SetBinError(11,0.1395841);
   BiasedDeltaPhi_all->SetEntries(622);
   BiasedDeltaPhi_all->SetLineColor(5);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3725[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3725);
   BiasedDeltaPhi_all->SetBinContent(1,5.850647);
   BiasedDeltaPhi_all->SetBinContent(2,2.208657);
   BiasedDeltaPhi_all->SetBinContent(3,0.7288524);
   BiasedDeltaPhi_all->SetBinError(1,2.450361);
   BiasedDeltaPhi_all->SetBinError(2,1.324373);
   BiasedDeltaPhi_all->SetBinError(3,0.7288524);
   BiasedDeltaPhi_all->SetEntries(12);
   BiasedDeltaPhi_all->SetLineColor(6);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3726[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3726);
   BiasedDeltaPhi_all->SetBinContent(1,3.241135);
   BiasedDeltaPhi_all->SetBinContent(2,1.102206);
   BiasedDeltaPhi_all->SetBinContent(3,0.432834);
   BiasedDeltaPhi_all->SetBinContent(4,0.1878247);
   BiasedDeltaPhi_all->SetBinContent(5,0.1185291);
   BiasedDeltaPhi_all->SetBinContent(6,0.06580551);
   BiasedDeltaPhi_all->SetBinContent(7,0.06922496);
   BiasedDeltaPhi_all->SetBinContent(8,0.04467491);
   BiasedDeltaPhi_all->SetBinContent(9,0.01366638);
   BiasedDeltaPhi_all->SetBinContent(10,0.004307484);
   BiasedDeltaPhi_all->SetBinContent(11,0.006241758);
   BiasedDeltaPhi_all->SetBinContent(12,0.03547385);
   BiasedDeltaPhi_all->SetBinError(1,0.2456522);
   BiasedDeltaPhi_all->SetBinError(2,0.1336865);
   BiasedDeltaPhi_all->SetBinError(3,0.08955377);
   BiasedDeltaPhi_all->SetBinError(4,0.05622832);
   BiasedDeltaPhi_all->SetBinError(5,0.03829191);
   BiasedDeltaPhi_all->SetBinError(6,0.02749406);
   BiasedDeltaPhi_all->SetBinError(7,0.02601244);
   BiasedDeltaPhi_all->SetBinError(8,0.0152924);
   BiasedDeltaPhi_all->SetBinError(9,0.01105985);
   BiasedDeltaPhi_all->SetBinError(10,0.004307484);
   BiasedDeltaPhi_all->SetBinError(11,0.006241758);
   BiasedDeltaPhi_all->SetBinError(12,0.03547385);
   BiasedDeltaPhi_all->SetEntries(667);
   BiasedDeltaPhi_all->SetLineColor(44);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3727[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3727);
   BiasedDeltaPhi_all->SetBinContent(1,47478.76);
   BiasedDeltaPhi_all->SetBinContent(2,12670.8);
   BiasedDeltaPhi_all->SetBinContent(3,6667.505);
   BiasedDeltaPhi_all->SetBinContent(4,1708.986);
   BiasedDeltaPhi_all->SetBinError(1,5528.389);
   BiasedDeltaPhi_all->SetBinError(2,4654.704);
   BiasedDeltaPhi_all->SetBinError(3,6373.768);
   BiasedDeltaPhi_all->SetBinError(4,1708.986);
   BiasedDeltaPhi_all->SetEntries(604);
   BiasedDeltaPhi_all->SetLineColor(7);
   BiasedDeltaPhi_all->SetLineStyle(10);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3728[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3728);
   BiasedDeltaPhi_all->SetBinContent(1,29.02068);
   BiasedDeltaPhi_all->SetBinContent(2,9.075948);
   BiasedDeltaPhi_all->SetBinContent(3,3.701121);
   BiasedDeltaPhi_all->SetBinContent(4,1.394037);
   BiasedDeltaPhi_all->SetBinContent(5,0.8497636);
   BiasedDeltaPhi_all->SetBinContent(7,0.1200505);
   BiasedDeltaPhi_all->SetBinContent(8,0.05487837);
   BiasedDeltaPhi_all->SetBinError(1,1.744664);
   BiasedDeltaPhi_all->SetBinError(2,1.048203);
   BiasedDeltaPhi_all->SetBinError(3,0.5343926);
   BiasedDeltaPhi_all->SetBinError(4,0.3405572);
   BiasedDeltaPhi_all->SetBinError(5,0.2512128);
   BiasedDeltaPhi_all->SetBinError(7,0.08549525);
   BiasedDeltaPhi_all->SetBinError(8,0.05487837);
   BiasedDeltaPhi_all->SetEntries(744);
   BiasedDeltaPhi_all->SetLineColor(40);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("HISTSAME");
   Double_t xAxis3729[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3729);
   BiasedDeltaPhi_all->SetBinContent(1,47717.25);
   BiasedDeltaPhi_all->SetBinContent(2,12794.12);
   BiasedDeltaPhi_all->SetBinContent(3,6765.309);
   BiasedDeltaPhi_all->SetBinContent(4,1744.73);
   BiasedDeltaPhi_all->SetBinContent(5,16.40515);
   BiasedDeltaPhi_all->SetBinContent(6,4.612454);
   BiasedDeltaPhi_all->SetBinContent(7,3.543262);
   BiasedDeltaPhi_all->SetBinContent(8,3.120898);
   BiasedDeltaPhi_all->SetBinContent(9,5.40637);
   BiasedDeltaPhi_all->SetBinContent(10,0.6028434);
   BiasedDeltaPhi_all->SetBinContent(11,0.2772626);
   BiasedDeltaPhi_all->SetBinContent(12,0.03547385);
   BiasedDeltaPhi_all->SetBinError(1,5528.404);
   BiasedDeltaPhi_all->SetBinError(2,4654.712);
   BiasedDeltaPhi_all->SetBinError(3,6373.775);
   BiasedDeltaPhi_all->SetBinError(4,1709.002);
   BiasedDeltaPhi_all->SetBinError(5,4.725721);
   BiasedDeltaPhi_all->SetBinError(6,1.009497);
   BiasedDeltaPhi_all->SetBinError(7,0.7848332);
   BiasedDeltaPhi_all->SetBinError(8,1.31449);
   BiasedDeltaPhi_all->SetBinError(9,4.014141);
   BiasedDeltaPhi_all->SetBinError(10,0.2950177);
   BiasedDeltaPhi_all->SetBinError(11,0.1397236);
   BiasedDeltaPhi_all->SetBinError(12,0.03547385);
   BiasedDeltaPhi_all->SetEntries(4197);
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
   gre->SetPoint(0,0.1308997,47478.76);
   gre->SetPointError(0,0.1308997,5528.389);
   gre->SetPoint(1,0.3926991,12670.8);
   gre->SetPointError(1,0.1308997,4654.704);
   gre->SetPoint(2,0.6544985,6667.505);
   gre->SetPointError(2,0.1308997,6373.768);
   gre->SetPoint(3,0.9162979,1708.986);
   gre->SetPointError(3,0.1308997,1708.986);
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
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all621 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all621","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all621->SetMinimum(58.30786);
   Graph_Graph_from_BiasedDeltaPhi_all621->SetMaximum(58307.86);
   Graph_Graph_from_BiasedDeltaPhi_all621->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all621->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all621->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all621);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.1308997,47717.25);
   gre->SetPointError(0,0.1308997,5528.404);
   gre->SetPoint(1,0.3926991,12794.12);
   gre->SetPointError(1,0.1308997,4654.712);
   gre->SetPoint(2,0.6544985,6765.309);
   gre->SetPointError(2,0.1308997,6373.775);
   gre->SetPoint(3,0.9162979,1744.73);
   gre->SetPointError(3,0.1308997,1709.002);
   gre->SetPoint(4,1.178097,16.40515);
   gre->SetPointError(4,0.1308997,4.725721);
   gre->SetPoint(5,1.439897,4.612454);
   gre->SetPointError(5,0.1308997,1.009497);
   gre->SetPoint(6,1.701696,3.543262);
   gre->SetPointError(6,0.1308997,0.7848332);
   gre->SetPoint(7,1.963495,3.120898);
   gre->SetPointError(7,0.1308997,1.31449);
   gre->SetPoint(8,2.225295,5.40637);
   gre->SetPointError(8,0.1308997,4.014141);
   gre->SetPoint(9,2.487094,0.6028434);
   gre->SetPointError(9,0.1308997,0.2950177);
   gre->SetPoint(10,2.748894,0.2772626);
   gre->SetPointError(10,0.1308997,0.1397236);
   gre->SetPoint(11,3.010693,0.03547385);
   gre->SetPointError(11,0.1308997,0.03547385);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all622 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all622","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all622->SetMinimum(0.01064215);
   Graph_Graph_from_BiasedDeltaPhi_all622->SetMaximum(58570.22);
   Graph_Graph_from_BiasedDeltaPhi_all622->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all622->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all622->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all622);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_275_325    Jet Multiplicity=all");
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
   Double_t xAxis3730[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3730);
   BiasedDeltaPhi_all->SetBinContent(1,368);
   BiasedDeltaPhi_all->SetBinContent(2,151);
   BiasedDeltaPhi_all->SetBinContent(3,76);
   BiasedDeltaPhi_all->SetBinContent(4,22);
   BiasedDeltaPhi_all->SetBinContent(5,16);
   BiasedDeltaPhi_all->SetBinContent(6,5);
   BiasedDeltaPhi_all->SetBinContent(7,8);
   BiasedDeltaPhi_all->SetBinContent(9,2);
   BiasedDeltaPhi_all->SetBinContent(11,1);
   BiasedDeltaPhi_all->SetBinError(1,19.18333);
   BiasedDeltaPhi_all->SetBinError(2,12.28821);
   BiasedDeltaPhi_all->SetBinError(3,8.717798);
   BiasedDeltaPhi_all->SetBinError(4,4.690416);
   BiasedDeltaPhi_all->SetBinError(5,4);
   BiasedDeltaPhi_all->SetBinError(6,2.49);
   BiasedDeltaPhi_all->SetBinError(7,3.03);
   BiasedDeltaPhi_all->SetBinError(9,2);
   BiasedDeltaPhi_all->SetBinError(11,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(477172.5);
   BiasedDeltaPhi_all->SetEntries(649);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->cd();
  
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
   Double_t xAxis3731[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3731);
   BiasedDeltaPhi_all->SetBinContent(1,0.007712096);
   BiasedDeltaPhi_all->SetBinContent(2,0.0118023);
   BiasedDeltaPhi_all->SetBinContent(3,0.01123378);
   BiasedDeltaPhi_all->SetBinContent(4,0.0126094);
   BiasedDeltaPhi_all->SetBinContent(5,0.9753037);
   BiasedDeltaPhi_all->SetBinContent(6,1.084022);
   BiasedDeltaPhi_all->SetBinContent(7,2.257807);
   BiasedDeltaPhi_all->SetBinContent(9,0.369934);
   BiasedDeltaPhi_all->SetBinContent(11,3.606689);
   BiasedDeltaPhi_all->SetBinError(1,0.1270447);
   BiasedDeltaPhi_all->SetBinError(2,0.3728069);
   BiasedDeltaPhi_all->SetBinError(3,0.9490836);
   BiasedDeltaPhi_all->SetBinError(4,1.002456);
   BiasedDeltaPhi_all->SetBinError(5,0.381419);
   BiasedDeltaPhi_all->SetBinError(6,0.5439716);
   BiasedDeltaPhi_all->SetBinError(7,0.4387641);
   BiasedDeltaPhi_all->SetBinError(9,1.245505);
   BiasedDeltaPhi_all->SetBinError(11,1.119801);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(3.86329);
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
   gre->SetPointError(0,0.1308997,0.1158576);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.3638165);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.9421262);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.9795221);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.2880633);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.2188632);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.2215002);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0.4211896);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0.7424835);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0.4893769);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,0.5039396);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,1);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all623 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all623","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all623->SetMinimum(0);
   Graph_Graph_from_BiasedDeltaPhi_all623->SetMaximum(2.2);
   Graph_Graph_from_BiasedDeltaPhi_all623->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all623->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all623->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all623);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3732[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis3732);
   BiasedDeltaPhi_all->SetBinContent(1,0.007712096);
   BiasedDeltaPhi_all->SetBinContent(2,0.0118023);
   BiasedDeltaPhi_all->SetBinContent(3,0.01123378);
   BiasedDeltaPhi_all->SetBinContent(4,0.0126094);
   BiasedDeltaPhi_all->SetBinContent(5,0.9753037);
   BiasedDeltaPhi_all->SetBinContent(6,1.084022);
   BiasedDeltaPhi_all->SetBinContent(7,2.257807);
   BiasedDeltaPhi_all->SetBinContent(9,0.369934);
   BiasedDeltaPhi_all->SetBinContent(11,3.606689);
   BiasedDeltaPhi_all->SetBinError(1,0.1270447);
   BiasedDeltaPhi_all->SetBinError(2,0.3728069);
   BiasedDeltaPhi_all->SetBinError(3,0.9490836);
   BiasedDeltaPhi_all->SetBinError(4,1.002456);
   BiasedDeltaPhi_all->SetBinError(5,0.381419);
   BiasedDeltaPhi_all->SetBinError(6,0.5439716);
   BiasedDeltaPhi_all->SetBinError(7,0.4387641);
   BiasedDeltaPhi_all->SetBinError(9,1.245505);
   BiasedDeltaPhi_all->SetBinError(11,1.119801);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(3.86329);
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
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->cd();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->Modified();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->cd();
   canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all->SetSelected(canvasbtag_morethanzero_275_325/BiasedDeltaPhi_all);
}
