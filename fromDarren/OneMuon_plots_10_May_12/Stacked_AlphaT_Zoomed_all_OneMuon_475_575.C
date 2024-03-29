{
//=========Macro generated from canvas: canvasOneMuon_475_575/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:06:32 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_475_575/AlphaT_Zoomed_all = new TCanvas("canvasOneMuon_475_575/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_475_575/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasOneMuon_475_575/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasOneMuon_475_575/AlphaT_Zoomed_all->SetFillColor(0);
   canvasOneMuon_475_575/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasOneMuon_475_575/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasOneMuon_475_575/AlphaT_Zoomed_all->SetTickx(1);
   canvasOneMuon_475_575/AlphaT_Zoomed_all->SetTicky(1);
   canvasOneMuon_475_575/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-0.7687247,0.61875,3.908222);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis703[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis703);
   AlphaT_Zoomed_all->SetBinContent(0,98);
   AlphaT_Zoomed_all->SetBinContent(1,37);
   AlphaT_Zoomed_all->SetBinContent(2,53);
   AlphaT_Zoomed_all->SetBinContent(3,74);
   AlphaT_Zoomed_all->SetBinContent(4,105);
   AlphaT_Zoomed_all->SetBinContent(5,127);
   AlphaT_Zoomed_all->SetBinContent(6,101);
   AlphaT_Zoomed_all->SetBinContent(7,64);
   AlphaT_Zoomed_all->SetBinContent(8,35);
   AlphaT_Zoomed_all->SetBinContent(9,22);
   AlphaT_Zoomed_all->SetBinContent(10,17);
   AlphaT_Zoomed_all->SetBinContent(11,17);
   AlphaT_Zoomed_all->SetBinContent(12,13);
   AlphaT_Zoomed_all->SetBinContent(13,100);
   AlphaT_Zoomed_all->SetBinError(0,9.899495);
   AlphaT_Zoomed_all->SetBinError(1,6.082763);
   AlphaT_Zoomed_all->SetBinError(2,7.28011);
   AlphaT_Zoomed_all->SetBinError(3,8.602325);
   AlphaT_Zoomed_all->SetBinError(4,10.24695);
   AlphaT_Zoomed_all->SetBinError(5,11.26943);
   AlphaT_Zoomed_all->SetBinError(6,10.04988);
   AlphaT_Zoomed_all->SetBinError(7,8);
   AlphaT_Zoomed_all->SetBinError(8,5.91608);
   AlphaT_Zoomed_all->SetBinError(9,4.690416);
   AlphaT_Zoomed_all->SetBinError(10,4.123106);
   AlphaT_Zoomed_all->SetBinError(11,4.123106);
   AlphaT_Zoomed_all->SetBinError(12,3.605551);
   AlphaT_Zoomed_all->SetBinError(13,10);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(2757.576);
   AlphaT_Zoomed_all->SetEntries(863);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_47 = new TH1F("_stack_47","",12,0.45,0.6);
   _stack_47->SetMinimum(0.110303);
   _stack_47->SetMaximum(441.2121);
   _stack_47->SetDirectory(0);
   _stack_47->SetStats(0);
   _stack_47->GetXaxis()->SetLabelFont(42);
   _stack_47->GetXaxis()->SetLabelOffset(0.007);
   _stack_47->GetXaxis()->SetLabelSize(0.05);
   _stack_47->GetXaxis()->SetTitleSize(0.05);
   _stack_47->GetYaxis()->SetLabelFont(42);
   _stack_47->GetYaxis()->SetLabelOffset(0.007);
   _stack_47->GetYaxis()->SetLabelSize(0.05);
   _stack_47->GetZaxis()->SetLabelFont(42);
   _stack_47->GetZaxis()->SetLabelOffset(0.007);
   _stack_47->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_47);
   
   Double_t xAxis704[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis704);
   AlphaT_Zoomed_all->SetFillColor(5);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis705[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis705);
   AlphaT_Zoomed_all->SetBinContent(4,3.576184);
   AlphaT_Zoomed_all->SetBinError(4,2.609629);
   AlphaT_Zoomed_all->SetEntries(2);
   AlphaT_Zoomed_all->SetFillColor(7);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis706[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis706);
   AlphaT_Zoomed_all->SetBinContent(0,2.313908);
   AlphaT_Zoomed_all->SetBinContent(1,0.5891792);
   AlphaT_Zoomed_all->SetBinContent(2,0.7508744);
   AlphaT_Zoomed_all->SetBinContent(3,0.6983356);
   AlphaT_Zoomed_all->SetBinContent(4,1.044032);
   AlphaT_Zoomed_all->SetBinContent(5,0.5938397);
   AlphaT_Zoomed_all->SetBinContent(6,0.3137232);
   AlphaT_Zoomed_all->SetBinContent(7,0.2485352);
   AlphaT_Zoomed_all->SetBinContent(8,0.2856152);
   AlphaT_Zoomed_all->SetBinContent(9,0.2279194);
   AlphaT_Zoomed_all->SetBinContent(10,0.1137045);
   AlphaT_Zoomed_all->SetBinContent(11,0.08471169);
   AlphaT_Zoomed_all->SetBinContent(12,0.005832594);
   AlphaT_Zoomed_all->SetBinContent(13,0.6346929);
   AlphaT_Zoomed_all->SetBinError(0,0.2837016);
   AlphaT_Zoomed_all->SetBinError(1,0.141257);
   AlphaT_Zoomed_all->SetBinError(2,0.1607207);
   AlphaT_Zoomed_all->SetBinError(3,0.1493409);
   AlphaT_Zoomed_all->SetBinError(4,0.1868132);
   AlphaT_Zoomed_all->SetBinError(5,0.1368091);
   AlphaT_Zoomed_all->SetBinError(6,0.1017538);
   AlphaT_Zoomed_all->SetBinError(7,0.08601331);
   AlphaT_Zoomed_all->SetBinError(8,0.1026229);
   AlphaT_Zoomed_all->SetBinError(9,0.09428138);
   AlphaT_Zoomed_all->SetBinError(10,0.06727516);
   AlphaT_Zoomed_all->SetBinError(11,0.05398871);
   AlphaT_Zoomed_all->SetBinError(12,0.005832594);
   AlphaT_Zoomed_all->SetBinError(13,0.1411695);
   AlphaT_Zoomed_all->SetEntries(318);
   AlphaT_Zoomed_all->SetFillColor(44);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis707[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis707);
   AlphaT_Zoomed_all->SetBinContent(0,13.07335);
   AlphaT_Zoomed_all->SetBinContent(1,1.944553);
   AlphaT_Zoomed_all->SetBinContent(2,2.893839);
   AlphaT_Zoomed_all->SetBinContent(3,3.525401);
   AlphaT_Zoomed_all->SetBinContent(4,3.967737);
   AlphaT_Zoomed_all->SetBinContent(5,2.688563);
   AlphaT_Zoomed_all->SetBinContent(7,0.150061);
   AlphaT_Zoomed_all->SetBinContent(8,1.651022);
   AlphaT_Zoomed_all->SetBinContent(9,0.02819469);
   AlphaT_Zoomed_all->SetBinContent(10,0.2781055);
   AlphaT_Zoomed_all->SetBinError(0,2.75313);
   AlphaT_Zoomed_all->SetBinError(1,0.8817319);
   AlphaT_Zoomed_all->SetBinError(2,1.244135);
   AlphaT_Zoomed_all->SetBinError(3,1.30163);
   AlphaT_Zoomed_all->SetBinError(4,1.501513);
   AlphaT_Zoomed_all->SetBinError(5,1.144678);
   AlphaT_Zoomed_all->SetBinError(7,0.150061);
   AlphaT_Zoomed_all->SetBinError(8,0.8455083);
   AlphaT_Zoomed_all->SetBinError(9,0.02819469);
   AlphaT_Zoomed_all->SetBinError(10,0.2781055);
   AlphaT_Zoomed_all->SetEntries(74);
   AlphaT_Zoomed_all->SetFillColor(6);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis708[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis708);
   AlphaT_Zoomed_all->SetBinContent(0,12.3608);
   AlphaT_Zoomed_all->SetBinContent(1,3.931658);
   AlphaT_Zoomed_all->SetBinContent(2,4.600874);
   AlphaT_Zoomed_all->SetBinContent(3,5.294911);
   AlphaT_Zoomed_all->SetBinContent(4,6.296398);
   AlphaT_Zoomed_all->SetBinContent(5,4.665634);
   AlphaT_Zoomed_all->SetBinContent(6,2.293829);
   AlphaT_Zoomed_all->SetBinContent(7,1.798107);
   AlphaT_Zoomed_all->SetBinContent(8,1.110229);
   AlphaT_Zoomed_all->SetBinContent(9,1.199615);
   AlphaT_Zoomed_all->SetBinContent(10,1.036518);
   AlphaT_Zoomed_all->SetBinContent(11,0.6900741);
   AlphaT_Zoomed_all->SetBinContent(12,0.2919032);
   AlphaT_Zoomed_all->SetBinContent(13,3.365437);
   AlphaT_Zoomed_all->SetBinError(0,0.8718354);
   AlphaT_Zoomed_all->SetBinError(1,0.4761877);
   AlphaT_Zoomed_all->SetBinError(2,0.501966);
   AlphaT_Zoomed_all->SetBinError(3,0.5328474);
   AlphaT_Zoomed_all->SetBinError(4,0.5919838);
   AlphaT_Zoomed_all->SetBinError(5,0.5086297);
   AlphaT_Zoomed_all->SetBinError(6,0.3632017);
   AlphaT_Zoomed_all->SetBinError(7,0.3093305);
   AlphaT_Zoomed_all->SetBinError(8,0.2342058);
   AlphaT_Zoomed_all->SetBinError(9,0.284185);
   AlphaT_Zoomed_all->SetBinError(10,0.2392075);
   AlphaT_Zoomed_all->SetBinError(11,0.1922118);
   AlphaT_Zoomed_all->SetBinError(12,0.1120361);
   AlphaT_Zoomed_all->SetBinError(13,0.4723549);
   AlphaT_Zoomed_all->SetEntries(1164);
   AlphaT_Zoomed_all->SetFillColor(40);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis709[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis709);
   AlphaT_Zoomed_all->SetBinContent(0,93.40582);
   AlphaT_Zoomed_all->SetBinContent(1,42.35043);
   AlphaT_Zoomed_all->SetBinContent(2,55.20395);
   AlphaT_Zoomed_all->SetBinContent(3,70.45451);
   AlphaT_Zoomed_all->SetBinContent(4,107.466);
   AlphaT_Zoomed_all->SetBinContent(5,85.70441);
   AlphaT_Zoomed_all->SetBinContent(6,56.86494);
   AlphaT_Zoomed_all->SetBinContent(7,30.88061);
   AlphaT_Zoomed_all->SetBinContent(8,23.92464);
   AlphaT_Zoomed_all->SetBinContent(9,11.63104);
   AlphaT_Zoomed_all->SetBinContent(10,5.480011);
   AlphaT_Zoomed_all->SetBinContent(11,6.743071);
   AlphaT_Zoomed_all->SetBinContent(12,3.767454);
   AlphaT_Zoomed_all->SetBinContent(13,28.21108);
   AlphaT_Zoomed_all->SetBinError(0,4.976996);
   AlphaT_Zoomed_all->SetBinError(1,3.342813);
   AlphaT_Zoomed_all->SetBinError(2,4.427609);
   AlphaT_Zoomed_all->SetBinError(3,4.359166);
   AlphaT_Zoomed_all->SetBinError(4,5.854564);
   AlphaT_Zoomed_all->SetBinError(5,4.721933);
   AlphaT_Zoomed_all->SetBinError(6,3.781193);
   AlphaT_Zoomed_all->SetBinError(7,2.814443);
   AlphaT_Zoomed_all->SetBinError(8,2.592785);
   AlphaT_Zoomed_all->SetBinError(9,1.699943);
   AlphaT_Zoomed_all->SetBinError(10,1.154443);
   AlphaT_Zoomed_all->SetBinError(11,1.272192);
   AlphaT_Zoomed_all->SetBinError(12,0.9386263);
   AlphaT_Zoomed_all->SetBinError(13,2.646013);
   AlphaT_Zoomed_all->SetEntries(3257);
   AlphaT_Zoomed_all->SetFillColor(2);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis710[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis710);
   AlphaT_Zoomed_all->SetBinContent(0,437.2574);
   AlphaT_Zoomed_all->SetBinContent(1,112.2025);
   AlphaT_Zoomed_all->SetBinContent(2,123.5322);
   AlphaT_Zoomed_all->SetBinContent(3,138.0415);
   AlphaT_Zoomed_all->SetBinContent(4,153.4072);
   AlphaT_Zoomed_all->SetBinContent(5,95.30337);
   AlphaT_Zoomed_all->SetBinContent(6,53.4722);
   AlphaT_Zoomed_all->SetBinContent(7,32.83406);
   AlphaT_Zoomed_all->SetBinContent(8,22.73603);
   AlphaT_Zoomed_all->SetBinContent(9,15.71155);
   AlphaT_Zoomed_all->SetBinContent(10,14.38548);
   AlphaT_Zoomed_all->SetBinContent(11,8.48968);
   AlphaT_Zoomed_all->SetBinContent(12,8.235778);
   AlphaT_Zoomed_all->SetBinContent(13,71.9031);
   AlphaT_Zoomed_all->SetBinError(0,5.421756);
   AlphaT_Zoomed_all->SetBinError(1,2.775379);
   AlphaT_Zoomed_all->SetBinError(2,2.932125);
   AlphaT_Zoomed_all->SetBinError(3,3.006975);
   AlphaT_Zoomed_all->SetBinError(4,3.299986);
   AlphaT_Zoomed_all->SetBinError(5,2.514191);
   AlphaT_Zoomed_all->SetBinError(6,1.809545);
   AlphaT_Zoomed_all->SetBinError(7,1.430042);
   AlphaT_Zoomed_all->SetBinError(8,1.214401);
   AlphaT_Zoomed_all->SetBinError(9,0.9586566);
   AlphaT_Zoomed_all->SetBinError(10,1.115581);
   AlphaT_Zoomed_all->SetBinError(11,0.719018);
   AlphaT_Zoomed_all->SetBinError(12,0.699223);
   AlphaT_Zoomed_all->SetBinError(13,2.219525);
   AlphaT_Zoomed_all->SetEntries(28055);
   AlphaT_Zoomed_all->SetFillColor(4);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
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
   TLegendEntry *entry=leg->AddEntry("AlphaT_Zoomed_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("AlphaT_Zoomed_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("AlphaT_Zoomed_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
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
   entry=leg->AddEntry("AlphaT_Zoomed_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis711[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis711);
   AlphaT_Zoomed_all->SetBinContent(0,98);
   AlphaT_Zoomed_all->SetBinContent(1,37);
   AlphaT_Zoomed_all->SetBinContent(2,53);
   AlphaT_Zoomed_all->SetBinContent(3,74);
   AlphaT_Zoomed_all->SetBinContent(4,105);
   AlphaT_Zoomed_all->SetBinContent(5,127);
   AlphaT_Zoomed_all->SetBinContent(6,101);
   AlphaT_Zoomed_all->SetBinContent(7,64);
   AlphaT_Zoomed_all->SetBinContent(8,35);
   AlphaT_Zoomed_all->SetBinContent(9,22);
   AlphaT_Zoomed_all->SetBinContent(10,17);
   AlphaT_Zoomed_all->SetBinContent(11,17);
   AlphaT_Zoomed_all->SetBinContent(12,13);
   AlphaT_Zoomed_all->SetBinContent(13,100);
   AlphaT_Zoomed_all->SetBinError(0,9.899495);
   AlphaT_Zoomed_all->SetBinError(1,6.082763);
   AlphaT_Zoomed_all->SetBinError(2,7.28011);
   AlphaT_Zoomed_all->SetBinError(3,8.602325);
   AlphaT_Zoomed_all->SetBinError(4,10.24695);
   AlphaT_Zoomed_all->SetBinError(5,11.26943);
   AlphaT_Zoomed_all->SetBinError(6,10.04988);
   AlphaT_Zoomed_all->SetBinError(7,8);
   AlphaT_Zoomed_all->SetBinError(8,5.91608);
   AlphaT_Zoomed_all->SetBinError(9,4.690416);
   AlphaT_Zoomed_all->SetBinError(10,4.123106);
   AlphaT_Zoomed_all->SetBinError(11,4.123106);
   AlphaT_Zoomed_all->SetBinError(12,3.605551);
   AlphaT_Zoomed_all->SetBinError(13,10);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(2757.576);
   AlphaT_Zoomed_all->SetEntries(863);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
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
   u->Modified();
   canvasOneMuon_475_575/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis712[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis712);
   AlphaT_Zoomed_all->SetBinContent(0,0.1754979);
   AlphaT_Zoomed_all->SetBinContent(1,0.2297876);
   AlphaT_Zoomed_all->SetBinContent(2,0.2834502);
   AlphaT_Zoomed_all->SetBinContent(3,0.3394267);
   AlphaT_Zoomed_all->SetBinContent(4,0.3807693);
   AlphaT_Zoomed_all->SetBinContent(5,0.6721148);
   AlphaT_Zoomed_all->SetBinContent(6,0.894243);
   AlphaT_Zoomed_all->SetBinContent(7,0.9710009);
   AlphaT_Zoomed_all->SetBinContent(8,0.7041187);
   AlphaT_Zoomed_all->SetBinContent(9,0.7639335);
   AlphaT_Zoomed_all->SetBinContent(10,0.7983539);
   AlphaT_Zoomed_all->SetBinContent(11,1.062);
   AlphaT_Zoomed_all->SetBinContent(12,1.056827);
   AlphaT_Zoomed_all->SetBinContent(13,0.9604828);
   AlphaT_Zoomed_all->SetBinError(0,0.01790146);
   AlphaT_Zoomed_all->SetBinError(1,0.1667172);
   AlphaT_Zoomed_all->SetBinError(2,0.140452);
   AlphaT_Zoomed_all->SetBinError(3,0.1189354);
   AlphaT_Zoomed_all->SetBinError(4,0.101203);
   AlphaT_Zoomed_all->SetBinError(5,0.09338098);
   AlphaT_Zoomed_all->SetBinError(6,0.1062527);
   AlphaT_Zoomed_all->SetBinError(7,0.13397);
   AlphaT_Zoomed_all->SetBinError(8,0.1794571);
   AlphaT_Zoomed_all->SetBinError(9,0.2239558);
   AlphaT_Zoomed_all->SetBinError(10,0.2545864);
   AlphaT_Zoomed_all->SetBinError(11,0.2594472);
   AlphaT_Zoomed_all->SetBinError(12,0.2933596);
   AlphaT_Zoomed_all->SetBinError(13,0.1012969);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(225.7682);
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
   gre->SetPointError(0,0.00625,0.02770546);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.0293059);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.0251419);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.02679983);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.02908593);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.03726441);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.04819723);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.06027778);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.06856852);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.07739968);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.09213764);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.09558641);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all119 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all119","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all119->SetMinimum(0.8852963);
   Graph_Graph_from_AlphaT_Zoomed_all119->SetMaximum(1.114704);
   Graph_Graph_from_AlphaT_Zoomed_all119->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all119->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all119->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all119);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis713[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis713);
   AlphaT_Zoomed_all->SetBinContent(0,0.1754979);
   AlphaT_Zoomed_all->SetBinContent(1,0.2297876);
   AlphaT_Zoomed_all->SetBinContent(2,0.2834502);
   AlphaT_Zoomed_all->SetBinContent(3,0.3394267);
   AlphaT_Zoomed_all->SetBinContent(4,0.3807693);
   AlphaT_Zoomed_all->SetBinContent(5,0.6721148);
   AlphaT_Zoomed_all->SetBinContent(6,0.894243);
   AlphaT_Zoomed_all->SetBinContent(7,0.9710009);
   AlphaT_Zoomed_all->SetBinContent(8,0.7041187);
   AlphaT_Zoomed_all->SetBinContent(9,0.7639335);
   AlphaT_Zoomed_all->SetBinContent(10,0.7983539);
   AlphaT_Zoomed_all->SetBinContent(11,1.062);
   AlphaT_Zoomed_all->SetBinContent(12,1.056827);
   AlphaT_Zoomed_all->SetBinContent(13,0.9604828);
   AlphaT_Zoomed_all->SetBinError(0,0.01790146);
   AlphaT_Zoomed_all->SetBinError(1,0.1667172);
   AlphaT_Zoomed_all->SetBinError(2,0.140452);
   AlphaT_Zoomed_all->SetBinError(3,0.1189354);
   AlphaT_Zoomed_all->SetBinError(4,0.101203);
   AlphaT_Zoomed_all->SetBinError(5,0.09338098);
   AlphaT_Zoomed_all->SetBinError(6,0.1062527);
   AlphaT_Zoomed_all->SetBinError(7,0.13397);
   AlphaT_Zoomed_all->SetBinError(8,0.1794571);
   AlphaT_Zoomed_all->SetBinError(9,0.2239558);
   AlphaT_Zoomed_all->SetBinError(10,0.2545864);
   AlphaT_Zoomed_all->SetBinError(11,0.2594472);
   AlphaT_Zoomed_all->SetBinError(12,0.2933596);
   AlphaT_Zoomed_all->SetBinError(13,0.1012969);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(225.7682);
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
   canvasOneMuon_475_575/AlphaT_Zoomed_all->cd();
   canvasOneMuon_475_575/AlphaT_Zoomed_all->Modified();
   canvasOneMuon_475_575/AlphaT_Zoomed_all->cd();
   canvasOneMuon_475_575/AlphaT_Zoomed_all->SetSelected(canvasOneMuon_475_575/AlphaT_Zoomed_all);
}
