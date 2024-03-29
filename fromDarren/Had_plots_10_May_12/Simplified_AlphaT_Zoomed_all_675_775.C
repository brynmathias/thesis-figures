{
//=========Macro generated from canvas: canvas675_775/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:23:48 2012) by ROOT version5.32/00
   TCanvas *canvas675_775/AlphaT_Zoomed_all = new TCanvas("canvas675_775/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas675_775/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvas675_775/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvas675_775/AlphaT_Zoomed_all->SetFillColor(0);
   canvas675_775/AlphaT_Zoomed_all->SetBorderMode(0);
   canvas675_775/AlphaT_Zoomed_all->SetBorderSize(2);
   canvas675_775/AlphaT_Zoomed_all->SetTickx(1);
   canvas675_775/AlphaT_Zoomed_all->SetTicky(1);
   canvas675_775/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-1.11255,0.61875,7.002648);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2394[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2394);
   AlphaT_Zoomed_all->SetBinContent(0,7245);
   AlphaT_Zoomed_all->SetBinContent(1,1251);
   AlphaT_Zoomed_all->SetBinContent(2,2147);
   AlphaT_Zoomed_all->SetBinContent(3,3552);
   AlphaT_Zoomed_all->SetBinContent(4,6784);
   AlphaT_Zoomed_all->SetBinContent(5,1644);
   AlphaT_Zoomed_all->SetBinContent(6,106);
   AlphaT_Zoomed_all->SetBinContent(7,41);
   AlphaT_Zoomed_all->SetBinContent(8,18);
   AlphaT_Zoomed_all->SetBinContent(9,11);
   AlphaT_Zoomed_all->SetBinContent(10,6);
   AlphaT_Zoomed_all->SetBinContent(11,4);
   AlphaT_Zoomed_all->SetBinContent(12,4);
   AlphaT_Zoomed_all->SetBinContent(13,19);
   AlphaT_Zoomed_all->SetBinError(0,85.11757);
   AlphaT_Zoomed_all->SetBinError(1,35.36948);
   AlphaT_Zoomed_all->SetBinError(2,46.33573);
   AlphaT_Zoomed_all->SetBinError(3,59.59866);
   AlphaT_Zoomed_all->SetBinError(4,82.36504);
   AlphaT_Zoomed_all->SetBinError(5,40.54627);
   AlphaT_Zoomed_all->SetBinError(6,10.29563);
   AlphaT_Zoomed_all->SetBinError(7,6.403124);
   AlphaT_Zoomed_all->SetBinError(8,4.242641);
   AlphaT_Zoomed_all->SetBinError(9,3.316625);
   AlphaT_Zoomed_all->SetBinError(10,2.68);
   AlphaT_Zoomed_all->SetBinError(11,2.3);
   AlphaT_Zoomed_all->SetBinError(12,2);
   AlphaT_Zoomed_all->SetBinError(13,4.358899);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(1552844);
   AlphaT_Zoomed_all->SetEntries(22832);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("");
   Double_t xAxis2395[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2395);
   AlphaT_Zoomed_all->SetBinContent(0,116.6994);
   AlphaT_Zoomed_all->SetBinContent(1,28.11124);
   AlphaT_Zoomed_all->SetBinContent(2,36.49003);
   AlphaT_Zoomed_all->SetBinContent(3,45.15797);
   AlphaT_Zoomed_all->SetBinContent(4,50.03191);
   AlphaT_Zoomed_all->SetBinContent(5,30.59602);
   AlphaT_Zoomed_all->SetBinContent(6,14.62124);
   AlphaT_Zoomed_all->SetBinContent(7,6.542756);
   AlphaT_Zoomed_all->SetBinContent(8,6.037507);
   AlphaT_Zoomed_all->SetBinContent(9,2.796654);
   AlphaT_Zoomed_all->SetBinContent(10,2.571447);
   AlphaT_Zoomed_all->SetBinContent(11,1.726691);
   AlphaT_Zoomed_all->SetBinContent(12,1.04488);
   AlphaT_Zoomed_all->SetBinContent(13,13.2722);
   AlphaT_Zoomed_all->SetBinError(0,2.947636);
   AlphaT_Zoomed_all->SetBinError(1,1.455964);
   AlphaT_Zoomed_all->SetBinError(2,1.82041);
   AlphaT_Zoomed_all->SetBinError(3,1.87693);
   AlphaT_Zoomed_all->SetBinError(4,1.885827);
   AlphaT_Zoomed_all->SetBinError(5,1.617964);
   AlphaT_Zoomed_all->SetBinError(6,1.026184);
   AlphaT_Zoomed_all->SetBinError(7,0.654064);
   AlphaT_Zoomed_all->SetBinError(8,0.8825246);
   AlphaT_Zoomed_all->SetBinError(9,0.432197);
   AlphaT_Zoomed_all->SetBinError(10,0.4699629);
   AlphaT_Zoomed_all->SetBinError(11,0.3534444);
   AlphaT_Zoomed_all->SetBinError(12,0.2508934);
   AlphaT_Zoomed_all->SetBinError(13,1.101096);
   AlphaT_Zoomed_all->SetEntries(6486);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_160 = new TH1F("_stack_160","",12,0.45,0.6);
   _stack_160->SetMinimum(62.16365);
   _stack_160->SetMaximum(248654.6);
   _stack_160->SetDirectory(0);
   _stack_160->SetStats(0);
   _stack_160->GetXaxis()->SetLabelFont(42);
   _stack_160->GetXaxis()->SetLabelOffset(0.007);
   _stack_160->GetXaxis()->SetLabelSize(0.05);
   _stack_160->GetXaxis()->SetTitleSize(0.05);
   _stack_160->GetYaxis()->SetLabelFont(42);
   _stack_160->GetYaxis()->SetLabelOffset(0.007);
   _stack_160->GetYaxis()->SetLabelSize(0.05);
   _stack_160->GetZaxis()->SetLabelFont(42);
   _stack_160->GetZaxis()->SetLabelOffset(0.007);
   _stack_160->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_160);
   
   Double_t xAxis2396[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2396);
   AlphaT_Zoomed_all->SetBinContent(0,380.2471);
   AlphaT_Zoomed_all->SetBinContent(1,153.8145);
   AlphaT_Zoomed_all->SetBinContent(2,263.5458);
   AlphaT_Zoomed_all->SetBinContent(3,375.6692);
   AlphaT_Zoomed_all->SetBinContent(4,615.3901);
   AlphaT_Zoomed_all->SetBinContent(5,233.9395);
   AlphaT_Zoomed_all->SetBinContent(6,62.24014);
   AlphaT_Zoomed_all->SetBinContent(7,28.46128);
   AlphaT_Zoomed_all->SetBinContent(8,18.78897);
   AlphaT_Zoomed_all->SetBinContent(9,10.03599);
   AlphaT_Zoomed_all->SetBinContent(10,7.317249);
   AlphaT_Zoomed_all->SetBinContent(11,8.014388);
   AlphaT_Zoomed_all->SetBinContent(12,3.713803);
   AlphaT_Zoomed_all->SetBinContent(13,23.50373);
   AlphaT_Zoomed_all->SetBinError(0,6.817819);
   AlphaT_Zoomed_all->SetBinError(1,5.40552);
   AlphaT_Zoomed_all->SetBinError(2,6.457229);
   AlphaT_Zoomed_all->SetBinError(3,7.846795);
   AlphaT_Zoomed_all->SetBinError(4,11.60396);
   AlphaT_Zoomed_all->SetBinError(5,7.362046);
   AlphaT_Zoomed_all->SetBinError(6,3.231393);
   AlphaT_Zoomed_all->SetBinError(7,1.994266);
   AlphaT_Zoomed_all->SetBinError(8,1.701657);
   AlphaT_Zoomed_all->SetBinError(9,1.146578);
   AlphaT_Zoomed_all->SetBinError(10,0.9816283);
   AlphaT_Zoomed_all->SetBinError(11,1.871312);
   AlphaT_Zoomed_all->SetBinError(12,0.8278107);
   AlphaT_Zoomed_all->SetBinError(13,1.746054);
   AlphaT_Zoomed_all->SetEntries(30561);
   AlphaT_Zoomed_all->SetLineColor(3);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->SetMarkerColor(3);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis2397[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2397);
   AlphaT_Zoomed_all->SetBinContent(0,44155.75);
   AlphaT_Zoomed_all->SetBinContent(1,40340.78);
   AlphaT_Zoomed_all->SetBinContent(2,76142.03);
   AlphaT_Zoomed_all->SetBinContent(3,112382.7);
   AlphaT_Zoomed_all->SetBinContent(4,154669);
   AlphaT_Zoomed_all->SetBinContent(5,7306.421);
   AlphaT_Zoomed_all->SetBinContent(6,14.31787);
   AlphaT_Zoomed_all->SetBinContent(7,2.793647);
   AlphaT_Zoomed_all->SetBinContent(8,5.032528);
   AlphaT_Zoomed_all->SetBinContent(9,0.1988731);
   AlphaT_Zoomed_all->SetBinContent(10,0.08714326);
   AlphaT_Zoomed_all->SetBinContent(11,0.03442134);
   AlphaT_Zoomed_all->SetBinContent(13,0.06379247);
   AlphaT_Zoomed_all->SetBinError(0,359.5369);
   AlphaT_Zoomed_all->SetBinError(1,346.2716);
   AlphaT_Zoomed_all->SetBinError(2,472.7209);
   AlphaT_Zoomed_all->SetBinError(3,588.9947);
   AlphaT_Zoomed_all->SetBinError(4,740.0883);
   AlphaT_Zoomed_all->SetBinError(5,235.3344);
   AlphaT_Zoomed_all->SetBinError(6,5.23229);
   AlphaT_Zoomed_all->SetBinError(7,2.34463);
   AlphaT_Zoomed_all->SetBinError(8,3.305112);
   AlphaT_Zoomed_all->SetBinError(9,0.1416951);
   AlphaT_Zoomed_all->SetBinError(10,0.08714326);
   AlphaT_Zoomed_all->SetBinError(11,0.03442134);
   AlphaT_Zoomed_all->SetBinError(13,0.06379247);
   AlphaT_Zoomed_all->SetEntries(218574);
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
   TLatex *   tex = new TLatex(0.1,0.95,"675_775    Jet Multiplicity=all");
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
   Double_t xAxis2398[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2398);
   AlphaT_Zoomed_all->SetBinContent(0,7245);
   AlphaT_Zoomed_all->SetBinContent(1,1251);
   AlphaT_Zoomed_all->SetBinContent(2,2147);
   AlphaT_Zoomed_all->SetBinContent(3,3552);
   AlphaT_Zoomed_all->SetBinContent(4,6784);
   AlphaT_Zoomed_all->SetBinContent(5,1644);
   AlphaT_Zoomed_all->SetBinContent(6,106);
   AlphaT_Zoomed_all->SetBinContent(7,41);
   AlphaT_Zoomed_all->SetBinContent(8,18);
   AlphaT_Zoomed_all->SetBinContent(9,11);
   AlphaT_Zoomed_all->SetBinContent(10,6);
   AlphaT_Zoomed_all->SetBinContent(11,4);
   AlphaT_Zoomed_all->SetBinContent(12,4);
   AlphaT_Zoomed_all->SetBinContent(13,19);
   AlphaT_Zoomed_all->SetBinError(0,85.11757);
   AlphaT_Zoomed_all->SetBinError(1,35.36948);
   AlphaT_Zoomed_all->SetBinError(2,46.33573);
   AlphaT_Zoomed_all->SetBinError(3,59.59866);
   AlphaT_Zoomed_all->SetBinError(4,82.36504);
   AlphaT_Zoomed_all->SetBinError(5,40.54627);
   AlphaT_Zoomed_all->SetBinError(6,10.29563);
   AlphaT_Zoomed_all->SetBinError(7,6.403124);
   AlphaT_Zoomed_all->SetBinError(8,4.242641);
   AlphaT_Zoomed_all->SetBinError(9,3.316625);
   AlphaT_Zoomed_all->SetBinError(10,2.68);
   AlphaT_Zoomed_all->SetBinError(11,2.3);
   AlphaT_Zoomed_all->SetBinError(12,2);
   AlphaT_Zoomed_all->SetBinError(13,4.358899);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(1552844);
   AlphaT_Zoomed_all->SetEntries(22832);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvas675_775/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis2399[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2399);
   AlphaT_Zoomed_all->SetBinContent(0,19.0534);
   AlphaT_Zoomed_all->SetBinContent(1,8.133171);
   AlphaT_Zoomed_all->SetBinContent(2,8.146592);
   AlphaT_Zoomed_all->SetBinContent(3,9.455128);
   AlphaT_Zoomed_all->SetBinContent(4,11.0239);
   AlphaT_Zoomed_all->SetBinContent(5,7.027456);
   AlphaT_Zoomed_all->SetBinContent(6,1.703081);
   AlphaT_Zoomed_all->SetBinContent(7,1.440554);
   AlphaT_Zoomed_all->SetBinContent(8,0.958009);
   AlphaT_Zoomed_all->SetBinContent(9,1.096055);
   AlphaT_Zoomed_all->SetBinContent(10,0.8199803);
   AlphaT_Zoomed_all->SetBinContent(11,0.4991023);
   AlphaT_Zoomed_all->SetBinContent(12,1.077063);
   AlphaT_Zoomed_all->SetBinContent(13,0.8083822);
   AlphaT_Zoomed_all->SetBinError(0,0.4084323);
   AlphaT_Zoomed_all->SetBinError(1,0.04510431);
   AlphaT_Zoomed_all->SetBinError(2,0.03265092);
   AlphaT_Zoomed_all->SetBinError(3,0.02679216);
   AlphaT_Zoomed_all->SetBinError(4,0.02242687);
   AlphaT_Zoomed_all->SetBinError(5,0.03998281);
   AlphaT_Zoomed_all->SetBinError(6,0.1101338);
   AlphaT_Zoomed_all->SetBinError(7,0.1711723);
   AlphaT_Zoomed_all->SetBinError(8,0.2525033);
   AlphaT_Zoomed_all->SetBinError(9,0.3224304);
   AlphaT_Zoomed_all->SetBinError(10,0.4663776);
   AlphaT_Zoomed_all->SetBinError(11,0.6206001);
   AlphaT_Zoomed_all->SetBinError(12,0.5474348);
   AlphaT_Zoomed_all->SetBinError(13,0.1949364);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(2064.364);
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
   gre->SetPointError(0,0.00625,0.03514311);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.02450136);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.02088751);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.01885626);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.03146987);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.05191815);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.07006945);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.09056681);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.1142466);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.1341526);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.233494);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.2229011);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all400 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all400","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all400->SetMinimum(0.7198072);
   Graph_Graph_from_AlphaT_Zoomed_all400->SetMaximum(1.280193);
   Graph_Graph_from_AlphaT_Zoomed_all400->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all400->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all400->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all400);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2400[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis2400);
   AlphaT_Zoomed_all->SetBinContent(0,19.0534);
   AlphaT_Zoomed_all->SetBinContent(1,8.133171);
   AlphaT_Zoomed_all->SetBinContent(2,8.146592);
   AlphaT_Zoomed_all->SetBinContent(3,9.455128);
   AlphaT_Zoomed_all->SetBinContent(4,11.0239);
   AlphaT_Zoomed_all->SetBinContent(5,7.027456);
   AlphaT_Zoomed_all->SetBinContent(6,1.703081);
   AlphaT_Zoomed_all->SetBinContent(7,1.440554);
   AlphaT_Zoomed_all->SetBinContent(8,0.958009);
   AlphaT_Zoomed_all->SetBinContent(9,1.096055);
   AlphaT_Zoomed_all->SetBinContent(10,0.8199803);
   AlphaT_Zoomed_all->SetBinContent(11,0.4991023);
   AlphaT_Zoomed_all->SetBinContent(12,1.077063);
   AlphaT_Zoomed_all->SetBinContent(13,0.8083822);
   AlphaT_Zoomed_all->SetBinError(0,0.4084323);
   AlphaT_Zoomed_all->SetBinError(1,0.04510431);
   AlphaT_Zoomed_all->SetBinError(2,0.03265092);
   AlphaT_Zoomed_all->SetBinError(3,0.02679216);
   AlphaT_Zoomed_all->SetBinError(4,0.02242687);
   AlphaT_Zoomed_all->SetBinError(5,0.03998281);
   AlphaT_Zoomed_all->SetBinError(6,0.1101338);
   AlphaT_Zoomed_all->SetBinError(7,0.1711723);
   AlphaT_Zoomed_all->SetBinError(8,0.2525033);
   AlphaT_Zoomed_all->SetBinError(9,0.3224304);
   AlphaT_Zoomed_all->SetBinError(10,0.4663776);
   AlphaT_Zoomed_all->SetBinError(11,0.6206001);
   AlphaT_Zoomed_all->SetBinError(12,0.5474348);
   AlphaT_Zoomed_all->SetBinError(13,0.1949364);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(2064.364);
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
   canvas675_775/AlphaT_Zoomed_all->cd();
   canvas675_775/AlphaT_Zoomed_all->Modified();
   canvas675_775/AlphaT_Zoomed_all->cd();
   canvas675_775/AlphaT_Zoomed_all->SetSelected(canvas675_775/AlphaT_Zoomed_all);
}
