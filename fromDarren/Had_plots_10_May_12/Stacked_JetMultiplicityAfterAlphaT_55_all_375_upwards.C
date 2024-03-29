{
//=========Macro generated from canvas: canvas375_475/JetMultiplicityAfterAlphaT_55_all/cannameJetMultiplicityAfterAlphaT_55_all
//=========  (Thu May 10 12:23:14 2012) by ROOT version5.32/00
   TCanvas *canvas375_475/JetMultiplicityAfterAlphaT_55_all = new TCanvas("canvas375_475/JetMultiplicityAfterAlphaT_55_all", "cannameJetMultiplicityAfterAlphaT_55_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->SetHighLightColor(2);
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->Range(0,0,1,1);
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->SetFillColor(0);
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->SetBorderMode(0);
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->SetBorderSize(2);
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->SetTickx(1);
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->SetTicky(1);
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-1.875,-0.8167534,16.875,4.34048);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1363[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1363);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,401);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,645);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,436);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,80);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,10);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,3);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,20.02498);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,25.39685);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,20.88061);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,8.944272);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,3.162278);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,2.14);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(6679.696);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(1575);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_91 = new TH1F("_stack_91","",15,0,15);
   _stack_91->SetMinimum(0.2671878);
   _stack_91->SetMaximum(1068.751);
   _stack_91->SetDirectory(0);
   _stack_91->SetStats(0);
   _stack_91->GetXaxis()->SetLabelFont(42);
   _stack_91->GetXaxis()->SetLabelOffset(0.007);
   _stack_91->GetXaxis()->SetLabelSize(0.05);
   _stack_91->GetXaxis()->SetTitleSize(0.05);
   _stack_91->GetYaxis()->SetLabelFont(42);
   _stack_91->GetYaxis()->SetLabelOffset(0.007);
   _stack_91->GetYaxis()->SetLabelSize(0.05);
   _stack_91->GetZaxis()->SetLabelFont(42);
   _stack_91->GetZaxis()->SetLabelOffset(0.007);
   _stack_91->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_91);
   
   Double_t xAxis1364[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1364);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,1.241626);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,3.301383);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,1.222238);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.4684294);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.7938781);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,1.142777);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.7247954);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.4684294);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(17);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(6);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1365[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1365);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,2.289148);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,6.6444);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,3.848491);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.4904506);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.08429235);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.2001274);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.3686958);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.2987287);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.1085841);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.03156185);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(1263);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(44);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1366[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1366);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,1.043134);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,7.930279);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,7.712635);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,2.384711);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.8571836);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,0.0162774);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.2264163);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.665796);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.6527375);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.3792095);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.227744);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,0.0162774);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(469);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(40);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1367[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1367);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,4.180267);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,60.91044);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.2829718);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.08714326);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,2.69683);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,57.5099);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.1676258);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.08714326);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(21);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(7);
   JetMultiplicityAfterAlphaT_55_all->SetLineStyle(10);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1368[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1368);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,8.686435);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,73.78661);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,142.8094);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,50.14721);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,9.202759);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,0.6807012);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,1.425698);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4.440218);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,7.048502);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,3.914885);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,1.509073);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,0.3992034);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(1383);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(2);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1369[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1369);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,163.4308);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,258.7336);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,125.5992);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,22.5224);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,2.549594);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,0.1016202);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,3.281167);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,4.033905);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,3.025519);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,1.55997);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.5351476);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,0.07590411);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(12226);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(4);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
   Double_t xAxis1370[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1370);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,278.302);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,313.393);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,120.5708);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,19.00596);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,1.578555);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,0.1911358);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(9,0.1600144);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(10,0.06204388);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,4.685917);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,5.37253);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,3.257271);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,1.52173);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.3659524);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,0.1402923);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(9,0.1131473);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(10,0.06204388);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(13084);
   JetMultiplicityAfterAlphaT_55_all->SetFillColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineColor(5);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(3);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   ->Add(JetMultiplicityAfterAlphaT_55_all,"");
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
   TLegendEntry *entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("JetMultiplicityAfterAlphaT_55_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis1371[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1371);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,401);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,645);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,436);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,80);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,10);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,3);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,20.02498);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,25.39685);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,20.88061);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,8.944272);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,3.162278);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,2.14);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0.5);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(6679.696);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(1575);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetTitle("n");
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
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
   u->Modified();
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-1.875,-0.25,16.875,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis1372[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1372);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.881332);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.9656129);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.94235);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.8394356);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.6964018);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,3.031116);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.05162501);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.04142778);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.1344364);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.1214691);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.3367134);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,0.8353293);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(8.330387);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicityAfterAlphaT_55_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("Graph_from_JetMultiplicityAfterAlphaT_55_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.5,1);
   gre->SetPointError(0,0.5,0);
   gre->SetPoint(1,1.5,1);
   gre->SetPointError(1,0.5,0);
   gre->SetPoint(2,2.5,1);
   gre->SetPointError(2,0.5,0.01309107);
   gre->SetPoint(3,3.5,1);
   gre->SetPointError(3,0.5,0.01287919);
   gre->SetPoint(4,4.5,1);
   gre->SetPointError(4,0.5,0.1256167);
   gre->SetPoint(5,5.5,1);
   gre->SetPointError(5,0.5,0.04748403);
   gre->SetPoint(6,6.5,1);
   gre->SetPointError(6,0.5,0.1156544);
   gre->SetPoint(7,7.5,1);
   gre->SetPointError(7,0.5,0.4346615);
   gre->SetPoint(8,8.5,1);
   gre->SetPointError(8,0.5,0.7071068);
   gre->SetPoint(9,9.5,1);
   gre->SetPointError(9,0.5,1);
   gre->SetPoint(10,10.5,1);
   gre->SetPointError(10,0.5,0);
   gre->SetPoint(11,11.5,1);
   gre->SetPointError(11,0.5,0);
   gre->SetPoint(12,12.5,1);
   gre->SetPointError(12,0.5,0);
   gre->SetPoint(13,13.5,1);
   gre->SetPointError(13,0.5,0);
   gre->SetPoint(14,14.5,1);
   gre->SetPointError(14,0.5,0);
   
   TH1F *Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229 = new TH1F("Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229","",100,0,16.5);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->SetMinimum(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->SetMaximum(2.2);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->SetDirectory(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->SetStats(0);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_JetMultiplicityAfterAlphaT_55_all229);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,15,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis1373[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
   
   TH1D *JetMultiplicityAfterAlphaT_55_all = new TH1D("JetMultiplicityAfterAlphaT_55_all","",15, xAxis1373);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(3,0.881332);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(4,0.9656129);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(5,0.94235);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(6,0.8394356);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(7,0.6964018);
   JetMultiplicityAfterAlphaT_55_all->SetBinContent(8,3.031116);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(3,0.05162501);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(4,0.04142778);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(5,0.1344364);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(6,0.1214691);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(7,0.3367134);
   JetMultiplicityAfterAlphaT_55_all->SetBinError(8,0.8353293);
   JetMultiplicityAfterAlphaT_55_all->SetMinimum(0);
   JetMultiplicityAfterAlphaT_55_all->SetMaximum(2);
   JetMultiplicityAfterAlphaT_55_all->SetEntries(8.330387);
   JetMultiplicityAfterAlphaT_55_all->SetLineWidth(2);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerStyle(20);
   JetMultiplicityAfterAlphaT_55_all->SetMarkerSize(1.5);
   JetMultiplicityAfterAlphaT_55_all->GetXaxis()->SetLabelSize(0.12);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitle("Data/MC");
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetNdivisions(505);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetLabelSize(0.11);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleSize(0.1);
   JetMultiplicityAfterAlphaT_55_all->GetYaxis()->SetTitleOffset(0.5);
   JetMultiplicityAfterAlphaT_55_all->Draw("PSAME");
   d->Modified();
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->cd();
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->Modified();
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->cd();
   canvas375_475/JetMultiplicityAfterAlphaT_55_all->SetSelected(canvas375_475/JetMultiplicityAfterAlphaT_55_all);
}
