{
//=========Macro generated from canvas: canvas675_775/AlphaT_all/cannameAlphaT_all
//=========  (Thu May 10 12:23:47 2012) by ROOT version5.32/00
   TCanvas *canvas675_775/AlphaT_all = new TCanvas("canvas675_775/AlphaT_all", "cannameAlphaT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas675_775/AlphaT_all->SetHighLightColor(2);
   canvas675_775/AlphaT_all->Range(0,0,1,1);
   canvas675_775/AlphaT_all->SetFillColor(0);
   canvas675_775/AlphaT_all->SetBorderMode(0);
   canvas675_775/AlphaT_all->SetBorderSize(2);
   canvas675_775/AlphaT_all->SetTickx(1);
   canvas675_775/AlphaT_all->SetTicky(1);
   canvas675_775/AlphaT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.167074,3.4875,7.493364);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2364[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis2364);
   AlphaT_all->SetBinContent(4,3636);
   AlphaT_all->SetBinContent(5,17343);
   AlphaT_all->SetBinContent(6,1834);
   AlphaT_all->SetBinContent(7,14);
   AlphaT_all->SetBinContent(8,1);
   AlphaT_all->SetBinContent(9,1);
   AlphaT_all->SetBinContent(10,1);
   AlphaT_all->SetBinContent(19,2);
   AlphaT_all->SetBinError(4,60.29925);
   AlphaT_all->SetBinError(5,131.6928);
   AlphaT_all->SetBinError(6,42.82523);
   AlphaT_all->SetBinError(7,3.741657);
   AlphaT_all->SetBinError(8,1);
   AlphaT_all->SetBinError(9,1);
   AlphaT_all->SetBinError(10,1);
   AlphaT_all->SetBinError(19,2);
   AlphaT_all->SetMinimum(0.5);
   AlphaT_all->SetMaximum(4239557);
   AlphaT_all->SetEntries(22833);
   AlphaT_all->SetLineWidth(2);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->SetMarkerSize(1.5);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events / 0.1");
   AlphaT_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_all->Draw("");
   Double_t xAxis2365[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis2365);
   AlphaT_all->SetBinContent(2,0.02124635);
   AlphaT_all->SetBinContent(3,7.190367);
   AlphaT_all->SetBinContent(4,39.29122);
   AlphaT_all->SetBinContent(5,229.9877);
   AlphaT_all->SetBinContent(6,65.93719);
   AlphaT_all->SetBinContent(7,5.946194);
   AlphaT_all->SetBinContent(8,2.350374);
   AlphaT_all->SetBinContent(9,1.221817);
   AlphaT_all->SetBinContent(10,0.6253304);
   AlphaT_all->SetBinContent(11,0.7223149);
   AlphaT_all->SetBinContent(12,0.5157229);
   AlphaT_all->SetBinContent(13,0.3772827);
   AlphaT_all->SetBinContent(14,0.3426505);
   AlphaT_all->SetBinContent(15,0.05778056);
   AlphaT_all->SetBinContent(16,0.297138);
   AlphaT_all->SetBinContent(17,0.06632246);
   AlphaT_all->SetBinContent(18,0.1556301);
   AlphaT_all->SetBinContent(19,0.1227532);
   AlphaT_all->SetBinContent(20,0.1875845);
   AlphaT_all->SetBinContent(21,0.003991938);
   AlphaT_all->SetBinContent(23,0.0393755);
   AlphaT_all->SetBinContent(24,0.003991938);
   AlphaT_all->SetBinContent(27,0.1201111);
   AlphaT_all->SetBinContent(28,0.06204388);
   AlphaT_all->SetBinContent(30,0.05378863);
   AlphaT_all->SetBinContent(31,0.05378863);
   AlphaT_all->SetBinError(2,0.02124635);
   AlphaT_all->SetBinError(3,0.745855);
   AlphaT_all->SetBinError(4,1.710239);
   AlphaT_all->SetBinError(5,4.209492);
   AlphaT_all->SetBinError(6,2.339453);
   AlphaT_all->SetBinError(7,0.806002);
   AlphaT_all->SetBinError(8,0.3941973);
   AlphaT_all->SetBinError(9,0.2983308);
   AlphaT_all->SetBinError(10,0.221184);
   AlphaT_all->SetBinError(11,0.3128853);
   AlphaT_all->SetBinError(12,0.1958073);
   AlphaT_all->SetBinError(13,0.1756109);
   AlphaT_all->SetBinError(14,0.17275);
   AlphaT_all->SetBinError(15,0.05393655);
   AlphaT_all->SetBinError(16,0.1350176);
   AlphaT_all->SetBinError(17,0.06632246);
   AlphaT_all->SetBinError(18,0.107462);
   AlphaT_all->SetBinError(19,0.08746043);
   AlphaT_all->SetBinError(20,0.1103974);
   AlphaT_all->SetBinError(21,0.003991938);
   AlphaT_all->SetBinError(23,0.0393755);
   AlphaT_all->SetBinError(24,0.003991938);
   AlphaT_all->SetBinError(27,0.08539254);
   AlphaT_all->SetBinError(28,0.06204388);
   AlphaT_all->SetBinError(30,0.05378863);
   AlphaT_all->SetBinError(31,0.2095512);
   AlphaT_all->SetEntries(6487);
   AlphaT_all->SetLineColor(5);
   AlphaT_all->SetLineWidth(3);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events/0.025");
   AlphaT_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_158 = new TH1F("_stack_158","",100,0,10);
   _stack_158->SetMinimum(169.5823);
   _stack_158->SetMaximum(678329.2);
   _stack_158->SetDirectory(0);
   _stack_158->SetStats(0);
   _stack_158->GetXaxis()->SetLabelFont(42);
   _stack_158->GetXaxis()->SetLabelOffset(0.007);
   _stack_158->GetXaxis()->SetLabelSize(0.05);
   _stack_158->GetXaxis()->SetTitleSize(0.05);
   _stack_158->GetYaxis()->SetLabelFont(42);
   _stack_158->GetYaxis()->SetLabelOffset(0.007);
   _stack_158->GetYaxis()->SetLabelSize(0.05);
   _stack_158->GetZaxis()->SetLabelFont(42);
   _stack_158->GetZaxis()->SetLabelOffset(0.007);
   _stack_158->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_158);
   
   Double_t xAxis2366[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis2366);
   AlphaT_all->SetBinContent(2,0.02124635);
   AlphaT_all->SetBinContent(3,17.97334);
   AlphaT_all->SetBinContent(4,106.7994);
   AlphaT_all->SetBinContent(5,1663.873);
   AlphaT_all->SetBinContent(6,372.5114);
   AlphaT_all->SetBinContent(7,12.84043);
   AlphaT_all->SetBinContent(8,3.44564);
   AlphaT_all->SetBinContent(9,1.901471);
   AlphaT_all->SetBinContent(10,1.154286);
   AlphaT_all->SetBinContent(11,1.067859);
   AlphaT_all->SetBinContent(12,0.634187);
   AlphaT_all->SetBinContent(13,0.3772827);
   AlphaT_all->SetBinContent(14,0.3426505);
   AlphaT_all->SetBinContent(15,0.2137242);
   AlphaT_all->SetBinContent(16,0.3152232);
   AlphaT_all->SetBinContent(17,0.06632246);
   AlphaT_all->SetBinContent(18,0.1618895);
   AlphaT_all->SetBinContent(19,0.1562701);
   AlphaT_all->SetBinContent(20,0.244039);
   AlphaT_all->SetBinContent(21,0.003991938);
   AlphaT_all->SetBinContent(22,0.005042943);
   AlphaT_all->SetBinContent(23,0.0393755);
   AlphaT_all->SetBinContent(24,0.07853169);
   AlphaT_all->SetBinContent(26,0.09222052);
   AlphaT_all->SetBinContent(27,0.1201111);
   AlphaT_all->SetBinContent(28,0.06204388);
   AlphaT_all->SetBinContent(30,0.05378863);
   AlphaT_all->SetBinContent(31,0.181141);
   AlphaT_all->SetBinContent(33,0.01808518);
   AlphaT_all->SetBinContent(40,0.05281258);
   AlphaT_all->SetBinContent(47,0.05645457);
   AlphaT_all->SetBinError(2,0.02124635);
   AlphaT_all->SetBinError(3,1.208918);
   AlphaT_all->SetBinError(4,3.191643);
   AlphaT_all->SetBinError(5,17.37739);
   AlphaT_all->SetBinError(6,8.83061);
   AlphaT_all->SetBinError(7,1.516655);
   AlphaT_all->SetBinError(8,0.4615638);
   AlphaT_all->SetBinError(9,0.3586081);
   AlphaT_all->SetBinError(10,0.2822253);
   AlphaT_all->SetBinError(11,0.3456233);
   AlphaT_all->SetBinError(12,0.2074847);
   AlphaT_all->SetBinError(13,0.1756109);
   AlphaT_all->SetBinError(14,0.17275);
   AlphaT_all->SetBinError(15,0.1235441);
   AlphaT_all->SetBinError(16,0.1362234);
   AlphaT_all->SetBinError(17,0.06632246);
   AlphaT_all->SetBinError(18,0.1076441);
   AlphaT_all->SetBinError(19,0.09366277);
   AlphaT_all->SetBinError(20,0.1239948);
   AlphaT_all->SetBinError(21,0.003991938);
   AlphaT_all->SetBinError(22,0.005042943);
   AlphaT_all->SetBinError(23,0.0393755);
   AlphaT_all->SetBinError(24,0.05941488);
   AlphaT_all->SetBinError(26,0.06759804);
   AlphaT_all->SetBinError(27,0.08539254);
   AlphaT_all->SetBinError(28,0.06204388);
   AlphaT_all->SetBinError(30,0.05378863);
   AlphaT_all->SetBinError(31,0.4033998);
   AlphaT_all->SetBinError(33,0.01808518);
   AlphaT_all->SetBinError(40,0.05281258);
   AlphaT_all->SetBinError(47,0.05645457);
   AlphaT_all->SetEntries(30567);
   AlphaT_all->SetLineColor(3);
   AlphaT_all->SetLineWidth(3);
   AlphaT_all->SetMarkerColor(3);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events/0.025");
   ->Add(AlphaT_all,"");
   Double_t xAxis2367[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis2367);
   AlphaT_all->SetBinContent(3,2.004163);
   AlphaT_all->SetBinContent(4,5396.359);
   AlphaT_all->SetBinContent(5,422291.9);
   AlphaT_all->SetBinContent(6,7328.886);
   AlphaT_all->SetBinContent(7,0.06379247);
   AlphaT_all->SetBinError(3,0.5194473);
   AlphaT_all->SetBinError(4,126.1646);
   AlphaT_all->SetBinError(5,1162.482);
   AlphaT_all->SetBinError(6,235.4275);
   AlphaT_all->SetBinError(7,0.06379247);
   AlphaT_all->SetEntries(218575);
   AlphaT_all->SetLineColor(7);
   AlphaT_all->SetLineStyle(10);
   AlphaT_all->SetLineWidth(3);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events/0.025");
   ->Add(AlphaT_all,"");
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
   TLegendEntry *entry=leg->AddEntry("AlphaT_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("AlphaT_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_all","Combined EWK","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"675_775    Jet Multiplicity=all");
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
   Double_t xAxis2368[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis2368);
   AlphaT_all->SetBinContent(4,3636);
   AlphaT_all->SetBinContent(5,17343);
   AlphaT_all->SetBinContent(6,1834);
   AlphaT_all->SetBinContent(7,14);
   AlphaT_all->SetBinContent(8,1);
   AlphaT_all->SetBinContent(9,1);
   AlphaT_all->SetBinContent(10,1);
   AlphaT_all->SetBinContent(19,2);
   AlphaT_all->SetBinError(4,60.29925);
   AlphaT_all->SetBinError(5,131.6928);
   AlphaT_all->SetBinError(6,42.82523);
   AlphaT_all->SetBinError(7,3.741657);
   AlphaT_all->SetBinError(8,1);
   AlphaT_all->SetBinError(9,1);
   AlphaT_all->SetBinError(10,1);
   AlphaT_all->SetBinError(19,2);
   AlphaT_all->SetMinimum(0.5);
   AlphaT_all->SetMaximum(4239557);
   AlphaT_all->SetEntries(22833);
   AlphaT_all->SetLineWidth(2);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->SetMarkerSize(1.5);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events / 0.1");
   AlphaT_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_all->Draw("PSAME");
   u->Modified();
   canvas675_775/AlphaT_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-0.3875,-0.25,3.4875,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis2369[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis2369);
   AlphaT_all->SetBinContent(4,34.04513);
   AlphaT_all->SetBinContent(5,10.42327);
   AlphaT_all->SetBinContent(6,4.92334);
   AlphaT_all->SetBinContent(7,1.090306);
   AlphaT_all->SetBinContent(8,0.2902218);
   AlphaT_all->SetBinContent(9,0.5259086);
   AlphaT_all->SetBinContent(10,0.8663363);
   AlphaT_all->SetBinContent(19,12.79835);
   AlphaT_all->SetBinError(4,0.0341776);
   AlphaT_all->SetBinError(5,0.01291263);
   AlphaT_all->SetBinError(6,0.0332748);
   AlphaT_all->SetBinError(7,0.2921983);
   AlphaT_all->SetBinError(8,1.008932);
   AlphaT_all->SetBinError(9,1.017629);
   AlphaT_all->SetBinError(10,1.029457);
   AlphaT_all->SetBinError(19,1.165864);
   AlphaT_all->SetMinimum(0);
   AlphaT_all->SetMaximum(2);
   AlphaT_all->SetEntries(18.73068);
   AlphaT_all->SetLineWidth(2);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->SetMarkerSize(1.5);
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetXaxis()->SetLabelSize(0.12);
   AlphaT_all->GetYaxis()->SetTitle("Data/MC");
   AlphaT_all->GetYaxis()->SetNdivisions(505);
   AlphaT_all->GetYaxis()->SetLabelSize(0.11);
   AlphaT_all->GetYaxis()->SetTitleSize(0.1);
   AlphaT_all->GetYaxis()->SetTitleOffset(0.5);
   AlphaT_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(100);
   gre->SetName("Graph_from_AlphaT_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.05,1);
   gre->SetPointError(0,0.05,0);
   gre->SetPoint(1,0.15,1);
   gre->SetPointError(1,0.05,1);
   gre->SetPoint(2,0.25,1);
   gre->SetPointError(2,0.05,0.06726173);
   gre->SetPoint(3,0.35,1);
   gre->SetPointError(3,0.05,0.02988445);
   gre->SetPoint(4,0.45,1);
   gre->SetPointError(4,0.05,0.01044394);
   gre->SetPoint(5,0.55,1);
   gre->SetPointError(5,0.05,0.02370561);
   gre->SetPoint(6,0.65,1);
   gre->SetPointError(6,0.05,0.1181156);
   gre->SetPoint(7,0.75,1);
   gre->SetPointError(7,0.05,0.1339559);
   gre->SetPoint(8,0.85,1);
   gre->SetPointError(8,0.05,0.1885951);
   gre->SetPoint(9,0.95,1);
   gre->SetPointError(9,0.05,0.244502);
   gre->SetPoint(10,1.05,1);
   gre->SetPointError(10,0.05,0.3236601);
   gre->SetPoint(11,1.15,1);
   gre->SetPointError(11,0.05,0.3271665);
   gre->SetPoint(12,1.25,1);
   gre->SetPointError(12,0.05,0.4654624);
   gre->SetPoint(13,1.35,1);
   gre->SetPointError(13,0.05,0.5041579);
   gre->SetPoint(14,1.45,1);
   gre->SetPointError(14,0.05,0.5780538);
   gre->SetPoint(15,1.55,1);
   gre->SetPointError(15,0.05,0.432149);
   gre->SetPoint(16,1.65,1);
   gre->SetPointError(16,0.05,1);
   gre->SetPoint(17,1.75,1);
   gre->SetPointError(17,0.05,0.6649233);
   gre->SetPoint(18,1.85,1);
   gre->SetPointError(18,0.05,0.5993644);
   gre->SetPoint(19,1.95,1);
   gre->SetPointError(19,0.05,0.508094);
   gre->SetPoint(20,2.05,1);
   gre->SetPointError(20,0.05,1);
   gre->SetPoint(21,2.15,1);
   gre->SetPointError(21,0.05,1);
   gre->SetPoint(22,2.25,1);
   gre->SetPointError(22,0.05,1);
   gre->SetPoint(23,2.35,1);
   gre->SetPointError(23,0.05,0.756572);
   gre->SetPoint(24,2.45,1);
   gre->SetPointError(24,0.05,0);
   gre->SetPoint(25,2.55,1);
   gre->SetPointError(25,0.05,0.7330043);
   gre->SetPoint(26,2.65,1);
   gre->SetPointError(26,0.05,0.7109463);
   gre->SetPoint(27,2.75,1);
   gre->SetPointError(27,0.05,1);
   gre->SetPoint(28,2.85,1);
   gre->SetPointError(28,0.05,0);
   gre->SetPoint(29,2.95,1);
   gre->SetPointError(29,0.05,1);
   gre->SetPoint(30,3.05,1);
   gre->SetPointError(30,0.05,2.226994);
   gre->SetPoint(31,3.15,1);
   gre->SetPointError(31,0.05,0);
   gre->SetPoint(32,3.25,1);
   gre->SetPointError(32,0.05,1);
   gre->SetPoint(33,3.35,1);
   gre->SetPointError(33,0.05,0);
   gre->SetPoint(34,3.45,1);
   gre->SetPointError(34,0.05,0);
   gre->SetPoint(35,3.55,1);
   gre->SetPointError(35,0.05,0);
   gre->SetPoint(36,3.65,1);
   gre->SetPointError(36,0.05,0);
   gre->SetPoint(37,3.75,1);
   gre->SetPointError(37,0.05,0);
   gre->SetPoint(38,3.85,1);
   gre->SetPointError(38,0.05,0);
   gre->SetPoint(39,3.95,1);
   gre->SetPointError(39,0.05,1);
   gre->SetPoint(40,4.05,1);
   gre->SetPointError(40,0.05,0);
   gre->SetPoint(41,4.15,1);
   gre->SetPointError(41,0.05,0);
   gre->SetPoint(42,4.25,1);
   gre->SetPointError(42,0.05,0);
   gre->SetPoint(43,4.35,1);
   gre->SetPointError(43,0.05,0);
   gre->SetPoint(44,4.45,1);
   gre->SetPointError(44,0.05,0);
   gre->SetPoint(45,4.55,1);
   gre->SetPointError(45,0.05,0);
   gre->SetPoint(46,4.65,1);
   gre->SetPointError(46,0.05,1);
   gre->SetPoint(47,4.75,1);
   gre->SetPointError(47,0.05,0);
   gre->SetPoint(48,4.85,1);
   gre->SetPointError(48,0.05,0);
   gre->SetPoint(49,4.95,1);
   gre->SetPointError(49,0.05,0);
   gre->SetPoint(50,5.05,1);
   gre->SetPointError(50,0.05,0);
   gre->SetPoint(51,5.15,1);
   gre->SetPointError(51,0.05,0);
   gre->SetPoint(52,5.25,1);
   gre->SetPointError(52,0.05,0);
   gre->SetPoint(53,5.35,1);
   gre->SetPointError(53,0.05,0);
   gre->SetPoint(54,5.45,1);
   gre->SetPointError(54,0.05,0);
   gre->SetPoint(55,5.55,1);
   gre->SetPointError(55,0.05,0);
   gre->SetPoint(56,5.65,1);
   gre->SetPointError(56,0.05,0);
   gre->SetPoint(57,5.75,1);
   gre->SetPointError(57,0.05,0);
   gre->SetPoint(58,5.85,1);
   gre->SetPointError(58,0.05,0);
   gre->SetPoint(59,5.95,1);
   gre->SetPointError(59,0.05,0);
   gre->SetPoint(60,6.05,1);
   gre->SetPointError(60,0.05,0);
   gre->SetPoint(61,6.15,1);
   gre->SetPointError(61,0.05,0);
   gre->SetPoint(62,6.25,1);
   gre->SetPointError(62,0.05,0);
   gre->SetPoint(63,6.35,1);
   gre->SetPointError(63,0.05,0);
   gre->SetPoint(64,6.45,1);
   gre->SetPointError(64,0.05,0);
   gre->SetPoint(65,6.55,1);
   gre->SetPointError(65,0.05,0);
   gre->SetPoint(66,6.65,1);
   gre->SetPointError(66,0.05,0);
   gre->SetPoint(67,6.75,1);
   gre->SetPointError(67,0.05,0);
   gre->SetPoint(68,6.85,1);
   gre->SetPointError(68,0.05,0);
   gre->SetPoint(69,6.95,1);
   gre->SetPointError(69,0.05,0);
   gre->SetPoint(70,7.05,1);
   gre->SetPointError(70,0.05,0);
   gre->SetPoint(71,7.15,1);
   gre->SetPointError(71,0.05,0);
   gre->SetPoint(72,7.25,1);
   gre->SetPointError(72,0.05,0);
   gre->SetPoint(73,7.35,1);
   gre->SetPointError(73,0.05,0);
   gre->SetPoint(74,7.45,1);
   gre->SetPointError(74,0.05,0);
   gre->SetPoint(75,7.55,1);
   gre->SetPointError(75,0.05,0);
   gre->SetPoint(76,7.65,1);
   gre->SetPointError(76,0.05,0);
   gre->SetPoint(77,7.75,1);
   gre->SetPointError(77,0.05,0);
   gre->SetPoint(78,7.85,1);
   gre->SetPointError(78,0.05,0);
   gre->SetPoint(79,7.95,1);
   gre->SetPointError(79,0.05,0);
   gre->SetPoint(80,8.05,1);
   gre->SetPointError(80,0.05,0);
   gre->SetPoint(81,8.15,1);
   gre->SetPointError(81,0.05,0);
   gre->SetPoint(82,8.25,1);
   gre->SetPointError(82,0.05,0);
   gre->SetPoint(83,8.35,1);
   gre->SetPointError(83,0.05,0);
   gre->SetPoint(84,8.45,1);
   gre->SetPointError(84,0.05,0);
   gre->SetPoint(85,8.55,1);
   gre->SetPointError(85,0.05,0);
   gre->SetPoint(86,8.65,1);
   gre->SetPointError(86,0.05,0);
   gre->SetPoint(87,8.75,1);
   gre->SetPointError(87,0.05,0);
   gre->SetPoint(88,8.85,1);
   gre->SetPointError(88,0.05,0);
   gre->SetPoint(89,8.95,1);
   gre->SetPointError(89,0.05,0);
   gre->SetPoint(90,9.05,1);
   gre->SetPointError(90,0.05,0);
   gre->SetPoint(91,9.15,1);
   gre->SetPointError(91,0.05,0);
   gre->SetPoint(92,9.25,1);
   gre->SetPointError(92,0.05,0);
   gre->SetPoint(93,9.35,1);
   gre->SetPointError(93,0.05,0);
   gre->SetPoint(94,9.45,1);
   gre->SetPointError(94,0.05,0);
   gre->SetPoint(95,9.55,1);
   gre->SetPointError(95,0.05,0);
   gre->SetPoint(96,9.65,1);
   gre->SetPointError(96,0.05,0);
   gre->SetPoint(97,9.75,1);
   gre->SetPointError(97,0.05,0);
   gre->SetPoint(98,9.85,1);
   gre->SetPointError(98,0.05,0);
   gre->SetPoint(99,9.95,1);
   gre->SetPointError(99,0.05,0);
   
   TH1F *Graph_Graph_from_AlphaT_all395 = new TH1F("Graph_Graph_from_AlphaT_all395","",100,0,11);
   Graph_Graph_from_AlphaT_all395->SetMinimum(-1.672393);
   Graph_Graph_from_AlphaT_all395->SetMaximum(3.672393);
   Graph_Graph_from_AlphaT_all395->SetDirectory(0);
   Graph_Graph_from_AlphaT_all395->SetStats(0);
   Graph_Graph_from_AlphaT_all395->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all395->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all395->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_all395->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_all395->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all395->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all395->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_all395->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all395->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all395->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_all395);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.1,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2370[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis2370);
   AlphaT_all->SetBinContent(4,34.04513);
   AlphaT_all->SetBinContent(5,10.42327);
   AlphaT_all->SetBinContent(6,4.92334);
   AlphaT_all->SetBinContent(7,1.090306);
   AlphaT_all->SetBinContent(8,0.2902218);
   AlphaT_all->SetBinContent(9,0.5259086);
   AlphaT_all->SetBinContent(10,0.8663363);
   AlphaT_all->SetBinContent(19,12.79835);
   AlphaT_all->SetBinError(4,0.0341776);
   AlphaT_all->SetBinError(5,0.01291263);
   AlphaT_all->SetBinError(6,0.0332748);
   AlphaT_all->SetBinError(7,0.2921983);
   AlphaT_all->SetBinError(8,1.008932);
   AlphaT_all->SetBinError(9,1.017629);
   AlphaT_all->SetBinError(10,1.029457);
   AlphaT_all->SetBinError(19,1.165864);
   AlphaT_all->SetMinimum(0);
   AlphaT_all->SetMaximum(2);
   AlphaT_all->SetEntries(18.73068);
   AlphaT_all->SetLineWidth(2);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->SetMarkerSize(1.5);
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetXaxis()->SetLabelSize(0.12);
   AlphaT_all->GetYaxis()->SetTitle("Data/MC");
   AlphaT_all->GetYaxis()->SetNdivisions(505);
   AlphaT_all->GetYaxis()->SetLabelSize(0.11);
   AlphaT_all->GetYaxis()->SetTitleSize(0.1);
   AlphaT_all->GetYaxis()->SetTitleOffset(0.5);
   AlphaT_all->Draw("PSAME");
   d->Modified();
   canvas675_775/AlphaT_all->cd();
   canvas675_775/AlphaT_all->Modified();
   canvas675_775/AlphaT_all->cd();
   canvas675_775/AlphaT_all->SetSelected(canvas675_775/AlphaT_all);
}
