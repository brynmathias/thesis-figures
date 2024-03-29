{
//=========Macro generated from canvas: canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:26:06 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all = new TCanvas("canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-1.05399,6.75,6.475613);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis6204[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6204);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,4881);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,1087);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,104);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,10);
   Btag_Pre_AlphaT_5__all->SetBinError(2,69.86415);
   Btag_Pre_AlphaT_5__all->SetBinError(3,32.96968);
   Btag_Pre_AlphaT_5__all->SetBinError(4,10.19804);
   Btag_Pre_AlphaT_5__all->SetBinError(5,3.162278);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(528022.6);
   Btag_Pre_AlphaT_5__all->SetEntries(6082);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("");
   Double_t xAxis6205[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6205);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,45.77144);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,3.377662);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.2263369);
   Btag_Pre_AlphaT_5__all->SetBinError(2,2.063034);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.4664375);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1311525);
   Btag_Pre_AlphaT_5__all->SetEntries(868);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_414 = new TH1F("_stack_414","",6,0,6);
   _stack_414->SetMinimum(21.1209);
   _stack_414->SetMaximum(84483.61);
   _stack_414->SetDirectory(0);
   _stack_414->SetStats(0);
   _stack_414->GetXaxis()->SetLabelFont(42);
   _stack_414->GetXaxis()->SetLabelOffset(0.007);
   _stack_414->GetXaxis()->SetLabelSize(0.05);
   _stack_414->GetXaxis()->SetTitleSize(0.05);
   _stack_414->GetYaxis()->SetLabelFont(42);
   _stack_414->GetYaxis()->SetLabelOffset(0.007);
   _stack_414->GetYaxis()->SetLabelSize(0.05);
   _stack_414->GetZaxis()->SetLabelFont(42);
   _stack_414->GetZaxis()->SetLabelOffset(0.007);
   _stack_414->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_414);
   
   Double_t xAxis6206[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6206);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,620.5971);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,341.7052);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,50.82272);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,3.401939);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,0.329714);
   Btag_Pre_AlphaT_5__all->SetBinError(2,12.71295);
   Btag_Pre_AlphaT_5__all->SetBinError(3,9.646175);
   Btag_Pre_AlphaT_5__all->SetBinError(4,3.837837);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.939392);
   Btag_Pre_AlphaT_5__all->SetBinError(6,0.2359166);
   Btag_Pre_AlphaT_5__all->SetEntries(8837);
   Btag_Pre_AlphaT_5__all->SetLineColor(3);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->SetMarkerColor(3);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Pre_AlphaT_5__all,"");
   Double_t xAxis6207[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6207);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,52181.66);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,5822.553);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,312.2244);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,64.79181);
   Btag_Pre_AlphaT_5__all->SetBinError(2,421.9171);
   Btag_Pre_AlphaT_5__all->SetBinError(3,155.4544);
   Btag_Pre_AlphaT_5__all->SetBinError(4,39.08937);
   Btag_Pre_AlphaT_5__all->SetBinError(5,55.57426);
   Btag_Pre_AlphaT_5__all->SetEntries(29155);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_675_775    Jet Multiplicity=all");
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
   Double_t xAxis6208[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6208);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,4881);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,1087);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,104);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,10);
   Btag_Pre_AlphaT_5__all->SetBinError(2,69.86415);
   Btag_Pre_AlphaT_5__all->SetBinError(3,32.96968);
   Btag_Pre_AlphaT_5__all->SetBinError(4,10.19804);
   Btag_Pre_AlphaT_5__all->SetBinError(5,3.162278);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(528022.6);
   Btag_Pre_AlphaT_5__all->SetEntries(6082);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis6209[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6209);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,7.865006);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,3.181105);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,2.046329);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,2.9395);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.02499025);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.04143512);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.123765);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.4198216);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(156.429);
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
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.02048503);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.02822952);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.07551421);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.2761343);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.7155188);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all1035 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all1035","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->SetMinimum(0.1413775);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->SetMaximum(1.858623);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all1035->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all1035);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis6210[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis6210);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,7.865006);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,3.181105);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,2.046329);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,2.9395);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.02499025);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.04143512);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.123765);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.4198216);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(156.429);
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
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->Modified();
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all->SetSelected(canvasbtag_morethanzero_675_775/Btag_Pre_AlphaT_5__all);
}
