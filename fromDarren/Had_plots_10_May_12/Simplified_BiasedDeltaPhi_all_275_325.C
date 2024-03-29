{
//=========Macro generated from canvas: canvas275_325/BiasedDeltaPhi_all/cannameBiasedDeltaPhi_all
//=========  (Thu May 10 12:22:32 2012) by ROOT version5.32/00
   TCanvas *canvas275_325/BiasedDeltaPhi_all = new TCanvas("canvas275_325/BiasedDeltaPhi_all", "cannameBiasedDeltaPhi_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas275_325/BiasedDeltaPhi_all->SetHighLightColor(2);
   canvas275_325/BiasedDeltaPhi_all->Range(0,0,1,1);
   canvas275_325/BiasedDeltaPhi_all->SetFillColor(0);
   canvas275_325/BiasedDeltaPhi_all->SetBorderMode(0);
   canvas275_325/BiasedDeltaPhi_all->SetBorderSize(2);
   canvas275_325/BiasedDeltaPhi_all->SetTickx(1);
   canvas275_325/BiasedDeltaPhi_all->SetTicky(1);
   canvas275_325/BiasedDeltaPhi_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-1.179135,3.534292,7.601919);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis234[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis234);
   BiasedDeltaPhi_all->SetBinContent(1,1878);
   BiasedDeltaPhi_all->SetBinContent(2,856);
   BiasedDeltaPhi_all->SetBinContent(3,328);
   BiasedDeltaPhi_all->SetBinContent(4,98);
   BiasedDeltaPhi_all->SetBinContent(5,70);
   BiasedDeltaPhi_all->SetBinContent(6,39);
   BiasedDeltaPhi_all->SetBinContent(7,24);
   BiasedDeltaPhi_all->SetBinContent(8,11);
   BiasedDeltaPhi_all->SetBinContent(9,12);
   BiasedDeltaPhi_all->SetBinContent(10,12);
   BiasedDeltaPhi_all->SetBinContent(11,2);
   BiasedDeltaPhi_all->SetBinContent(12,1);
   BiasedDeltaPhi_all->SetBinError(1,43.3359);
   BiasedDeltaPhi_all->SetBinError(2,29.25748);
   BiasedDeltaPhi_all->SetBinError(3,18.11077);
   BiasedDeltaPhi_all->SetBinError(4,9.899495);
   BiasedDeltaPhi_all->SetBinError(5,8.3666);
   BiasedDeltaPhi_all->SetBinError(6,6.244998);
   BiasedDeltaPhi_all->SetBinError(7,4.898979);
   BiasedDeltaPhi_all->SetBinError(8,3.316625);
   BiasedDeltaPhi_all->SetBinError(9,3.464102);
   BiasedDeltaPhi_all->SetBinError(10,3.464102);
   BiasedDeltaPhi_all->SetBinError(11,2);
   BiasedDeltaPhi_all->SetBinError(12,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(5294356);
   BiasedDeltaPhi_all->SetEntries(3331);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("");
   Double_t xAxis235[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis235);
   BiasedDeltaPhi_all->SetBinContent(1,111.3777);
   BiasedDeltaPhi_all->SetBinContent(2,85.40899);
   BiasedDeltaPhi_all->SetBinContent(3,76.08837);
   BiasedDeltaPhi_all->SetBinContent(4,48.30081);
   BiasedDeltaPhi_all->SetBinContent(5,28.4323);
   BiasedDeltaPhi_all->SetBinContent(6,19.18978);
   BiasedDeltaPhi_all->SetBinContent(7,13.9488);
   BiasedDeltaPhi_all->SetBinContent(8,9.12391);
   BiasedDeltaPhi_all->SetBinContent(9,6.869815);
   BiasedDeltaPhi_all->SetBinContent(10,3.890159);
   BiasedDeltaPhi_all->SetBinContent(11,1.256975);
   BiasedDeltaPhi_all->SetBinContent(12,0.2066313);
   BiasedDeltaPhi_all->SetBinError(1,4.642174);
   BiasedDeltaPhi_all->SetBinError(2,3.768752);
   BiasedDeltaPhi_all->SetBinError(3,3.617367);
   BiasedDeltaPhi_all->SetBinError(4,2.331787);
   BiasedDeltaPhi_all->SetBinError(5,1.922277);
   BiasedDeltaPhi_all->SetBinError(6,1.302683);
   BiasedDeltaPhi_all->SetBinError(7,1.216645);
   BiasedDeltaPhi_all->SetBinError(8,1.405523);
   BiasedDeltaPhi_all->SetBinError(9,0.7300769);
   BiasedDeltaPhi_all->SetBinError(10,0.5993159);
   BiasedDeltaPhi_all->SetBinError(11,0.2982956);
   BiasedDeltaPhi_all->SetBinError(12,0.117271);
   BiasedDeltaPhi_all->SetEntries(5327);
   BiasedDeltaPhi_all->SetLineColor(5);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   BiasedDeltaPhi_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_16 = new TH1F("_stack_16","",12,0,3.141593);
   _stack_16->SetMinimum(226.2566);
   _stack_16->SetMaximum(905026.2);
   _stack_16->SetDirectory(0);
   _stack_16->SetStats(0);
   _stack_16->GetXaxis()->SetLabelFont(42);
   _stack_16->GetXaxis()->SetLabelOffset(0.007);
   _stack_16->GetXaxis()->SetLabelSize(0.05);
   _stack_16->GetXaxis()->SetTitleSize(0.05);
   _stack_16->GetYaxis()->SetLabelFont(42);
   _stack_16->GetYaxis()->SetLabelOffset(0.007);
   _stack_16->GetYaxis()->SetLabelSize(0.05);
   _stack_16->GetZaxis()->SetLabelFont(42);
   _stack_16->GetZaxis()->SetLabelOffset(0.007);
   _stack_16->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_16);
   
   Double_t xAxis236[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis236);
   BiasedDeltaPhi_all->SetBinContent(1,803.3463);
   BiasedDeltaPhi_all->SetBinContent(2,431.4334);
   BiasedDeltaPhi_all->SetBinContent(3,384.2265);
   BiasedDeltaPhi_all->SetBinContent(4,151.2039);
   BiasedDeltaPhi_all->SetBinContent(5,92.71227);
   BiasedDeltaPhi_all->SetBinContent(6,47.78107);
   BiasedDeltaPhi_all->SetBinContent(7,27.30697);
   BiasedDeltaPhi_all->SetBinContent(8,20.73116);
   BiasedDeltaPhi_all->SetBinContent(9,15.61555);
   BiasedDeltaPhi_all->SetBinContent(10,6.700277);
   BiasedDeltaPhi_all->SetBinContent(11,1.283021);
   BiasedDeltaPhi_all->SetBinContent(12,0.2421051);
   BiasedDeltaPhi_all->SetBinError(1,54.84094);
   BiasedDeltaPhi_all->SetBinError(2,36.19074);
   BiasedDeltaPhi_all->SetBinError(3,55.94939);
   BiasedDeltaPhi_all->SetBinError(4,19.11673);
   BiasedDeltaPhi_all->SetBinError(5,14.50224);
   BiasedDeltaPhi_all->SetBinError(6,9.188119);
   BiasedDeltaPhi_all->SetBinError(7,6.575643);
   BiasedDeltaPhi_all->SetBinError(8,6.654148);
   BiasedDeltaPhi_all->SetBinError(9,5.585957);
   BiasedDeltaPhi_all->SetBinError(10,2.286652);
   BiasedDeltaPhi_all->SetBinError(11,0.2987101);
   BiasedDeltaPhi_all->SetBinError(12,0.1225189);
   BiasedDeltaPhi_all->SetEntries(11568);
   BiasedDeltaPhi_all->SetLineColor(3);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->SetMarkerColor(3);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis237[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis237);
   BiasedDeltaPhi_all->SetBinContent(1,528632.2);
   BiasedDeltaPhi_all->SetBinContent(2,83660.93);
   BiasedDeltaPhi_all->SetBinContent(3,26326.45);
   BiasedDeltaPhi_all->SetBinContent(4,1838.51);
   BiasedDeltaPhi_all->SetBinError(1,37009.15);
   BiasedDeltaPhi_all->SetBinError(2,17386.21);
   BiasedDeltaPhi_all->SetBinError(3,11387.76);
   BiasedDeltaPhi_all->SetBinError(4,1712.082);
   BiasedDeltaPhi_all->SetEntries(5094);
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
   Double_t xAxis238[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis238);
   BiasedDeltaPhi_all->SetBinContent(1,1878);
   BiasedDeltaPhi_all->SetBinContent(2,856);
   BiasedDeltaPhi_all->SetBinContent(3,328);
   BiasedDeltaPhi_all->SetBinContent(4,98);
   BiasedDeltaPhi_all->SetBinContent(5,70);
   BiasedDeltaPhi_all->SetBinContent(6,39);
   BiasedDeltaPhi_all->SetBinContent(7,24);
   BiasedDeltaPhi_all->SetBinContent(8,11);
   BiasedDeltaPhi_all->SetBinContent(9,12);
   BiasedDeltaPhi_all->SetBinContent(10,12);
   BiasedDeltaPhi_all->SetBinContent(11,2);
   BiasedDeltaPhi_all->SetBinContent(12,1);
   BiasedDeltaPhi_all->SetBinError(1,43.3359);
   BiasedDeltaPhi_all->SetBinError(2,29.25748);
   BiasedDeltaPhi_all->SetBinError(3,18.11077);
   BiasedDeltaPhi_all->SetBinError(4,9.899495);
   BiasedDeltaPhi_all->SetBinError(5,8.3666);
   BiasedDeltaPhi_all->SetBinError(6,6.244998);
   BiasedDeltaPhi_all->SetBinError(7,4.898979);
   BiasedDeltaPhi_all->SetBinError(8,3.316625);
   BiasedDeltaPhi_all->SetBinError(9,3.464102);
   BiasedDeltaPhi_all->SetBinError(10,3.464102);
   BiasedDeltaPhi_all->SetBinError(11,2);
   BiasedDeltaPhi_all->SetBinError(12,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(5294356);
   BiasedDeltaPhi_all->SetEntries(3331);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PSAME");
   u->Modified();
   canvas275_325/BiasedDeltaPhi_all->cd();
  
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
   Double_t xAxis239[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis239);
   BiasedDeltaPhi_all->SetBinContent(1,2.337721);
   BiasedDeltaPhi_all->SetBinContent(2,1.984084);
   BiasedDeltaPhi_all->SetBinContent(3,0.8536632);
   BiasedDeltaPhi_all->SetBinContent(4,0.6481314);
   BiasedDeltaPhi_all->SetBinContent(5,0.7550241);
   BiasedDeltaPhi_all->SetBinContent(6,0.8162229);
   BiasedDeltaPhi_all->SetBinContent(7,0.8788963);
   BiasedDeltaPhi_all->SetBinContent(8,0.5306021);
   BiasedDeltaPhi_all->SetBinContent(9,0.7684649);
   BiasedDeltaPhi_all->SetBinContent(10,1.790971);
   BiasedDeltaPhi_all->SetBinContent(11,1.558821);
   BiasedDeltaPhi_all->SetBinContent(12,4.130437);
   BiasedDeltaPhi_all->SetBinError(1,0.07206023);
   BiasedDeltaPhi_all->SetBinError(2,0.09058089);
   BiasedDeltaPhi_all->SetBinError(3,0.1557328);
   BiasedDeltaPhi_all->SetBinError(4,0.1618291);
   BiasedDeltaPhi_all->SetBinError(5,0.1968592);
   BiasedDeltaPhi_all->SetBinError(6,0.2502376);
   BiasedDeltaPhi_all->SetBinError(7,0.3156794);
   BiasedDeltaPhi_all->SetBinError(8,0.4403781);
   BiasedDeltaPhi_all->SetBinError(9,0.4596686);
   BiasedDeltaPhi_all->SetBinError(10,0.4469939);
   BiasedDeltaPhi_all->SetBinError(11,1.026744);
   BiasedDeltaPhi_all->SetBinError(12,1.120756);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(11.61291);
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
   gre->SetPointError(0,0.1308997,0.06826563);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.08388489);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.1456156);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.1264302);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.156422);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.1922962);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.2408045);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0.3209732);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0.3577176);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0.3412773);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,0.2328178);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,0.5060564);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all40 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all40","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all40->SetMinimum(0.3927323);
   Graph_Graph_from_BiasedDeltaPhi_all40->SetMaximum(1.607268);
   Graph_Graph_from_BiasedDeltaPhi_all40->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all40->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all40->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all40);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis240[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis240);
   BiasedDeltaPhi_all->SetBinContent(1,2.337721);
   BiasedDeltaPhi_all->SetBinContent(2,1.984084);
   BiasedDeltaPhi_all->SetBinContent(3,0.8536632);
   BiasedDeltaPhi_all->SetBinContent(4,0.6481314);
   BiasedDeltaPhi_all->SetBinContent(5,0.7550241);
   BiasedDeltaPhi_all->SetBinContent(6,0.8162229);
   BiasedDeltaPhi_all->SetBinContent(7,0.8788963);
   BiasedDeltaPhi_all->SetBinContent(8,0.5306021);
   BiasedDeltaPhi_all->SetBinContent(9,0.7684649);
   BiasedDeltaPhi_all->SetBinContent(10,1.790971);
   BiasedDeltaPhi_all->SetBinContent(11,1.558821);
   BiasedDeltaPhi_all->SetBinContent(12,4.130437);
   BiasedDeltaPhi_all->SetBinError(1,0.07206023);
   BiasedDeltaPhi_all->SetBinError(2,0.09058089);
   BiasedDeltaPhi_all->SetBinError(3,0.1557328);
   BiasedDeltaPhi_all->SetBinError(4,0.1618291);
   BiasedDeltaPhi_all->SetBinError(5,0.1968592);
   BiasedDeltaPhi_all->SetBinError(6,0.2502376);
   BiasedDeltaPhi_all->SetBinError(7,0.3156794);
   BiasedDeltaPhi_all->SetBinError(8,0.4403781);
   BiasedDeltaPhi_all->SetBinError(9,0.4596686);
   BiasedDeltaPhi_all->SetBinError(10,0.4469939);
   BiasedDeltaPhi_all->SetBinError(11,1.026744);
   BiasedDeltaPhi_all->SetBinError(12,1.120756);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(11.61291);
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
   canvas275_325/BiasedDeltaPhi_all->cd();
   canvas275_325/BiasedDeltaPhi_all->Modified();
   canvas275_325/BiasedDeltaPhi_all->cd();
   canvas275_325/BiasedDeltaPhi_all->SetSelected(canvas275_325/BiasedDeltaPhi_all);
}
