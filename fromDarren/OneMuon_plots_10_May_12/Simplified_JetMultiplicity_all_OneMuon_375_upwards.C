{
//=========Macro generated from canvas: canvasOneMuon_375_475/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:06:27 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_375_475/JetMultiplicity_all = new TCanvas("canvasOneMuon_375_475/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_375_475/JetMultiplicity_all->SetHighLightColor(2);
   canvasOneMuon_375_475/JetMultiplicity_all->Range(0,0,1,1);
   canvasOneMuon_375_475/JetMultiplicity_all->SetFillColor(0);
   canvasOneMuon_375_475/JetMultiplicity_all->SetBorderMode(0);
   canvasOneMuon_375_475/JetMultiplicity_all->SetBorderSize(2);
   canvasOneMuon_375_475/JetMultiplicity_all->SetTickx(1);
   canvasOneMuon_375_475/JetMultiplicity_all->SetTicky(1);
   canvasOneMuon_375_475/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.8951796,16.875,5.046316);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis534[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis534);
   JetMultiplicity_all->SetBinContent(3,535);
   JetMultiplicity_all->SetBinContent(4,833);
   JetMultiplicity_all->SetBinContent(5,1056);
   JetMultiplicity_all->SetBinContent(6,396);
   JetMultiplicity_all->SetBinContent(7,84);
   JetMultiplicity_all->SetBinContent(8,15);
   JetMultiplicity_all->SetBinContent(9,4);
   JetMultiplicity_all->SetBinContent(10,1);
   JetMultiplicity_all->SetBinError(3,23.13007);
   JetMultiplicity_all->SetBinError(4,28.86174);
   JetMultiplicity_all->SetBinError(5,32.49615);
   JetMultiplicity_all->SetBinError(6,19.89975);
   JetMultiplicity_all->SetBinError(7,9.165151);
   JetMultiplicity_all->SetBinError(8,3.872983);
   JetMultiplicity_all->SetBinError(9,2.3);
   JetMultiplicity_all->SetBinError(10,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(28324.79);
   JetMultiplicity_all->SetEntries(2924);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   Double_t xAxis535[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis535);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_36 = new TH1F("_stack_36","",15,0,15);
   _stack_36->SetMinimum(1.139527);
   _stack_36->SetMaximum(4558.107);
   _stack_36->SetDirectory(0);
   _stack_36->SetStats(0);
   _stack_36->GetXaxis()->SetLabelFont(42);
   _stack_36->GetXaxis()->SetLabelOffset(0.007);
   _stack_36->GetXaxis()->SetLabelSize(0.05);
   _stack_36->GetXaxis()->SetTitleSize(0.05);
   _stack_36->GetYaxis()->SetLabelFont(42);
   _stack_36->GetYaxis()->SetLabelOffset(0.007);
   _stack_36->GetYaxis()->SetLabelSize(0.05);
   _stack_36->GetZaxis()->SetLabelFont(42);
   _stack_36->GetZaxis()->SetLabelOffset(0.007);
   _stack_36->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_36);
   
   Double_t xAxis536[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis536);
   JetMultiplicity_all->SetBinContent(3,2817.728);
   JetMultiplicity_all->SetBinContent(4,2830.128);
   JetMultiplicity_all->SetBinContent(5,1761.451);
   JetMultiplicity_all->SetBinContent(6,531.1464);
   JetMultiplicity_all->SetBinContent(7,129.3557);
   JetMultiplicity_all->SetBinContent(8,23.19481);
   JetMultiplicity_all->SetBinContent(9,1.951047);
   JetMultiplicity_all->SetBinContent(10,0.8281355);
   JetMultiplicity_all->SetBinContent(11,0.3192624);
   JetMultiplicity_all->SetBinError(3,15.37693);
   JetMultiplicity_all->SetBinError(4,18.68936);
   JetMultiplicity_all->SetBinError(5,20.01343);
   JetMultiplicity_all->SetBinError(6,11.32888);
   JetMultiplicity_all->SetBinError(7,7.028753);
   JetMultiplicity_all->SetBinError(8,2.50085);
   JetMultiplicity_all->SetBinError(9,0.6732809);
   JetMultiplicity_all->SetBinError(10,0.4602474);
   JetMultiplicity_all->SetBinError(11,0.2553901);
   JetMultiplicity_all->SetEntries(136754);
   JetMultiplicity_all->SetLineColor(3);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->SetMarkerColor(3);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis537[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis537);
   JetMultiplicity_all->SetBinContent(3,1.596914);
   JetMultiplicity_all->SetBinContent(4,2.351403);
   JetMultiplicity_all->SetBinContent(6,2.206641);
   JetMultiplicity_all->SetBinError(3,1.345318);
   JetMultiplicity_all->SetBinError(4,2.246525);
   JetMultiplicity_all->SetBinError(6,2.10194);
   JetMultiplicity_all->SetEntries(7);
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
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_375_    Jet Multiplicity=all");
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
   Double_t xAxis538[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis538);
   JetMultiplicity_all->SetBinContent(3,535);
   JetMultiplicity_all->SetBinContent(4,833);
   JetMultiplicity_all->SetBinContent(5,1056);
   JetMultiplicity_all->SetBinContent(6,396);
   JetMultiplicity_all->SetBinContent(7,84);
   JetMultiplicity_all->SetBinContent(8,15);
   JetMultiplicity_all->SetBinContent(9,4);
   JetMultiplicity_all->SetBinContent(10,1);
   JetMultiplicity_all->SetBinError(3,23.13007);
   JetMultiplicity_all->SetBinError(4,28.86174);
   JetMultiplicity_all->SetBinError(5,32.49615);
   JetMultiplicity_all->SetBinError(6,19.89975);
   JetMultiplicity_all->SetBinError(7,9.165151);
   JetMultiplicity_all->SetBinError(8,3.872983);
   JetMultiplicity_all->SetBinError(9,2.3);
   JetMultiplicity_all->SetBinError(10,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(28324.79);
   JetMultiplicity_all->SetEntries(2924);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   u->Modified();
   canvasOneMuon_375_475/JetMultiplicity_all->cd();
  
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
   Double_t xAxis539[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis539);
   JetMultiplicity_all->SetBinContent(3,0.1898693);
   JetMultiplicity_all->SetBinContent(4,0.294333);
   JetMultiplicity_all->SetBinContent(5,0.5995059);
   JetMultiplicity_all->SetBinContent(6,0.7455572);
   JetMultiplicity_all->SetBinContent(7,0.6493724);
   JetMultiplicity_all->SetBinContent(8,0.6466965);
   JetMultiplicity_all->SetBinContent(9,2.050181);
   JetMultiplicity_all->SetBinContent(10,1.207532);
   JetMultiplicity_all->SetBinError(3,0.04357683);
   JetMultiplicity_all->SetBinError(4,0.03527165);
   JetMultiplicity_all->SetBinError(5,0.03280339);
   JetMultiplicity_all->SetBinError(6,0.05459106);
   JetMultiplicity_all->SetBinError(7,0.1218902);
   JetMultiplicity_all->SetBinError(8,0.2798065);
   JetMultiplicity_all->SetBinError(9,0.6706042);
   JetMultiplicity_all->SetBinError(10,1.14406);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(10.61029);
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
   gre->SetPointError(2,0.5,0.00545721);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.006603714);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.0113619);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.02132912);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.05433664);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.1078194);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,0.345087);
   gre->SetPoint(9,9.5,1);
   gre->SetPointError(9,0.5,0.5557635);
   gre->SetPoint(10,10.5,1);
   gre->SetPointError(10,0.5,0.799938);
   gre->SetPoint(11,11.5,1);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,1);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,1);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,1);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicity_all90 = new TH1F("Graph_Graph_from_JetMultiplicity_all90","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all90->SetMinimum(0.04007443);
   Graph_Graph_from_JetMultiplicity_all90->SetMaximum(1.959926);
   Graph_Graph_from_JetMultiplicity_all90->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all90->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all90->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all90->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all90->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all90->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all90->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all90->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all90->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all90->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all90->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all90->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all90);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis540[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis540);
   JetMultiplicity_all->SetBinContent(3,0.1898693);
   JetMultiplicity_all->SetBinContent(4,0.294333);
   JetMultiplicity_all->SetBinContent(5,0.5995059);
   JetMultiplicity_all->SetBinContent(6,0.7455572);
   JetMultiplicity_all->SetBinContent(7,0.6493724);
   JetMultiplicity_all->SetBinContent(8,0.6466965);
   JetMultiplicity_all->SetBinContent(9,2.050181);
   JetMultiplicity_all->SetBinContent(10,1.207532);
   JetMultiplicity_all->SetBinError(3,0.04357683);
   JetMultiplicity_all->SetBinError(4,0.03527165);
   JetMultiplicity_all->SetBinError(5,0.03280339);
   JetMultiplicity_all->SetBinError(6,0.05459106);
   JetMultiplicity_all->SetBinError(7,0.1218902);
   JetMultiplicity_all->SetBinError(8,0.2798065);
   JetMultiplicity_all->SetBinError(9,0.6706042);
   JetMultiplicity_all->SetBinError(10,1.14406);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(10.61029);
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
   canvasOneMuon_375_475/JetMultiplicity_all->cd();
   canvasOneMuon_375_475/JetMultiplicity_all->Modified();
   canvasOneMuon_375_475/JetMultiplicity_all->cd();
   canvasOneMuon_375_475/JetMultiplicity_all->SetSelected(canvasOneMuon_375_475/JetMultiplicity_all);
}
