{
//=========Macro generated from canvas: canvasOneMuon_875/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:07:23 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_875/JetMultiplicity_all = new TCanvas("canvasOneMuon_875/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_875/JetMultiplicity_all->SetHighLightColor(2);
   canvasOneMuon_875/JetMultiplicity_all->Range(0,0,1,1);
   canvasOneMuon_875/JetMultiplicity_all->SetFillColor(0);
   canvasOneMuon_875/JetMultiplicity_all->SetBorderMode(0);
   canvasOneMuon_875/JetMultiplicity_all->SetBorderSize(2);
   canvasOneMuon_875/JetMultiplicity_all->SetTickx(1);
   canvasOneMuon_875/JetMultiplicity_all->SetTicky(1);
   canvasOneMuon_875/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.6935771,16.875,3.231894);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2233[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2233);
   JetMultiplicity_all->SetBinContent(3,6);
   JetMultiplicity_all->SetBinContent(4,9);
   JetMultiplicity_all->SetBinContent(5,29);
   JetMultiplicity_all->SetBinContent(6,17);
   JetMultiplicity_all->SetBinContent(7,3);
   JetMultiplicity_all->SetBinContent(8,3);
   JetMultiplicity_all->SetBinContent(9,1);
   JetMultiplicity_all->SetBinError(3,2.68);
   JetMultiplicity_all->SetBinError(4,3.19);
   JetMultiplicity_all->SetBinError(5,5.385165);
   JetMultiplicity_all->SetBinError(6,4.123106);
   JetMultiplicity_all->SetBinError(7,2.14);
   JetMultiplicity_all->SetBinError(8,2.14);
   JetMultiplicity_all->SetBinError(9,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(690.7911);
   JetMultiplicity_all->SetEntries(68);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_149 = new TH1F("_stack_149","",15,0,15);
   _stack_149->SetMinimum(0.02763164);
   _stack_149->SetMaximum(110.5266);
   _stack_149->SetDirectory(0);
   _stack_149->SetStats(0);
   _stack_149->GetXaxis()->SetLabelFont(42);
   _stack_149->GetXaxis()->SetLabelOffset(0.007);
   _stack_149->GetXaxis()->SetLabelSize(0.05);
   _stack_149->GetXaxis()->SetTitleSize(0.05);
   _stack_149->GetYaxis()->SetLabelFont(42);
   _stack_149->GetYaxis()->SetLabelOffset(0.007);
   _stack_149->GetYaxis()->SetLabelSize(0.05);
   _stack_149->GetZaxis()->SetLabelFont(42);
   _stack_149->GetZaxis()->SetLabelOffset(0.007);
   _stack_149->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_149);
   
   Double_t xAxis2234[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2234);
   JetMultiplicity_all->SetFillColor(5);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis2235[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2235);
   JetMultiplicity_all->SetBinContent(3,0.1296201);
   JetMultiplicity_all->SetBinContent(4,0.1074494);
   JetMultiplicity_all->SetBinContent(6,0.1074494);
   JetMultiplicity_all->SetBinError(3,0.1296201);
   JetMultiplicity_all->SetBinError(4,0.1074494);
   JetMultiplicity_all->SetBinError(6,0.1074494);
   JetMultiplicity_all->SetEntries(3);
   JetMultiplicity_all->SetFillColor(7);
   JetMultiplicity_all->SetLineColor(7);
   JetMultiplicity_all->SetLineStyle(10);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis2236[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2236);
   JetMultiplicity_all->SetBinContent(3,0.1480083);
   JetMultiplicity_all->SetBinContent(4,0.1947335);
   JetMultiplicity_all->SetBinContent(5,0.2120057);
   JetMultiplicity_all->SetBinContent(6,0.01655682);
   JetMultiplicity_all->SetBinError(3,0.07415485);
   JetMultiplicity_all->SetBinError(4,0.07859694);
   JetMultiplicity_all->SetBinError(5,0.0867341);
   JetMultiplicity_all->SetBinError(6,0.01655682);
   JetMultiplicity_all->SetEntries(23);
   JetMultiplicity_all->SetFillColor(44);
   JetMultiplicity_all->SetLineColor(44);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis2237[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2237);
   JetMultiplicity_all->SetBinContent(3,1.181549);
   JetMultiplicity_all->SetBinContent(4,1.559505);
   JetMultiplicity_all->SetBinContent(5,0.7651958);
   JetMultiplicity_all->SetBinContent(6,0.150061);
   JetMultiplicity_all->SetBinContent(7,0.4870903);
   JetMultiplicity_all->SetBinError(3,0.731205);
   JetMultiplicity_all->SetBinError(4,0.8161084);
   JetMultiplicity_all->SetBinError(5,0.5608918);
   JetMultiplicity_all->SetBinError(6,0.150061);
   JetMultiplicity_all->SetBinError(7,0.4870903);
   JetMultiplicity_all->SetEntries(12);
   JetMultiplicity_all->SetFillColor(6);
   JetMultiplicity_all->SetLineColor(6);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis2238[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2238);
   JetMultiplicity_all->SetBinContent(3,0.4355733);
   JetMultiplicity_all->SetBinContent(4,1.147799);
   JetMultiplicity_all->SetBinContent(5,1.282826);
   JetMultiplicity_all->SetBinContent(6,0.8675895);
   JetMultiplicity_all->SetBinContent(7,0.3136044);
   JetMultiplicity_all->SetBinContent(8,0.1404815);
   JetMultiplicity_all->SetBinError(3,0.1555044);
   JetMultiplicity_all->SetBinError(4,0.2441628);
   JetMultiplicity_all->SetBinError(5,0.2414834);
   JetMultiplicity_all->SetBinError(6,0.2114678);
   JetMultiplicity_all->SetBinError(7,0.1217584);
   JetMultiplicity_all->SetBinError(8,0.1044929);
   JetMultiplicity_all->SetEntries(100);
   JetMultiplicity_all->SetFillColor(40);
   JetMultiplicity_all->SetLineColor(40);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis2239[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2239);
   JetMultiplicity_all->SetBinContent(3,3.130239);
   JetMultiplicity_all->SetBinContent(4,5.401667);
   JetMultiplicity_all->SetBinContent(5,9.935298);
   JetMultiplicity_all->SetBinContent(6,10.67286);
   JetMultiplicity_all->SetBinContent(7,13.24467);
   JetMultiplicity_all->SetBinContent(8,6.13757);
   JetMultiplicity_all->SetBinContent(9,0.9076345);
   JetMultiplicity_all->SetBinContent(10,0.7241417);
   JetMultiplicity_all->SetBinContent(11,0.3192624);
   JetMultiplicity_all->SetBinError(3,0.9491036);
   JetMultiplicity_all->SetBinError(4,1.206212);
   JetMultiplicity_all->SetBinError(5,1.528793);
   JetMultiplicity_all->SetBinError(6,1.647703);
   JetMultiplicity_all->SetBinError(7,1.957415);
   JetMultiplicity_all->SetBinError(8,1.336918);
   JetMultiplicity_all->SetBinError(9,0.4355446);
   JetMultiplicity_all->SetBinError(10,0.4483447);
   JetMultiplicity_all->SetBinError(11,0.2553901);
   JetMultiplicity_all->SetEntries(267);
   JetMultiplicity_all->SetFillColor(2);
   JetMultiplicity_all->SetLineColor(2);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis2240[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2240);
   JetMultiplicity_all->SetBinContent(3,64.05412);
   JetMultiplicity_all->SetBinContent(4,55.51945);
   JetMultiplicity_all->SetBinContent(5,28.80599);
   JetMultiplicity_all->SetBinContent(6,10.96487);
   JetMultiplicity_all->SetBinContent(7,3.110083);
   JetMultiplicity_all->SetBinContent(8,0.3596942);
   JetMultiplicity_all->SetBinContent(10,0.1039938);
   JetMultiplicity_all->SetBinError(3,1.956107);
   JetMultiplicity_all->SetBinError(4,1.859653);
   JetMultiplicity_all->SetBinError(5,1.372054);
   JetMultiplicity_all->SetBinError(6,0.8588254);
   JetMultiplicity_all->SetBinError(7,0.4436152);
   JetMultiplicity_all->SetBinError(8,0.1394813);
   JetMultiplicity_all->SetBinError(10,0.1039938);
   JetMultiplicity_all->SetEntries(3600);
   JetMultiplicity_all->SetFillColor(4);
   JetMultiplicity_all->SetLineColor(4);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
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
   TLegendEntry *entry=leg->AddEntry("JetMultiplicity_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("JetMultiplicity_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis2241[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2241);
   JetMultiplicity_all->SetBinContent(3,6);
   JetMultiplicity_all->SetBinContent(4,9);
   JetMultiplicity_all->SetBinContent(5,29);
   JetMultiplicity_all->SetBinContent(6,17);
   JetMultiplicity_all->SetBinContent(7,3);
   JetMultiplicity_all->SetBinContent(8,3);
   JetMultiplicity_all->SetBinContent(9,1);
   JetMultiplicity_all->SetBinError(3,2.68);
   JetMultiplicity_all->SetBinError(4,3.19);
   JetMultiplicity_all->SetBinError(5,5.385165);
   JetMultiplicity_all->SetBinError(6,4.123106);
   JetMultiplicity_all->SetBinError(7,2.14);
   JetMultiplicity_all->SetBinError(8,2.14);
   JetMultiplicity_all->SetBinError(9,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(690.7911);
   JetMultiplicity_all->SetEntries(68);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_875    Jet Multiplicity=all");
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
   canvasOneMuon_875/JetMultiplicity_all->cd();
  
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
   Double_t xAxis2242[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2242);
   JetMultiplicity_all->SetBinContent(3,0.08685694);
   JetMultiplicity_all->SetBinContent(4,0.1407777);
   JetMultiplicity_all->SetBinContent(5,0.7072943);
   JetMultiplicity_all->SetBinContent(6,0.7462888);
   JetMultiplicity_all->SetBinContent(7,0.1748715);
   JetMultiplicity_all->SetBinContent(8,0.4519607);
   JetMultiplicity_all->SetBinContent(9,1.101765);
   JetMultiplicity_all->SetBinError(3,0.4479102);
   JetMultiplicity_all->SetBinError(4,0.3563915);
   JetMultiplicity_all->SetBinError(5,0.1929227);
   JetMultiplicity_all->SetBinError(6,0.2561823);
   JetMultiplicity_all->SetBinError(7,0.7234557);
   JetMultiplicity_all->SetBinError(8,0.7416875);
   JetMultiplicity_all->SetBinError(9,1.109177);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(6.916671);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicity_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicity_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicity_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicity_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicity_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicity_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicity_all");
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
   gre->SetPointError(2,0.5,0.03335269);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.03720232);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.05231056);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.08249762);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.1205973);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.2031156);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,0.4798679);
   gre->SetPoint(9,9.5,1);
   gre->SetPointError(9,0.5,0.5557635);
   gre->SetPoint(10,10.5,1);
   gre->SetPointError(10,0.5,0.799938);
   gre->SetPoint(11,11.5,1);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,1);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,1);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,1);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicity_all374 = new TH1F("Graph_Graph_from_JetMultiplicity_all374","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all374->SetMinimum(0.04007443);
   Graph_Graph_from_JetMultiplicity_all374->SetMaximum(1.959926);
   Graph_Graph_from_JetMultiplicity_all374->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all374->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all374->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all374->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all374->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all374->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all374->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all374->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all374->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all374->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all374->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all374->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all374);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2243[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2243);
   JetMultiplicity_all->SetBinContent(3,0.08685694);
   JetMultiplicity_all->SetBinContent(4,0.1407777);
   JetMultiplicity_all->SetBinContent(5,0.7072943);
   JetMultiplicity_all->SetBinContent(6,0.7462888);
   JetMultiplicity_all->SetBinContent(7,0.1748715);
   JetMultiplicity_all->SetBinContent(8,0.4519607);
   JetMultiplicity_all->SetBinContent(9,1.101765);
   JetMultiplicity_all->SetBinError(3,0.4479102);
   JetMultiplicity_all->SetBinError(4,0.3563915);
   JetMultiplicity_all->SetBinError(5,0.1929227);
   JetMultiplicity_all->SetBinError(6,0.2561823);
   JetMultiplicity_all->SetBinError(7,0.7234557);
   JetMultiplicity_all->SetBinError(8,0.7416875);
   JetMultiplicity_all->SetBinError(9,1.109177);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(6.916671);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicity_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicity_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicity_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicity_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicity_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicity_all->Draw("PSAME");
   d->Modified();
   canvasOneMuon_875/JetMultiplicity_all->cd();
   canvasOneMuon_875/JetMultiplicity_all->Modified();
   canvasOneMuon_875/JetMultiplicity_all->cd();
   canvasOneMuon_875/JetMultiplicity_all->SetSelected(canvasOneMuon_875/JetMultiplicity_all);
}
