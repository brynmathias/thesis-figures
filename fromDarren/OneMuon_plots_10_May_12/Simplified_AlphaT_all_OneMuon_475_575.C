{
//=========Macro generated from canvas: canvasOneMuon_475_575/AlphaT_all/cannameAlphaT_all
//=========  (Thu May 10 12:06:32 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_475_575/AlphaT_all = new TCanvas("canvasOneMuon_475_575/AlphaT_all", "cannameAlphaT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_475_575/AlphaT_all->SetHighLightColor(2);
   canvasOneMuon_475_575/AlphaT_all->Range(0,0,1,1);
   canvasOneMuon_475_575/AlphaT_all->SetFillColor(0);
   canvasOneMuon_475_575/AlphaT_all->SetBorderMode(0);
   canvasOneMuon_475_575/AlphaT_all->SetBorderSize(2);
   canvasOneMuon_475_575/AlphaT_all->SetTickx(1);
   canvasOneMuon_475_575/AlphaT_all->SetTicky(1);
   canvasOneMuon_475_575/AlphaT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-0.8477305,3.4875,4.619274);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis684[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis684);
   AlphaT_all->SetBinContent(3,5);
   AlphaT_all->SetBinContent(4,30);
   AlphaT_all->SetBinContent(5,332);
   AlphaT_all->SetBinContent(6,396);
   AlphaT_all->SetBinContent(7,37);
   AlphaT_all->SetBinContent(8,20);
   AlphaT_all->SetBinContent(9,10);
   AlphaT_all->SetBinContent(10,4);
   AlphaT_all->SetBinContent(11,6);
   AlphaT_all->SetBinContent(12,2);
   AlphaT_all->SetBinContent(13,6);
   AlphaT_all->SetBinContent(14,4);
   AlphaT_all->SetBinContent(15,2);
   AlphaT_all->SetBinContent(16,2);
   AlphaT_all->SetBinContent(17,2);
   AlphaT_all->SetBinContent(18,2);
   AlphaT_all->SetBinContent(23,1);
   AlphaT_all->SetBinContent(31,2);
   AlphaT_all->SetBinContent(39,1);
   AlphaT_all->SetBinContent(40,1);
   AlphaT_all->SetBinError(3,2.49);
   AlphaT_all->SetBinError(4,5.477226);
   AlphaT_all->SetBinError(5,18.22087);
   AlphaT_all->SetBinError(6,19.89975);
   AlphaT_all->SetBinError(7,6.082763);
   AlphaT_all->SetBinError(8,4.472136);
   AlphaT_all->SetBinError(9,3.162278);
   AlphaT_all->SetBinError(10,2.3);
   AlphaT_all->SetBinError(11,2.68);
   AlphaT_all->SetBinError(12,2);
   AlphaT_all->SetBinError(13,2.68);
   AlphaT_all->SetBinError(14,2.3);
   AlphaT_all->SetBinError(15,2);
   AlphaT_all->SetBinError(16,2);
   AlphaT_all->SetBinError(17,2);
   AlphaT_all->SetBinError(18,2);
   AlphaT_all->SetBinError(23,1);
   AlphaT_all->SetBinError(31,2);
   AlphaT_all->SetBinError(39,1);
   AlphaT_all->SetBinError(40,1);
   AlphaT_all->SetMinimum(0.5);
   AlphaT_all->SetMaximum(11818.81);
   AlphaT_all->SetEntries(864);
   AlphaT_all->SetLineWidth(2);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->SetMarkerSize(1.5);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events / 0.1");
   AlphaT_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_all->Draw("");
   Double_t xAxis685[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis685);
   AlphaT_all->SetEntries(1);
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
   
   TH1F *_stack_46 = new TH1F("_stack_46","",100,0,10);
   _stack_46->SetMinimum(0.4764792);
   _stack_46->SetMaximum(1905.917);
   _stack_46->SetDirectory(0);
   _stack_46->SetStats(0);
   _stack_46->GetXaxis()->SetLabelFont(42);
   _stack_46->GetXaxis()->SetLabelOffset(0.007);
   _stack_46->GetXaxis()->SetLabelSize(0.05);
   _stack_46->GetXaxis()->SetTitleSize(0.05);
   _stack_46->GetYaxis()->SetLabelFont(42);
   _stack_46->GetYaxis()->SetLabelOffset(0.007);
   _stack_46->GetYaxis()->SetLabelSize(0.05);
   _stack_46->GetZaxis()->SetLabelFont(42);
   _stack_46->GetZaxis()->SetLabelOffset(0.007);
   _stack_46->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_46);
   
   Double_t xAxis686[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis686);
   AlphaT_all->SetBinContent(3,25.0817);
   AlphaT_all->SetBinContent(4,193.2213);
   AlphaT_all->SetBinContent(5,1178.304);
   AlphaT_all->SetBinContent(6,495.92);
   AlphaT_all->SetBinContent(7,51.84759);
   AlphaT_all->SetBinContent(8,18.78183);
   AlphaT_all->SetBinContent(9,7.056897);
   AlphaT_all->SetBinContent(10,4.752565);
   AlphaT_all->SetBinContent(11,3.176303);
   AlphaT_all->SetBinContent(12,3.039482);
   AlphaT_all->SetBinContent(13,2.530309);
   AlphaT_all->SetBinContent(14,1.4218);
   AlphaT_all->SetBinContent(15,1.671573);
   AlphaT_all->SetBinContent(16,1.554111);
   AlphaT_all->SetBinContent(17,0.9085196);
   AlphaT_all->SetBinContent(18,1.072925);
   AlphaT_all->SetBinContent(19,0.6449989);
   AlphaT_all->SetBinContent(20,0.5567414);
   AlphaT_all->SetBinContent(21,0.318383);
   AlphaT_all->SetBinContent(22,0.2935591);
   AlphaT_all->SetBinContent(23,0.3610851);
   AlphaT_all->SetBinContent(24,0.7260694);
   AlphaT_all->SetBinContent(25,0.1086192);
   AlphaT_all->SetBinContent(26,0.09976076);
   AlphaT_all->SetBinContent(27,0.2449346);
   AlphaT_all->SetBinContent(28,0.2793512);
   AlphaT_all->SetBinContent(29,0.1090232);
   AlphaT_all->SetBinContent(30,0.7231472);
   AlphaT_all->SetBinContent(31,2.557872);
   AlphaT_all->SetBinContent(32,0.3980721);
   AlphaT_all->SetBinContent(34,0.1078872);
   AlphaT_all->SetBinContent(35,0.1720082);
   AlphaT_all->SetBinContent(36,0.05281258);
   AlphaT_all->SetBinContent(37,0.3451319);
   AlphaT_all->SetBinContent(38,0.05827636);
   AlphaT_all->SetBinContent(39,0.003397991);
   AlphaT_all->SetBinContent(40,0.142399);
   AlphaT_all->SetBinContent(41,0.09496919);
   AlphaT_all->SetBinContent(42,0.01808518);
   AlphaT_all->SetBinContent(43,0.05985256);
   AlphaT_all->SetBinContent(44,0.03351695);
   AlphaT_all->SetBinContent(46,0.05870356);
   AlphaT_all->SetBinContent(48,0.03351695);
   AlphaT_all->SetBinContent(49,0.05645457);
   AlphaT_all->SetBinContent(54,0.06097319);
   AlphaT_all->SetBinContent(55,0.003397991);
   AlphaT_all->SetBinContent(62,0.003397991);
   AlphaT_all->SetBinContent(69,0.01808518);
   AlphaT_all->SetBinError(3,1.455824);
   AlphaT_all->SetBinError(4,4.690433);
   AlphaT_all->SetBinError(5,12.89361);
   AlphaT_all->SetBinError(6,8.784214);
   AlphaT_all->SetBinError(7,2.536687);
   AlphaT_all->SetBinError(8,1.547213);
   AlphaT_all->SetBinError(9,0.6761847);
   AlphaT_all->SetBinError(10,0.5888219);
   AlphaT_all->SetBinError(11,0.6911742);
   AlphaT_all->SetBinError(12,0.6163864);
   AlphaT_all->SetBinError(13,0.5613739);
   AlphaT_all->SetBinError(14,0.3796765);
   AlphaT_all->SetBinError(15,0.4282691);
   AlphaT_all->SetBinError(16,0.3919281);
   AlphaT_all->SetBinError(17,0.2265223);
   AlphaT_all->SetBinError(18,0.3346872);
   AlphaT_all->SetBinError(19,0.2498984);
   AlphaT_all->SetBinError(20,0.1791618);
   AlphaT_all->SetBinError(21,0.1752278);
   AlphaT_all->SetBinError(22,0.1313614);
   AlphaT_all->SetBinError(23,0.1560636);
   AlphaT_all->SetBinError(24,0.3348679);
   AlphaT_all->SetBinError(25,0.06955868);
   AlphaT_all->SetBinError(26,0.06830752);
   AlphaT_all->SetBinError(27,0.1017446);
   AlphaT_all->SetBinError(28,0.1264695);
   AlphaT_all->SetBinError(29,0.07476553);
   AlphaT_all->SetBinError(30,0.5431105);
   AlphaT_all->SetBinError(31,1.544828);
   AlphaT_all->SetBinError(32,0.1646411);
   AlphaT_all->SetBinError(34,0.074525);
   AlphaT_all->SetBinError(35,0.09146359);
   AlphaT_all->SetBinError(36,0.05281258);
   AlphaT_all->SetBinError(37,0.1537042);
   AlphaT_all->SetBinError(38,0.05498347);
   AlphaT_all->SetBinError(39,0.003397991);
   AlphaT_all->SetBinError(40,0.08812398);
   AlphaT_all->SetBinError(41,0.06483972);
   AlphaT_all->SetBinError(42,0.01808518);
   AlphaT_all->SetBinError(43,0.05655674);
   AlphaT_all->SetBinError(44,0.03351695);
   AlphaT_all->SetBinError(46,0.05870356);
   AlphaT_all->SetBinError(48,0.03351695);
   AlphaT_all->SetBinError(49,0.05645457);
   AlphaT_all->SetBinError(54,0.06097319);
   AlphaT_all->SetBinError(55,0.003397991);
   AlphaT_all->SetBinError(62,0.003397991);
   AlphaT_all->SetBinError(69,0.01808518);
   AlphaT_all->SetEntries(32874);
   AlphaT_all->SetLineColor(3);
   AlphaT_all->SetLineWidth(3);
   AlphaT_all->SetMarkerColor(3);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events/0.025");
   ->Add(AlphaT_all,"");
   Double_t xAxis687[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis687);
   AlphaT_all->SetBinContent(5,3.576184);
   AlphaT_all->SetBinError(5,2.609629);
   AlphaT_all->SetEntries(3);
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
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_475_575    Jet Multiplicity=all");
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
   Double_t xAxis688[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis688);
   AlphaT_all->SetBinContent(3,5);
   AlphaT_all->SetBinContent(4,30);
   AlphaT_all->SetBinContent(5,332);
   AlphaT_all->SetBinContent(6,396);
   AlphaT_all->SetBinContent(7,37);
   AlphaT_all->SetBinContent(8,20);
   AlphaT_all->SetBinContent(9,10);
   AlphaT_all->SetBinContent(10,4);
   AlphaT_all->SetBinContent(11,6);
   AlphaT_all->SetBinContent(12,2);
   AlphaT_all->SetBinContent(13,6);
   AlphaT_all->SetBinContent(14,4);
   AlphaT_all->SetBinContent(15,2);
   AlphaT_all->SetBinContent(16,2);
   AlphaT_all->SetBinContent(17,2);
   AlphaT_all->SetBinContent(18,2);
   AlphaT_all->SetBinContent(23,1);
   AlphaT_all->SetBinContent(31,2);
   AlphaT_all->SetBinContent(39,1);
   AlphaT_all->SetBinContent(40,1);
   AlphaT_all->SetBinError(3,2.49);
   AlphaT_all->SetBinError(4,5.477226);
   AlphaT_all->SetBinError(5,18.22087);
   AlphaT_all->SetBinError(6,19.89975);
   AlphaT_all->SetBinError(7,6.082763);
   AlphaT_all->SetBinError(8,4.472136);
   AlphaT_all->SetBinError(9,3.162278);
   AlphaT_all->SetBinError(10,2.3);
   AlphaT_all->SetBinError(11,2.68);
   AlphaT_all->SetBinError(12,2);
   AlphaT_all->SetBinError(13,2.68);
   AlphaT_all->SetBinError(14,2.3);
   AlphaT_all->SetBinError(15,2);
   AlphaT_all->SetBinError(16,2);
   AlphaT_all->SetBinError(17,2);
   AlphaT_all->SetBinError(18,2);
   AlphaT_all->SetBinError(23,1);
   AlphaT_all->SetBinError(31,2);
   AlphaT_all->SetBinError(39,1);
   AlphaT_all->SetBinError(40,1);
   AlphaT_all->SetMinimum(0.5);
   AlphaT_all->SetMaximum(11818.81);
   AlphaT_all->SetEntries(864);
   AlphaT_all->SetLineWidth(2);
   AlphaT_all->SetMarkerStyle(20);
   AlphaT_all->SetMarkerSize(1.5);
   AlphaT_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_all->GetXaxis()->SetRange(1,31);
   AlphaT_all->GetYaxis()->SetTitle("Events / 0.1");
   AlphaT_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_all->Draw("PSAME");
   u->Modified();
   canvasOneMuon_475_575/AlphaT_all->cd();
  
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
   Double_t xAxis689[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis689);
   AlphaT_all->SetBinContent(3,0.1993485);
   AlphaT_all->SetBinContent(4,0.1552624);
   AlphaT_all->SetBinContent(5,0.2817608);
   AlphaT_all->SetBinContent(6,0.7985158);
   AlphaT_all->SetBinContent(7,0.71363);
   AlphaT_all->SetBinContent(8,1.064859);
   AlphaT_all->SetBinContent(9,1.417053);
   AlphaT_all->SetBinContent(10,0.8416508);
   AlphaT_all->SetBinContent(11,1.888988);
   AlphaT_all->SetBinContent(12,0.6580068);
   AlphaT_all->SetBinContent(13,2.371252);
   AlphaT_all->SetBinContent(14,2.813336);
   AlphaT_all->SetBinContent(15,1.196478);
   AlphaT_all->SetBinContent(16,1.286909);
   AlphaT_all->SetBinContent(17,2.201383);
   AlphaT_all->SetBinContent(18,1.864062);
   AlphaT_all->SetBinContent(23,2.769431);
   AlphaT_all->SetBinContent(31,0.7819001);
   AlphaT_all->SetBinContent(39,294.2915);
   AlphaT_all->SetBinContent(40,7.022523);
   AlphaT_all->SetBinError(3,0.5013711);
   AlphaT_all->SetBinError(4,0.1841809);
   AlphaT_all->SetBinError(5,0.05596237);
   AlphaT_all->SetBinError(6,0.05328228);
   AlphaT_all->SetBinError(7,0.1715248);
   AlphaT_all->SetBinError(8,0.2382985);
   AlphaT_all->SetBinError(9,0.3304259);
   AlphaT_all->SetBinError(10,0.5881965);
   AlphaT_all->SetBinError(11,0.4968524);
   AlphaT_all->SetBinError(12,1.020355);
   AlphaT_all->SetBinError(13,0.4987313);
   AlphaT_all->SetBinError(14,0.6339834);
   AlphaT_all->SetBinError(15,1.032299);
   AlphaT_all->SetBinError(16,1.031309);
   AlphaT_all->SetBinError(17,1.030614);
   AlphaT_all->SetBinError(18,1.047524);
   AlphaT_all->SetBinError(23,1.089405);
   AlphaT_all->SetBinError(31,1.168228);
   AlphaT_all->SetBinError(39,1.414214);
   AlphaT_all->SetBinError(40,1.176001);
   AlphaT_all->SetMinimum(0);
   AlphaT_all->SetMaximum(2);
   AlphaT_all->SetEntries(18.95388);
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
   gre->SetPointError(2,0.05,0.05804328);
   gre->SetPoint(3,0.35,1);
   gre->SetPointError(3,0.05,0.02427493);
   gre->SetPoint(4,0.45,1);
   gre->SetPointError(4,0.05,0.01094251);
   gre->SetPoint(5,0.55,1);
   gre->SetPointError(5,0.05,0.01771296);
   gre->SetPoint(6,0.65,1);
   gre->SetPointError(6,0.05,0.04892584);
   gre->SetPoint(7,0.75,1);
   gre->SetPointError(7,0.05,0.08237816);
   gre->SetPoint(8,0.85,1);
   gre->SetPointError(8,0.05,0.09581897);
   gre->SetPoint(9,0.95,1);
   gre->SetPointError(9,0.05,0.1238956);
   gre->SetPoint(10,1.05,1);
   gre->SetPointError(10,0.05,0.2176033);
   gre->SetPoint(11,1.15,1);
   gre->SetPointError(11,0.05,0.2027932);
   gre->SetPoint(12,1.25,1);
   gre->SetPointError(12,0.05,0.2218598);
   gre->SetPoint(13,1.35,1);
   gre->SetPointError(13,0.05,0.2670393);
   gre->SetPoint(14,1.45,1);
   gre->SetPointError(14,0.05,0.2562072);
   gre->SetPoint(15,1.55,1);
   gre->SetPointError(15,0.05,0.2521879);
   gre->SetPoint(16,1.65,1);
   gre->SetPointError(16,0.05,0.2493312);
   gre->SetPoint(17,1.75,1);
   gre->SetPointError(17,0.05,0.3119389);
   gre->SetPoint(18,1.85,1);
   gre->SetPointError(18,0.05,0.38744);
   gre->SetPoint(19,1.95,1);
   gre->SetPointError(19,0.05,0.3218044);
   gre->SetPoint(20,2.05,1);
   gre->SetPointError(20,0.05,0.5503681);
   gre->SetPoint(21,2.15,1);
   gre->SetPointError(21,0.05,0.4474784);
   gre->SetPoint(22,2.25,1);
   gre->SetPointError(22,0.05,0.4322074);
   gre->SetPoint(23,2.35,1);
   gre->SetPointError(23,0.05,0.4612064);
   gre->SetPoint(24,2.45,1);
   gre->SetPointError(24,0.05,0.6403905);
   gre->SetPoint(25,2.55,1);
   gre->SetPointError(25,0.05,0.6847133);
   gre->SetPoint(26,2.65,1);
   gre->SetPointError(26,0.05,0.415395);
   gre->SetPoint(27,2.75,1);
   gre->SetPointError(27,0.05,0.4527258);
   gre->SetPoint(28,2.85,1);
   gre->SetPointError(28,0.05,0.6857766);
   gre->SetPoint(29,2.95,1);
   gre->SetPointError(29,0.05,0.7510374);
   gre->SetPoint(30,3.05,1);
   gre->SetPointError(30,0.05,0.6039507);
   gre->SetPoint(31,3.15,1);
   gre->SetPointError(31,0.05,0.4135961);
   gre->SetPoint(32,3.25,1);
   gre->SetPointError(32,0.05,0);
   gre->SetPoint(33,3.35,1);
   gre->SetPointError(33,0.05,0.6907681);
   gre->SetPoint(34,3.45,1);
   gre->SetPointError(34,0.05,0.5317397);
   gre->SetPoint(35,3.55,1);
   gre->SetPointError(35,0.05,1);
   gre->SetPoint(36,3.65,1);
   gre->SetPointError(36,0.05,0.4453491);
   gre->SetPoint(37,3.75,1);
   gre->SetPointError(37,0.05,0.9434952);
   gre->SetPoint(38,3.85,1);
   gre->SetPointError(38,0.05,1);
   gre->SetPoint(39,3.95,1);
   gre->SetPointError(39,0.05,0.6188527);
   gre->SetPoint(40,4.05,1);
   gre->SetPointError(40,0.05,0.6827447);
   gre->SetPoint(41,4.15,1);
   gre->SetPointError(41,0.05,1);
   gre->SetPoint(42,4.25,1);
   gre->SetPointError(42,0.05,0.9449343);
   gre->SetPoint(43,4.35,1);
   gre->SetPointError(43,0.05,1);
   gre->SetPoint(44,4.45,1);
   gre->SetPointError(44,0.05,0);
   gre->SetPoint(45,4.55,1);
   gre->SetPointError(45,0.05,1);
   gre->SetPoint(46,4.65,1);
   gre->SetPointError(46,0.05,0);
   gre->SetPoint(47,4.75,1);
   gre->SetPointError(47,0.05,1);
   gre->SetPoint(48,4.85,1);
   gre->SetPointError(48,0.05,1);
   gre->SetPoint(49,4.95,1);
   gre->SetPointError(49,0.05,0);
   gre->SetPoint(50,5.05,1);
   gre->SetPointError(50,0.05,0);
   gre->SetPoint(51,5.15,1);
   gre->SetPointError(51,0.05,0);
   gre->SetPoint(52,5.25,1);
   gre->SetPointError(52,0.05,0);
   gre->SetPoint(53,5.35,1);
   gre->SetPointError(53,0.05,1);
   gre->SetPoint(54,5.45,1);
   gre->SetPointError(54,0.05,1);
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
   gre->SetPointError(61,0.05,1);
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
   gre->SetPointError(68,0.05,1);
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
   
   TH1F *Graph_Graph_from_AlphaT_all115 = new TH1F("Graph_Graph_from_AlphaT_all115","",100,0,11);
   Graph_Graph_from_AlphaT_all115->SetMinimum(-0.2);
   Graph_Graph_from_AlphaT_all115->SetMaximum(2.2);
   Graph_Graph_from_AlphaT_all115->SetDirectory(0);
   Graph_Graph_from_AlphaT_all115->SetStats(0);
   Graph_Graph_from_AlphaT_all115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all115->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all115->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_all115->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_all115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all115->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all115->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_all115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_all115->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_all115->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_all115);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.1,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis690[101] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1, 8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7, 9.8, 9.9, 10}; 
   
   TH1D *AlphaT_all = new TH1D("AlphaT_all","",100, xAxis690);
   AlphaT_all->SetBinContent(3,0.1993485);
   AlphaT_all->SetBinContent(4,0.1552624);
   AlphaT_all->SetBinContent(5,0.2817608);
   AlphaT_all->SetBinContent(6,0.7985158);
   AlphaT_all->SetBinContent(7,0.71363);
   AlphaT_all->SetBinContent(8,1.064859);
   AlphaT_all->SetBinContent(9,1.417053);
   AlphaT_all->SetBinContent(10,0.8416508);
   AlphaT_all->SetBinContent(11,1.888988);
   AlphaT_all->SetBinContent(12,0.6580068);
   AlphaT_all->SetBinContent(13,2.371252);
   AlphaT_all->SetBinContent(14,2.813336);
   AlphaT_all->SetBinContent(15,1.196478);
   AlphaT_all->SetBinContent(16,1.286909);
   AlphaT_all->SetBinContent(17,2.201383);
   AlphaT_all->SetBinContent(18,1.864062);
   AlphaT_all->SetBinContent(23,2.769431);
   AlphaT_all->SetBinContent(31,0.7819001);
   AlphaT_all->SetBinContent(39,294.2915);
   AlphaT_all->SetBinContent(40,7.022523);
   AlphaT_all->SetBinError(3,0.5013711);
   AlphaT_all->SetBinError(4,0.1841809);
   AlphaT_all->SetBinError(5,0.05596237);
   AlphaT_all->SetBinError(6,0.05328228);
   AlphaT_all->SetBinError(7,0.1715248);
   AlphaT_all->SetBinError(8,0.2382985);
   AlphaT_all->SetBinError(9,0.3304259);
   AlphaT_all->SetBinError(10,0.5881965);
   AlphaT_all->SetBinError(11,0.4968524);
   AlphaT_all->SetBinError(12,1.020355);
   AlphaT_all->SetBinError(13,0.4987313);
   AlphaT_all->SetBinError(14,0.6339834);
   AlphaT_all->SetBinError(15,1.032299);
   AlphaT_all->SetBinError(16,1.031309);
   AlphaT_all->SetBinError(17,1.030614);
   AlphaT_all->SetBinError(18,1.047524);
   AlphaT_all->SetBinError(23,1.089405);
   AlphaT_all->SetBinError(31,1.168228);
   AlphaT_all->SetBinError(39,1.414214);
   AlphaT_all->SetBinError(40,1.176001);
   AlphaT_all->SetMinimum(0);
   AlphaT_all->SetMaximum(2);
   AlphaT_all->SetEntries(18.95388);
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
   canvasOneMuon_475_575/AlphaT_all->cd();
   canvasOneMuon_475_575/AlphaT_all->Modified();
   canvasOneMuon_475_575/AlphaT_all->cd();
   canvasOneMuon_475_575/AlphaT_all->SetSelected(canvasOneMuon_475_575/AlphaT_all);
}
