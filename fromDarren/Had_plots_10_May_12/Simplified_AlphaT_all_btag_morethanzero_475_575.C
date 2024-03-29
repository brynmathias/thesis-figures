{
//=========Macro generated from canvas: canvasbtag_morethanzero_475_575/AlphaT_all/cannameAlphaT_all
//=========  (Thu May 10 12:25:28 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_475_575/AlphaT_all = new TCanvas("canvasbtag_morethanzero_475_575/AlphaT_all", "cannameAlphaT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_475_575/AlphaT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_475_575/AlphaT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_475_575/AlphaT_all->SetFillColor(0);
   canvasbtag_morethanzero_475_575/AlphaT_all->SetBorderMode(0);
   canvasbtag_morethanzero_475_575/AlphaT_all->SetBorderSize(2);
   canvasbtag_morethanzero_475_575/AlphaT_all->SetTickx(1);
   canvasbtag_morethanzero_475_575/AlphaT_all->SetTicky(1);
   canvasbtag_morethanzero_475_575/AlphaT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.161006,3.4875,7.438751);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5094[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis5094);
   AlphaT_all->SetBinContent(3,4);
   AlphaT_all->SetBinContent(4,768);
   AlphaT_all->SetBinContent(5,17989);
   AlphaT_all->SetBinContent(6,3443);
   AlphaT_all->SetBinContent(7,31);
   AlphaT_all->SetBinContent(8,10);
   AlphaT_all->SetBinContent(9,4);
   AlphaT_all->SetBinContent(16,1);
   AlphaT_all->SetBinError(3,2.3);
   AlphaT_all->SetBinError(4,27.71281);
   AlphaT_all->SetBinError(5,134.1231);
   AlphaT_all->SetBinError(6,58.67708);
   AlphaT_all->SetBinError(7,5.567764);
   AlphaT_all->SetBinError(8,3.162278);
   AlphaT_all->SetBinError(9,2.3);
   AlphaT_all->SetBinError(16,1);
   AlphaT_all->SetMinimum(0.5);
   AlphaT_all->SetMaximum(3791190);
   AlphaT_all->SetEntries(22251);
   AlphaT_all->SetLineWidth(2);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->SetMarkerSize(1.5);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events / 0.1");
   AlphaT_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_all->Draw("");
   Double_t xAxis5095[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis5095);
   AlphaT_all->SetBinContent(3,3.499666);
   AlphaT_all->SetBinContent(4,18.85917);
   AlphaT_all->SetBinContent(5,119.279);
   AlphaT_all->SetBinContent(6,47.92093);
   AlphaT_all->SetBinContent(7,6.775286);
   AlphaT_all->SetBinContent(8,1.5192);
   AlphaT_all->SetBinContent(9,1.2412);
   AlphaT_all->SetBinContent(10,0.3277563);
   AlphaT_all->SetBinContent(11,0.4282189);
   AlphaT_all->SetBinContent(12,0.07961478);
   AlphaT_all->SetBinContent(13,0.2420148);
   AlphaT_all->SetBinContent(14,0.1589131);
   AlphaT_all->SetBinContent(15,0.1489718);
   AlphaT_all->SetBinContent(16,0.02124635);
   AlphaT_all->SetBinContent(19,0.003991938);
   AlphaT_all->SetBinContent(21,0.003991938);
   AlphaT_all->SetBinContent(22,0.1221713);
   AlphaT_all->SetBinContent(23,0.199973);
   AlphaT_all->SetBinContent(24,0.06632246);
   AlphaT_all->SetBinContent(26,0.02124635);
   AlphaT_all->SetBinContent(27,0.02124635);
   AlphaT_all->SetBinContent(28,0.1463297);
   AlphaT_all->SetBinContent(31,0.1402366);
   AlphaT_all->SetBinContent(33,0.003991938);
   AlphaT_all->SetBinContent(34,0.07163091);
   AlphaT_all->SetBinContent(35,0.0393755);
   AlphaT_all->SetBinContent(47,0.02124635);
   AlphaT_all->SetBinContent(57,0.003991938);
   AlphaT_all->SetBinError(3,1.240556);
   AlphaT_all->SetBinError(4,1.305279);
   AlphaT_all->SetBinError(5,3.03469);
   AlphaT_all->SetBinError(6,1.903144);
   AlphaT_all->SetBinError(7,1.19427);
   AlphaT_all->SetBinError(8,0.3635229);
   AlphaT_all->SetBinError(9,0.459916);
   AlphaT_all->SetBinError(10,0.1503358);
   AlphaT_all->SetBinError(11,0.1986468);
   AlphaT_all->SetBinError(12,0.07185303);
   AlphaT_all->SetBinError(13,0.1236405);
   AlphaT_all->SetBinError(14,0.09719965);
   AlphaT_all->SetBinError(15,0.105628);
   AlphaT_all->SetBinError(16,0.02124635);
   AlphaT_all->SetBinError(19,0.003991938);
   AlphaT_all->SetBinError(21,0.003991938);
   AlphaT_all->SetBinError(22,0.1221713);
   AlphaT_all->SetBinError(23,0.1155927);
   AlphaT_all->SetBinError(24,0.06632246);
   AlphaT_all->SetBinError(26,0.02124635);
   AlphaT_all->SetBinError(27,0.02124635);
   AlphaT_all->SetBinError(28,0.1039222);
   AlphaT_all->SetBinError(31,0.3383573);
   AlphaT_all->SetBinError(33,0.003991938);
   AlphaT_all->SetBinError(34,0.07163091);
   AlphaT_all->SetBinError(35,0.0393755);
   AlphaT_all->SetBinError(47,0.02124635);
   AlphaT_all->SetBinError(57,0.003991938);
   AlphaT_all->SetEntries(3610);
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
   
   TH1F *_stack_340 = new TH1F("_stack_340","",100,0,10);
   _stack_340->SetMinimum(152.044);
   _stack_340->SetMaximum(608176.1);
   _stack_340->SetDirectory(0);
   _stack_340->SetStats(0);
   _stack_340->GetXaxis()->SetLabelFont(42);
   _stack_340->GetXaxis()->SetLabelOffset(0.007);
   _stack_340->GetXaxis()->SetLabelSize(0.05);
   _stack_340->GetXaxis()->SetTitleSize(0.05);
   _stack_340->GetYaxis()->SetLabelFont(42);
   _stack_340->GetYaxis()->SetLabelOffset(0.007);
   _stack_340->GetYaxis()->SetLabelSize(0.05);
   _stack_340->GetZaxis()->SetLabelFont(42);
   _stack_340->GetZaxis()->SetLabelOffset(0.007);
   _stack_340->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_340);
   
   Double_t xAxis5096[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis5096);
   AlphaT_all->SetBinContent(3,8.907269);
   AlphaT_all->SetBinContent(4,106.6027);
   AlphaT_all->SetBinContent(5,3086.15);
   AlphaT_all->SetBinContent(6,791.0752);
   AlphaT_all->SetBinContent(7,26.80529);
   AlphaT_all->SetBinContent(8,4.386164);
   AlphaT_all->SetBinContent(9,3.020435);
   AlphaT_all->SetBinContent(10,1.646184);
   AlphaT_all->SetBinContent(11,0.9917205);
   AlphaT_all->SetBinContent(12,0.3267052);
   AlphaT_all->SetBinContent(13,0.3865455);
   AlphaT_all->SetBinContent(14,0.3638335);
   AlphaT_all->SetBinContent(15,0.5981932);
   AlphaT_all->SetBinContent(16,0.02124635);
   AlphaT_all->SetBinContent(18,0.006241758);
   AlphaT_all->SetBinContent(19,0.009565021);
   AlphaT_all->SetBinContent(20,0.05645457);
   AlphaT_all->SetBinContent(21,0.003991938);
   AlphaT_all->SetBinContent(22,0.1221713);
   AlphaT_all->SetBinContent(23,0.205016);
   AlphaT_all->SetBinContent(24,0.06632246);
   AlphaT_all->SetBinContent(26,0.02124635);
   AlphaT_all->SetBinContent(27,0.02464435);
   AlphaT_all->SetBinContent(28,0.1463297);
   AlphaT_all->SetBinContent(31,0.2852853);
   AlphaT_all->SetBinContent(32,0.06097319);
   AlphaT_all->SetBinContent(33,0.00583648);
   AlphaT_all->SetBinContent(34,0.07163091);
   AlphaT_all->SetBinContent(35,0.0393755);
   AlphaT_all->SetBinContent(40,0.06810321);
   AlphaT_all->SetBinContent(47,0.02124635);
   AlphaT_all->SetBinContent(57,0.003991938);
   AlphaT_all->SetBinError(3,1.380442);
   AlphaT_all->SetBinError(4,3.912157);
   AlphaT_all->SetBinError(5,28.04597);
   AlphaT_all->SetBinError(6,14.60701);
   AlphaT_all->SetBinError(7,3.198588);
   AlphaT_all->SetBinError(8,0.890057);
   AlphaT_all->SetBinError(9,0.8604907);
   AlphaT_all->SetBinError(10,0.5137394);
   AlphaT_all->SetBinError(11,0.3443397);
   AlphaT_all->SetBinError(12,0.2457828);
   AlphaT_all->SetBinError(13,0.159896);
   AlphaT_all->SetBinError(14,0.1920104);
   AlphaT_all->SetBinError(15,0.2871204);
   AlphaT_all->SetBinError(16,0.02124635);
   AlphaT_all->SetBinError(18,0.006241758);
   AlphaT_all->SetBinError(19,0.006855277);
   AlphaT_all->SetBinError(20,0.05645457);
   AlphaT_all->SetBinError(21,0.003991938);
   AlphaT_all->SetBinError(22,0.1221713);
   AlphaT_all->SetBinError(23,0.1157026);
   AlphaT_all->SetBinError(24,0.06632246);
   AlphaT_all->SetBinError(26,0.02124635);
   AlphaT_all->SetBinError(27,0.02151636);
   AlphaT_all->SetBinError(28,0.1039222);
   AlphaT_all->SetBinError(31,0.4998161);
   AlphaT_all->SetBinError(32,0.06097319);
   AlphaT_all->SetBinError(33,0.004397488);
   AlphaT_all->SetBinError(34,0.07163091);
   AlphaT_all->SetBinError(35,0.0393755);
   AlphaT_all->SetBinError(40,0.06810321);
   AlphaT_all->SetBinError(47,0.02124635);
   AlphaT_all->SetBinError(57,0.003991938);
   AlphaT_all->SetEntries(37811);
   AlphaT_all->SetLineColor(3);
   AlphaT_all->SetLineWidth(3);
   AlphaT_all->SetMarkerColor(3);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events/0.025");
   ->Add(AlphaT_all,"");
   Double_t xAxis5097[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis5097);
   AlphaT_all->SetBinContent(3,11.77385);
   AlphaT_all->SetBinContent(4,8686.049);
   AlphaT_all->SetBinContent(5,376032.9);
   AlphaT_all->SetBinContent(6,9327.34);
   AlphaT_all->SetBinError(3,4.960549);
   AlphaT_all->SetBinError(4,490.8148);
   AlphaT_all->SetBinError(5,4077.179);
   AlphaT_all->SetBinError(6,720.2716);
   AlphaT_all->SetEntries(109596);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_475_575    Jet Multiplicity=all");
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
   Double_t xAxis5098[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis5098);
   AlphaT_all->SetBinContent(3,4);
   AlphaT_all->SetBinContent(4,768);
   AlphaT_all->SetBinContent(5,17989);
   AlphaT_all->SetBinContent(6,3443);
   AlphaT_all->SetBinContent(7,31);
   AlphaT_all->SetBinContent(8,10);
   AlphaT_all->SetBinContent(9,4);
   AlphaT_all->SetBinContent(16,1);
   AlphaT_all->SetBinError(3,2.3);
   AlphaT_all->SetBinError(4,27.71281);
   AlphaT_all->SetBinError(5,134.1231);
   AlphaT_all->SetBinError(6,58.67708);
   AlphaT_all->SetBinError(7,5.567764);
   AlphaT_all->SetBinError(8,3.162278);
   AlphaT_all->SetBinError(9,2.3);
   AlphaT_all->SetBinError(16,1);
   AlphaT_all->SetMinimum(0.5);
   AlphaT_all->SetMaximum(3791190);
   AlphaT_all->SetEntries(22251);
   AlphaT_all->SetLineWidth(2);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->SetMarkerSize(1.5);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events / 0.1");
   AlphaT_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_475_575/AlphaT_all->cd();
  
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
   Double_t xAxis5099[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis5099);
   AlphaT_all->SetBinContent(3,0.4490714);
   AlphaT_all->SetBinContent(4,7.204321);
   AlphaT_all->SetBinContent(5,5.828946);
   AlphaT_all->SetBinContent(6,4.352304);
   AlphaT_all->SetBinContent(7,1.156488);
   AlphaT_all->SetBinContent(8,2.279896);
   AlphaT_all->SetBinContent(9,1.324313);
   AlphaT_all->SetBinContent(16,47.0669);
   AlphaT_all->SetBinError(3,0.5955196);
   AlphaT_all->SetBinError(4,0.0514671);
   AlphaT_all->SetBinError(5,0.01175481);
   AlphaT_all->SetBinError(6,0.0251275);
   AlphaT_all->SetBinError(7,0.2156315);
   AlphaT_all->SetBinError(8,0.3757367);
   AlphaT_all->SetBinError(9,0.6417064);
   AlphaT_all->SetBinError(16,1.414214);
   AlphaT_all->SetMinimum(0);
   AlphaT_all->SetMaximum(2);
   AlphaT_all->SetEntries(1.094871);
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
   gre->SetPointError(1,0.05,0);
   gre->SetPoint(2,0.25,1);
   gre->SetPointError(2,0.05,0.1549793);
   gre->SetPoint(3,0.35,1);
   gre->SetPointError(3,0.05,0.03669849);
   gre->SetPoint(4,0.45,1);
   gre->SetPointError(4,0.05,0.00908769);
   gre->SetPoint(5,0.55,1);
   gre->SetPointError(5,0.05,0.01846475);
   gre->SetPoint(6,0.65,1);
   gre->SetPointError(6,0.05,0.1193267);
   gre->SetPoint(7,0.75,1);
   gre->SetPointError(7,0.05,0.2029238);
   gre->SetPoint(8,0.85,1);
   gre->SetPointError(8,0.05,0.2848897);
   gre->SetPoint(9,0.95,1);
   gre->SetPointError(9,0.05,0.312079);
   gre->SetPoint(10,1.05,1);
   gre->SetPointError(10,0.05,0.3472145);
   gre->SetPoint(11,1.15,1);
   gre->SetPointError(11,0.05,0.7523075);
   gre->SetPoint(12,1.25,1);
   gre->SetPointError(12,0.05,0.4136538);
   gre->SetPoint(13,1.35,1);
   gre->SetPointError(13,0.05,0.5277424);
   gre->SetPoint(14,1.45,1);
   gre->SetPointError(14,0.05,0.4799794);
   gre->SetPoint(15,1.55,1);
   gre->SetPointError(15,0.05,1);
   gre->SetPoint(16,1.65,1);
   gre->SetPointError(16,0.05,0);
   gre->SetPoint(17,1.75,1);
   gre->SetPointError(17,0.05,1);
   gre->SetPoint(18,1.85,1);
   gre->SetPointError(18,0.05,0.7167028);
   gre->SetPoint(19,1.95,1);
   gre->SetPointError(19,0.05,1);
   gre->SetPoint(20,2.05,1);
   gre->SetPointError(20,0.05,1);
   gre->SetPoint(21,2.15,1);
   gre->SetPointError(21,0.05,1);
   gre->SetPoint(22,2.25,1);
   gre->SetPointError(22,0.05,0.5643591);
   gre->SetPoint(23,2.35,1);
   gre->SetPointError(23,0.05,1);
   gre->SetPoint(24,2.45,1);
   gre->SetPointError(24,0.05,0);
   gre->SetPoint(25,2.55,1);
   gre->SetPointError(25,0.05,1);
   gre->SetPoint(26,2.65,1);
   gre->SetPointError(26,0.05,0.8730751);
   gre->SetPoint(27,2.75,1);
   gre->SetPointError(27,0.05,0.7101922);
   gre->SetPoint(28,2.85,1);
   gre->SetPointError(28,0.05,0);
   gre->SetPoint(29,2.95,1);
   gre->SetPointError(29,0.05,0);
   gre->SetPoint(30,3.05,1);
   gre->SetPointError(30,0.05,1.751987);
   gre->SetPoint(31,3.15,1);
   gre->SetPointError(31,0.05,1);
   gre->SetPoint(32,3.25,1);
   gre->SetPointError(32,0.05,0.7534487);
   gre->SetPoint(33,3.35,1);
   gre->SetPointError(33,0.05,1);
   gre->SetPoint(34,3.45,1);
   gre->SetPointError(34,0.05,1);
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
   gre->SetPointError(56,0.05,1);
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
   
   TH1F *Graph_Graph_from_AlphaT_all850 = new TH1F("Graph_Graph_from_AlphaT_all850","",100,0,11);
   Graph_Graph_from_AlphaT_all850->SetMinimum(-1.102384);
   Graph_Graph_from_AlphaT_all850->SetMaximum(3.102384);
   Graph_Graph_from_AlphaT_all850->SetDirectory(0);
   Graph_Graph_from_AlphaT_all850->SetStats(0);
   Graph_Graph_from_AlphaT_all850->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all850->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all850->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_all850->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_all850->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all850->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all850->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_all850->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all850->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all850->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_all850);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.1,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5100[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis5100);
   AlphaT_all->SetBinContent(3,0.4490714);
   AlphaT_all->SetBinContent(4,7.204321);
   AlphaT_all->SetBinContent(5,5.828946);
   AlphaT_all->SetBinContent(6,4.352304);
   AlphaT_all->SetBinContent(7,1.156488);
   AlphaT_all->SetBinContent(8,2.279896);
   AlphaT_all->SetBinContent(9,1.324313);
   AlphaT_all->SetBinContent(16,47.0669);
   AlphaT_all->SetBinError(3,0.5955196);
   AlphaT_all->SetBinError(4,0.0514671);
   AlphaT_all->SetBinError(5,0.01175481);
   AlphaT_all->SetBinError(6,0.0251275);
   AlphaT_all->SetBinError(7,0.2156315);
   AlphaT_all->SetBinError(8,0.3757367);
   AlphaT_all->SetBinError(9,0.6417064);
   AlphaT_all->SetBinError(16,1.414214);
   AlphaT_all->SetMinimum(0);
   AlphaT_all->SetMaximum(2);
   AlphaT_all->SetEntries(1.094871);
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
   canvasbtag_morethanzero_475_575/AlphaT_all->cd();
   canvasbtag_morethanzero_475_575/AlphaT_all->Modified();
   canvasbtag_morethanzero_475_575/AlphaT_all->cd();
   canvasbtag_morethanzero_475_575/AlphaT_all->SetSelected(canvasbtag_morethanzero_475_575/AlphaT_all);
}
