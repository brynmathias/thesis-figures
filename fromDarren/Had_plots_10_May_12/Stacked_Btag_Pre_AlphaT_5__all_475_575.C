{
//=========Macro generated from canvas: canvas475_575/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:23:32 2012) by ROOT version5.32/00
   TCanvas *canvas475_575/Btag_Pre_AlphaT_5__all = new TCanvas("canvas475_575/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas475_575/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvas475_575/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvas475_575/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvas475_575/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvas475_575/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvas475_575/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvas475_575/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvas475_575/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-1.26822,6.75,8.40368);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1903[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1903);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,60973);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,17917);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,3936);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,377);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,19);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,1);
   Btag_Pre_AlphaT_5__all->SetBinError(1,246.9271);
   Btag_Pre_AlphaT_5__all->SetBinError(2,133.8544);
   Btag_Pre_AlphaT_5__all->SetBinError(3,62.73755);
   Btag_Pre_AlphaT_5__all->SetBinError(4,19.41649);
   Btag_Pre_AlphaT_5__all->SetBinError(5,4.358899);
   Btag_Pre_AlphaT_5__all->SetBinError(6,1);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(2.732056e+07);
   Btag_Pre_AlphaT_5__all->SetEntries(83223);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_127 = new TH1F("_stack_127","",6,0,6);
   _stack_127->SetMinimum(1094.982);
   _stack_127->SetMaximum(4379930);
   _stack_127->SetDirectory(0);
   _stack_127->SetStats(0);
   _stack_127->GetXaxis()->SetLabelFont(42);
   _stack_127->GetXaxis()->SetLabelOffset(0.007);
   _stack_127->GetXaxis()->SetLabelSize(0.05);
   _stack_127->GetXaxis()->SetTitleSize(0.05);
   _stack_127->GetYaxis()->SetLabelFont(42);
   _stack_127->GetYaxis()->SetLabelOffset(0.007);
   _stack_127->GetYaxis()->SetLabelSize(0.05);
   _stack_127->GetZaxis()->SetLabelFont(42);
   _stack_127->GetZaxis()->SetLabelOffset(0.007);
   _stack_127->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_127);
   
   Double_t xAxis1904[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1904);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,85.66417);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,22.44724);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,4.336168);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.3843357);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.04372633);
   Btag_Pre_AlphaT_5__all->SetBinError(1,1.540664);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.757293);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.2635574);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.05904321);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.0170205);
   Btag_Pre_AlphaT_5__all->SetEntries(7809);
   Btag_Pre_AlphaT_5__all->SetFillColor(44);
   Btag_Pre_AlphaT_5__all->SetLineColor(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis1905[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1905);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,210.335);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,37.73351);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,3.821494);
   Btag_Pre_AlphaT_5__all->SetBinError(1,10.66541);
   Btag_Pre_AlphaT_5__all->SetBinError(2,4.450342);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1.301727);
   Btag_Pre_AlphaT_5__all->SetEntries(627);
   Btag_Pre_AlphaT_5__all->SetFillColor(6);
   Btag_Pre_AlphaT_5__all->SetLineColor(6);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis1906[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1906);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,112.2792);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,245.4571);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,107.9652);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,10.63193);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.5728582);
   Btag_Pre_AlphaT_5__all->SetBinError(1,2.809986);
   Btag_Pre_AlphaT_5__all->SetBinError(2,4.407213);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.782157);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.8037994);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.1858622);
   Btag_Pre_AlphaT_5__all->SetEntries(10246);
   Btag_Pre_AlphaT_5__all->SetFillColor(40);
   Btag_Pre_AlphaT_5__all->SetLineColor(40);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis1907[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1907);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,1517.705);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,180.7618);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,19.15455);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.310324);
   Btag_Pre_AlphaT_5__all->SetBinError(1,11.171);
   Btag_Pre_AlphaT_5__all->SetBinError(2,4.048349);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1.177206);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.4734889);
   Btag_Pre_AlphaT_5__all->SetEntries(30922);
   Btag_Pre_AlphaT_5__all->SetFillColor(5);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis1908[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1908);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,623.9091);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1574.622);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,1174.633);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,167.7084);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,8.68178);
   Btag_Pre_AlphaT_5__all->SetBinError(1,14.93573);
   Btag_Pre_AlphaT_5__all->SetBinError(2,22.67831);
   Btag_Pre_AlphaT_5__all->SetBinError(3,18.98638);
   Btag_Pre_AlphaT_5__all->SetBinError(4,7.22801);
   Btag_Pre_AlphaT_5__all->SetBinError(5,1.434528);
   Btag_Pre_AlphaT_5__all->SetEntries(16866);
   Btag_Pre_AlphaT_5__all->SetFillColor(2);
   Btag_Pre_AlphaT_5__all->SetLineColor(2);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis1909[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1909);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,3201.675);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,431.2343);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,38.97959);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.67338);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.07678875);
   Btag_Pre_AlphaT_5__all->SetBinError(1,14.84709);
   Btag_Pre_AlphaT_5__all->SetBinError(2,5.451269);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1.628895);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.3355285);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.06142623);
   Btag_Pre_AlphaT_5__all->SetEntries(79016);
   Btag_Pre_AlphaT_5__all->SetFillColor(4);
   Btag_Pre_AlphaT_5__all->SetLineColor(4);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis1910[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1910);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,2726305);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,352271.6);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,39737.09);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1965.916);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,83.41833);
   Btag_Pre_AlphaT_5__all->SetBinError(1,11151.1);
   Btag_Pre_AlphaT_5__all->SetBinError(2,3938.614);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1339.554);
   Btag_Pre_AlphaT_5__all->SetBinError(4,271.025);
   Btag_Pre_AlphaT_5__all->SetBinError(5,50.59081);
   Btag_Pre_AlphaT_5__all->SetEntries(841399);
   Btag_Pre_AlphaT_5__all->SetFillColor(7);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
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
   TLegendEntry *entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis1911[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1911);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,60973);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,17917);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,3936);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,377);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,19);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,1);
   Btag_Pre_AlphaT_5__all->SetBinError(1,246.9271);
   Btag_Pre_AlphaT_5__all->SetBinError(2,133.8544);
   Btag_Pre_AlphaT_5__all->SetBinError(3,62.73755);
   Btag_Pre_AlphaT_5__all->SetBinError(4,19.41649);
   Btag_Pre_AlphaT_5__all->SetBinError(5,4.358899);
   Btag_Pre_AlphaT_5__all->SetBinError(6,1);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(2.732056e+07);
   Btag_Pre_AlphaT_5__all->SetEntries(83223);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
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
   u->Modified();
   canvas475_575/Btag_Pre_AlphaT_5__all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-0.7500001,-0.25,6.75,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis1912[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1912);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.02231762);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.05050401);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.0957991);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.1755428);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.2047557);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.005749789);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.01338184);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.03629444);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1363448);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.5917058);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(19.74008);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetLabelSize(0.12);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitle("Data/MC");
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetNdivisions(505);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetLabelSize(0.11);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitleSize(0.1);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitleOffset(0.5);
   Btag_Pre_AlphaT_5__all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Pre_AlphaT_5__all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.5,1);
   gre->SetPointError(0,0.5,0.004081589);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.01110229);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.03260707);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.1262433);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.5454211);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all319 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all319","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->SetMinimum(0.3454946);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->SetMaximum(1.654505);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all319->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all319);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1913[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1913);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.02231762);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.05050401);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.0957991);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.1755428);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.2047557);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.005749789);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.01338184);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.03629444);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1363448);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.5917058);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(19.74008);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetLabelSize(0.12);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitle("Data/MC");
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetNdivisions(505);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetLabelSize(0.11);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitleSize(0.1);
   Btag_Pre_AlphaT_5__all->GetYaxis()->SetTitleOffset(0.5);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   d->Modified();
   canvas475_575/Btag_Pre_AlphaT_5__all->cd();
   canvas475_575/Btag_Pre_AlphaT_5__all->Modified();
   canvas475_575/Btag_Pre_AlphaT_5__all->cd();
   canvas475_575/Btag_Pre_AlphaT_5__all->SetSelected(canvas475_575/Btag_Pre_AlphaT_5__all);
}
