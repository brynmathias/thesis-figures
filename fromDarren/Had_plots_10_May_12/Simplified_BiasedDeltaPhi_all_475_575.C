{
//=========Macro generated from canvas: canvas475_575/BiasedDeltaPhi_all/cannameBiasedDeltaPhi_all
//=========  (Thu May 10 12:23:28 2012) by ROOT version5.32/00
   TCanvas *canvas475_575/BiasedDeltaPhi_all = new TCanvas("canvas475_575/BiasedDeltaPhi_all", "cannameBiasedDeltaPhi_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas475_575/BiasedDeltaPhi_all->SetHighLightColor(2);
   canvas475_575/BiasedDeltaPhi_all->Range(0,0,1,1);
   canvas475_575/BiasedDeltaPhi_all->SetFillColor(0);
   canvas475_575/BiasedDeltaPhi_all->SetBorderMode(0);
   canvas475_575/BiasedDeltaPhi_all->SetBorderSize(2);
   canvas475_575/BiasedDeltaPhi_all->SetTickx(1);
   canvas475_575/BiasedDeltaPhi_all->SetTicky(1);
   canvas475_575/BiasedDeltaPhi_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-1.032169,3.534292,6.279222);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1794[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis1794);
   BiasedDeltaPhi_all->SetBinContent(1,2770);
   BiasedDeltaPhi_all->SetBinContent(2,264);
   BiasedDeltaPhi_all->SetBinContent(3,44);
   BiasedDeltaPhi_all->SetBinContent(4,14);
   BiasedDeltaPhi_all->SetBinContent(5,9);
   BiasedDeltaPhi_all->SetBinContent(6,4);
   BiasedDeltaPhi_all->SetBinContent(7,4);
   BiasedDeltaPhi_all->SetBinContent(8,3);
   BiasedDeltaPhi_all->SetBinContent(9,1);
   BiasedDeltaPhi_all->SetBinError(1,52.63079);
   BiasedDeltaPhi_all->SetBinError(2,16.24808);
   BiasedDeltaPhi_all->SetBinError(3,6.63325);
   BiasedDeltaPhi_all->SetBinError(4,3.741657);
   BiasedDeltaPhi_all->SetBinError(5,3.19);
   BiasedDeltaPhi_all->SetBinError(6,2.3);
   BiasedDeltaPhi_all->SetBinError(7,2.3);
   BiasedDeltaPhi_all->SetBinError(8,2.14);
   BiasedDeltaPhi_all->SetBinError(9,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(353250.8);
   BiasedDeltaPhi_all->SetEntries(3113);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("");
   Double_t xAxis1795[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis1795);
   BiasedDeltaPhi_all->SetBinContent(1,41.96953);
   BiasedDeltaPhi_all->SetBinContent(2,24.83716);
   BiasedDeltaPhi_all->SetBinContent(3,20.4586);
   BiasedDeltaPhi_all->SetBinContent(4,11.8799);
   BiasedDeltaPhi_all->SetBinContent(5,5.03811);
   BiasedDeltaPhi_all->SetBinContent(6,3.095337);
   BiasedDeltaPhi_all->SetBinContent(7,2.494537);
   BiasedDeltaPhi_all->SetBinContent(8,1.033519);
   BiasedDeltaPhi_all->SetBinContent(9,0.77296);
   BiasedDeltaPhi_all->SetBinContent(10,0.6525756);
   BiasedDeltaPhi_all->SetBinContent(11,0.3812938);
   BiasedDeltaPhi_all->SetBinError(1,2.759829);
   BiasedDeltaPhi_all->SetBinError(2,1.891798);
   BiasedDeltaPhi_all->SetBinError(3,1.284054);
   BiasedDeltaPhi_all->SetBinError(4,1.28305);
   BiasedDeltaPhi_all->SetBinError(5,0.6696495);
   BiasedDeltaPhi_all->SetBinError(6,0.4734292);
   BiasedDeltaPhi_all->SetBinError(7,0.4705126);
   BiasedDeltaPhi_all->SetBinError(8,0.316494);
   BiasedDeltaPhi_all->SetBinError(9,0.229773);
   BiasedDeltaPhi_all->SetBinError(10,0.2375339);
   BiasedDeltaPhi_all->SetBinError(11,0.1563895);
   BiasedDeltaPhi_all->SetEntries(1569);
   BiasedDeltaPhi_all->SetLineColor(5);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_120 = new TH1F("_stack_120","",12,0,3.141593);
   _stack_120->SetMinimum(14.79388);
   _stack_120->SetMaximum(59175.52);
   _stack_120->SetDirectory(0);
   _stack_120->SetStats(0);
   _stack_120->GetXaxis()->SetLabelFont(42);
   _stack_120->GetXaxis()->SetLabelOffset(0.007);
   _stack_120->GetXaxis()->SetLabelSize(0.05);
   _stack_120->GetXaxis()->SetTitleSize(0.05);
   _stack_120->GetYaxis()->SetLabelFont(42);
   _stack_120->GetYaxis()->SetLabelOffset(0.007);
   _stack_120->GetYaxis()->SetLabelSize(0.05);
   _stack_120->GetZaxis()->SetLabelFont(42);
   _stack_120->GetZaxis()->SetLabelOffset(0.007);
   _stack_120->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_120);
   
   Double_t xAxis1796[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis1796);
   BiasedDeltaPhi_all->SetBinContent(1,304.0847);
   BiasedDeltaPhi_all->SetBinContent(2,103.4793);
   BiasedDeltaPhi_all->SetBinContent(3,58.39737);
   BiasedDeltaPhi_all->SetBinContent(4,23.56903);
   BiasedDeltaPhi_all->SetBinContent(5,8.983523);
   BiasedDeltaPhi_all->SetBinContent(6,4.722254);
   BiasedDeltaPhi_all->SetBinContent(7,3.168417);
   BiasedDeltaPhi_all->SetBinContent(8,1.493265);
   BiasedDeltaPhi_all->SetBinContent(9,1.06911);
   BiasedDeltaPhi_all->SetBinContent(10,0.8144114);
   BiasedDeltaPhi_all->SetBinContent(11,0.4270794);
   BiasedDeltaPhi_all->SetBinError(1,10.20929);
   BiasedDeltaPhi_all->SetBinError(2,4.204942);
   BiasedDeltaPhi_all->SetBinError(3,2.605305);
   BiasedDeltaPhi_all->SetBinError(4,1.761373);
   BiasedDeltaPhi_all->SetBinError(5,0.8957204);
   BiasedDeltaPhi_all->SetBinError(6,0.7045808);
   BiasedDeltaPhi_all->SetBinError(7,0.5136785);
   BiasedDeltaPhi_all->SetBinError(8,0.3527366);
   BiasedDeltaPhi_all->SetBinError(9,0.2671032);
   BiasedDeltaPhi_all->SetBinError(10,0.2545612);
   BiasedDeltaPhi_all->SetBinError(11,0.162954);
   BiasedDeltaPhi_all->SetEntries(6214);
   BiasedDeltaPhi_all->SetLineColor(3);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->SetMarkerColor(3);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis1797[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis1797);
   BiasedDeltaPhi_all->SetBinContent(1,35020.99);
   BiasedDeltaPhi_all->SetBinContent(2,2178.75);
   BiasedDeltaPhi_all->SetBinError(1,1963.708);
   BiasedDeltaPhi_all->SetBinError(2,1094.176);
   BiasedDeltaPhi_all->SetEntries(6422);
   BiasedDeltaPhi_all->SetLineColor(7);
   BiasedDeltaPhi_all->SetLineStyle(10);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   ->Draw("samehist");
   
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
   entry=leg->AddEntry("BiasedDeltaPhi_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","Combined EWK","L");
   entry->SetLineColor(3);
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"475_575    Jet Multiplicity=all");
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
   Double_t xAxis1798[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis1798);
   BiasedDeltaPhi_all->SetBinContent(1,2770);
   BiasedDeltaPhi_all->SetBinContent(2,264);
   BiasedDeltaPhi_all->SetBinContent(3,44);
   BiasedDeltaPhi_all->SetBinContent(4,14);
   BiasedDeltaPhi_all->SetBinContent(5,9);
   BiasedDeltaPhi_all->SetBinContent(6,4);
   BiasedDeltaPhi_all->SetBinContent(7,4);
   BiasedDeltaPhi_all->SetBinContent(8,3);
   BiasedDeltaPhi_all->SetBinContent(9,1);
   BiasedDeltaPhi_all->SetBinError(1,52.63079);
   BiasedDeltaPhi_all->SetBinError(2,16.24808);
   BiasedDeltaPhi_all->SetBinError(3,6.63325);
   BiasedDeltaPhi_all->SetBinError(4,3.741657);
   BiasedDeltaPhi_all->SetBinError(5,3.19);
   BiasedDeltaPhi_all->SetBinError(6,2.3);
   BiasedDeltaPhi_all->SetBinError(7,2.3);
   BiasedDeltaPhi_all->SetBinError(8,2.14);
   BiasedDeltaPhi_all->SetBinError(9,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(353250.8);
   BiasedDeltaPhi_all->SetEntries(3113);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PSAME");
   u->Modified();
   canvas475_575/BiasedDeltaPhi_all->cd();
  
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
   Double_t xAxis1799[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis1799);
   BiasedDeltaPhi_all->SetBinContent(1,9.109303);
   BiasedDeltaPhi_all->SetBinContent(2,2.551235);
   BiasedDeltaPhi_all->SetBinContent(3,0.7534586);
   BiasedDeltaPhi_all->SetBinContent(4,0.5939999);
   BiasedDeltaPhi_all->SetBinContent(5,1.001834);
   BiasedDeltaPhi_all->SetBinContent(6,0.8470531);
   BiasedDeltaPhi_all->SetBinContent(7,1.26246);
   BiasedDeltaPhi_all->SetBinContent(8,2.009021);
   BiasedDeltaPhi_all->SetBinContent(9,0.9353576);
   BiasedDeltaPhi_all->SetBinError(1,0.03857737);
   BiasedDeltaPhi_all->SetBinError(2,0.07375045);
   BiasedDeltaPhi_all->SetBinError(3,0.1572184);
   BiasedDeltaPhi_all->SetBinError(4,0.2775131);
   BiasedDeltaPhi_all->SetBinError(5,0.3682015);
   BiasedDeltaPhi_all->SetBinError(6,0.5940429);
   BiasedDeltaPhi_all->SetBinError(7,0.5974189);
   BiasedDeltaPhi_all->SetBinError(8,0.7514277);
   BiasedDeltaPhi_all->SetBinError(9,1.030737);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(83.22647);
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
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.1308997,1);
   gre->SetPointError(0,0.1308997,0.03357383);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.04063558);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.04461341);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.07473254);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.09970703);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.1492043);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.1621246);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0.2362184);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0.249837);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0.3125708);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,0.3815543);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,0);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all300 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all300","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all300->SetMinimum(0.5421348);
   Graph_Graph_from_BiasedDeltaPhi_all300->SetMaximum(1.457865);
   Graph_Graph_from_BiasedDeltaPhi_all300->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all300->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all300->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all300);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1800[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis1800);
   BiasedDeltaPhi_all->SetBinContent(1,9.109303);
   BiasedDeltaPhi_all->SetBinContent(2,2.551235);
   BiasedDeltaPhi_all->SetBinContent(3,0.7534586);
   BiasedDeltaPhi_all->SetBinContent(4,0.5939999);
   BiasedDeltaPhi_all->SetBinContent(5,1.001834);
   BiasedDeltaPhi_all->SetBinContent(6,0.8470531);
   BiasedDeltaPhi_all->SetBinContent(7,1.26246);
   BiasedDeltaPhi_all->SetBinContent(8,2.009021);
   BiasedDeltaPhi_all->SetBinContent(9,0.9353576);
   BiasedDeltaPhi_all->SetBinError(1,0.03857737);
   BiasedDeltaPhi_all->SetBinError(2,0.07375045);
   BiasedDeltaPhi_all->SetBinError(3,0.1572184);
   BiasedDeltaPhi_all->SetBinError(4,0.2775131);
   BiasedDeltaPhi_all->SetBinError(5,0.3682015);
   BiasedDeltaPhi_all->SetBinError(6,0.5940429);
   BiasedDeltaPhi_all->SetBinError(7,0.5974189);
   BiasedDeltaPhi_all->SetBinError(8,0.7514277);
   BiasedDeltaPhi_all->SetBinError(9,1.030737);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(83.22647);
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
   canvas475_575/BiasedDeltaPhi_all->cd();
   canvas475_575/BiasedDeltaPhi_all->Modified();
   canvas475_575/BiasedDeltaPhi_all->cd();
   canvas475_575/BiasedDeltaPhi_all->SetSelected(canvas475_575/BiasedDeltaPhi_all);
}
