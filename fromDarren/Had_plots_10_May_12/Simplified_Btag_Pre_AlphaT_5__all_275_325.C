{
//=========Macro generated from canvas: canvas275_325/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:22:36 2012) by ROOT version5.32/00
   TCanvas *canvas275_325/Btag_Pre_AlphaT_5__all = new TCanvas("canvas275_325/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas275_325/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvas275_325/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvas275_325/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvas275_325/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvas275_325/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvas275_325/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvas275_325/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvas275_325/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-1.411889,6.75,9.696697);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis354[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis354);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,22882);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,5669);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,1029);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,58);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,3);
   Btag_Pre_AlphaT_5__all->SetBinError(1,151.268);
   Btag_Pre_AlphaT_5__all->SetBinError(2,75.29276);
   Btag_Pre_AlphaT_5__all->SetBinError(3,32.07803);
   Btag_Pre_AlphaT_5__all->SetBinError(4,7.615773);
   Btag_Pre_AlphaT_5__all->SetBinError(5,2.14);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(3.853351e+08);
   Btag_Pre_AlphaT_5__all->SetEntries(29641);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   Double_t xAxis355[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis355);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,7516.118);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,847.8474);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,99.9119);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,4.42547);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.06896457);
   Btag_Pre_AlphaT_5__all->SetBinError(1,25.59486);
   Btag_Pre_AlphaT_5__all->SetBinError(2,8.625023);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.999611);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.7101009);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.06896457);
   Btag_Pre_AlphaT_5__all->SetEntries(149845);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_24 = new TH1F("_stack_24","",6,0,6);
   _stack_24->SetMinimum(15452.21);
   _stack_24->SetMaximum(6.180885e+07);
   _stack_24->SetDirectory(0);
   _stack_24->SetStats(0);
   _stack_24->GetXaxis()->SetLabelFont(42);
   _stack_24->GetXaxis()->SetLabelOffset(0.007);
   _stack_24->GetXaxis()->SetLabelSize(0.05);
   _stack_24->GetXaxis()->SetTitleSize(0.05);
   _stack_24->GetYaxis()->SetLabelFont(42);
   _stack_24->GetYaxis()->SetLabelOffset(0.007);
   _stack_24->GetYaxis()->SetLabelSize(0.05);
   _stack_24->GetZaxis()->SetLabelFont(42);
   _stack_24->GetZaxis()->SetLabelOffset(0.007);
   _stack_24->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_24);
   
   Double_t xAxis356[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis356);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,33340.87);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,9011.035);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,3241.749);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,295.6537);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,3.849986);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,0.3122394);
   Btag_Pre_AlphaT_5__all->SetBinError(1,327.1906);
   Btag_Pre_AlphaT_5__all->SetBinError(2,112.6145);
   Btag_Pre_AlphaT_5__all->SetBinError(3,42.40074);
   Btag_Pre_AlphaT_5__all->SetBinError(4,10.59853);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.8684512);
   Btag_Pre_AlphaT_5__all->SetBinError(6,0.3122394);
   Btag_Pre_AlphaT_5__all->SetEntries(296529);
   Btag_Pre_AlphaT_5__all->SetLineColor(3);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerColor(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis357[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis357);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,3.850017e+07);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,4411814);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,442543.8);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,13331.93);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,328.761);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,82.73887);
   Btag_Pre_AlphaT_5__all->SetBinError(1,130357.8);
   Btag_Pre_AlphaT_5__all->SetBinError(2,39805.53);
   Btag_Pre_AlphaT_5__all->SetBinError(3,10938.79);
   Btag_Pre_AlphaT_5__all->SetBinError(4,934.2224);
   Btag_Pre_AlphaT_5__all->SetBinError(5,139.9653);
   Btag_Pre_AlphaT_5__all->SetBinError(6,82.73887);
   Btag_Pre_AlphaT_5__all->SetEntries(789898);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
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
   TLegendEntry *entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Combined EWK","L");
   entry->SetLineColor(3);
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
   Double_t xAxis358[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis358);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,22882);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,5669);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,1029);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,58);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,3);
   Btag_Pre_AlphaT_5__all->SetBinError(1,151.268);
   Btag_Pre_AlphaT_5__all->SetBinError(2,75.29276);
   Btag_Pre_AlphaT_5__all->SetBinError(3,32.07803);
   Btag_Pre_AlphaT_5__all->SetBinError(4,7.615773);
   Btag_Pre_AlphaT_5__all->SetBinError(5,2.14);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(3.853351e+08);
   Btag_Pre_AlphaT_5__all->SetEntries(29641);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvas275_325/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis359[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis359);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.6863048);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.6291175);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.3174212);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.1961755);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.7792237);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.01183246);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.01823686);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.0338067);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1361119);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.7481493);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(19.95659);
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
   gre->SetPointError(0,0.5,0.009813498);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.0124974);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.01307959);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.0358478);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.2255726);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,1);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all60 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all60","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->SetMinimum(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->SetMaximum(2.2);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all60->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all60);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis360[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis360);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.6863048);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.6291175);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.3174212);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.1961755);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.7792237);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.01183246);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.01823686);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.0338067);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1361119);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.7481493);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(19.95659);
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
   canvas275_325/Btag_Pre_AlphaT_5__all->cd();
   canvas275_325/Btag_Pre_AlphaT_5__all->Modified();
   canvas275_325/Btag_Pre_AlphaT_5__all->cd();
   canvas275_325/Btag_Pre_AlphaT_5__all->SetSelected(canvas275_325/Btag_Pre_AlphaT_5__all);
}
