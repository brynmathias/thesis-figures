{
//=========Macro generated from canvas: canvas375_475/Btag_Pre_AlphaT_5__all/cannameBtag_Pre_AlphaT_5__all
//=========  (Thu May 10 12:23:17 2012) by ROOT version5.32/00
   TCanvas *canvas375_475/Btag_Pre_AlphaT_5__all = new TCanvas("canvas375_475/Btag_Pre_AlphaT_5__all", "cannameBtag_Pre_AlphaT_5__all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvas375_475/Btag_Pre_AlphaT_5__all->SetHighLightColor(2);
   canvas375_475/Btag_Pre_AlphaT_5__all->Range(0,0,1,1);
   canvas375_475/Btag_Pre_AlphaT_5__all->SetFillColor(0);
   canvas375_475/Btag_Pre_AlphaT_5__all->SetBorderMode(0);
   canvas375_475/Btag_Pre_AlphaT_5__all->SetBorderSize(2);
   canvas375_475/Btag_Pre_AlphaT_5__all->SetTickx(1);
   canvas375_475/Btag_Pre_AlphaT_5__all->SetTicky(1);
   canvas375_475/Btag_Pre_AlphaT_5__all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.7500001,-1.359498,6.75,9.225183);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1471[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1471);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,166815);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,48788);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,10361);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,982);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,63);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,2);
   Btag_Pre_AlphaT_5__all->SetBinError(1,408.4299);
   Btag_Pre_AlphaT_5__all->SetBinError(2,220.8801);
   Btag_Pre_AlphaT_5__all->SetBinError(3,101.789);
   Btag_Pre_AlphaT_5__all->SetBinError(4,31.33688);
   Btag_Pre_AlphaT_5__all->SetBinError(5,7.937254);
   Btag_Pre_AlphaT_5__all->SetBinError(6,1.414214);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(1.467963e+08);
   Btag_Pre_AlphaT_5__all->SetEntries(227011);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PE0");
   Double_t xAxis1472[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1472);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,13325.33);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1731.397);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,143.2852);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,7.148839);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.3884084);
   Btag_Pre_AlphaT_5__all->SetBinError(1,30.01757);
   Btag_Pre_AlphaT_5__all->SetBinError(2,10.79833);
   Btag_Pre_AlphaT_5__all->SetBinError(3,3.195597);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.6925419);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.2481255);
   Btag_Pre_AlphaT_5__all->SetEntries(341684);
   Btag_Pre_AlphaT_5__all->SetLineColor(4);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis1473[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1473);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,2315.892);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,5957.713);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,4250.741);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,560.8151);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,27.48119);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,0.3438417);
   Btag_Pre_AlphaT_5__all->SetBinError(1,26.55735);
   Btag_Pre_AlphaT_5__all->SetBinError(2,43.21806);
   Btag_Pre_AlphaT_5__all->SetBinError(3,36.6941);
   Btag_Pre_AlphaT_5__all->SetBinError(4,13.81133);
   Btag_Pre_AlphaT_5__all->SetBinError(5,2.747825);
   Btag_Pre_AlphaT_5__all->SetBinError(6,0.2363392);
   Btag_Pre_AlphaT_5__all->SetEntries(62715);
   Btag_Pre_AlphaT_5__all->SetLineColor(2);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis1474[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1474);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,6361.129);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,748.0383);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,82.58953);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,3.3255);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.135287);
   Btag_Pre_AlphaT_5__all->SetBinError(1,22.66569);
   Btag_Pre_AlphaT_5__all->SetBinError(2,7.89534);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.53118);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.6180316);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.09568062);
   Btag_Pre_AlphaT_5__all->SetEntries(130090);
   Btag_Pre_AlphaT_5__all->SetLineColor(5);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis1475[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1475);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,871.4916);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,146.5175);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,15.45389);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.8463089);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.320414);
   Btag_Pre_AlphaT_5__all->SetBinError(1,23.603);
   Btag_Pre_AlphaT_5__all->SetBinError(2,8.99273);
   Btag_Pre_AlphaT_5__all->SetBinError(3,2.64893);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.5806464);
   Btag_Pre_AlphaT_5__all->SetBinError(5,1.320414);
   Btag_Pre_AlphaT_5__all->SetEntries(2471);
   Btag_Pre_AlphaT_5__all->SetLineColor(6);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis1476[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1476);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,371.294);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,91.77781);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,15.92543);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,1.521189);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.1300512);
   Btag_Pre_AlphaT_5__all->SetBinError(1,3.219305);
   Btag_Pre_AlphaT_5__all->SetBinError(2,1.524478);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.5242028);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1396271);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.02984041);
   Btag_Pre_AlphaT_5__all->SetEntries(32987);
   Btag_Pre_AlphaT_5__all->SetLineColor(44);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis1477[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1477);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,1.465591e+07);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1822998);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,195839.8);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,9328.425);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,456.614);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,0.1139168);
   Btag_Pre_AlphaT_5__all->SetBinError(1,30182.81);
   Btag_Pre_AlphaT_5__all->SetBinError(2,10466.9);
   Btag_Pre_AlphaT_5__all->SetBinError(3,3702.68);
   Btag_Pre_AlphaT_5__all->SetBinError(4,964.5007);
   Btag_Pre_AlphaT_5__all->SetBinError(5,162.0728);
   Btag_Pre_AlphaT_5__all->SetBinError(6,0.1076439);
   Btag_Pre_AlphaT_5__all->SetEntries(3003364);
   Btag_Pre_AlphaT_5__all->SetLineColor(7);
   Btag_Pre_AlphaT_5__all->SetLineStyle(10);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis1478[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1478);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,475.5421);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,984.1749);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,401.0909);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,36.71735);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,1.619131);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,0.003058331);
   Btag_Pre_AlphaT_5__all->SetBinError(1,5.682477);
   Btag_Pre_AlphaT_5__all->SetBinError(2,8.377027);
   Btag_Pre_AlphaT_5__all->SetBinError(3,5.389405);
   Btag_Pre_AlphaT_5__all->SetBinError(4,1.484072);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.3245354);
   Btag_Pre_AlphaT_5__all->SetBinError(6,0.003058331);
   Btag_Pre_AlphaT_5__all->SetEntries(41111);
   Btag_Pre_AlphaT_5__all->SetLineColor(40);
   Btag_Pre_AlphaT_5__all->SetLineWidth(3);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("Number of Btags");
   Btag_Pre_AlphaT_5__all->Draw("HISTSAME");
   Double_t xAxis1479[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1479);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,1.467963e+07);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,1832657);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,200748.9);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,9938.799);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,487.6885);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,0.4608168);
   Btag_Pre_AlphaT_5__all->SetBinError(1,30182.85);
   Btag_Pre_AlphaT_5__all->SetBinError(2,10467);
   Btag_Pre_AlphaT_5__all->SetBinError(3,3702.869);
   Btag_Pre_AlphaT_5__all->SetBinError(4,964.6013);
   Btag_Pre_AlphaT_5__all->SetBinError(5,162.1021);
   Btag_Pre_AlphaT_5__all->SetBinError(6,0.2597167);
   Btag_Pre_AlphaT_5__all->SetEntries(3614422);
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
   gre->SetPoint(0,0.5,1.465591e+07);
   gre->SetPointError(0,0.5,30182.81);
   gre->SetPoint(1,1.5,1822998);
   gre->SetPointError(1,0.5,10466.9);
   gre->SetPoint(2,2.5,195839.8);
   gre->SetPointError(2,0.5,3702.68);
   gre->SetPoint(3,3.5,9328.425);
   gre->SetPointError(3,0.5,964.5007);
   gre->SetPoint(4,4.5,456.614);
   gre->SetPointError(4,0.5,162.0728);
   gre->SetPoint(5,5.5,0.1139168);
   gre->SetPointError(5,0.5,0.1076439);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all246 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all246","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->SetMinimum(0.005645612);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->SetMaximum(1.61547e+07);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all246->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all246);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph_from_Btag_Pre_AlphaT_5__all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.5,1.467963e+07);
   gre->SetPointError(0,0.5,30182.85);
   gre->SetPoint(1,1.5,1832657);
   gre->SetPointError(1,0.5,10467);
   gre->SetPoint(2,2.5,200748.9);
   gre->SetPointError(2,0.5,3702.869);
   gre->SetPoint(3,3.5,9938.799);
   gre->SetPointError(3,0.5,964.6013);
   gre->SetPoint(4,4.5,487.6885);
   gre->SetPointError(4,0.5,162.1021);
   gre->SetPoint(5,5.5,0.4608168);
   gre->SetPointError(5,0.5,0.2597167);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all247 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all247","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->SetMinimum(0.1809901);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->SetMaximum(1.61808e+07);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all247->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all247);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"375_    Jet Multiplicity=all");
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
   Double_t xAxis1480[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1480);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,166815);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,48788);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,10361);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,982);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,63);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,2);
   Btag_Pre_AlphaT_5__all->SetBinError(1,408.4299);
   Btag_Pre_AlphaT_5__all->SetBinError(2,220.8801);
   Btag_Pre_AlphaT_5__all->SetBinError(3,101.789);
   Btag_Pre_AlphaT_5__all->SetBinError(4,31.33688);
   Btag_Pre_AlphaT_5__all->SetBinError(5,7.937254);
   Btag_Pre_AlphaT_5__all->SetBinError(6,1.414214);
   Btag_Pre_AlphaT_5__all->SetMinimum(0.5);
   Btag_Pre_AlphaT_5__all->SetMaximum(1.467963e+08);
   Btag_Pre_AlphaT_5__all->SetEntries(227011);
   Btag_Pre_AlphaT_5__all->SetLineWidth(2);
   Btag_Pre_AlphaT_5__all->SetMarkerStyle(20);
   Btag_Pre_AlphaT_5__all->SetMarkerSize(1.5);
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitle("N_{b-tag}");
   Btag_Pre_AlphaT_5__all->GetXaxis()->SetTitleOffset(1.3);
   Btag_Pre_AlphaT_5__all->Draw("PSAME");
   u->Modified();
   canvas375_475/Btag_Pre_AlphaT_5__all->cd();
  
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
   Double_t xAxis1481[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1481);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.0113637);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.02662145);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.05161175);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.09880469);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.1291808);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,4.340119);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.003197222);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.00728812);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.02089842);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1021657);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.3554647);
   Btag_Pre_AlphaT_5__all->SetBinError(6,0.9042377);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(1.408356);
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
   gre->SetPointError(0,0.5,0.002056104);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0.005711378);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.01844528);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.09705411);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.3323885);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.5636007);
   
   TH1F *Graph_Graph_from_Btag_Pre_AlphaT_5__all248 = new TH1F("Graph_Graph_from_Btag_Pre_AlphaT_5__all248","",100,0,6.6);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->SetMinimum(0.3236791);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->SetMaximum(1.676321);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->SetDirectory(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->SetStats(0);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Btag_Pre_AlphaT_5__all248->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_Btag_Pre_AlphaT_5__all248);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1482[7] = {0, 1, 2, 3, 4, 5, 6}; 
   
   TH1D *Btag_Pre_AlphaT_5__all = new TH1D("Btag_Pre_AlphaT_5__all","",6, xAxis1482);
   Btag_Pre_AlphaT_5__all->SetBinContent(1,0.0113637);
   Btag_Pre_AlphaT_5__all->SetBinContent(2,0.02662145);
   Btag_Pre_AlphaT_5__all->SetBinContent(3,0.05161175);
   Btag_Pre_AlphaT_5__all->SetBinContent(4,0.09880469);
   Btag_Pre_AlphaT_5__all->SetBinContent(5,0.1291808);
   Btag_Pre_AlphaT_5__all->SetBinContent(6,4.340119);
   Btag_Pre_AlphaT_5__all->SetBinError(1,0.003197222);
   Btag_Pre_AlphaT_5__all->SetBinError(2,0.00728812);
   Btag_Pre_AlphaT_5__all->SetBinError(3,0.02089842);
   Btag_Pre_AlphaT_5__all->SetBinError(4,0.1021657);
   Btag_Pre_AlphaT_5__all->SetBinError(5,0.3554647);
   Btag_Pre_AlphaT_5__all->SetBinError(6,0.9042377);
   Btag_Pre_AlphaT_5__all->SetMinimum(0);
   Btag_Pre_AlphaT_5__all->SetMaximum(2);
   Btag_Pre_AlphaT_5__all->SetEntries(1.408356);
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
   canvas375_475/Btag_Pre_AlphaT_5__all->cd();
   canvas375_475/Btag_Pre_AlphaT_5__all->Modified();
   canvas375_475/Btag_Pre_AlphaT_5__all->cd();
   canvas375_475/Btag_Pre_AlphaT_5__all->SetSelected(canvas375_475/Btag_Pre_AlphaT_5__all);
}
