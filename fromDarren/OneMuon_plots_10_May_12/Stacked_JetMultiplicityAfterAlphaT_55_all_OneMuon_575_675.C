{
//=========Macro generated from canvas: canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all/cannameJetMultiplicityAfterAlphaT_55_all
//=========  (Thu May 10 12:06:50 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all = new TCanvas("canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all", "cannameJetMultiplicityAfterAlphaT_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->SetHighLightColor(2);
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->Range(0,0,1,1);
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->SetFillColor(0);
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->SetBorderMode(0);
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->SetBorderSize(2);
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->SetTickx(1);
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->SetTicky(1);
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.6292012,16.875,2.65251);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1213[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1213);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,6);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,16);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,18);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,8);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,4);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,2.68);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,4.242641);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,3.03);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,2.3);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(211.0276);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(52);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_81 = new TH1F("_stack_81","",15,0,15);
   _stack_81->SetMinimum(0.008441104);
   _stack_81->SetMaximum(33.76441);
   _stack_81->SetDirectory(0);
   _stack_81->SetStats(0);
   _stack_81->GetXaxis()->SetLabelFont(42);
   _stack_81->GetXaxis()->SetLabelOffset(0.007);
   _stack_81->GetXaxis()->SetLabelSize(0.05);
   _stack_81->GetXaxis()->SetTitleSize(0.05);
   _stack_81->GetYaxis()->SetLabelFont(42);
   _stack_81->GetYaxis()->SetLabelOffset(0.007);
   _stack_81->GetYaxis()->SetLabelSize(0.05);
   _stack_81->GetZaxis()->SetLabelFont(42);
   _stack_81->GetZaxis()->SetLabelOffset(0.007);
   _stack_81->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_81);
   
   Double_t xAxis1214[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1214);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1215[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1215);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineStyle(10);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1216[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1216);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.06695113);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.2719944);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.09865693);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.09062039);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.0496975);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.1027669);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.05989759);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.06410903);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(17);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1217[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1217);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.3799041);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.110226);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.4870903);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.3799041);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.7909204);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.4870903);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(4);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1218[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1218);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.2119415);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.9707763);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.7583475);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.5075542);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.09743921);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.2292537);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.208787);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.1519744);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(53);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1219[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1219);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.4099389);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,2.384947);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,8.104798);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,9.501114);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,2.171154);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.2906058);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.7121844);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,1.38463);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,1.77263);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.9086993);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(101);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1220[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1220);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,13.26403);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,15.58669);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,11.03073);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,3.092054);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.6361161);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.9454942);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.9942531);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.8273864);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.4205013);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.1934557);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(968);
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
   Double_t xAxis1221[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1221);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,6);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,16);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,18);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,8);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,4);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,2.68);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,4.242641);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,3.03);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,2.3);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(211.0276);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(52);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_575_675    Jet Multiplicity=all");
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
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->cd();
  
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
   Double_t xAxis1222[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1222);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.4300195);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.8165635);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.852969);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.5848623);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,1.424872);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.4523254);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.2587202);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.2508159);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.4032425);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.6634398);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(15.67198);
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
   gre->SetPointError(2,0.5,0.07132417);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.06660421);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.08574985);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.1383941);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.3309492);
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
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->SetMinimum(0.602861);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->SetMaximum(1.397139);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all204);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1223[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1223);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.4300195);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.8165635);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.852969);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.5848623);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,1.424872);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.4523254);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.2587202);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.2508159);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.4032425);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.6634398);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(15.67198);
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
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->cd();
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->Modified();
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->cd();
   canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all->SetSelected(canvasOneMuon_575_675/JetMultiplicityAfterAlphaT_55_all);
}
