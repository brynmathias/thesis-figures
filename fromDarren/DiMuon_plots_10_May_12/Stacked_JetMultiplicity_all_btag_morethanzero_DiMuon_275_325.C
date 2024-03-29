{
//=========Macro generated from canvas: canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all/cannameJetMultiplicity_all
//=========  (Thu May 10 12:48:02 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all = new TCanvas("canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all", "cannameJetMultiplicity_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->SetHighLightColor(2);
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->Range(0,0,1,1);
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->SetFillColor(0);
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->SetBorderMode(0);
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->SetBorderSize(2);
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->SetTickx(1);
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->SetTicky(1);
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.6784623,16.875,3.09586);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis6013[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6013);
   JetMultiplicity_all->SetBinContent(3,2);
   JetMultiplicity_all->SetBinContent(4,11);
   JetMultiplicity_all->SetBinContent(5,8);
   JetMultiplicity_all->SetBinContent(6,1);
   JetMultiplicity_all->SetBinError(3,2);
   JetMultiplicity_all->SetBinError(4,3.316625);
   JetMultiplicity_all->SetBinError(5,3.03);
   JetMultiplicity_all->SetBinError(6,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(522.9114);
   JetMultiplicity_all->SetEntries(22);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_401 = new TH1F("_stack_401","",15,0,15);
   _stack_401->SetMinimum(0.02091646);
   _stack_401->SetMaximum(83.66582);
   _stack_401->SetDirectory(0);
   _stack_401->SetStats(0);
   _stack_401->GetXaxis()->SetLabelFont(42);
   _stack_401->GetXaxis()->SetLabelOffset(0.007);
   _stack_401->GetXaxis()->SetLabelSize(0.05);
   _stack_401->GetXaxis()->SetTitleSize(0.05);
   _stack_401->GetYaxis()->SetLabelFont(42);
   _stack_401->GetYaxis()->SetLabelOffset(0.007);
   _stack_401->GetYaxis()->SetLabelSize(0.05);
   _stack_401->GetZaxis()->SetLabelFont(42);
   _stack_401->GetZaxis()->SetLabelOffset(0.007);
   _stack_401->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_401);
   
   Double_t xAxis6014[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6014);
   JetMultiplicity_all->SetFillColor(4);
   JetMultiplicity_all->SetLineColor(4);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis6015[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6015);
   JetMultiplicity_all->SetFillColor(5);
   JetMultiplicity_all->SetLineColor(5);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis6016[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6016);
   JetMultiplicity_all->SetFillColor(7);
   JetMultiplicity_all->SetLineColor(7);
   JetMultiplicity_all->SetLineStyle(10);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis6017[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6017);
   JetMultiplicity_all->SetBinContent(3,0.2664641);
   JetMultiplicity_all->SetBinContent(4,0.5595154);
   JetMultiplicity_all->SetBinContent(5,0.1627257);
   JetMultiplicity_all->SetBinContent(6,0.005973294);
   JetMultiplicity_all->SetBinError(3,0.0493392);
   JetMultiplicity_all->SetBinError(4,0.07435356);
   JetMultiplicity_all->SetBinError(5,0.04003374);
   JetMultiplicity_all->SetBinError(6,0.005973294);
   JetMultiplicity_all->SetEntries(134);
   JetMultiplicity_all->SetFillColor(44);
   JetMultiplicity_all->SetLineColor(44);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis6018[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6018);
   JetMultiplicity_all->SetBinContent(3,0.5677229);
   JetMultiplicity_all->SetBinContent(4,0.3928542);
   JetMultiplicity_all->SetBinContent(5,0.06460839);
   JetMultiplicity_all->SetBinContent(6,0.05881926);
   JetMultiplicity_all->SetBinError(3,0.1910932);
   JetMultiplicity_all->SetBinError(4,0.1639456);
   JetMultiplicity_all->SetBinError(5,0.04738355);
   JetMultiplicity_all->SetBinError(6,0.05881926);
   JetMultiplicity_all->SetEntries(27);
   JetMultiplicity_all->SetFillColor(40);
   JetMultiplicity_all->SetLineColor(40);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis6019[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6019);
   JetMultiplicity_all->SetBinContent(3,7.269593);
   JetMultiplicity_all->SetBinContent(4,18.33725);
   JetMultiplicity_all->SetBinContent(5,7.857431);
   JetMultiplicity_all->SetBinContent(6,0.4528439);
   JetMultiplicity_all->SetBinError(3,1.368724);
   JetMultiplicity_all->SetBinError(4,2.211652);
   JetMultiplicity_all->SetBinError(5,1.550663);
   JetMultiplicity_all->SetBinError(6,0.3382469);
   JetMultiplicity_all->SetEntries(168);
   JetMultiplicity_all->SetFillColor(2);
   JetMultiplicity_all->SetLineColor(2);
   JetMultiplicity_all->SetLineWidth(3);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicity_all,"");
   Double_t xAxis6020[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6020);
   JetMultiplicity_all->SetBinContent(3,25.20437);
   JetMultiplicity_all->SetBinContent(4,33.00152);
   JetMultiplicity_all->SetBinContent(5,12.64233);
   JetMultiplicity_all->SetBinContent(6,0.6056629);
   JetMultiplicity_all->SetBinError(3,3.593172);
   JetMultiplicity_all->SetBinError(4,3.986968);
   JetMultiplicity_all->SetBinError(5,2.616968);
   JetMultiplicity_all->SetBinError(6,0.6056629);
   JetMultiplicity_all->SetEntries(180);
   JetMultiplicity_all->SetFillColor(6);
   JetMultiplicity_all->SetLineColor(6);
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
   leg->Draw();
   Double_t xAxis6021[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6021);
   JetMultiplicity_all->SetBinContent(3,2);
   JetMultiplicity_all->SetBinContent(4,11);
   JetMultiplicity_all->SetBinContent(5,8);
   JetMultiplicity_all->SetBinContent(6,1);
   JetMultiplicity_all->SetBinError(3,2);
   JetMultiplicity_all->SetBinError(4,3.316625);
   JetMultiplicity_all->SetBinError(5,3.03);
   JetMultiplicity_all->SetBinError(6,1);
   JetMultiplicity_all->SetMinimum(0.5);
   JetMultiplicity_all->SetMaximum(522.9114);
   JetMultiplicity_all->SetEntries(22);
   JetMultiplicity_all->SetLineWidth(2);
   JetMultiplicity_all->SetMarkerStyle(20);
   JetMultiplicity_all->SetMarkerSize(1.5);
   JetMultiplicity_all->GetXaxis()->SetTitle("n");
   JetMultiplicity_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_DiMuon_275_325    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->cd();
  
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
   Double_t xAxis6022[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6022);
   JetMultiplicity_all->SetBinContent(3,0.06004537);
   JetMultiplicity_all->SetBinContent(4,0.2103607);
   JetMultiplicity_all->SetBinContent(5,0.3859683);
   JetMultiplicity_all->SetBinContent(6,0.8902347);
   JetMultiplicity_all->SetBinError(3,1.006658);
   JetMultiplicity_all->SetBinError(4,0.313884);
   JetMultiplicity_all->SetBinError(5,0.4062003);
   JetMultiplicity_all->SetBinError(6,1.176503);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(2.117629);
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
   gre->SetPointError(2,0.5,0.1155902);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.08725882);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.1467895);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.6198066);
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
   
   TH1F *Graph_Graph_from_JetMultiplicity_all1004 = new TH1F("Graph_Graph_from_JetMultiplicity_all1004","",100,0,16.5);
   Graph_Graph_from_JetMultiplicity_all1004->SetMinimum(0.256232);
   Graph_Graph_from_JetMultiplicity_all1004->SetMaximum(1.743768);
   Graph_Graph_from_JetMultiplicity_all1004->SetDirectory(0);
   Graph_Graph_from_JetMultiplicity_all1004->SetStats(0);
   Graph_Graph_from_JetMultiplicity_all1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all1004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all1004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all1004->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicity_all1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all1004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all1004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicity_all1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicity_all1004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicity_all1004->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicity_all1004);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis6023[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicity_all = new TH1D("JetMultiplicity_all","",15, xAxis6023);
   JetMultiplicity_all->SetBinContent(3,0.06004537);
   JetMultiplicity_all->SetBinContent(4,0.2103607);
   JetMultiplicity_all->SetBinContent(5,0.3859683);
   JetMultiplicity_all->SetBinContent(6,0.8902347);
   JetMultiplicity_all->SetBinError(3,1.006658);
   JetMultiplicity_all->SetBinError(4,0.313884);
   JetMultiplicity_all->SetBinError(5,0.4062003);
   JetMultiplicity_all->SetBinError(6,1.176503);
   JetMultiplicity_all->SetMinimum(0);
   JetMultiplicity_all->SetMaximum(2);
   JetMultiplicity_all->SetEntries(2.117629);
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
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->Modified();
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->cd();
   canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all->SetSelected(canvasbtag_morethanzero_DiMuon_275_325/JetMultiplicity_all);
}
