{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:08:43 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all = new TCanvas("canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all", "cannameJetMultiplicity_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.6417288,16.875,2.765259);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4531[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4531);
   JetMultiplicity_all->SetBinContent(3,8);
   JetMultiplicity_all->SetBinContent(4,14);
   JetMultiplicity_all->SetBinContent(5,22);
   JetMultiplicity_all->SetBinContent(6,17);
   JetMultiplicity_all->SetBinContent(7,10);
   JetMultiplicity_all->SetBinContent(8,5);
   JetMultiplicity_all->SetBinContent(9,1);
   JetMultiplicity_all->SetBinError(3,3.03);
   JetMultiplicity_all->SetBinError(4,3.741657);
   JetMultiplicity_all->SetBinError(5,4.690416);
   JetMultiplicity_all->SetBinError(6,4.123106);
   JetMultiplicity_all->SetBinError(7,3.162278);
   JetMultiplicity_all->SetBinError(8,2.49);
   JetMultiplicity_all->SetBinError(9,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(265.8031);
   JetMultiplicity_all->SetEntries(77);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PE0");
   Double_t xAxis4532[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4532);
   JetMultiplicity_all->SetBinContent(3,6.34419);
   JetMultiplicity_all->SetBinContent(4,6.076347);
   JetMultiplicity_all->SetBinContent(5,5.431325);
   JetMultiplicity_all->SetBinContent(6,1.558121);
   JetMultiplicity_all->SetBinContent(7,0.2270841);
   JetMultiplicity_all->SetBinError(3,0.6020304);
   JetMultiplicity_all->SetBinError(4,0.6457144);
   JetMultiplicity_all->SetBinError(5,0.5759129);
   JetMultiplicity_all->SetBinError(6,0.3158696);
   JetMultiplicity_all->SetBinError(7,0.1068858);
   JetMultiplicity_all->SetEntries(431);
   JetMultiplicity_all->SetLineColor(4);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4533[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4533);
   JetMultiplicity_all->SetBinContent(3,1.431822);
   JetMultiplicity_all->SetBinContent(4,10.56117);
   JetMultiplicity_all->SetBinContent(5,18.56776);
   JetMultiplicity_all->SetBinContent(6,22.47597);
   JetMultiplicity_all->SetBinContent(7,12.19614);
   JetMultiplicity_all->SetBinContent(8,3.979929);
   JetMultiplicity_all->SetBinError(3,0.6463014);
   JetMultiplicity_all->SetBinError(4,1.620296);
   JetMultiplicity_all->SetBinError(5,2.220417);
   JetMultiplicity_all->SetBinError(6,3.175743);
   JetMultiplicity_all->SetBinError(7,1.729172);
   JetMultiplicity_all->SetBinError(8,1.166812);
   JetMultiplicity_all->SetEntries(361);
   JetMultiplicity_all->SetLineColor(2);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4534[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4534);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4535[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4535);
   JetMultiplicity_all->SetBinContent(4,0.5059225);
   JetMultiplicity_all->SetBinContent(5,0.4684294);
   JetMultiplicity_all->SetBinError(4,0.5059225);
   JetMultiplicity_all->SetBinError(5,0.4684294);
   JetMultiplicity_all->SetEntries(2);
   JetMultiplicity_all->SetLineColor(6);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4536[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4536);
   JetMultiplicity_all->SetBinContent(4,0.0859167);
   JetMultiplicity_all->SetBinContent(5,0.01655682);
   JetMultiplicity_all->SetBinError(4,0.06098397);
   JetMultiplicity_all->SetBinError(5,0.01655682);
   JetMultiplicity_all->SetEntries(3);
   JetMultiplicity_all->SetLineColor(44);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4537[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4537);
   JetMultiplicity_all->SetLineColor(7);
   JetMultiplicity_all->SetLineStyle(10);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4538[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4538);
   JetMultiplicity_all->SetBinContent(3,0.4254434);
   JetMultiplicity_all->SetBinContent(4,1.239782);
   JetMultiplicity_all->SetBinContent(5,2.096242);
   JetMultiplicity_all->SetBinContent(6,0.5378774);
   JetMultiplicity_all->SetBinContent(7,0.2969056);
   JetMultiplicity_all->SetBinContent(8,0.05487837);
   JetMultiplicity_all->SetBinContent(9,0.06101309);
   JetMultiplicity_all->SetBinError(3,0.145774);
   JetMultiplicity_all->SetBinError(4,0.2486201);
   JetMultiplicity_all->SetBinError(5,0.3570593);
   JetMultiplicity_all->SetBinError(6,0.1463995);
   JetMultiplicity_all->SetBinError(7,0.1160629);
   JetMultiplicity_all->SetBinError(8,0.05487837);
   JetMultiplicity_all->SetBinError(9,0.06101309);
   JetMultiplicity_all->SetEntries(117);
   JetMultiplicity_all->SetLineColor(40);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4539[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4539);
   JetMultiplicity_all->SetBinContent(3,8.201456);
   JetMultiplicity_all->SetBinContent(4,18.46914);
   JetMultiplicity_all->SetBinContent(5,26.58031);
   JetMultiplicity_all->SetBinContent(6,24.57197);
   JetMultiplicity_all->SetBinContent(7,12.72013);
   JetMultiplicity_all->SetBinContent(8,4.034808);
   JetMultiplicity_all->SetBinContent(9,0.06101309);
   JetMultiplicity_all->SetBinError(3,0.8952073);
   JetMultiplicity_all->SetBinError(4,1.834065);
   JetMultiplicity_all->SetBinError(5,2.368358);
   JetMultiplicity_all->SetBinError(6,3.194769);
   JetMultiplicity_all->SetBinError(7,1.736356);
   JetMultiplicity_all->SetBinError(8,1.168102);
   JetMultiplicity_all->SetBinError(9,0.06101309);
   JetMultiplicity_all->SetEntries(914);
   JetMultiplicity_all->SetLineColor(3);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicity_all");
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
   gre->SetPoint(4,4.5,0);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,0);
   gre->SetPointError(5,0.5,0);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all756 = new TH1F("Graph_Graph_from_JetMultiplicity_all756","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all756->SetMinimum(0.0011);
   Graph_Graph_from_JetMultiplicity_all756->SetMaximum(1.1);
   Graph_Graph_from_JetMultiplicity_all756->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all756->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all756->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all756->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all756->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all756->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all756->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all756->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all756->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all756->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all756->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all756->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all756);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicity_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,0);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,0);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,2.5,8.201456);
   gre->SetPointError(2,0.5,0.8952073);
   gre->SetPoint(3,3.5,18.46914);
   gre->SetPointError(3,0.5,1.834065);
   gre->SetPoint(4,4.5,26.58031);
   gre->SetPointError(4,0.5,2.368358);
   gre->SetPoint(5,5.5,24.57197);
   gre->SetPointError(5,0.5,3.194769);
   gre->SetPoint(6,6.5,12.72013);
   gre->SetPointError(6,0.5,1.736356);
   gre->SetPoint(7,7.5,4.034808);
   gre->SetPointError(7,0.5,1.168102);
   gre->SetPoint(8,8.5,0.06101309);
   gre->SetPointError(8,0.5,0.06101309);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all757 = new TH1F("Graph_Graph_from_JetMultiplicity_all757","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all757->SetMinimum(0.03184354);
   Graph_Graph_from_JetMultiplicity_all757->SetMaximum(31.84354);
   Graph_Graph_from_JetMultiplicity_all757->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all757->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all757->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all757->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all757->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all757->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all757->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all757->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all757->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all757->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all757->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all757->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all757);
   
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
   entry=leg->AddEntry("JetMultiplicity_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_OneMuon_675_775    Jet Multiplicity=all");
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
   Double_t xAxis4540[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4540);
   JetMultiplicity_all->SetBinContent(3,8);
   JetMultiplicity_all->SetBinContent(4,14);
   JetMultiplicity_all->SetBinContent(5,22);
   JetMultiplicity_all->SetBinContent(6,17);
   JetMultiplicity_all->SetBinContent(7,10);
   JetMultiplicity_all->SetBinContent(8,5);
   JetMultiplicity_all->SetBinContent(9,1);
   JetMultiplicity_all->SetBinError(3,3.03);
   JetMultiplicity_all->SetBinError(4,3.741657);
   JetMultiplicity_all->SetBinError(5,4.690416);
   JetMultiplicity_all->SetBinError(6,4.123106);
   JetMultiplicity_all->SetBinError(7,3.162278);
   JetMultiplicity_all->SetBinError(8,2.49);
   JetMultiplicity_all->SetBinError(9,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(265.8031);
   JetMultiplicity_all->SetEntries(77);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->cd();
  
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
   Double_t xAxis4541[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4541);
   JetMultiplicity_all->SetBinContent(3,0.9754366);
   JetMultiplicity_all->SetBinContent(4,0.7580212);
   JetMultiplicity_all->SetBinContent(5,0.8276803);
   JetMultiplicity_all->SetBinContent(6,0.6918451);
   JetMultiplicity_all->SetBinContent(7,0.7861555);
   JetMultiplicity_all->SetBinContent(8,1.239216);
   JetMultiplicity_all->SetBinContent(9,16.38993);
   JetMultiplicity_all->SetBinError(3,0.3941647);
   JetMultiplicity_all->SetBinError(4,0.2851139);
   JetMultiplicity_all->SetBinError(5,0.2310708);
   JetMultiplicity_all->SetBinError(6,0.275187);
   JetMultiplicity_all->SetBinError(7,0.3444321);
   JetMultiplicity_all->SetBinError(8,0.5760363);
   JetMultiplicity_all->SetBinError(9,1.414214);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(0.8725256);
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
   
   gre = new TGraphErrors(15);
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
   gre->SetPointError(2,0.5,0.1091522);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.0993043);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.08910198);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.1300168);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.1365046);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.2895062);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all758 = new TH1F("Graph_Graph_from_JetMultiplicity_all758","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all758->SetMinimum(0);
   Graph_Graph_from_JetMultiplicity_all758->SetMaximum(2.2);
   Graph_Graph_from_JetMultiplicity_all758->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all758->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all758->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all758->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all758->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all758->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all758->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all758->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all758->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all758->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all758->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all758->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all758);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4542[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4542);
   JetMultiplicity_all->SetBinContent(3,0.9754366);
   JetMultiplicity_all->SetBinContent(4,0.7580212);
   JetMultiplicity_all->SetBinContent(5,0.8276803);
   JetMultiplicity_all->SetBinContent(6,0.6918451);
   JetMultiplicity_all->SetBinContent(7,0.7861555);
   JetMultiplicity_all->SetBinContent(8,1.239216);
   JetMultiplicity_all->SetBinContent(9,16.38993);
   JetMultiplicity_all->SetBinError(3,0.3941647);
   JetMultiplicity_all->SetBinError(4,0.2851139);
   JetMultiplicity_all->SetBinError(5,0.2310708);
   JetMultiplicity_all->SetBinError(6,0.275187);
   JetMultiplicity_all->SetBinError(7,0.3444321);
   JetMultiplicity_all->SetBinError(8,0.5760363);
   JetMultiplicity_all->SetBinError(9,1.414214);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(0.8725256);
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
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->Modified();
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all->SetSelected(canvasbtag_morethanzero_OneMuon_675_775/JetMultiplicity_all);
}
