{
//=========Macro generated from canvas: canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all/cannameBiasedDeltaPhi_all
//=========  (Thu May 10 12:25:48 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all = new TCanvas("canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all", "cannameBiasedDeltaPhi_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->SetHighLightColor(2);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->Range(0,0,1,1);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->SetFillColor(0);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->SetBorderMode(0);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->SetBorderSize(2);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->SetTickx(1);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->SetTicky(1);
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3926991,-0.8674074,3.534292,4.796366);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5683[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5683);
   BiasedDeltaPhi_all->SetBinContent(1,252);
   BiasedDeltaPhi_all->SetBinContent(2,13);
   BiasedDeltaPhi_all->SetBinContent(3,3);
   BiasedDeltaPhi_all->SetBinContent(4,2);
   BiasedDeltaPhi_all->SetBinContent(5,1);
   BiasedDeltaPhi_all->SetBinError(1,15.87451);
   BiasedDeltaPhi_all->SetBinError(2,3.605551);
   BiasedDeltaPhi_all->SetBinError(3,2.14);
   BiasedDeltaPhi_all->SetBinError(4,2);
   BiasedDeltaPhi_all->SetBinError(5,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(16981.99);
   BiasedDeltaPhi_all->SetEntries(271);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_379 = new TH1F("_stack_379","",12,0,3.141593);
   _stack_379->SetMinimum(0.7373606);
   _stack_379->SetMaximum(2949.442);
   _stack_379->SetDirectory(0);
   _stack_379->SetStats(0);
   _stack_379->GetXaxis()->SetLabelFont(42);
   _stack_379->GetXaxis()->SetLabelOffset(0.007);
   _stack_379->GetXaxis()->SetLabelSize(0.05);
   _stack_379->GetXaxis()->SetTitleSize(0.05);
   _stack_379->GetYaxis()->SetLabelFont(42);
   _stack_379->GetYaxis()->SetLabelOffset(0.007);
   _stack_379->GetYaxis()->SetLabelSize(0.05);
   _stack_379->GetZaxis()->SetLabelFont(42);
   _stack_379->GetZaxis()->SetLabelOffset(0.007);
   _stack_379->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_379);
   
   Double_t xAxis5684[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5684);
   BiasedDeltaPhi_all->SetFillColor(6);
   BiasedDeltaPhi_all->SetLineColor(6);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis5685[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5685);
   BiasedDeltaPhi_all->SetBinContent(1,0.2813198);
   BiasedDeltaPhi_all->SetBinContent(2,0.02562031);
   BiasedDeltaPhi_all->SetBinContent(3,0.005675678);
   BiasedDeltaPhi_all->SetBinContent(4,0.02131095);
   BiasedDeltaPhi_all->SetBinContent(6,0.01545703);
   BiasedDeltaPhi_all->SetBinError(1,0.07762279);
   BiasedDeltaPhi_all->SetBinError(2,0.01045827);
   BiasedDeltaPhi_all->SetBinError(3,0.004519555);
   BiasedDeltaPhi_all->SetBinError(4,0.02131095);
   BiasedDeltaPhi_all->SetBinError(6,0.01545703);
   BiasedDeltaPhi_all->SetEntries(50);
   BiasedDeltaPhi_all->SetFillColor(44);
   BiasedDeltaPhi_all->SetLineColor(44);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis5686[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5686);
   BiasedDeltaPhi_all->SetBinContent(1,3.37014);
   BiasedDeltaPhi_all->SetBinContent(2,0.2765729);
   BiasedDeltaPhi_all->SetBinContent(3,0.2531093);
   BiasedDeltaPhi_all->SetBinContent(4,0.0579226);
   BiasedDeltaPhi_all->SetBinContent(5,0.1082809);
   BiasedDeltaPhi_all->SetBinContent(7,0.04120891);
   BiasedDeltaPhi_all->SetBinError(1,0.463951);
   BiasedDeltaPhi_all->SetBinError(2,0.1139939);
   BiasedDeltaPhi_all->SetBinError(3,0.1216519);
   BiasedDeltaPhi_all->SetBinError(4,0.05496274);
   BiasedDeltaPhi_all->SetBinError(5,0.07718056);
   BiasedDeltaPhi_all->SetBinError(7,0.04120891);
   BiasedDeltaPhi_all->SetEntries(79);
   BiasedDeltaPhi_all->SetFillColor(40);
   BiasedDeltaPhi_all->SetLineColor(40);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis5687[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5687);
   BiasedDeltaPhi_all->SetBinContent(1,1.969003);
   BiasedDeltaPhi_all->SetBinContent(2,0.9716402);
   BiasedDeltaPhi_all->SetBinContent(3,1.160715);
   BiasedDeltaPhi_all->SetBinContent(4,0.4987439);
   BiasedDeltaPhi_all->SetBinContent(5,0.07163091);
   BiasedDeltaPhi_all->SetBinContent(6,0.06062185);
   BiasedDeltaPhi_all->SetBinContent(9,0.08000721);
   BiasedDeltaPhi_all->SetBinError(1,0.4481751);
   BiasedDeltaPhi_all->SetBinError(2,0.2752679);
   BiasedDeltaPhi_all->SetBinError(3,0.318961);
   BiasedDeltaPhi_all->SetBinError(4,0.193296);
   BiasedDeltaPhi_all->SetBinError(5,0.07163091);
   BiasedDeltaPhi_all->SetBinError(6,0.0447419);
   BiasedDeltaPhi_all->SetBinError(9,0.08000721);
   BiasedDeltaPhi_all->SetEntries(75);
   BiasedDeltaPhi_all->SetFillColor(5);
   BiasedDeltaPhi_all->SetLineColor(5);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis5688[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5688);
   BiasedDeltaPhi_all->SetBinContent(1,5.452275);
   BiasedDeltaPhi_all->SetBinContent(2,2.3013);
   BiasedDeltaPhi_all->SetBinContent(3,0.9011465);
   BiasedDeltaPhi_all->SetBinContent(4,0.4276499);
   BiasedDeltaPhi_all->SetBinContent(7,0.03351695);
   BiasedDeltaPhi_all->SetBinContent(9,0.05645457);
   BiasedDeltaPhi_all->SetBinError(1,0.5989861);
   BiasedDeltaPhi_all->SetBinError(2,0.446751);
   BiasedDeltaPhi_all->SetBinError(3,0.2482511);
   BiasedDeltaPhi_all->SetBinError(4,0.1669682);
   BiasedDeltaPhi_all->SetBinError(7,0.03351695);
   BiasedDeltaPhi_all->SetBinError(9,0.05645457);
   BiasedDeltaPhi_all->SetEntries(169);
   BiasedDeltaPhi_all->SetFillColor(4);
   BiasedDeltaPhi_all->SetLineColor(4);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis5689[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5689);
   BiasedDeltaPhi_all->SetBinContent(1,50.12111);
   BiasedDeltaPhi_all->SetBinContent(2,9.534684);
   BiasedDeltaPhi_all->SetBinContent(3,3.775071);
   BiasedDeltaPhi_all->SetBinContent(4,1.21809);
   BiasedDeltaPhi_all->SetBinContent(5,0.3652118);
   BiasedDeltaPhi_all->SetBinError(1,4.468324);
   BiasedDeltaPhi_all->SetBinError(2,1.693981);
   BiasedDeltaPhi_all->SetBinError(3,0.9869702);
   BiasedDeltaPhi_all->SetBinError(4,0.5952437);
   BiasedDeltaPhi_all->SetBinError(5,0.3652118);
   BiasedDeltaPhi_all->SetEntries(265);
   BiasedDeltaPhi_all->SetFillColor(2);
   BiasedDeltaPhi_all->SetLineColor(2);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
   Double_t xAxis5690[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5690);
   BiasedDeltaPhi_all->SetBinContent(1,1637.006);
   BiasedDeltaPhi_all->SetBinContent(2,2.42356);
   BiasedDeltaPhi_all->SetBinError(1,206.3958);
   BiasedDeltaPhi_all->SetBinError(2,2.42356);
   BiasedDeltaPhi_all->SetEntries(497);
   BiasedDeltaPhi_all->SetFillColor(7);
   BiasedDeltaPhi_all->SetLineColor(7);
   BiasedDeltaPhi_all->SetLineStyle(10);
   BiasedDeltaPhi_all->SetLineWidth(3);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle(" Events/0.05 rad");
   ->Add(BiasedDeltaPhi_all,"");
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
   TLegendEntry *entry=leg->AddEntry("BiasedDeltaPhi_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("BiasedDeltaPhi_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("BiasedDeltaPhi_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Double_t xAxis5691[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5691);
   BiasedDeltaPhi_all->SetBinContent(1,252);
   BiasedDeltaPhi_all->SetBinContent(2,13);
   BiasedDeltaPhi_all->SetBinContent(3,3);
   BiasedDeltaPhi_all->SetBinContent(4,2);
   BiasedDeltaPhi_all->SetBinContent(5,1);
   BiasedDeltaPhi_all->SetBinError(1,15.87451);
   BiasedDeltaPhi_all->SetBinError(2,3.605551);
   BiasedDeltaPhi_all->SetBinError(3,2.14);
   BiasedDeltaPhi_all->SetBinError(4,2);
   BiasedDeltaPhi_all->SetBinError(5,1);
   BiasedDeltaPhi_all->SetMinimum(0.5);
   BiasedDeltaPhi_all->SetMaximum(16981.99);
   BiasedDeltaPhi_all->SetEntries(271);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetTitle("#Delta #phi^{*} (rad)");
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Events / 0.25 rad");
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(1.3);
   BiasedDeltaPhi_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_575_675    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-0.3926991,-0.25,3.534292,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis5692[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5692);
   BiasedDeltaPhi_all->SetBinContent(1,0.1483925);
   BiasedDeltaPhi_all->SetBinContent(2,0.8369075);
   BiasedDeltaPhi_all->SetBinContent(3,0.4921488);
   BiasedDeltaPhi_all->SetBinContent(4,0.8993948);
   BiasedDeltaPhi_all->SetBinContent(5,1.834447);
   BiasedDeltaPhi_all->SetBinError(1,0.1369195);
   BiasedDeltaPhi_all->SetBinError(2,0.3381635);
   BiasedDeltaPhi_all->SetBinError(3,0.7347485);
   BiasedDeltaPhi_all->SetBinError(4,1.041897);
   BiasedDeltaPhi_all->SetBinError(5,1.219082);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(2.911858);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetLabelSize(0.12);
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Data/MC");
   BiasedDeltaPhi_all->GetYaxis()->SetNdivisions(505);
   BiasedDeltaPhi_all->GetYaxis()->SetLabelSize(0.11);
   BiasedDeltaPhi_all->GetYaxis()->SetTitleSize(0.1);
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(0.5);
   BiasedDeltaPhi_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_BiasedDeltaPhi_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.1308997,1);
   gre->SetPointError(0,0.1308997,0.1215676);
   gre->SetPoint(1,0.3926991,1);
   gre->SetPointError(1,0.1308997,0.1934721);
   gre->SetPoint(2,0.6544985,1);
   gre->SetPointError(2,0.1308997,0.176099);
   gre->SetPoint(3,0.9162979,1);
   gre->SetPointError(3,0.1308997,0.2924872);
   gre->SetPoint(4,1.178097,1);
   gre->SetPointError(4,0.1308997,0.6972525);
   gre->SetPoint(5,1.439897,1);
   gre->SetPointError(5,0.1308997,0.6222047);
   gre->SetPoint(6,1.701696,1);
   gre->SetPointError(6,0.1308997,0.7108431);
   gre->SetPoint(7,1.963495,1);
   gre->SetPointError(7,0.1308997,0);
   gre->SetPoint(8,2.225295,1);
   gre->SetPointError(8,0.1308997,0.7175615);
   gre->SetPoint(9,2.487094,1);
   gre->SetPointError(9,0.1308997,0);
   gre->SetPoint(10,2.748894,1);
   gre->SetPointError(10,0.1308997,0);
   gre->SetPoint(11,3.010693,1);
   gre->SetPointError(11,0.1308997,0);
   
   TH1F *Graph_Graph_from_BiasedDeltaPhi_all949 = new TH1F("Graph_Graph_from_BiasedDeltaPhi_all949","",100,0,3.455752);
   Graph_Graph_from_BiasedDeltaPhi_all949->SetMinimum(0.1389262);
   Graph_Graph_from_BiasedDeltaPhi_all949->SetMaximum(1.861074);
   Graph_Graph_from_BiasedDeltaPhi_all949->SetDirectory(0);
   Graph_Graph_from_BiasedDeltaPhi_all949->SetStats(0);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_BiasedDeltaPhi_all949->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_BiasedDeltaPhi_all949);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5693[13] = {0, 0.2617994, 0.5235988, 0.7853982, 1.047198, 1.308997, 1.570796, 1.832596, 2.094395, 2.356194, 2.617994, 2.879793, 3.141593}; 
   
   TH1D *BiasedDeltaPhi_all = new TH1D("BiasedDeltaPhi_all","",12, xAxis5693);
   BiasedDeltaPhi_all->SetBinContent(1,0.1483925);
   BiasedDeltaPhi_all->SetBinContent(2,0.8369075);
   BiasedDeltaPhi_all->SetBinContent(3,0.4921488);
   BiasedDeltaPhi_all->SetBinContent(4,0.8993948);
   BiasedDeltaPhi_all->SetBinContent(5,1.834447);
   BiasedDeltaPhi_all->SetBinError(1,0.1369195);
   BiasedDeltaPhi_all->SetBinError(2,0.3381635);
   BiasedDeltaPhi_all->SetBinError(3,0.7347485);
   BiasedDeltaPhi_all->SetBinError(4,1.041897);
   BiasedDeltaPhi_all->SetBinError(5,1.219082);
   BiasedDeltaPhi_all->SetMinimum(0);
   BiasedDeltaPhi_all->SetMaximum(2);
   BiasedDeltaPhi_all->SetEntries(2.911858);
   BiasedDeltaPhi_all->SetLineWidth(2);
   BiasedDeltaPhi_all->SetMarkerStyle(20);
   BiasedDeltaPhi_all->SetMarkerSize(1.5);
   BiasedDeltaPhi_all->GetXaxis()->SetLabelSize(0.12);
   BiasedDeltaPhi_all->GetYaxis()->SetTitle("Data/MC");
   BiasedDeltaPhi_all->GetYaxis()->SetNdivisions(505);
   BiasedDeltaPhi_all->GetYaxis()->SetLabelSize(0.11);
   BiasedDeltaPhi_all->GetYaxis()->SetTitleSize(0.1);
   BiasedDeltaPhi_all->GetYaxis()->SetTitleOffset(0.5);
   BiasedDeltaPhi_all->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->cd();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->Modified();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->cd();
   canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all->SetSelected(canvasbtag_morethanzero_575_675/BiasedDeltaPhi_all);
}
