{
//=========Macro generated from canvas: canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all/cannameBtag_Post_AlphaT_5_55_all
//=========  (Thu May 10 12:46:36 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all = new TCanvas("canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all", "cannameBtag_Post_AlphaT_5_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->SetHighLightColor(2);
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->Range(0,0,1,1);
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->SetFillColor(0);
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->SetBorderMode(0);
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->SetBorderSize(2);
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->SetTickx(1);
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->SetTicky(1);
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-0.6949697,6.75,3.244427);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3223[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3223);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,53);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,9);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,3);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,7.28011);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,3.19);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,2.14);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(708.7408);
   Btag_Post_AlphaT_5_55_all->SetEntries(65);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_215 = new TH1F("_stack_215","",6,0,6);
   _stack_215->SetMinimum(0.03034512);
   _stack_215->SetMaximum(121.3805);
   _stack_215->SetDirectory(0);
   _stack_215->SetStats(0);
   _stack_215->GetXaxis()->SetLabelFont(42);
   _stack_215->GetXaxis()->SetLabelOffset(0.007);
   _stack_215->GetXaxis()->SetLabelSize(0.05);
   _stack_215->GetXaxis()->SetTitleSize(0.05);
   _stack_215->GetYaxis()->SetLabelFont(42);
   _stack_215->GetYaxis()->SetLabelOffset(0.007);
   _stack_215->GetYaxis()->SetLabelSize(0.05);
   _stack_215->GetZaxis()->SetLabelFont(42);
   _stack_215->GetZaxis()->SetLabelOffset(0.007);
   _stack_215->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_215);
   
   Double_t xAxis3224[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3224);
   Btag_Post_AlphaT_5_55_all->SetFillColor(4);
   Btag_Post_AlphaT_5_55_all->SetLineColor(4);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis3225[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3225);
   Btag_Post_AlphaT_5_55_all->SetFillColor(5);
   Btag_Post_AlphaT_5_55_all->SetLineColor(5);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis3226[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3226);
   Btag_Post_AlphaT_5_55_all->SetFillColor(7);
   Btag_Post_AlphaT_5_55_all->SetLineColor(7);
   Btag_Post_AlphaT_5_55_all->SetLineStyle(10);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis3227[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3227);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.04977924);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.003277954);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.04743102);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.03673952);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.003277954);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.04428854);
   Btag_Post_AlphaT_5_55_all->SetEntries(5);
   Btag_Post_AlphaT_5_55_all->SetFillColor(40);
   Btag_Post_AlphaT_5_55_all->SetLineColor(40);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis3228[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3228);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.3034843);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.01514226);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.09573418);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.3034843);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.01514226);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.0820021);
   Btag_Post_AlphaT_5_55_all->SetEntries(4);
   Btag_Post_AlphaT_5_55_all->SetFillColor(2);
   Btag_Post_AlphaT_5_55_all->SetLineColor(2);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis3229[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3229);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.8270857);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,0.1267918);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.04247453);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.1014191);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.03458256);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,0.01642374);
   Btag_Post_AlphaT_5_55_all->SetEntries(126);
   Btag_Post_AlphaT_5_55_all->SetFillColor(44);
   Btag_Post_AlphaT_5_55_all->SetLineColor(44);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
   Double_t xAxis3230[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3230);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,69.69373);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,6.999857);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,5.082459);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,6.169084);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,1.881773);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,4.763594);
   Btag_Post_AlphaT_5_55_all->SetEntries(189);
   Btag_Post_AlphaT_5_55_all->SetFillColor(6);
   Btag_Post_AlphaT_5_55_all->SetLineColor(6);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(3);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("Number of Btags");
   ->Add(Btag_Post_AlphaT_5_55_all,"");
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
   leg->Draw();
   Double_t xAxis3231[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3231);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,53);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,9);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,3);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,7.28011);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,3.19);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,2.14);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0.5);
   Btag_Post_AlphaT_5_55_all->SetMaximum(708.7408);
   Btag_Post_AlphaT_5_55_all->SetEntries(65);
   Btag_Post_AlphaT_5_55_all->SetLineWidth(2);
   Btag_Post_AlphaT_5_55_all->SetMarkerStyle(20);
   Btag_Post_AlphaT_5_55_all->SetMarkerSize(1.5);
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Post_AlphaT_5_55_all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Post_AlphaT_5_55_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_325_375    Jet Multiplicity=all");
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
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->cd();
  
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
   Double_t xAxis3232[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3232);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.7478052);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,1.25961);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.5694655);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.1626808);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.4416118);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,1.151871);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(8.80101);
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
   gre->SetPointError(0,0.5,0.08716143);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.2634201);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.9044124);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0);
   
   TH1F *Graph_Graph_from_Btag_Post_AlphaT_5_55_all539 = new TH1F("Graph_Graph_from_Btag_Post_AlphaT_5_55_all539","",100,0,6.6);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->SetMinimum(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->SetMaximum(2.085295);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->SetDirectory(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->SetStats(0);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Post_AlphaT_5_55_all539->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Post_AlphaT_5_55_all539);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3233[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Post_AlphaT_5_55_all = new TH1D("Btag_Post_AlphaT_5_55_all","",6, xAxis3233);
   Btag_Post_AlphaT_5_55_all->SetBinContent(1,0.7478052);
   Btag_Post_AlphaT_5_55_all->SetBinContent(2,1.25961);
   Btag_Post_AlphaT_5_55_all->SetBinContent(3,0.5694655);
   Btag_Post_AlphaT_5_55_all->SetBinError(1,0.1626808);
   Btag_Post_AlphaT_5_55_all->SetBinError(2,0.4416118);
   Btag_Post_AlphaT_5_55_all->SetBinError(3,1.151871);
   Btag_Post_AlphaT_5_55_all->SetMinimum(0);
   Btag_Post_AlphaT_5_55_all->SetMaximum(2);
   Btag_Post_AlphaT_5_55_all->SetEntries(8.80101);
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
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->cd();
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->Modified();
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->cd();
   canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all->SetSelected(canvasDiMuon_325_375/Btag_Post_AlphaT_5_55_all);
}
