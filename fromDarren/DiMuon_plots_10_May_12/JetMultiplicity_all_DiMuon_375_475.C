{
//=========Macro generated from canvas: canvasDiMuon_375_475/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:45:10 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_375_475/JetMultiplicity_all = new TCanvas("canvasDiMuon_375_475/JetMultiplicity_all", "cannameJetMultiplicity_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasDiMuon_375_475/JetMultiplicity_all->SetHighLightColor(2);
   canvasDiMuon_375_475/JetMultiplicity_all->Range(0,0,1,1);
   canvasDiMuon_375_475/JetMultiplicity_all->SetFillColor(0);
   canvasDiMuon_375_475/JetMultiplicity_all->SetBorderMode(0);
   canvasDiMuon_375_475/JetMultiplicity_all->SetBorderSize(2);
   canvasDiMuon_375_475/JetMultiplicity_all->SetTickx(1);
   canvasDiMuon_375_475/JetMultiplicity_all->SetTicky(1);
   canvasDiMuon_375_475/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.7466802,16.875,3.709821);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis481[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis481);
   JetMultiplicity_all->SetBinContent(3,46);
   JetMultiplicity_all->SetBinContent(4,38);
   JetMultiplicity_all->SetBinContent(5,15);
   JetMultiplicity_all->SetBinContent(6,1);
   JetMultiplicity_all->SetBinError(3,6.78233);
   JetMultiplicity_all->SetBinError(4,6.164414);
   JetMultiplicity_all->SetBinError(5,3.872983);
   JetMultiplicity_all->SetBinError(6,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1837.262);
   JetMultiplicity_all->SetEntries(100);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PE0");
   Double_t xAxis482[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis482);
   JetMultiplicity_all->SetBinContent(5,0.04907353);
   JetMultiplicity_all->SetBinError(5,0.04907353);
   JetMultiplicity_all->SetEntries(1);
   JetMultiplicity_all->SetLineColor(4);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis483[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis483);
   JetMultiplicity_all->SetBinContent(3,3.712686);
   JetMultiplicity_all->SetBinContent(4,7.664627);
   JetMultiplicity_all->SetBinContent(5,3.953759);
   JetMultiplicity_all->SetBinContent(6,1.178418);
   JetMultiplicity_all->SetBinError(3,0.9790995);
   JetMultiplicity_all->SetBinError(4,1.390521);
   JetMultiplicity_all->SetBinError(5,0.9749706);
   JetMultiplicity_all->SetBinError(6,0.7020035);
   JetMultiplicity_all->SetEntries(82);
   JetMultiplicity_all->SetLineColor(2);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis484[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis484);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis485[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis485);
   JetMultiplicity_all->SetBinContent(3,179.1781);
   JetMultiplicity_all->SetBinContent(4,110.3381);
   JetMultiplicity_all->SetBinContent(5,33.37522);
   JetMultiplicity_all->SetBinContent(6,0.8201456);
   JetMultiplicity_all->SetBinError(3,9.727632);
   JetMultiplicity_all->SetBinError(4,7.593222);
   JetMultiplicity_all->SetBinError(5,4.496524);
   JetMultiplicity_all->SetBinError(6,0.6011703);
   JetMultiplicity_all->SetEntries(800);
   JetMultiplicity_all->SetLineColor(6);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis486[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis486);
   JetMultiplicity_all->SetBinContent(3,0.2276621);
   JetMultiplicity_all->SetBinContent(4,0.3377661);
   JetMultiplicity_all->SetBinContent(5,0.03887373);
   JetMultiplicity_all->SetBinContent(6,0.003277954);
   JetMultiplicity_all->SetBinError(3,0.09528478);
   JetMultiplicity_all->SetBinError(4,0.1384909);
   JetMultiplicity_all->SetBinError(5,0.03266205);
   JetMultiplicity_all->SetBinError(6,0.003277954);
   JetMultiplicity_all->SetEntries(18);
   JetMultiplicity_all->SetLineColor(40);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis487[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis487);
   JetMultiplicity_all->SetBinContent(3,0.607737);
   JetMultiplicity_all->SetBinContent(4,1.183341);
   JetMultiplicity_all->SetBinContent(5,0.1812418);
   JetMultiplicity_all->SetBinContent(6,0.01453692);
   JetMultiplicity_all->SetBinError(3,0.08482714);
   JetMultiplicity_all->SetBinError(4,0.139359);
   JetMultiplicity_all->SetBinError(5,0.03788855);
   JetMultiplicity_all->SetBinError(6,0.01016977);
   JetMultiplicity_all->SetEntries(221);
   JetMultiplicity_all->SetLineColor(44);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis488[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis488);
   JetMultiplicity_all->SetLineColor(7);
   JetMultiplicity_all->SetLineStyle(10);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis489[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis489);
   JetMultiplicity_all->SetBinContent(3,183.7262);
   JetMultiplicity_all->SetBinContent(4,119.5238);
   JetMultiplicity_all->SetBinContent(5,37.59817);
   JetMultiplicity_all->SetBinContent(6,2.016378);
   JetMultiplicity_all->SetBinError(3,9.777614);
   JetMultiplicity_all->SetBinError(4,7.721993);
   JetMultiplicity_all->SetBinError(5,4.601544);
   JetMultiplicity_all->SetBinError(6,0.9242991);
   JetMultiplicity_all->SetEntries(1122);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all81 = new TH1F("Graph_Graph_from_JetMultiplicity_all81","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all81->SetMinimum(0.0011);
   Graph_Graph_from_JetMultiplicity_all81->SetMaximum(1.1);
   Graph_Graph_from_JetMultiplicity_all81->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all81->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all81->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all81->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all81->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all81->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all81->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all81->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all81->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all81->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all81->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all81->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all81);
   
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
   gre->SetPoint(2,2.5,183.7262);
   gre->SetPointError(2,0.5,9.777614);
   gre->SetPoint(3,3.5,119.5238);
   gre->SetPointError(3,0.5,7.721993);
   gre->SetPoint(4,4.5,37.59817);
   gre->SetPointError(4,0.5,4.601544);
   gre->SetPoint(5,5.5,2.016378);
   gre->SetPointError(5,0.5,0.9242991);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all82 = new TH1F("Graph_Graph_from_JetMultiplicity_all82","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all82->SetMinimum(0.2128542);
   Graph_Graph_from_JetMultiplicity_all82->SetMaximum(212.8542);
   Graph_Graph_from_JetMultiplicity_all82->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all82->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all82->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all82->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all82->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all82->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all82->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all82->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all82->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all82->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all82->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all82->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all82);
   
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
   entry=leg->AddEntry("JetMultiplicity_all","Single Top","L");
   entry->SetLineColor(40);
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
   entry=leg->AddEntry("JetMultiplicity_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_375_475    Jet Multiplicity=all");
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
   Double_t xAxis490[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis490);
   JetMultiplicity_all->SetBinContent(3,46);
   JetMultiplicity_all->SetBinContent(4,38);
   JetMultiplicity_all->SetBinContent(5,15);
   JetMultiplicity_all->SetBinContent(6,1);
   JetMultiplicity_all->SetBinError(3,6.78233);
   JetMultiplicity_all->SetBinError(4,6.164414);
   JetMultiplicity_all->SetBinError(5,3.872983);
   JetMultiplicity_all->SetBinError(6,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1837.262);
   JetMultiplicity_all->SetEntries(100);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_375_475/JetMultiplicity_all->cd();
  
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
   Double_t xAxis491[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis491);
   JetMultiplicity_all->SetBinContent(3,0.2503726);
   JetMultiplicity_all->SetBinContent(4,0.3179283);
   JetMultiplicity_all->SetBinContent(5,0.3989556);
   JetMultiplicity_all->SetBinContent(6,0.4959386);
   JetMultiplicity_all->SetBinError(3,0.1567524);
   JetMultiplicity_all->SetBinError(4,0.1746132);
   JetMultiplicity_all->SetBinError(5,0.2857365);
   JetMultiplicity_all->SetBinError(6,1.100058);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(6.791156);
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
   gre->SetPointError(2,0.5,0.05321841);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.06460631);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.1223874);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.4583956);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,0);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all83 = new TH1F("Graph_Graph_from_JetMultiplicity_all83","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all83->SetMinimum(0.4499253);
   Graph_Graph_from_JetMultiplicity_all83->SetMaximum(1.550075);
   Graph_Graph_from_JetMultiplicity_all83->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all83->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all83->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all83->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all83->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all83->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all83->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all83->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all83->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all83->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all83->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all83->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all83);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis492[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis492);
   JetMultiplicity_all->SetBinContent(3,0.2503726);
   JetMultiplicity_all->SetBinContent(4,0.3179283);
   JetMultiplicity_all->SetBinContent(5,0.3989556);
   JetMultiplicity_all->SetBinContent(6,0.4959386);
   JetMultiplicity_all->SetBinError(3,0.1567524);
   JetMultiplicity_all->SetBinError(4,0.1746132);
   JetMultiplicity_all->SetBinError(5,0.2857365);
   JetMultiplicity_all->SetBinError(6,1.100058);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(6.791156);
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
   canvasDiMuon_375_475/JetMultiplicity_all->cd();
   canvasDiMuon_375_475/JetMultiplicity_all->Modified();
   canvasDiMuon_375_475/JetMultiplicity_all->cd();
   canvasDiMuon_375_475/JetMultiplicity_all->SetSelected(canvasDiMuon_375_475/JetMultiplicity_all);
}
