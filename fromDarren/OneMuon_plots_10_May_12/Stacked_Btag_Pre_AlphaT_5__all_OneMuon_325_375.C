{
//=========Macro generated from canvas: canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:07:46 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all = new TCanvas("canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.9066157,6.75,5.149241);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2923[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2923);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,807);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,307);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,135);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,19);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1);
   Btag_Pre_AlphaT_5__all->SetBinError(1,28.40775);
   Btag_Pre_AlphaT_5__all->SetBinError(2,17.52142);
   Btag_Pre_AlphaT_5__all->SetBinError(3,11.61895);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.358899);
   Btag_Pre_AlphaT_5__all->SetBinError(5,1);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(34966.73);
   Btag_Pre_AlphaT_5__all->SetEntries(1269);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_195 = new TH1F("_stack_195","",6,0,6);
   _stack_195->SetMinimum(1.398669);
   _stack_195->SetMaximum(5594.676);
   _stack_195->SetDirectory(0);
   _stack_195->SetStats(0);
   _stack_195->GetXaxis()->SetLabelFont(42);
   _stack_195->GetXaxis()->SetLabelOffset(0.007);
   _stack_195->GetXaxis()->SetLabelSize(0.05);
   _stack_195->GetXaxis()->SetTitleSize(0.05);
   _stack_195->GetYaxis()->SetLabelFont(42);
   _stack_195->GetYaxis()->SetLabelOffset(0.007);
   _stack_195->GetYaxis()->SetLabelSize(0.05);
   _stack_195->GetZaxis()->SetLabelFont(42);
   _stack_195->GetZaxis()->SetLabelOffset(0.007);
   _stack_195->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_195);
   
   Double_t xAxis2924[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2924);
   Btag_Pre_AlphaT_5__all->SetFillColor(5);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis2925[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2925);
   Btag_Pre_AlphaT_5__all->SetFillColor(7);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis2926[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2926);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,20.7273);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,4.377212);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.4158494);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.04288369);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.8467791);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.3889757);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.1047383);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.03937544);
   Btag_Pre_AlphaT_5__all->SetEntries(1024);
   Btag_Pre_AlphaT_5__all->SetFillColor(44);
   Btag_Pre_AlphaT_5__all->SetLineColor(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis2927[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2927);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,78.62281);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,8.915223);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.4382102);
   Btag_Pre_AlphaT_5__all->SetBinError(1,6.56022);
   Btag_Pre_AlphaT_5__all->SetBinError(2,2.221203);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.4382102);
   Btag_Pre_AlphaT_5__all->SetEntries(239);
   Btag_Pre_AlphaT_5__all->SetFillColor(6);
   Btag_Pre_AlphaT_5__all->SetLineColor(6);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis2928[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2928);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,29.43579);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,75.30146);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,25.25356);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.188214);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.04120891);
   Btag_Pre_AlphaT_5__all->SetBinError(1,1.629738);
   Btag_Pre_AlphaT_5__all->SetBinError(2,2.17121);
   Btag_Pre_AlphaT_5__all->SetBinError(3,1.200471);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2443377);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.04120891);
   Btag_Pre_AlphaT_5__all->SetEntries(3075);
   Btag_Pre_AlphaT_5__all->SetFillColor(40);
   Btag_Pre_AlphaT_5__all->SetLineColor(40);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis2929[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2929);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,201.2078);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,603.5911);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,435.0469);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,34.97368);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.9075156);
   Btag_Pre_AlphaT_5__all->SetBinError(1,7.055806);
   Btag_Pre_AlphaT_5__all->SetBinError(2,12.89645);
   Btag_Pre_AlphaT_5__all->SetBinError(3,10.54082);
   Btag_Pre_AlphaT_5__all->SetBinError(4,3.187476);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.4563853);
   Btag_Pre_AlphaT_5__all->SetEntries(6740);
   Btag_Pre_AlphaT_5__all->SetFillColor(2);
   Btag_Pre_AlphaT_5__all->SetLineColor(2);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis2930[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2930);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,3166.679);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,289.7857);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,39.78325);
   Btag_Pre_AlphaT_5__all->SetBinError(1,117.9751);
   Btag_Pre_AlphaT_5__all->SetBinError(2,33.34575);
   Btag_Pre_AlphaT_5__all->SetBinError(3,12.9442);
   Btag_Pre_AlphaT_5__all->SetEntries(1148);
   Btag_Pre_AlphaT_5__all->SetFillColor(4);
   Btag_Pre_AlphaT_5__all->SetLineColor(4);
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
   Double_t xAxis2931[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2931);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,807);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,307);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,135);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,19);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1);
   Btag_Pre_AlphaT_5__all->SetBinError(1,28.40775);
   Btag_Pre_AlphaT_5__all->SetBinError(2,17.52142);
   Btag_Pre_AlphaT_5__all->SetBinError(3,11.61895);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.358899);
   Btag_Pre_AlphaT_5__all->SetBinError(5,1);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(34966.73);
   Btag_Pre_AlphaT_5__all->SetEntries(1269);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_325_375    Jet Multiplicity=all");
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
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis2932[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2932);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.2307908);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.3126366);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.2694946);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.5247926);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.054047);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.04884017);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.06777255);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.09232787);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2458239);
   Btag_Pre_AlphaT_5__all->SetBinError(5,1.110539);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(4.121269);
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
   gre->SetPointError(0,0.5,0.03385564);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.03654845);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.03342196);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.08830519);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.4830085);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all489 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all489","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->SetMinimum(0.4203898);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->SetMaximum(1.57961);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all489->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all489);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2933[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis2933);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.2307908);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.3126366);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.2694946);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.5247926);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.054047);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.04884017);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.06777255);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.09232787);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2458239);
   Btag_Pre_AlphaT_5__all->SetBinError(5,1.110539);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(4.121269);
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
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->cd();
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->Modified();
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->cd();
   canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all->SetSelected(canvasOneMuon_325_375/Btag_Pre_AlphaT_5__all);
}
