{
//=========Macro generated from canvas: canvasbtag_morethanzero_375_475/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:25:23 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_375_475/JetMultiplicity_all = new TCanvas("canvasbtag_morethanzero_375_475/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->SetHighLightColor(2);
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->Range(0,0,1,1);
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->SetFillColor(0);
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->SetBorderMode(0);
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->SetBorderSize(2);
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->SetTickx(1);
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->SetTicky(1);
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-1.203979,16.875,7.82551);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4933[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4933);
   JetMultiplicity_all->SetBinContent(3,3206);
   JetMultiplicity_all->SetBinContent(4,11110);
   JetMultiplicity_all->SetBinContent(5,17939);
   JetMultiplicity_all->SetBinContent(6,19606);
   JetMultiplicity_all->SetBinContent(7,6775);
   JetMultiplicity_all->SetBinContent(8,1312);
   JetMultiplicity_all->SetBinContent(9,223);
   JetMultiplicity_all->SetBinContent(10,21);
   JetMultiplicity_all->SetBinContent(11,3);
   JetMultiplicity_all->SetBinContent(12,1);
   JetMultiplicity_all->SetBinError(3,56.62155);
   JetMultiplicity_all->SetBinError(4,105.404);
   JetMultiplicity_all->SetBinError(5,133.9366);
   JetMultiplicity_all->SetBinError(6,140.0214);
   JetMultiplicity_all->SetBinError(7,82.31039);
   JetMultiplicity_all->SetBinError(8,36.22154);
   JetMultiplicity_all->SetBinError(9,14.93318);
   JetMultiplicity_all->SetBinError(10,4.582576);
   JetMultiplicity_all->SetBinError(11,2.14);
   JetMultiplicity_all->SetBinError(12,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(8366827);
   JetMultiplicity_all->SetEntries(60196);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_329 = new TH1F("_stack_329","",15,0,15);
   _stack_329->SetMinimum(336.1245);
   _stack_329->SetMaximum(1344498);
   _stack_329->SetDirectory(0);
   _stack_329->SetStats(0);
   _stack_329->GetXaxis()->SetLabelFont(42);
   _stack_329->GetXaxis()->SetLabelOffset(0.007);
   _stack_329->GetXaxis()->SetLabelSize(0.05);
   _stack_329->GetXaxis()->SetTitleSize(0.05);
   _stack_329->GetYaxis()->SetLabelFont(42);
   _stack_329->GetYaxis()->SetLabelOffset(0.007);
   _stack_329->GetYaxis()->SetLabelSize(0.05);
   _stack_329->GetZaxis()->SetLabelFont(42);
   _stack_329->GetZaxis()->SetLabelOffset(0.007);
   _stack_329->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_329);
   
   Double_t xAxis4934[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4934);
   JetMultiplicity_all->SetBinContent(3,10.73618);
   JetMultiplicity_all->SetBinContent(4,41.31259);
   JetMultiplicity_all->SetBinContent(5,42.39998);
   JetMultiplicity_all->SetBinContent(6,12.21035);
   JetMultiplicity_all->SetBinContent(7,2.360763);
   JetMultiplicity_all->SetBinContent(8,0.2688294);
   JetMultiplicity_all->SetBinContent(9,0.06578259);
   JetMultiplicity_all->SetBinError(3,0.5057216);
   JetMultiplicity_all->SetBinError(4,1.004884);
   JetMultiplicity_all->SetBinError(5,1.00418);
   JetMultiplicity_all->SetBinError(6,0.5296537);
   JetMultiplicity_all->SetBinError(7,0.2385115);
   JetMultiplicity_all->SetBinError(8,0.0756212);
   JetMultiplicity_all->SetBinError(9,0.04631365);
   JetMultiplicity_all->SetEntries(9100);
   JetMultiplicity_all->SetFillColor(44);
   JetMultiplicity_all->SetLineColor(44);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis4935[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4935);
   JetMultiplicity_all->SetBinContent(3,26.28972);
   JetMultiplicity_all->SetBinContent(4,71.76814);
   JetMultiplicity_all->SetBinContent(5,48.44061);
   JetMultiplicity_all->SetBinContent(6,15.23014);
   JetMultiplicity_all->SetBinContent(7,2.409476);
   JetMultiplicity_all->SetBinError(3,3.682307);
   JetMultiplicity_all->SetBinError(4,5.935156);
   JetMultiplicity_all->SetBinError(5,5.548216);
   JetMultiplicity_all->SetBinError(6,3.03557);
   JetMultiplicity_all->SetBinError(7,1.088032);
   JetMultiplicity_all->SetEntries(403);
   JetMultiplicity_all->SetFillColor(6);
   JetMultiplicity_all->SetLineColor(6);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis4936[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4936);
   JetMultiplicity_all->SetBinContent(3,283.5882);
   JetMultiplicity_all->SetBinContent(4,339.2499);
   JetMultiplicity_all->SetBinContent(5,167.6355);
   JetMultiplicity_all->SetBinContent(6,36.06273);
   JetMultiplicity_all->SetBinContent(7,6.011631);
   JetMultiplicity_all->SetBinContent(8,1.478571);
   JetMultiplicity_all->SetBinContent(10,0.06204388);
   JetMultiplicity_all->SetBinError(3,4.808031);
   JetMultiplicity_all->SetBinError(4,5.360881);
   JetMultiplicity_all->SetBinError(5,3.674531);
   JetMultiplicity_all->SetBinError(6,1.781902);
   JetMultiplicity_all->SetBinError(7,0.6660606);
   JetMultiplicity_all->SetBinError(8,0.3915948);
   JetMultiplicity_all->SetBinError(10,0.06204388);
   JetMultiplicity_all->SetEntries(15009);
   JetMultiplicity_all->SetFillColor(5);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis4937[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4937);
   JetMultiplicity_all->SetBinContent(3,78.06321);
   JetMultiplicity_all->SetBinContent(4,475.8481);
   JetMultiplicity_all->SetBinContent(5,572.0324);
   JetMultiplicity_all->SetBinContent(6,228.3321);
   JetMultiplicity_all->SetBinContent(7,56.50459);
   JetMultiplicity_all->SetBinContent(8,11.17843);
   JetMultiplicity_all->SetBinContent(9,1.406975);
   JetMultiplicity_all->SetBinContent(10,0.2394208);
   JetMultiplicity_all->SetBinError(3,2.14653);
   JetMultiplicity_all->SetBinError(4,5.694054);
   JetMultiplicity_all->SetBinError(5,6.387809);
   JetMultiplicity_all->SetBinError(6,4.197401);
   JetMultiplicity_all->SetBinError(7,2.201824);
   JetMultiplicity_all->SetBinError(8,1.063083);
   JetMultiplicity_all->SetBinError(9,0.2931433);
   JetMultiplicity_all->SetBinError(10,0.1087753);
   JetMultiplicity_all->SetEntries(30825);
   JetMultiplicity_all->SetFillColor(40);
   JetMultiplicity_all->SetLineColor(40);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis4938[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4938);
   JetMultiplicity_all->SetBinContent(3,403.3416);
   JetMultiplicity_all->SetBinContent(4,846.7401);
   JetMultiplicity_all->SetBinContent(5,485.4702);
   JetMultiplicity_all->SetBinContent(6,123.1156);
   JetMultiplicity_all->SetBinContent(7,20.23086);
   JetMultiplicity_all->SetBinContent(8,2.990367);
   JetMultiplicity_all->SetBinContent(9,0.2747703);
   JetMultiplicity_all->SetBinContent(10,0.05645457);
   JetMultiplicity_all->SetBinError(3,4.955625);
   JetMultiplicity_all->SetBinError(4,7.594647);
   JetMultiplicity_all->SetBinError(5,5.851916);
   JetMultiplicity_all->SetBinError(6,3.014071);
   JetMultiplicity_all->SetBinError(7,1.245126);
   JetMultiplicity_all->SetBinError(8,0.4722362);
   JetMultiplicity_all->SetBinError(9,0.1179634);
   JetMultiplicity_all->SetBinError(10,0.05645457);
   JetMultiplicity_all->SetEntries(42460);
   JetMultiplicity_all->SetFillColor(4);
   JetMultiplicity_all->SetLineColor(4);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis4939[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4939);
   JetMultiplicity_all->SetBinContent(3,187.1178);
   JetMultiplicity_all->SetBinContent(4,1855.902);
   JetMultiplicity_all->SetBinContent(5,4459.6);
   JetMultiplicity_all->SetBinContent(6,2885.353);
   JetMultiplicity_all->SetBinContent(7,1066.606);
   JetMultiplicity_all->SetBinContent(8,281.1033);
   JetMultiplicity_all->SetBinContent(9,50.33585);
   JetMultiplicity_all->SetBinContent(10,10.03215);
   JetMultiplicity_all->SetBinContent(11,0.9053021);
   JetMultiplicity_all->SetBinContent(12,0.1393525);
   JetMultiplicity_all->SetBinError(3,6.886289);
   JetMultiplicity_all->SetBinError(4,23.42453);
   JetMultiplicity_all->SetBinError(5,36.79462);
   JetMultiplicity_all->SetBinError(6,30.86788);
   JetMultiplicity_all->SetBinError(7,19.28432);
   JetMultiplicity_all->SetBinError(8,10.9593);
   JetMultiplicity_all->SetBinError(9,3.840068);
   JetMultiplicity_all->SetBinError(10,1.679766);
   JetMultiplicity_all->SetBinError(11,0.4882776);
   JetMultiplicity_all->SetBinError(12,0.1393525);
   JetMultiplicity_all->SetEntries(51527);
   JetMultiplicity_all->SetFillColor(2);
   JetMultiplicity_all->SetLineColor(2);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis4940[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4940);
   JetMultiplicity_all->SetBinContent(3,709047.7);
   JetMultiplicity_all->SetBinContent(4,833051.9);
   JetMultiplicity_all->SetBinContent(5,396536.6);
   JetMultiplicity_all->SetBinContent(6,77275.52);
   JetMultiplicity_all->SetBinContent(7,11330.07);
   JetMultiplicity_all->SetBinContent(8,1193.603);
   JetMultiplicity_all->SetBinContent(9,109.0714);
   JetMultiplicity_all->SetBinContent(10,78.01017);
   JetMultiplicity_all->SetBinContent(11,0.350228);
   JetMultiplicity_all->SetBinError(3,6276.398);
   JetMultiplicity_all->SetBinError(4,7259.285);
   JetMultiplicity_all->SetBinError(5,5237.024);
   JetMultiplicity_all->SetBinError(6,2002.882);
   JetMultiplicity_all->SetBinError(7,817.7419);
   JetMultiplicity_all->SetBinError(8,141.0508);
   JetMultiplicity_all->SetBinError(9,17.57313);
   JetMultiplicity_all->SetBinError(10,70.82718);
   JetMultiplicity_all->SetBinError(11,0.2556592);
   JetMultiplicity_all->SetEntries(407429);
   JetMultiplicity_all->SetFillColor(7);
   JetMultiplicity_all->SetLineColor(7);
   JetMultiplicity_all->SetLineStyle(10);
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
   Double_t xAxis4941[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4941);
   JetMultiplicity_all->SetBinContent(3,3206);
   JetMultiplicity_all->SetBinContent(4,11110);
   JetMultiplicity_all->SetBinContent(5,17939);
   JetMultiplicity_all->SetBinContent(6,19606);
   JetMultiplicity_all->SetBinContent(7,6775);
   JetMultiplicity_all->SetBinContent(8,1312);
   JetMultiplicity_all->SetBinContent(9,223);
   JetMultiplicity_all->SetBinContent(10,21);
   JetMultiplicity_all->SetBinContent(11,3);
   JetMultiplicity_all->SetBinContent(12,1);
   JetMultiplicity_all->SetBinError(3,56.62155);
   JetMultiplicity_all->SetBinError(4,105.404);
   JetMultiplicity_all->SetBinError(5,133.9366);
   JetMultiplicity_all->SetBinError(6,140.0214);
   JetMultiplicity_all->SetBinError(7,82.31039);
   JetMultiplicity_all->SetBinError(8,36.22154);
   JetMultiplicity_all->SetBinError(9,14.93318);
   JetMultiplicity_all->SetBinError(10,4.582576);
   JetMultiplicity_all->SetBinError(11,2.14);
   JetMultiplicity_all->SetBinError(12,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(8366827);
   JetMultiplicity_all->SetEntries(60196);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_375_    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->cd();
  
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
   Double_t xAxis4942[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4942);
   JetMultiplicity_all->SetBinContent(3,0.004515258);
   JetMultiplicity_all->SetBinContent(4,0.01327863);
   JetMultiplicity_all->SetBinContent(5,0.04458976);
   JetMultiplicity_all->SetBinContent(6,0.2433236);
   JetMultiplicity_all->SetBinContent(7,0.5426862);
   JetMultiplicity_all->SetBinContent(8,0.8801693);
   JetMultiplicity_all->SetBinContent(9,1.383763);
   JetMultiplicity_all->SetBinContent(10,0.2375559);
   JetMultiplicity_all->SetBinContent(11,2.389429);
   JetMultiplicity_all->SetBinContent(12,7.176047);
   JetMultiplicity_all->SetBinError(3,0.01974975);
   JetMultiplicity_all->SetBinError(4,0.01285643);
   JetMultiplicity_all->SetBinError(5,0.0150068);
   JetMultiplicity_all->SetBinError(6,0.02586568);
   JetMultiplicity_all->SetBinError(7,0.06663763);
   JetMultiplicity_all->SetBinError(8,0.0988479);
   JetMultiplicity_all->SetBinError(9,0.13018);
   JetMultiplicity_all->SetBinError(10,0.8306145);
   JetMultiplicity_all->SetBinError(11,0.8375874);
   JetMultiplicity_all->SetBinError(12,1.414214);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(1.557818);
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
   gre->SetPointError(2,0.5,0.008839551);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.008676328);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.01301766);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.02486018);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.06552078);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.09491423);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,0.1116357);
   gre->SetPoint(9,9.5,1);
   gre->SetPointError(9,0.5,0.8014371);
   gre->SetPoint(10,10.5,1);
   gre->SetPointError(10,0.5,0.4389854);
   gre->SetPoint(11,11.5,1);
   gre->SetPointError(11,0.5,1);
   gre->SetPoint(12,12.5,1);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,1);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,1);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicity_all824 = new TH1F("Graph_Graph_from_JetMultiplicity_all824","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all824->SetMinimum(0);
   Graph_Graph_from_JetMultiplicity_all824->SetMaximum(2.2);
   Graph_Graph_from_JetMultiplicity_all824->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all824->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all824->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all824->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all824->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all824->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all824->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all824->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all824->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all824->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all824->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all824->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all824);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4943[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4943);
   JetMultiplicity_all->SetBinContent(3,0.004515258);
   JetMultiplicity_all->SetBinContent(4,0.01327863);
   JetMultiplicity_all->SetBinContent(5,0.04458976);
   JetMultiplicity_all->SetBinContent(6,0.2433236);
   JetMultiplicity_all->SetBinContent(7,0.5426862);
   JetMultiplicity_all->SetBinContent(8,0.8801693);
   JetMultiplicity_all->SetBinContent(9,1.383763);
   JetMultiplicity_all->SetBinContent(10,0.2375559);
   JetMultiplicity_all->SetBinContent(11,2.389429);
   JetMultiplicity_all->SetBinContent(12,7.176047);
   JetMultiplicity_all->SetBinError(3,0.01974975);
   JetMultiplicity_all->SetBinError(4,0.01285643);
   JetMultiplicity_all->SetBinError(5,0.0150068);
   JetMultiplicity_all->SetBinError(6,0.02586568);
   JetMultiplicity_all->SetBinError(7,0.06663763);
   JetMultiplicity_all->SetBinError(8,0.0988479);
   JetMultiplicity_all->SetBinError(9,0.13018);
   JetMultiplicity_all->SetBinError(10,0.8306145);
   JetMultiplicity_all->SetBinError(11,0.8375874);
   JetMultiplicity_all->SetBinError(12,1.414214);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(1.557818);
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
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->Modified();
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_375_475/JetMultiplicity_all->SetSelected(canvasbtag_morethanzero_375_475/JetMultiplicity_all);
}
