{
//=========Macro generated from canvas: canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all/cannameBtag_Post_AlphaT_5_55_all
//=========  (Thu May 10 12:06:30 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all = new TCanvas("canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all", "cannameBtag_Post_AlphaT_5_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->SetHighLightColor(2);
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->Range(0,0,1,1);
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->SetFillColor(0);
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->SetBorderMode(0);
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->SetBorderSize(2);
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->SetTickx(1);
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->SetTicky(1);
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.8066671,6.75,4.249704);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis654[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis654);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,498);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,173);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,83);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,11);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,22.31591);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,13.15295);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,9.110434);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,3.316625);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(5547.109);
   Btag_Post_AlphaT_5_55_all->SetEntries(765);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("");
   Double_t xAxis655[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis655);
   Btag_Post_AlphaT_5_55_all->SetLineColor(5);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Post_AlphaT_5_55_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_44 = new TH1F("_stack_44","",6,0,6);
   _stack_44->SetMinimum(0.2247789);
   _stack_44->SetMaximum(899.1154);
   _stack_44->SetDirectory(0);
   _stack_44->SetStats(0);
   _stack_44->GetXaxis()->SetLabelFont(42);
   _stack_44->GetXaxis()->SetLabelOffset(0.007);
   _stack_44->GetXaxis()->SetLabelSize(0.05);
   _stack_44->GetXaxis()->SetTitleSize(0.05);
   _stack_44->GetYaxis()->SetLabelFont(42);
   _stack_44->GetYaxis()->SetLabelOffset(0.007);
   _stack_44->GetYaxis()->SetLabelSize(0.05);
   _stack_44->GetZaxis()->SetLabelFont(42);
   _stack_44->GetZaxis()->SetLabelOffset(0.007);
   _stack_44->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_44);
   
   Double_t xAxis656[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis656);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,554.7109);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,183.4466);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,72.33834);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,6.144453);
   Btag_Post_AlphaT_5_55_all->SetBinContent(5,0.2347196);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,7.236242);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,5.902785);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,4.579663);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,1.13421);
   Btag_Post_AlphaT_5_55_all->SetBinError(5,0.2347196);
   Btag_Post_AlphaT_5_55_all->SetEntries(13769);
   Btag_Post_AlphaT_5_55_all->SetLineColor(3);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->SetMarkerColor(3);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis657[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis657);
   Btag_Post_AlphaT_5_55_all->SetLineColor(7);
   Btag_Post_AlphaT_5_55_all->SetLineStyle(10);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
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
   TLegendEntry *entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Post_AlphaT_5_55_all","Combined EWK","L");
   entry->SetLineColor(3);
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
   Double_t xAxis658[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis658);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,498);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,173);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,83);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,11);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,22.31591);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,13.15295);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,9.110434);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,3.316625);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(5547.109);
   Btag_Post_AlphaT_5_55_all->SetEntries(765);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("PSAME");
   u->Modified();
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->cd();
  
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
   Double_t xAxis659[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis659);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.8977649);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.943054);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,1.147386);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,1.790232);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.04667125);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.08255734);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.1267131);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.3535292);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(53.16081);
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
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Post_AlphaT_5_55_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.5,1);
   gre->SetPointError(0,0.5,0.01304507);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.03217714);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.06330893);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.1845909);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,1);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all110 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all110","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->SetMinimum(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->SetMaximum(2.2);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all110->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all110);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis660[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis660);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.8977649);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.943054);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,1.147386);
   Btag_Post_AlphaT_5_55_all->SetBinContent(4,1.790232);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.04667125);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.08255734);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.1267131);
   Btag_Post_AlphaT_5_55_all->SetBinError(4,0.3535292);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(53.16081);
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
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->cd();
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->Modified();
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->cd();
   canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all->SetSelected(canvasOneMuon_375_475/Btag_Post_AlphaT_5_55_all);
}
