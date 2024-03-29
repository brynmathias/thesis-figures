{
//=========Macro generated from canvas: canvas675_775/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:23:58 2012) by ROOT version5.32/00
   TCanvas *canvas675_775/JetMultiplicity_all = new TCanvas("canvas675_775/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas675_775/JetMultiplicity_all->SetHighLightColor(2);
   canvas675_775/JetMultiplicity_all->Range(0,0,1,1);
   canvas675_775/JetMultiplicity_all->SetFillColor(0);
   canvas675_775/JetMultiplicity_all->SetBorderMode(0);
   canvas675_775/JetMultiplicity_all->SetBorderSize(2);
   canvas675_775/JetMultiplicity_all->SetTickx(1);
   canvas675_775/JetMultiplicity_all->SetTicky(1);
   canvas675_775/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-1.116261,16.875,7.036051);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2664[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2664);
   JetMultiplicity_all->SetBinContent(3,173);
   JetMultiplicity_all->SetBinContent(4,4877);
   JetMultiplicity_all->SetBinContent(5,7480);
   JetMultiplicity_all->SetBinContent(6,5622);
   JetMultiplicity_all->SetBinContent(7,3486);
   JetMultiplicity_all->SetBinContent(8,1020);
   JetMultiplicity_all->SetBinContent(9,161);
   JetMultiplicity_all->SetBinContent(10,12);
   JetMultiplicity_all->SetBinContent(11,1);
   JetMultiplicity_all->SetBinError(3,13.15295);
   JetMultiplicity_all->SetBinError(4,69.83552);
   JetMultiplicity_all->SetBinError(5,86.48699);
   JetMultiplicity_all->SetBinError(6,74.98);
   JetMultiplicity_all->SetBinError(7,59.04236);
   JetMultiplicity_all->SetBinError(8,31.93744);
   JetMultiplicity_all->SetBinError(9,12.68858);
   JetMultiplicity_all->SetBinError(10,3.464102);
   JetMultiplicity_all->SetBinError(11,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1662724);
   JetMultiplicity_all->SetEntries(22832);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   Double_t xAxis2665[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2665);
   JetMultiplicity_all->SetBinContent(3,134.5002);
   JetMultiplicity_all->SetBinContent(4,126.9406);
   JetMultiplicity_all->SetBinContent(5,65.96185);
   JetMultiplicity_all->SetBinContent(6,21.75056);
   JetMultiplicity_all->SetBinContent(7,5.69291);
   JetMultiplicity_all->SetBinContent(8,0.7254977);
   JetMultiplicity_all->SetBinContent(9,0.1283663);
   JetMultiplicity_all->SetBinError(3,3.161061);
   JetMultiplicity_all->SetBinError(4,3.222672);
   JetMultiplicity_all->SetBinError(5,2.268989);
   JetMultiplicity_all->SetBinError(6,1.33356);
   JetMultiplicity_all->SetBinError(7,0.7187903);
   JetMultiplicity_all->SetBinError(8,0.2396233);
   JetMultiplicity_all->SetBinError(9,0.09081912);
   JetMultiplicity_all->SetEntries(6486);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_178 = new TH1F("_stack_178","",15,0,15);
   _stack_178->SetMinimum(66.63573);
   _stack_178->SetMaximum(266542.9);
   _stack_178->SetDirectory(0);
   _stack_178->SetStats(0);
   _stack_178->GetXaxis()->SetLabelFont(42);
   _stack_178->GetXaxis()->SetLabelOffset(0.007);
   _stack_178->GetXaxis()->SetLabelSize(0.05);
   _stack_178->GetXaxis()->SetTitleSize(0.05);
   _stack_178->GetYaxis()->SetLabelFont(42);
   _stack_178->GetYaxis()->SetLabelOffset(0.007);
   _stack_178->GetYaxis()->SetLabelSize(0.05);
   _stack_178->GetZaxis()->SetLabelFont(42);
   _stack_178->GetZaxis()->SetLabelOffset(0.007);
   _stack_178->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_178);
   
   Double_t xAxis2666[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2666);
   JetMultiplicity_all->SetBinContent(3,365.2828);
   JetMultiplicity_all->SetBinContent(4,546.5145);
   JetMultiplicity_all->SetBinContent(5,512.5077);
   JetMultiplicity_all->SetBinContent(6,411.0386);
   JetMultiplicity_all->SetBinContent(7,251.3814);
   JetMultiplicity_all->SetBinContent(8,81.67026);
   JetMultiplicity_all->SetBinContent(9,14.10174);
   JetMultiplicity_all->SetBinContent(10,2.184642);
   JetMultiplicity_all->SetBinError(3,5.554252);
   JetMultiplicity_all->SetBinError(4,8.150574);
   JetMultiplicity_all->SetBinError(5,9.706457);
   JetMultiplicity_all->SetBinError(6,9.987538);
   JetMultiplicity_all->SetBinError(7,8.24699);
   JetMultiplicity_all->SetBinError(8,5.524741);
   JetMultiplicity_all->SetBinError(9,1.994415);
   JetMultiplicity_all->SetBinError(10,0.9431106);
   JetMultiplicity_all->SetEntries(30561);
   JetMultiplicity_all->SetLineColor(3);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerColor(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis2667[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2667);
   JetMultiplicity_all->SetBinContent(3,165907.1);
   JetMultiplicity_all->SetBinContent(4,150975);
   JetMultiplicity_all->SetBinContent(5,80214.33);
   JetMultiplicity_all->SetBinContent(6,28996.3);
   JetMultiplicity_all->SetBinContent(7,7349.008);
   JetMultiplicity_all->SetBinContent(8,1159.996);
   JetMultiplicity_all->SetBinContent(9,342.085);
   JetMultiplicity_all->SetBinContent(10,75.31527);
   JetMultiplicity_all->SetBinError(3,682.1996);
   JetMultiplicity_all->SetBinError(4,651.6149);
   JetMultiplicity_all->SetBinError(5,518.1528);
   JetMultiplicity_all->SetBinError(6,386.5125);
   JetMultiplicity_all->SetBinError(7,257.5976);
   JetMultiplicity_all->SetBinError(8,139.9537);
   JetMultiplicity_all->SetBinError(9,154.5222);
   JetMultiplicity_all->SetBinError(10,70.81201);
   JetMultiplicity_all->SetEntries(218574);
   JetMultiplicity_all->SetLineColor(7);
   JetMultiplicity_all->SetLineStyle(10);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
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
   TLegendEntry *entry=leg->AddEntry("JetMultiplicity_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("JetMultiplicity_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicity_all","Combined EWK","L");
   entry->SetLineColor(3);
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
   Double_t xAxis2668[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2668);
   JetMultiplicity_all->SetBinContent(3,173);
   JetMultiplicity_all->SetBinContent(4,4877);
   JetMultiplicity_all->SetBinContent(5,7480);
   JetMultiplicity_all->SetBinContent(6,5622);
   JetMultiplicity_all->SetBinContent(7,3486);
   JetMultiplicity_all->SetBinContent(8,1020);
   JetMultiplicity_all->SetBinContent(9,161);
   JetMultiplicity_all->SetBinContent(10,12);
   JetMultiplicity_all->SetBinContent(11,1);
   JetMultiplicity_all->SetBinError(3,13.15295);
   JetMultiplicity_all->SetBinError(4,69.83552);
   JetMultiplicity_all->SetBinError(5,86.48699);
   JetMultiplicity_all->SetBinError(6,74.98);
   JetMultiplicity_all->SetBinError(7,59.04236);
   JetMultiplicity_all->SetBinError(8,31.93744);
   JetMultiplicity_all->SetBinError(9,12.68858);
   JetMultiplicity_all->SetBinError(10,3.464102);
   JetMultiplicity_all->SetBinError(11,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(1662724);
   JetMultiplicity_all->SetEntries(22832);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvas675_775/JetMultiplicity_all->cd();
  
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
   Double_t xAxis2669[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2669);
   JetMultiplicity_all->SetBinContent(3,0.4736057);
   JetMultiplicity_all->SetBinContent(4,8.923825);
   JetMultiplicity_all->SetBinContent(5,14.5949);
   JetMultiplicity_all->SetBinContent(6,13.67755);
   JetMultiplicity_all->SetBinContent(7,13.86738);
   JetMultiplicity_all->SetBinContent(8,12.48925);
   JetMultiplicity_all->SetBinContent(9,11.41703);
   JetMultiplicity_all->SetBinContent(10,5.492891);
   JetMultiplicity_all->SetBinError(3,0.07753418);
   JetMultiplicity_all->SetBinError(4,0.02067519);
   JetMultiplicity_all->SetBinError(5,0.02218966);
   JetMultiplicity_all->SetBinError(6,0.02771786);
   JetMultiplicity_all->SetBinError(7,0.03692073);
   JetMultiplicity_all->SetBinError(8,0.07454191);
   JetMultiplicity_all->SetBinError(9,0.1619065);
   JetMultiplicity_all->SetBinError(10,0.5193251);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(505.18);
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
   gre->SetPointError(2,0.5,0.01520535);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.01491374);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.01893914);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.0242983);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.03280668);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.06764691);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,0.1414303);
   gre->SetPoint(9,9.5,1);
   gre->SetPointError(9,0.5,0.4317003);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all445 = new TH1F("Graph_Graph_from_JetMultiplicity_all445","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all445->SetMinimum(0.4819596);
   Graph_Graph_from_JetMultiplicity_all445->SetMaximum(1.51804);
   Graph_Graph_from_JetMultiplicity_all445->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all445->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all445->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all445->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all445->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all445->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all445->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all445->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all445->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all445->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all445->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all445->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all445);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2670[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis2670);
   JetMultiplicity_all->SetBinContent(3,0.4736057);
   JetMultiplicity_all->SetBinContent(4,8.923825);
   JetMultiplicity_all->SetBinContent(5,14.5949);
   JetMultiplicity_all->SetBinContent(6,13.67755);
   JetMultiplicity_all->SetBinContent(7,13.86738);
   JetMultiplicity_all->SetBinContent(8,12.48925);
   JetMultiplicity_all->SetBinContent(9,11.41703);
   JetMultiplicity_all->SetBinContent(10,5.492891);
   JetMultiplicity_all->SetBinError(3,0.07753418);
   JetMultiplicity_all->SetBinError(4,0.02067519);
   JetMultiplicity_all->SetBinError(5,0.02218966);
   JetMultiplicity_all->SetBinError(6,0.02771786);
   JetMultiplicity_all->SetBinError(7,0.03692073);
   JetMultiplicity_all->SetBinError(8,0.07454191);
   JetMultiplicity_all->SetBinError(9,0.1619065);
   JetMultiplicity_all->SetBinError(10,0.5193251);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(505.18);
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
   canvas675_775/JetMultiplicity_all->cd();
   canvas675_775/JetMultiplicity_all->Modified();
   canvas675_775/JetMultiplicity_all->cd();
   canvas675_775/JetMultiplicity_all->SetSelected(canvas675_775/JetMultiplicity_all);
}
