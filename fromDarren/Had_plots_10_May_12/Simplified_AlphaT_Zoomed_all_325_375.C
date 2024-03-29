{
//=========Macro generated from canvas: canvas325_375/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:22:39 2012) by ROOT version5.32/00
   TCanvas *canvas325_375/AlphaT_Zoomed_all = new TCanvas("canvas325_375/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas325_375/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvas325_375/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvas325_375/AlphaT_Zoomed_all->SetFillColor(0);
   canvas325_375/AlphaT_Zoomed_all->SetBorderMode(0);
   canvas325_375/AlphaT_Zoomed_all->SetBorderSize(2);
   canvas325_375/AlphaT_Zoomed_all->SetTickx(1);
   canvas325_375/AlphaT_Zoomed_all->SetTicky(1);
   canvas325_375/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-1.293488,0.61875,8.63109);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis444[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis444);
   AlphaT_Zoomed_all->SetBinContent(0,3405);
   AlphaT_Zoomed_all->SetBinContent(1,1060);
   AlphaT_Zoomed_all->SetBinContent(2,1778);
   AlphaT_Zoomed_all->SetBinContent(3,2581);
   AlphaT_Zoomed_all->SetBinContent(4,3089);
   AlphaT_Zoomed_all->SetBinContent(5,3285);
   AlphaT_Zoomed_all->SetBinContent(6,2602);
   AlphaT_Zoomed_all->SetBinContent(7,1299);
   AlphaT_Zoomed_all->SetBinContent(8,504);
   AlphaT_Zoomed_all->SetBinContent(9,248);
   AlphaT_Zoomed_all->SetBinContent(10,169);
   AlphaT_Zoomed_all->SetBinContent(11,134);
   AlphaT_Zoomed_all->SetBinContent(12,109);
   AlphaT_Zoomed_all->SetBinContent(13,876);
   AlphaT_Zoomed_all->SetBinError(0,58.35238);
   AlphaT_Zoomed_all->SetBinError(1,32.55764);
   AlphaT_Zoomed_all->SetBinError(2,42.16634);
   AlphaT_Zoomed_all->SetBinError(3,50.80354);
   AlphaT_Zoomed_all->SetBinError(4,55.57877);
   AlphaT_Zoomed_all->SetBinError(5,57.31492);
   AlphaT_Zoomed_all->SetBinError(6,51.0098);
   AlphaT_Zoomed_all->SetBinError(7,36.04164);
   AlphaT_Zoomed_all->SetBinError(8,22.44994);
   AlphaT_Zoomed_all->SetBinError(9,15.74802);
   AlphaT_Zoomed_all->SetBinError(10,13);
   AlphaT_Zoomed_all->SetBinError(11,11.57584);
   AlphaT_Zoomed_all->SetBinError(12,10.44031);
   AlphaT_Zoomed_all->SetBinError(13,29.5973);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(4.351432e+07);
   AlphaT_Zoomed_all->SetEntries(21139);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("");
   Double_t xAxis445[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis445);
   AlphaT_Zoomed_all->SetBinContent(0,1465.763);
   AlphaT_Zoomed_all->SetBinContent(1,314.4525);
   AlphaT_Zoomed_all->SetBinContent(2,348.4567);
   AlphaT_Zoomed_all->SetBinContent(3,380.3952);
   AlphaT_Zoomed_all->SetBinContent(4,416.022);
   AlphaT_Zoomed_all->SetBinContent(5,316.9121);
   AlphaT_Zoomed_all->SetBinContent(6,209.301);
   AlphaT_Zoomed_all->SetBinContent(7,144.218);
   AlphaT_Zoomed_all->SetBinContent(8,103.8258);
   AlphaT_Zoomed_all->SetBinContent(9,79.36287);
   AlphaT_Zoomed_all->SetBinContent(10,58.58446);
   AlphaT_Zoomed_all->SetBinContent(11,46.98736);
   AlphaT_Zoomed_all->SetBinContent(12,39.64139);
   AlphaT_Zoomed_all->SetBinContent(13,405.7695);
   AlphaT_Zoomed_all->SetBinError(0,10.65186);
   AlphaT_Zoomed_all->SetBinError(1,4.946097);
   AlphaT_Zoomed_all->SetBinError(2,5.373426);
   AlphaT_Zoomed_all->SetBinError(3,5.726998);
   AlphaT_Zoomed_all->SetBinError(4,5.845912);
   AlphaT_Zoomed_all->SetBinError(5,5.386701);
   AlphaT_Zoomed_all->SetBinError(6,4.103517);
   AlphaT_Zoomed_all->SetBinError(7,3.352205);
   AlphaT_Zoomed_all->SetBinError(8,3.033205);
   AlphaT_Zoomed_all->SetBinError(9,2.485154);
   AlphaT_Zoomed_all->SetBinError(10,2.200403);
   AlphaT_Zoomed_all->SetBinError(11,1.874308);
   AlphaT_Zoomed_all->SetBinError(12,1.730182);
   AlphaT_Zoomed_all->SetBinError(13,5.623153);
   AlphaT_Zoomed_all->SetEntries(77750);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_30 = new TH1F("_stack_30","",12,0.45,0.6);
   _stack_30->SetMinimum(1747.547);
   _stack_30->SetMaximum(6990188);
   _stack_30->SetDirectory(0);
   _stack_30->SetStats(0);
   _stack_30->GetXaxis()->SetLabelFont(42);
   _stack_30->GetXaxis()->SetLabelOffset(0.007);
   _stack_30->GetXaxis()->SetLabelSize(0.05);
   _stack_30->GetXaxis()->SetTitleSize(0.05);
   _stack_30->GetYaxis()->SetLabelFont(42);
   _stack_30->GetYaxis()->SetLabelOffset(0.007);
   _stack_30->GetYaxis()->SetLabelSize(0.05);
   _stack_30->GetZaxis()->SetLabelFont(42);
   _stack_30->GetZaxis()->SetLabelOffset(0.007);
   _stack_30->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_30);
   
   Double_t xAxis446[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis446);
   AlphaT_Zoomed_all->SetBinContent(0,6793.046);
   AlphaT_Zoomed_all->SetBinContent(1,2028.654);
   AlphaT_Zoomed_all->SetBinContent(2,2452.48);
   AlphaT_Zoomed_all->SetBinContent(3,2954.237);
   AlphaT_Zoomed_all->SetBinContent(4,3351.082);
   AlphaT_Zoomed_all->SetBinContent(5,1784.546);
   AlphaT_Zoomed_all->SetBinContent(6,973.4569);
   AlphaT_Zoomed_all->SetBinContent(7,484.8574);
   AlphaT_Zoomed_all->SetBinContent(8,354.9798);
   AlphaT_Zoomed_all->SetBinContent(9,214.0919);
   AlphaT_Zoomed_all->SetBinContent(10,216.0602);
   AlphaT_Zoomed_all->SetBinContent(11,156.5195);
   AlphaT_Zoomed_all->SetBinContent(12,128.7722);
   AlphaT_Zoomed_all->SetBinContent(13,792.5906);
   AlphaT_Zoomed_all->SetBinError(0,127.9055);
   AlphaT_Zoomed_all->SetBinError(1,67.59075);
   AlphaT_Zoomed_all->SetBinError(2,71.01418);
   AlphaT_Zoomed_all->SetBinError(3,81.91484);
   AlphaT_Zoomed_all->SetBinError(4,84.0349);
   AlphaT_Zoomed_all->SetBinError(5,57.49198);
   AlphaT_Zoomed_all->SetBinError(6,46.91336);
   AlphaT_Zoomed_all->SetBinError(7,28.8121);
   AlphaT_Zoomed_all->SetBinError(8,26.15419);
   AlphaT_Zoomed_all->SetBinError(9,17.92884);
   AlphaT_Zoomed_all->SetBinError(10,39.33487);
   AlphaT_Zoomed_all->SetBinError(11,19.95572);
   AlphaT_Zoomed_all->SetBinError(12,20.48504);
   AlphaT_Zoomed_all->SetBinError(13,34.80153);
   AlphaT_Zoomed_all->SetEntries(153658);
   AlphaT_Zoomed_all->SetLineColor(3);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->SetMarkerColor(3);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis447[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis447);
   AlphaT_Zoomed_all->SetBinContent(0,4141793);
   AlphaT_Zoomed_all->SetBinContent(1,2248568);
   AlphaT_Zoomed_all->SetBinContent(2,2945314);
   AlphaT_Zoomed_all->SetBinContent(3,3745294);
   AlphaT_Zoomed_all->SetBinContent(4,4348081);
   AlphaT_Zoomed_all->SetBinContent(5,429695);
   AlphaT_Zoomed_all->SetBinContent(6,24278);
   AlphaT_Zoomed_all->SetBinContent(7,545.7093);
   AlphaT_Zoomed_all->SetBinContent(8,106.9083);
   AlphaT_Zoomed_all->SetBinContent(9,57.43201);
   AlphaT_Zoomed_all->SetBinContent(10,0.1350632);
   AlphaT_Zoomed_all->SetBinContent(11,2.243954);
   AlphaT_Zoomed_all->SetBinContent(13,2.243954);
   AlphaT_Zoomed_all->SetBinError(0,19938.44);
   AlphaT_Zoomed_all->SetBinError(1,17764.7);
   AlphaT_Zoomed_all->SetBinError(2,16551.58);
   AlphaT_Zoomed_all->SetBinError(3,18334.67);
   AlphaT_Zoomed_all->SetBinError(4,20786.46);
   AlphaT_Zoomed_all->SetBinError(5,8212.775);
   AlphaT_Zoomed_all->SetBinError(6,6497.536);
   AlphaT_Zoomed_all->SetBinError(7,184.1612);
   AlphaT_Zoomed_all->SetBinError(8,70.48376);
   AlphaT_Zoomed_all->SetBinError(9,57.43201);
   AlphaT_Zoomed_all->SetBinError(10,0.1350632);
   AlphaT_Zoomed_all->SetBinError(11,2.243954);
   AlphaT_Zoomed_all->SetBinError(13,2.243954);
   AlphaT_Zoomed_all->SetEntries(357301);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
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
   TLegendEntry *entry=leg->AddEntry("AlphaT_Zoomed_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("AlphaT_Zoomed_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","Combined EWK","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"325_375    Jet Multiplicity=all");
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
   Double_t xAxis448[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis448);
   AlphaT_Zoomed_all->SetBinContent(0,3405);
   AlphaT_Zoomed_all->SetBinContent(1,1060);
   AlphaT_Zoomed_all->SetBinContent(2,1778);
   AlphaT_Zoomed_all->SetBinContent(3,2581);
   AlphaT_Zoomed_all->SetBinContent(4,3089);
   AlphaT_Zoomed_all->SetBinContent(5,3285);
   AlphaT_Zoomed_all->SetBinContent(6,2602);
   AlphaT_Zoomed_all->SetBinContent(7,1299);
   AlphaT_Zoomed_all->SetBinContent(8,504);
   AlphaT_Zoomed_all->SetBinContent(9,248);
   AlphaT_Zoomed_all->SetBinContent(10,169);
   AlphaT_Zoomed_all->SetBinContent(11,134);
   AlphaT_Zoomed_all->SetBinContent(12,109);
   AlphaT_Zoomed_all->SetBinContent(13,876);
   AlphaT_Zoomed_all->SetBinError(0,58.35238);
   AlphaT_Zoomed_all->SetBinError(1,32.55764);
   AlphaT_Zoomed_all->SetBinError(2,42.16634);
   AlphaT_Zoomed_all->SetBinError(3,50.80354);
   AlphaT_Zoomed_all->SetBinError(4,55.57877);
   AlphaT_Zoomed_all->SetBinError(5,57.31492);
   AlphaT_Zoomed_all->SetBinError(6,51.0098);
   AlphaT_Zoomed_all->SetBinError(7,36.04164);
   AlphaT_Zoomed_all->SetBinError(8,22.44994);
   AlphaT_Zoomed_all->SetBinError(9,15.74802);
   AlphaT_Zoomed_all->SetBinError(10,13);
   AlphaT_Zoomed_all->SetBinError(11,11.57584);
   AlphaT_Zoomed_all->SetBinError(12,10.44031);
   AlphaT_Zoomed_all->SetBinError(13,29.5973);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(4.351432e+07);
   AlphaT_Zoomed_all->SetEntries(21139);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvas325_375/AlphaT_Zoomed_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(0.43125,-0.25,0.61875,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis449[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis449);
   AlphaT_Zoomed_all->SetBinContent(0,0.5012479);
   AlphaT_Zoomed_all->SetBinContent(1,0.522514);
   AlphaT_Zoomed_all->SetBinContent(2,0.7249806);
   AlphaT_Zoomed_all->SetBinContent(3,0.8736606);
   AlphaT_Zoomed_all->SetBinContent(4,0.9217918);
   AlphaT_Zoomed_all->SetBinContent(5,1.840804);
   AlphaT_Zoomed_all->SetBinContent(6,2.672948);
   AlphaT_Zoomed_all->SetBinContent(7,2.679138);
   AlphaT_Zoomed_all->SetBinContent(8,1.419799);
   AlphaT_Zoomed_all->SetBinContent(9,1.158381);
   AlphaT_Zoomed_all->SetBinContent(10,0.7821894);
   AlphaT_Zoomed_all->SetBinContent(11,0.8561232);
   AlphaT_Zoomed_all->SetBinContent(12,0.8464558);
   AlphaT_Zoomed_all->SetBinContent(13,1.105236);
   AlphaT_Zoomed_all->SetBinError(0,0.01276178);
   AlphaT_Zoomed_all->SetBinError(1,0.04531542);
   AlphaT_Zoomed_all->SetBinError(2,0.03742839);
   AlphaT_Zoomed_all->SetBinError(3,0.03400418);
   AlphaT_Zoomed_all->SetBinError(4,0.03086394);
   AlphaT_Zoomed_all->SetBinError(5,0.03663772);
   AlphaT_Zoomed_all->SetBinError(6,0.05202731);
   AlphaT_Zoomed_all->SetBinError(7,0.06558214);
   AlphaT_Zoomed_all->SetBinError(8,0.08609627);
   AlphaT_Zoomed_all->SetBinError(9,0.1050964);
   AlphaT_Zoomed_all->SetBinError(10,0.1976391);
   AlphaT_Zoomed_all->SetBinError(11,0.1540068);
   AlphaT_Zoomed_all->SetBinError(12,0.1856896);
   AlphaT_Zoomed_all->SetBinError(13,0.06123366);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(1524.777);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetLabelSize(0.12);
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Data/MC");
   AlphaT_Zoomed_all->GetYaxis()->SetNdivisions(505);
   AlphaT_Zoomed_all->GetYaxis()->SetLabelSize(0.11);
   AlphaT_Zoomed_all->GetYaxis()->SetTitleSize(0.1);
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(0.5);
   AlphaT_Zoomed_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.45625,1);
   gre->SetPointError(0,0.00625,0.03331803);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.02895608);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.02772792);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.02507695);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.03221659);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.04819254);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.05942386);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.07367796);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.08374367);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.1820551);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.1274967);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.1590796);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all75 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all75","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all75->SetMinimum(0.7815338);
   Graph_Graph_from_AlphaT_Zoomed_all75->SetMaximum(1.218466);
   Graph_Graph_from_AlphaT_Zoomed_all75->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all75->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all75->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all75);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis450[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis450);
   AlphaT_Zoomed_all->SetBinContent(0,0.5012479);
   AlphaT_Zoomed_all->SetBinContent(1,0.522514);
   AlphaT_Zoomed_all->SetBinContent(2,0.7249806);
   AlphaT_Zoomed_all->SetBinContent(3,0.8736606);
   AlphaT_Zoomed_all->SetBinContent(4,0.9217918);
   AlphaT_Zoomed_all->SetBinContent(5,1.840804);
   AlphaT_Zoomed_all->SetBinContent(6,2.672948);
   AlphaT_Zoomed_all->SetBinContent(7,2.679138);
   AlphaT_Zoomed_all->SetBinContent(8,1.419799);
   AlphaT_Zoomed_all->SetBinContent(9,1.158381);
   AlphaT_Zoomed_all->SetBinContent(10,0.7821894);
   AlphaT_Zoomed_all->SetBinContent(11,0.8561232);
   AlphaT_Zoomed_all->SetBinContent(12,0.8464558);
   AlphaT_Zoomed_all->SetBinContent(13,1.105236);
   AlphaT_Zoomed_all->SetBinError(0,0.01276178);
   AlphaT_Zoomed_all->SetBinError(1,0.04531542);
   AlphaT_Zoomed_all->SetBinError(2,0.03742839);
   AlphaT_Zoomed_all->SetBinError(3,0.03400418);
   AlphaT_Zoomed_all->SetBinError(4,0.03086394);
   AlphaT_Zoomed_all->SetBinError(5,0.03663772);
   AlphaT_Zoomed_all->SetBinError(6,0.05202731);
   AlphaT_Zoomed_all->SetBinError(7,0.06558214);
   AlphaT_Zoomed_all->SetBinError(8,0.08609627);
   AlphaT_Zoomed_all->SetBinError(9,0.1050964);
   AlphaT_Zoomed_all->SetBinError(10,0.1976391);
   AlphaT_Zoomed_all->SetBinError(11,0.1540068);
   AlphaT_Zoomed_all->SetBinError(12,0.1856896);
   AlphaT_Zoomed_all->SetBinError(13,0.06123366);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(1524.777);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetLabelSize(0.12);
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Data/MC");
   AlphaT_Zoomed_all->GetYaxis()->SetNdivisions(505);
   AlphaT_Zoomed_all->GetYaxis()->SetLabelSize(0.11);
   AlphaT_Zoomed_all->GetYaxis()->SetTitleSize(0.1);
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(0.5);
   AlphaT_Zoomed_all->Draw("PSAME");
   d->Modified();
   canvas325_375/AlphaT_Zoomed_all->cd();
   canvas325_375/AlphaT_Zoomed_all->Modified();
   canvas325_375/AlphaT_Zoomed_all->cd();
   canvas325_375/AlphaT_Zoomed_all->SetSelected(canvas325_375/AlphaT_Zoomed_all);
}
