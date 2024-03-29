{
//=========Macro generated from canvas: canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all/cannameJetMultiplicityAfterAlphaT_55_all
//=========  (Thu May 10 12:06:25 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all = new TCanvas("canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all", "cannameJetMultiplicityAfterAlphaT_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->SetHighLightColor(2);
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->Range(0,0,1,1);
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->SetFillColor(0);
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->SetBorderMode(0);
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->SetBorderSize(2);
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->SetTickx(1);
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->SetTicky(1);
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.7769542,16.875,3.982288);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis463[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis463);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,208);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,304);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,195);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,50);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,8);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,14.42221);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,17.4356);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,13.96424);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,7.071068);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,3.03);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(3208.956);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(765);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_31 = new TH1F("_stack_31","",15,0,15);
   _stack_31->SetMinimum(0.1283582);
   _stack_31->SetMaximum(513.4329);
   _stack_31->SetDirectory(0);
   _stack_31->SetStats(0);
   _stack_31->GetXaxis()->SetLabelFont(42);
   _stack_31->GetXaxis()->SetLabelOffset(0.007);
   _stack_31->GetXaxis()->SetLabelSize(0.05);
   _stack_31->GetXaxis()->SetTitleSize(0.05);
   _stack_31->GetYaxis()->SetLabelFont(42);
   _stack_31->GetYaxis()->SetLabelOffset(0.007);
   _stack_31->GetYaxis()->SetLabelSize(0.05);
   _stack_31->GetZaxis()->SetLabelFont(42);
   _stack_31->GetZaxis()->SetLabelOffset(0.007);
   _stack_31->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_31);
   
   Double_t xAxis464[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis464);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis465[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis465);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineStyle(10);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis466[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis466);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,1.061102);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,3.596204);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.307964);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.2838828);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.04295498);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.1898068);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.3577198);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.2119934);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.09465036);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.03625412);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(237);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis467[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis467);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,2.523897);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,2.325904);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.578655);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.4870903);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,1.134614);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.9354194);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.9192286);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.4870903);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(18);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis468[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis468);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,2.892952);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,12.19035);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,9.026581);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,2.182808);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.169524);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,0.05487837);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(9,0.04101893);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.4080877);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.8838237);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.7221142);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.3566124);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.09642754);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,0.05487837);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(9,0.04101893);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(602);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis469[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis469);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,10.95141);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,76.34674);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,114.6512);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,34.88689);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,5.059006);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,0.3122394);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,1.55684);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4.852146);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,5.563857);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,3.266095);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,1.239577);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,0.3122394);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(1252);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis470[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis470);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,208.8789);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,226.4364);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,85.95149);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,12.50258);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,1.132406);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,3.725373);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,3.850615);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,2.383859);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.8767522);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.2543613);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(11660);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
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
   TLegendEntry *entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis471[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis471);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,208);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,304);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,195);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,50);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,8);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,14.42221);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,17.4356);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,13.96424);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,7.071068);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,3.03);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(3208.956);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(765);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
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
   u->Modified();
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->cd();
  
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
   Double_t xAxis472[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis472);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.9191005);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.9473487);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.9175783);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.9931819);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,1.249241);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.07179895);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.06065825);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.07727046);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.1570337);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.4274996);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(78.41036);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicityAfterAlphaT_55_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicityAfterAlphaT_55_all");
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
   gre->SetPointError(2,0.5,0.01863858);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.01974715);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.02902616);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.06826118);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.1982532);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.8635522);
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
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->SetMinimum(-0.2);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->SetMaximum(2.2);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all79);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis473[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis473);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.9191005);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.9473487);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.9175783);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.9931819);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,1.249241);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.07179895);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.06065825);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.07727046);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.1570337);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.4274996);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(78.41036);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
   d->Modified();
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->cd();
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->Modified();
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->cd();
   canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all->SetSelected(canvasOneMuon_375_475/JetMultiplicityAfterAlphaT_55_all);
}
