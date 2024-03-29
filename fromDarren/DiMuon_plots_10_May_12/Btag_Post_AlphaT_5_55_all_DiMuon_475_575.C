{
//=========Macro generated from canvas: canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all/cannameBtag_Post_AlphaT_5_55_all
//=========  (Thu May 10 12:45:30 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all = new TCanvas("canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all", "cannameBtag_Post_AlphaT_5_55_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->SetHighLightColor(2);
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->Range(0,0,1,1);
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->SetFillColor(0);
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->SetBorderMode(0);
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->SetBorderSize(2);
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->SetTickx(1);
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->SetTicky(1);
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.6064963,6.75,2.448166);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1051[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1051);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,13);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,2);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,3.605551);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,2);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(138.8993);
   Btag_Post_AlphaT_5_55_all->SetEntries(15);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("PE0");
   Double_t xAxis1052[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1052);
   Btag_Post_AlphaT_5_55_all->SetLineColor(4);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis1053[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1053);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.2615972);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.5407977);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.7273179);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.2615972);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.4189655);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.4227835);
   Btag_Post_AlphaT_5_55_all->SetEntries(6);
   Btag_Post_AlphaT_5_55_all->SetLineColor(2);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis1054[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1054);
   Btag_Post_AlphaT_5_55_all->SetLineColor(5);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis1055[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1055);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,13.50431);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,3.423917);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.4071855);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,2.79834);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,1.468961);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.4071855);
   Btag_Post_AlphaT_5_55_all->SetEntries(38);
   Btag_Post_AlphaT_5_55_all->SetLineColor(6);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis1056[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1056);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.02064383);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.01767254);
   Btag_Post_AlphaT_5_55_all->SetEntries(2);
   Btag_Post_AlphaT_5_55_all->SetLineColor(40);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis1057[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1057);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.1240237);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.06963498);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.006476544);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.03853399);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.02616065);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.004687391);
   Btag_Post_AlphaT_5_55_all->SetEntries(25);
   Btag_Post_AlphaT_5_55_all->SetLineColor(44);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis1058[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1058);
   Btag_Post_AlphaT_5_55_all->SetLineColor(7);
   Btag_Post_AlphaT_5_55_all->SetLineStyle(10);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   Double_t xAxis1059[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1059);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,13.88993);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,4.03435);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,1.161624);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,2.810805);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,1.527764);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.5872651);
   Btag_Post_AlphaT_5_55_all->SetEntries(71);
   Btag_Post_AlphaT_5_55_all->SetLineColor(3);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Post_AlphaT_5_55_all");
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
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all176 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all176","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->SetMinimum(0.0011);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->SetMaximum(1.1);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all176->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all176);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Post_AlphaT_5_55_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,13.88993);
   gre->SetPointError(0,0.5,2.810805);
   gre->SetPoint(1,1.5,4.03435);
   gre->SetPointError(1,0.5,1.527764);
   gre->SetPoint(2,2.5,1.161624);
   gre->SetPointError(2,0.5,0.5872651);
   gre->SetPoint(3,3.5,0);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,4.5,0);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,0);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all177 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all177","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->SetMinimum(0.01837081);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->SetMaximum(18.37081);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all177->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all177);
   
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
   TLegendEntry *entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_475_575    Jet Multiplicity=all");
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
   Double_t xAxis1060[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1060);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,13);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,2);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,3.605551);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,2);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(138.8993);
   Btag_Post_AlphaT_5_55_all->SetEntries(15);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("PSAME");
   u->Modified();
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->cd();
  
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
   Double_t xAxis1061[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1061);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.9359298);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.4957429);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.3433275);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,1.069301);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(5.334146);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetLabelSize(0.12);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitle("Data/MC");
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetNdivisions(505);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetLabelSize(0.11);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitleSize(0.1);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitleOffset(0.5);
   Btag_Post_AlphaT_5_55_all->Draw("P");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Post_AlphaT_5_55_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.5,1);
   gre->SetPointError(0,0.5,0.2023628);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.3786889);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.5055553);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all178 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all178","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->SetMinimum(0.3933337);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->SetMaximum(1.606666);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all178->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all178);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1062[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis1062);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.9359298);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.4957429);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.3433275);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,1.069301);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(5.334146);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetLabelSize(0.12);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitle("Data/MC");
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetNdivisions(505);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetLabelSize(0.11);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitleSize(0.1);
   Btag_Post_AlphaT_5_55_all->GetYaxis()->SetTitleOffset(0.5);
   Btag_Post_AlphaT_5_55_all->Draw("PSAME");
   d->Modified();
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->cd();
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->Modified();
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->cd();
   canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all->SetSelected(canvasDiMuon_475_575/Btag_Post_AlphaT_5_55_all);
}
