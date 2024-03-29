{
//=========Macro generated from canvas: canvasOneMuon_275_325/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:07:27 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_275_325/AlphaT_Zoomed_all = new TCanvas("canvasOneMuon_275_325/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_275_325/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasOneMuon_275_325/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasOneMuon_275_325/AlphaT_Zoomed_all->SetFillColor(0);
   canvasOneMuon_275_325/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasOneMuon_275_325/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasOneMuon_275_325/AlphaT_Zoomed_all->SetTickx(1);
   canvasOneMuon_275_325/AlphaT_Zoomed_all->SetTicky(1);
   canvasOneMuon_275_325/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-0.8417328,0.61875,4.565295);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2364[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2364);
   AlphaT_Zoomed_all->SetBinContent(0,176);
   AlphaT_Zoomed_all->SetBinContent(1,8);
   AlphaT_Zoomed_all->SetBinContent(2,22);
   AlphaT_Zoomed_all->SetBinContent(3,35);
   AlphaT_Zoomed_all->SetBinContent(4,38);
   AlphaT_Zoomed_all->SetBinContent(5,70);
   AlphaT_Zoomed_all->SetBinContent(6,77);
   AlphaT_Zoomed_all->SetBinContent(7,109);
   AlphaT_Zoomed_all->SetBinContent(8,122);
   AlphaT_Zoomed_all->SetBinContent(9,149);
   AlphaT_Zoomed_all->SetBinContent(10,108);
   AlphaT_Zoomed_all->SetBinContent(11,117);
   AlphaT_Zoomed_all->SetBinContent(12,103);
   AlphaT_Zoomed_all->SetBinContent(13,944);
   AlphaT_Zoomed_all->SetBinError(0,13.2665);
   AlphaT_Zoomed_all->SetBinError(1,3.03);
   AlphaT_Zoomed_all->SetBinError(2,4.690416);
   AlphaT_Zoomed_all->SetBinError(3,5.91608);
   AlphaT_Zoomed_all->SetBinError(4,6.164414);
   AlphaT_Zoomed_all->SetBinError(5,8.3666);
   AlphaT_Zoomed_all->SetBinError(6,8.774964);
   AlphaT_Zoomed_all->SetBinError(7,10.44031);
   AlphaT_Zoomed_all->SetBinError(8,11.04536);
   AlphaT_Zoomed_all->SetBinError(9,12.20656);
   AlphaT_Zoomed_all->SetBinError(10,10.3923);
   AlphaT_Zoomed_all->SetBinError(11,10.81665);
   AlphaT_Zoomed_all->SetBinError(12,10.14889);
   AlphaT_Zoomed_all->SetBinError(13,30.72458);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(10582.6);
   AlphaT_Zoomed_all->SetEntries(2078);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("");
   Double_t xAxis2365[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2365);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_158 = new TH1F("_stack_158","",12,0.45,0.6);
   _stack_158->SetMinimum(0.4287796);
   _stack_158->SetMaximum(1715.118);
   _stack_158->SetDirectory(0);
   _stack_158->SetStats(0);
   _stack_158->GetXaxis()->SetLabelFont(42);
   _stack_158->GetXaxis()->SetLabelOffset(0.007);
   _stack_158->GetXaxis()->SetLabelSize(0.05);
   _stack_158->GetXaxis()->SetTitleSize(0.05);
   _stack_158->GetYaxis()->SetLabelFont(42);
   _stack_158->GetYaxis()->SetLabelOffset(0.007);
   _stack_158->GetYaxis()->SetLabelSize(0.05);
   _stack_158->GetZaxis()->SetLabelFont(42);
   _stack_158->GetZaxis()->SetLabelOffset(0.007);
   _stack_158->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_158);
   
   Double_t xAxis2366[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2366);
   AlphaT_Zoomed_all->SetBinContent(0,2645.613);
   AlphaT_Zoomed_all->SetBinContent(1,595.3598);
   AlphaT_Zoomed_all->SetBinContent(2,681.6141);
   AlphaT_Zoomed_all->SetBinContent(3,758.7698);
   AlphaT_Zoomed_all->SetBinContent(4,1008.515);
   AlphaT_Zoomed_all->SetBinContent(5,882.816);
   AlphaT_Zoomed_all->SetBinContent(6,606.1352);
   AlphaT_Zoomed_all->SetBinContent(7,414.704);
   AlphaT_Zoomed_all->SetBinContent(8,285.9228);
   AlphaT_Zoomed_all->SetBinContent(9,236.4382);
   AlphaT_Zoomed_all->SetBinContent(10,157.1533);
   AlphaT_Zoomed_all->SetBinContent(11,105.3231);
   AlphaT_Zoomed_all->SetBinContent(12,106.9897);
   AlphaT_Zoomed_all->SetBinContent(13,1094.601);
   AlphaT_Zoomed_all->SetBinError(0,91.52316);
   AlphaT_Zoomed_all->SetBinError(1,42.81882);
   AlphaT_Zoomed_all->SetBinError(2,43.81666);
   AlphaT_Zoomed_all->SetBinError(3,50.49951);
   AlphaT_Zoomed_all->SetBinError(4,63.43433);
   AlphaT_Zoomed_all->SetBinError(5,51.29826);
   AlphaT_Zoomed_all->SetBinError(6,45.65138);
   AlphaT_Zoomed_all->SetBinError(7,34.35513);
   AlphaT_Zoomed_all->SetBinError(8,26.9196);
   AlphaT_Zoomed_all->SetBinError(9,24.24309);
   AlphaT_Zoomed_all->SetBinError(10,19.31379);
   AlphaT_Zoomed_all->SetBinError(11,13.7478);
   AlphaT_Zoomed_all->SetBinError(12,17.08956);
   AlphaT_Zoomed_all->SetBinError(13,58.81638);
   AlphaT_Zoomed_all->SetEntries(23452);
   AlphaT_Zoomed_all->SetLineColor(3);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->SetMarkerColor(3);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis2367[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2367);
   AlphaT_Zoomed_all->SetBinContent(4,49.74534);
   AlphaT_Zoomed_all->SetBinError(4,49.74534);
   AlphaT_Zoomed_all->SetEntries(1);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
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
   TLegendEntry *entry=leg->AddEntry("AlphaT_Zoomed_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("AlphaT_Zoomed_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","Combined EWK","L");
   entry->SetLineColor(3);
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_275_325    Jet Multiplicity=all");
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
   Double_t xAxis2368[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2368);
   AlphaT_Zoomed_all->SetBinContent(0,176);
   AlphaT_Zoomed_all->SetBinContent(1,8);
   AlphaT_Zoomed_all->SetBinContent(2,22);
   AlphaT_Zoomed_all->SetBinContent(3,35);
   AlphaT_Zoomed_all->SetBinContent(4,38);
   AlphaT_Zoomed_all->SetBinContent(5,70);
   AlphaT_Zoomed_all->SetBinContent(6,77);
   AlphaT_Zoomed_all->SetBinContent(7,109);
   AlphaT_Zoomed_all->SetBinContent(8,122);
   AlphaT_Zoomed_all->SetBinContent(9,149);
   AlphaT_Zoomed_all->SetBinContent(10,108);
   AlphaT_Zoomed_all->SetBinContent(11,117);
   AlphaT_Zoomed_all->SetBinContent(12,103);
   AlphaT_Zoomed_all->SetBinContent(13,944);
   AlphaT_Zoomed_all->SetBinError(0,13.2665);
   AlphaT_Zoomed_all->SetBinError(1,3.03);
   AlphaT_Zoomed_all->SetBinError(2,4.690416);
   AlphaT_Zoomed_all->SetBinError(3,5.91608);
   AlphaT_Zoomed_all->SetBinError(4,6.164414);
   AlphaT_Zoomed_all->SetBinError(5,8.3666);
   AlphaT_Zoomed_all->SetBinError(6,8.774964);
   AlphaT_Zoomed_all->SetBinError(7,10.44031);
   AlphaT_Zoomed_all->SetBinError(8,11.04536);
   AlphaT_Zoomed_all->SetBinError(9,12.20656);
   AlphaT_Zoomed_all->SetBinError(10,10.3923);
   AlphaT_Zoomed_all->SetBinError(11,10.81665);
   AlphaT_Zoomed_all->SetBinError(12,10.14889);
   AlphaT_Zoomed_all->SetBinError(13,30.72458);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(10582.6);
   AlphaT_Zoomed_all->SetEntries(2078);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvasOneMuon_275_325/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis2369[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2369);
   AlphaT_Zoomed_all->SetBinContent(0,0.06652522);
   AlphaT_Zoomed_all->SetBinContent(1,0.01343725);
   AlphaT_Zoomed_all->SetBinContent(2,0.03227633);
   AlphaT_Zoomed_all->SetBinContent(3,0.04612729);
   AlphaT_Zoomed_all->SetBinContent(4,0.03767917);
   AlphaT_Zoomed_all->SetBinContent(5,0.07929172);
   AlphaT_Zoomed_all->SetBinContent(6,0.1270344);
   AlphaT_Zoomed_all->SetBinContent(7,0.262838);
   AlphaT_Zoomed_all->SetBinContent(8,0.4266887);
   AlphaT_Zoomed_all->SetBinContent(9,0.6301857);
   AlphaT_Zoomed_all->SetBinContent(10,0.6872272);
   AlphaT_Zoomed_all->SetBinContent(11,1.110868);
   AlphaT_Zoomed_all->SetBinContent(12,0.9627093);
   AlphaT_Zoomed_all->SetBinContent(13,0.8624144);
   AlphaT_Zoomed_all->SetBinError(0,0.005517417);
   AlphaT_Zoomed_all->SetBinError(1,0.3855181);
   AlphaT_Zoomed_all->SetBinError(2,0.2226812);
   AlphaT_Zoomed_all->SetBinError(3,0.1816616);
   AlphaT_Zoomed_all->SetBinError(4,0.1739886);
   AlphaT_Zoomed_all->SetBinError(5,0.1328992);
   AlphaT_Zoomed_all->SetBinError(6,0.1365996);
   AlphaT_Zoomed_all->SetBinError(7,0.126638);
   AlphaT_Zoomed_all->SetBinError(8,0.1306175);
   AlphaT_Zoomed_all->SetBinError(9,0.1312431);
   AlphaT_Zoomed_all->SetBinError(10,0.1560869);
   AlphaT_Zoomed_all->SetBinError(11,0.1599533);
   AlphaT_Zoomed_all->SetBinError(12,0.1876771);
   AlphaT_Zoomed_all->SetBinError(13,0.05417839);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(223.2067);
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
   gre->SetPointError(0,0.00625,0.07192091);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.06428368);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.06655445);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.06289876);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.05810753);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.07531551);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.08284252);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.09414989);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.1025345);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.1228978);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.1305298);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.1597309);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all395 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all395","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all395->SetMinimum(0.8083229);
   Graph_Graph_from_AlphaT_Zoomed_all395->SetMaximum(1.191677);
   Graph_Graph_from_AlphaT_Zoomed_all395->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all395->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all395->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all395);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2370[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2370);
   AlphaT_Zoomed_all->SetBinContent(0,0.06652522);
   AlphaT_Zoomed_all->SetBinContent(1,0.01343725);
   AlphaT_Zoomed_all->SetBinContent(2,0.03227633);
   AlphaT_Zoomed_all->SetBinContent(3,0.04612729);
   AlphaT_Zoomed_all->SetBinContent(4,0.03767917);
   AlphaT_Zoomed_all->SetBinContent(5,0.07929172);
   AlphaT_Zoomed_all->SetBinContent(6,0.1270344);
   AlphaT_Zoomed_all->SetBinContent(7,0.262838);
   AlphaT_Zoomed_all->SetBinContent(8,0.4266887);
   AlphaT_Zoomed_all->SetBinContent(9,0.6301857);
   AlphaT_Zoomed_all->SetBinContent(10,0.6872272);
   AlphaT_Zoomed_all->SetBinContent(11,1.110868);
   AlphaT_Zoomed_all->SetBinContent(12,0.9627093);
   AlphaT_Zoomed_all->SetBinContent(13,0.8624144);
   AlphaT_Zoomed_all->SetBinError(0,0.005517417);
   AlphaT_Zoomed_all->SetBinError(1,0.3855181);
   AlphaT_Zoomed_all->SetBinError(2,0.2226812);
   AlphaT_Zoomed_all->SetBinError(3,0.1816616);
   AlphaT_Zoomed_all->SetBinError(4,0.1739886);
   AlphaT_Zoomed_all->SetBinError(5,0.1328992);
   AlphaT_Zoomed_all->SetBinError(6,0.1365996);
   AlphaT_Zoomed_all->SetBinError(7,0.126638);
   AlphaT_Zoomed_all->SetBinError(8,0.1306175);
   AlphaT_Zoomed_all->SetBinError(9,0.1312431);
   AlphaT_Zoomed_all->SetBinError(10,0.1560869);
   AlphaT_Zoomed_all->SetBinError(11,0.1599533);
   AlphaT_Zoomed_all->SetBinError(12,0.1876771);
   AlphaT_Zoomed_all->SetBinError(13,0.05417839);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(223.2067);
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
   canvasOneMuon_275_325/AlphaT_Zoomed_all->cd();
   canvasOneMuon_275_325/AlphaT_Zoomed_all->Modified();
   canvasOneMuon_275_325/AlphaT_Zoomed_all->cd();
   canvasOneMuon_275_325/AlphaT_Zoomed_all->SetSelected(canvasOneMuon_275_325/AlphaT_Zoomed_all);
}
