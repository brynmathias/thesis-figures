{
//=========Macro generated from canvas: canvasbtag_morethanzero_375_475/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:25:21 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_375_475/JetMultiplicity_all = new TCanvas("canvasbtag_morethanzero_375_475/JetMultiplicity_all", "cannameJetMultiplicity_all",0,0,1200,1200);
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
   u->Range(-1.875,-1.185684,16.875,7.660854);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4891[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4891);
   JetMultiplicity_all->SetBinContent(3,2338);
   JetMultiplicity_all->SetBinContent(4,3866);
   JetMultiplicity_all->SetBinContent(5,5280);
   JetMultiplicity_all->SetBinContent(6,2667);
   JetMultiplicity_all->SetBinContent(7,59);
   JetMultiplicity_all->SetBinError(3,48.35287);
   JetMultiplicity_all->SetBinError(4,62.17717);
   JetMultiplicity_all->SetBinError(5,72.66361);
   JetMultiplicity_all->SetBinError(6,51.64301);
   JetMultiplicity_all->SetBinError(7,7.681146);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(5973102);
   JetMultiplicity_all->SetEntries(14210);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PE0");
   Double_t xAxis4892[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4892);
   JetMultiplicity_all->SetBinContent(3,244.1589);
   JetMultiplicity_all->SetBinContent(4,477.8198);
   JetMultiplicity_all->SetBinContent(5,221.5407);
   JetMultiplicity_all->SetBinContent(6,23.45201);
   JetMultiplicity_all->SetBinContent(7,0.110258);
   JetMultiplicity_all->SetBinError(3,3.846442);
   JetMultiplicity_all->SetBinError(4,5.576085);
   JetMultiplicity_all->SetBinError(5,3.986672);
   JetMultiplicity_all->SetBinError(6,1.306916);
   JetMultiplicity_all->SetBinError(7,0.07936105);
   JetMultiplicity_all->SetEntries(23201);
   JetMultiplicity_all->SetLineColor(4);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4893[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4893);
   JetMultiplicity_all->SetBinContent(3,113.969);
   JetMultiplicity_all->SetBinContent(4,1222.061);
   JetMultiplicity_all->SetBinContent(5,2580.36);
   JetMultiplicity_all->SetBinContent(6,757.415);
   JetMultiplicity_all->SetBinContent(7,16.77422);
   JetMultiplicity_all->SetBinError(3,5.327772);
   JetMultiplicity_all->SetBinError(4,19.42127);
   JetMultiplicity_all->SetBinError(5,28.247);
   JetMultiplicity_all->SetBinError(6,16.30828);
   JetMultiplicity_all->SetBinError(7,2.441191);
   JetMultiplicity_all->SetEntries(22424);
   JetMultiplicity_all->SetLineColor(2);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4894[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4894);
   JetMultiplicity_all->SetBinContent(3,172.2452);
   JetMultiplicity_all->SetBinContent(4,188.4501);
   JetMultiplicity_all->SetBinContent(5,73.74791);
   JetMultiplicity_all->SetBinContent(6,6.320229);
   JetMultiplicity_all->SetBinContent(7,0.1031944);
   JetMultiplicity_all->SetBinError(3,3.638896);
   JetMultiplicity_all->SetBinError(4,4.023478);
   JetMultiplicity_all->SetBinError(5,2.513211);
   JetMultiplicity_all->SetBinError(6,0.7007578);
   JetMultiplicity_all->SetBinError(7,0.1031944);
   JetMultiplicity_all->SetEntries(7906);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4895[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4895);
   JetMultiplicity_all->SetBinContent(3,17.889);
   JetMultiplicity_all->SetBinContent(4,42.33905);
   JetMultiplicity_all->SetBinContent(5,24.64506);
   JetMultiplicity_all->SetBinContent(6,5.464284);
   JetMultiplicity_all->SetBinError(3,2.983929);
   JetMultiplicity_all->SetBinError(4,4.561422);
   JetMultiplicity_all->SetBinError(5,4.289659);
   JetMultiplicity_all->SetBinError(6,1.924918);
   JetMultiplicity_all->SetEntries(219);
   JetMultiplicity_all->SetLineColor(6);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4896[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4896);
   JetMultiplicity_all->SetBinContent(3,5.820012);
   JetMultiplicity_all->SetBinContent(4,25.63414);
   JetMultiplicity_all->SetBinContent(5,23.04383);
   JetMultiplicity_all->SetBinContent(6,2.989475);
   JetMultiplicity_all->SetBinContent(7,0.01450128);
   JetMultiplicity_all->SetBinError(3,0.3639358);
   JetMultiplicity_all->SetBinError(4,0.7929024);
   JetMultiplicity_all->SetBinError(5,0.7390946);
   JetMultiplicity_all->SetBinError(6,0.2617723);
   JetMultiplicity_all->SetBinError(7,0.007500064);
   JetMultiplicity_all->SetEntries(4853);
   JetMultiplicity_all->SetLineColor(44);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4897[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4897);
   JetMultiplicity_all->SetBinContent(3,517467.1);
   JetMultiplicity_all->SetBinContent(4,595041.6);
   JetMultiplicity_all->SetBinContent(5,245427.5);
   JetMultiplicity_all->SetBinContent(6,22406.31);
   JetMultiplicity_all->SetBinContent(7,287.1997);
   JetMultiplicity_all->SetBinError(3,5960.764);
   JetMultiplicity_all->SetBinError(4,6777.272);
   JetMultiplicity_all->SetBinError(5,4725.712);
   JetMultiplicity_all->SetBinError(6,1303.52);
   JetMultiplicity_all->SetBinError(7,149.8335);
   JetMultiplicity_all->SetEntries(48831);
   JetMultiplicity_all->SetLineColor(7);
   JetMultiplicity_all->SetLineStyle(10);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4898[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4898);
   JetMultiplicity_all->SetBinContent(3,51.77514);
   JetMultiplicity_all->SetBinContent(4,312.2661);
   JetMultiplicity_all->SetBinContent(5,307.0927);
   JetMultiplicity_all->SetBinContent(6,51.28737);
   JetMultiplicity_all->SetBinContent(7,0.7728917);
   JetMultiplicity_all->SetBinError(3,1.745172);
   JetMultiplicity_all->SetBinError(4,4.67025);
   JetMultiplicity_all->SetBinError(5,4.679607);
   JetMultiplicity_all->SetBinError(6,1.960562);
   JetMultiplicity_all->SetBinError(7,0.2115241);
   JetMultiplicity_all->SetEntries(15591);
   JetMultiplicity_all->SetLineColor(40);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("HISTSAME");
   Double_t xAxis4899[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4899);
   JetMultiplicity_all->SetBinContent(3,518073);
   JetMultiplicity_all->SetBinContent(4,597310.2);
   JetMultiplicity_all->SetBinContent(5,248657.9);
   JetMultiplicity_all->SetBinContent(6,23253.24);
   JetMultiplicity_all->SetBinContent(7,304.9747);
   JetMultiplicity_all->SetBinError(3,5960.769);
   JetMultiplicity_all->SetBinError(4,6777.307);
   JetMultiplicity_all->SetBinError(5,4725.803);
   JetMultiplicity_all->SetBinError(6,1303.626);
   JetMultiplicity_all->SetBinError(7,149.8536);
   JetMultiplicity_all->SetEntries(123025);
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
   gre->SetPoint(2,2.5,517467.1);
   gre->SetPointError(2,0.5,5960.764);
   gre->SetPoint(3,3.5,595041.6);
   gre->SetPointError(3,0.5,6777.272);
   gre->SetPoint(4,4.5,245427.5);
   gre->SetPointError(4,0.5,4725.712);
   gre->SetPoint(5,5.5,22406.31);
   gre->SetPointError(5,0.5,1303.52);
   gre->SetPoint(6,6.5,287.1997);
   gre->SetPointError(6,0.5,149.8335);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all816 = new TH1F("Graph_Graph_from_JetMultiplicity_all816","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all816->SetMinimum(662.0008);
   Graph_Graph_from_JetMultiplicity_all816->SetMaximum(662000.8);
   Graph_Graph_from_JetMultiplicity_all816->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all816->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all816->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all816->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all816->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all816->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all816->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all816->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all816->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all816->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all816->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all816->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all816);
   
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
   gre->SetPoint(2,2.5,518073);
   gre->SetPointError(2,0.5,5960.769);
   gre->SetPoint(3,3.5,597310.2);
   gre->SetPointError(3,0.5,6777.307);
   gre->SetPoint(4,4.5,248657.9);
   gre->SetPointError(4,0.5,4725.803);
   gre->SetPoint(5,5.5,23253.24);
   gre->SetPointError(5,0.5,1303.626);
   gre->SetPoint(6,6.5,304.9747);
   gre->SetPointError(6,0.5,149.8536);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all817 = new TH1F("Graph_Graph_from_JetMultiplicity_all817","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all817->SetMinimum(664.4962);
   Graph_Graph_from_JetMultiplicity_all817->SetMaximum(664496.2);
   Graph_Graph_from_JetMultiplicity_all817->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all817->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all817->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all817->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all817->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all817->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all817->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all817->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all817->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all817->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all817->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all817->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all817);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_375_475    Jet Multiplicity=all");
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
   Double_t xAxis4900[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4900);
   JetMultiplicity_all->SetBinContent(3,2338);
   JetMultiplicity_all->SetBinContent(4,3866);
   JetMultiplicity_all->SetBinContent(5,5280);
   JetMultiplicity_all->SetBinContent(6,2667);
   JetMultiplicity_all->SetBinContent(7,59);
   JetMultiplicity_all->SetBinError(3,48.35287);
   JetMultiplicity_all->SetBinError(4,62.17717);
   JetMultiplicity_all->SetBinError(5,72.66361);
   JetMultiplicity_all->SetBinError(6,51.64301);
   JetMultiplicity_all->SetBinError(7,7.681146);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(5973102);
   JetMultiplicity_all->SetEntries(14210);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
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
   Double_t xAxis4901[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4901);
   JetMultiplicity_all->SetBinContent(3,0.004512878);
   JetMultiplicity_all->SetBinContent(4,0.006472349);
   JetMultiplicity_all->SetBinContent(5,0.02123399);
   JetMultiplicity_all->SetBinContent(6,0.1146937);
   JetMultiplicity_all->SetBinContent(7,0.1934586);
   JetMultiplicity_all->SetBinError(3,0.02366635);
   JetMultiplicity_all->SetBinError(4,0.01968262);
   JetMultiplicity_all->SetBinError(5,0.02346472);
   JetMultiplicity_all->SetBinError(6,0.05931203);
   JetMultiplicity_all->SetBinError(7,0.5083186);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(11.92265);
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
   gre->SetPointError(2,0.5,0.01150566);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.01134638);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.01900524);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.05606214);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.491364);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all818 = new TH1F("Graph_Graph_from_JetMultiplicity_all818","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all818->SetMinimum(0.4103632);
   Graph_Graph_from_JetMultiplicity_all818->SetMaximum(1.589637);
   Graph_Graph_from_JetMultiplicity_all818->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all818->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all818->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all818->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all818->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all818->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all818->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all818->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all818->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all818->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all818->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all818->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all818);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4902[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis4902);
   JetMultiplicity_all->SetBinContent(3,0.004512878);
   JetMultiplicity_all->SetBinContent(4,0.006472349);
   JetMultiplicity_all->SetBinContent(5,0.02123399);
   JetMultiplicity_all->SetBinContent(6,0.1146937);
   JetMultiplicity_all->SetBinContent(7,0.1934586);
   JetMultiplicity_all->SetBinError(3,0.02366635);
   JetMultiplicity_all->SetBinError(4,0.01968262);
   JetMultiplicity_all->SetBinError(5,0.02346472);
   JetMultiplicity_all->SetBinError(6,0.05931203);
   JetMultiplicity_all->SetBinError(7,0.5083186);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(11.92265);
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
