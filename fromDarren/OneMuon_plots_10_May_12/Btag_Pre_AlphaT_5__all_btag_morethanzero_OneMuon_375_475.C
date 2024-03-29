{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:08:10 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all = new TCanvas("canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.8095048,6.75,4.275243);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3511[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3511);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,568);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,264);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,22);
   Btag_Pre_AlphaT_5__all->SetBinError(2,23.83275);
   Btag_Pre_AlphaT_5__all->SetBinError(3,16.24808);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.690416);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(5844.779);
   Btag_Pre_AlphaT_5__all->SetEntries(854);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PE0");
   Double_t xAxis3512[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3512);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,176.9486);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,11.05116);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.2200029);
   Btag_Pre_AlphaT_5__all->SetBinError(2,3.363585);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.801222);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.09582719);
   Btag_Pre_AlphaT_5__all->SetEntries(4113);
   Btag_Pre_AlphaT_5__all->SetLineColor(4);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis3513[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3513);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,363.4063);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,257.7912);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,25.19895);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.4586149);
   Btag_Pre_AlphaT_5__all->SetBinError(2,9.684908);
   Btag_Pre_AlphaT_5__all->SetBinError(3,8.402108);
   Btag_Pre_AlphaT_5__all->SetBinError(4,2.81006);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.2909351);
   Btag_Pre_AlphaT_5__all->SetEntries(3381);
   Btag_Pre_AlphaT_5__all->SetLineColor(2);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis3514[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3514);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis3515[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3515);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,5.689769);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.02819469);
   Btag_Pre_AlphaT_5__all->SetBinError(2,1.624038);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.02819469);
   Btag_Pre_AlphaT_5__all->SetEntries(14);
   Btag_Pre_AlphaT_5__all->SetLineColor(6);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis3516[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3516);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,2.433457);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.1755236);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.00908894);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.2993866);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.06401428);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.00908894);
   Btag_Pre_AlphaT_5__all->SetEntries(102);
   Btag_Pre_AlphaT_5__all->SetLineColor(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis3517[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3517);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis3518[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3518);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,35.99978);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,12.88207);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.6563522);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.05057717);
   Btag_Pre_AlphaT_5__all->SetBinError(2,1.467138);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.8530525);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1974215);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.05057717);
   Btag_Pre_AlphaT_5__all->SetEntries(1172);
   Btag_Pre_AlphaT_5__all->SetLineColor(40);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis3519[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3519);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,584.4779);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,281.9282);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,26.08439);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.5091921);
   Btag_Pre_AlphaT_5__all->SetBinError(2,10.48765);
   Btag_Pre_AlphaT_5__all->SetBinError(3,8.483511);
   Btag_Pre_AlphaT_5__all->SetBinError(4,2.81863);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.2952986);
   Btag_Pre_AlphaT_5__all->SetEntries(8782);
   Btag_Pre_AlphaT_5__all->SetLineColor(3);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Pre_AlphaT_5__all");
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
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all586 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all586","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->SetMinimum(0.0011);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->SetMaximum(1.1);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all586->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all586);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Pre_AlphaT_5__all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,0);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,584.4779);
   gre->SetPointError(1,0.5,10.48765);
   gre->SetPoint(2,2.5,281.9282);
   gre->SetPointError(2,0.5,8.483511);
   gre->SetPoint(3,3.5,26.08439);
   gre->SetPointError(3,0.5,2.81863);
   gre->SetPoint(4,4.5,0.5091921);
   gre->SetPointError(4,0.5,0.2952986);
   gre->SetPoint(5,5.5,0);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all587 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all587","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->SetMinimum(0.6544621);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->SetMaximum(654.4621);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all587->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all587);
   
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
   TLegendEntry *entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
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
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Btag_Pre_AlphaT_5__all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_OneMuon_375_475    Jet Multiplicity=all");
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
   Double_t xAxis3520[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3520);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,568);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,264);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,22);
   Btag_Pre_AlphaT_5__all->SetBinError(2,23.83275);
   Btag_Pre_AlphaT_5__all->SetBinError(3,16.24808);
   Btag_Pre_AlphaT_5__all->SetBinError(4,4.690416);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(5844.779);
   Btag_Pre_AlphaT_5__all->SetEntries(854);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis3521[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3521);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.9718075);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.9364087);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.8434162);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.04563482);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.06850802);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2390211);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(162.0523);
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
   
   gre = new TGraphErrors(6);
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
   gre->SetPointError(1,0.5,0.01794362);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.03009104);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.1080581);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.5799357);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all588 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all588","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->SetMinimum(0.3040772);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->SetMaximum(1.695923);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all588->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all588);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3522[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis3522);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.9718075);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.9364087);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.8434162);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.04563482);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.06850802);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.2390211);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(162.0523);
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
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->Modified();
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->cd();
   canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all->SetSelected(canvasbtag_morethanzero_OneMuon_375_475/Btag_Pre_AlphaT_5__all);
}
