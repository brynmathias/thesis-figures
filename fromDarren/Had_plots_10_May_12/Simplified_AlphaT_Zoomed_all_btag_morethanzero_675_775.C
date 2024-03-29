{
//=========Macro generated from canvas: canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:25:56 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all = new TCanvas("canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->SetFillColor(0);
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->SetTickx(1);
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->SetTicky(1);
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-1.002751,0.61875,6.014457);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5904[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5904);
   AlphaT_Zoomed_all->SetBinContent(0,1417);
   AlphaT_Zoomed_all->SetBinContent(1,354);
   AlphaT_Zoomed_all->SetBinContent(2,586);
   AlphaT_Zoomed_all->SetBinContent(3,1036);
   AlphaT_Zoomed_all->SetBinContent(4,2045);
   AlphaT_Zoomed_all->SetBinContent(5,568);
   AlphaT_Zoomed_all->SetBinContent(6,40);
   AlphaT_Zoomed_all->SetBinContent(7,16);
   AlphaT_Zoomed_all->SetBinContent(8,7);
   AlphaT_Zoomed_all->SetBinContent(9,4);
   AlphaT_Zoomed_all->SetBinContent(10,2);
   AlphaT_Zoomed_all->SetBinContent(12,3);
   AlphaT_Zoomed_all->SetBinContent(13,4);
   AlphaT_Zoomed_all->SetBinError(0,37.64306);
   AlphaT_Zoomed_all->SetBinError(1,18.81489);
   AlphaT_Zoomed_all->SetBinError(2,24.20744);
   AlphaT_Zoomed_all->SetBinError(3,32.18695);
   AlphaT_Zoomed_all->SetBinError(4,45.22168);
   AlphaT_Zoomed_all->SetBinError(5,23.83275);
   AlphaT_Zoomed_all->SetBinError(6,6.324555);
   AlphaT_Zoomed_all->SetBinError(7,4);
   AlphaT_Zoomed_all->SetBinError(8,2.86);
   AlphaT_Zoomed_all->SetBinError(9,2.3);
   AlphaT_Zoomed_all->SetBinError(10,2);
   AlphaT_Zoomed_all->SetBinError(12,1.732051);
   AlphaT_Zoomed_all->SetBinError(13,2);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(205464);
   AlphaT_Zoomed_all->SetEntries(6082);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("");
   Double_t xAxis5905[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5905);
   AlphaT_Zoomed_all->SetBinContent(0,13.016);
   AlphaT_Zoomed_all->SetBinContent(1,4.819944);
   AlphaT_Zoomed_all->SetBinContent(2,5.82041);
   AlphaT_Zoomed_all->SetBinContent(3,6.23217);
   AlphaT_Zoomed_all->SetBinContent(4,7.347089);
   AlphaT_Zoomed_all->SetBinContent(5,4.534009);
   AlphaT_Zoomed_all->SetBinContent(6,2.433245);
   AlphaT_Zoomed_all->SetBinContent(7,1.51208);
   AlphaT_Zoomed_all->SetBinContent(8,0.9465331);
   AlphaT_Zoomed_all->SetBinContent(9,0.5855413);
   AlphaT_Zoomed_all->SetBinContent(10,0.5444154);
   AlphaT_Zoomed_all->SetBinContent(11,0.1014194);
   AlphaT_Zoomed_all->SetBinContent(12,0.2125976);
   AlphaT_Zoomed_all->SetBinContent(13,1.269983);
   AlphaT_Zoomed_all->SetBinError(0,1.039774);
   AlphaT_Zoomed_all->SetBinError(1,0.6853707);
   AlphaT_Zoomed_all->SetBinError(2,1.028146);
   AlphaT_Zoomed_all->SetBinError(3,0.6950065);
   AlphaT_Zoomed_all->SetBinError(4,0.7357003);
   AlphaT_Zoomed_all->SetBinError(5,0.5764786);
   AlphaT_Zoomed_all->SetBinError(6,0.4156049);
   AlphaT_Zoomed_all->SetBinError(7,0.3080674);
   AlphaT_Zoomed_all->SetBinError(8,0.2547927);
   AlphaT_Zoomed_all->SetBinError(9,0.1935095);
   AlphaT_Zoomed_all->SetBinError(10,0.2037184);
   AlphaT_Zoomed_all->SetBinError(11,0.07348382);
   AlphaT_Zoomed_all->SetBinError(12,0.1268102);
   AlphaT_Zoomed_all->SetBinError(13,0.3054983);
   AlphaT_Zoomed_all->SetEntries(868);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_394 = new TH1F("_stack_394","",12,0.45,0.6);
   _stack_394->SetMinimum(8.21856);
   _stack_394->SetMaximum(32874.24);
   _stack_394->SetDirectory(0);
   _stack_394->SetStats(0);
   _stack_394->GetXaxis()->SetLabelFont(42);
   _stack_394->GetXaxis()->SetLabelOffset(0.007);
   _stack_394->GetXaxis()->SetLabelSize(0.05);
   _stack_394->GetXaxis()->SetTitleSize(0.05);
   _stack_394->GetYaxis()->SetLabelFont(42);
   _stack_394->GetYaxis()->SetLabelOffset(0.007);
   _stack_394->GetYaxis()->SetLabelSize(0.05);
   _stack_394->GetZaxis()->SetLabelFont(42);
   _stack_394->GetZaxis()->SetLabelOffset(0.007);
   _stack_394->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_394);
   
   Double_t xAxis5906[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5906);
   AlphaT_Zoomed_all->SetBinContent(0,85.27933);
   AlphaT_Zoomed_all->SetBinContent(1,54.89358);
   AlphaT_Zoomed_all->SetBinContent(2,109.704);
   AlphaT_Zoomed_all->SetBinContent(3,187.1759);
   AlphaT_Zoomed_all->SetBinContent(4,381.2986);
   AlphaT_Zoomed_all->SetBinContent(5,134.1574);
   AlphaT_Zoomed_all->SetBinContent(6,27.42304);
   AlphaT_Zoomed_all->SetBinContent(7,13.07903);
   AlphaT_Zoomed_all->SetBinContent(8,7.360898);
   AlphaT_Zoomed_all->SetBinContent(9,4.150961);
   AlphaT_Zoomed_all->SetBinContent(10,2.470103);
   AlphaT_Zoomed_all->SetBinContent(11,3.504944);
   AlphaT_Zoomed_all->SetBinContent(12,1.862177);
   AlphaT_Zoomed_all->SetBinContent(13,4.49682);
   AlphaT_Zoomed_all->SetBinError(0,4.469434);
   AlphaT_Zoomed_all->SetBinError(1,4.338499);
   AlphaT_Zoomed_all->SetBinError(2,4.970781);
   AlphaT_Zoomed_all->SetBinError(3,6.444872);
   AlphaT_Zoomed_all->SetBinError(4,10.31956);
   AlphaT_Zoomed_all->SetBinError(5,6.52225);
   AlphaT_Zoomed_all->SetBinError(6,2.513906);
   AlphaT_Zoomed_all->SetBinError(7,1.627941);
   AlphaT_Zoomed_all->SetBinError(8,1.270622);
   AlphaT_Zoomed_all->SetBinError(9,0.893831);
   AlphaT_Zoomed_all->SetBinError(10,0.6707731);
   AlphaT_Zoomed_all->SetBinError(11,1.611675);
   AlphaT_Zoomed_all->SetBinError(12,0.7214536);
   AlphaT_Zoomed_all->SetBinError(13,1.143311);
   AlphaT_Zoomed_all->SetEntries(8837);
   AlphaT_Zoomed_all->SetLineColor(3);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->SetMarkerColor(3);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5907[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5907);
   AlphaT_Zoomed_all->SetBinContent(0,6578.987);
   AlphaT_Zoomed_all->SetBinContent(1,5461.662);
   AlphaT_Zoomed_all->SetBinContent(2,10045.72);
   AlphaT_Zoomed_all->SetBinContent(3,14608.12);
   AlphaT_Zoomed_all->SetBinContent(4,20165.1);
   AlphaT_Zoomed_all->SetBinContent(5,1509.18);
   AlphaT_Zoomed_all->SetBinContent(6,7.643564);
   AlphaT_Zoomed_all->SetBinContent(7,2.426957);
   AlphaT_Zoomed_all->SetBinContent(8,2.397139);
   AlphaT_Zoomed_all->SetBinError(0,138.5211);
   AlphaT_Zoomed_all->SetBinError(1,129.3042);
   AlphaT_Zoomed_all->SetBinError(2,171.68);
   AlphaT_Zoomed_all->SetBinError(3,212.9257);
   AlphaT_Zoomed_all->SetBinError(4,288.6737);
   AlphaT_Zoomed_all->SetBinError(5,112.7796);
   AlphaT_Zoomed_all->SetBinError(6,3.848963);
   AlphaT_Zoomed_all->SetBinError(7,2.334982);
   AlphaT_Zoomed_all->SetBinError(8,2.334218);
   AlphaT_Zoomed_all->SetEntries(29155);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_675_775    Jet Multiplicity=all");
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
   Double_t xAxis5908[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5908);
   AlphaT_Zoomed_all->SetBinContent(0,1417);
   AlphaT_Zoomed_all->SetBinContent(1,354);
   AlphaT_Zoomed_all->SetBinContent(2,586);
   AlphaT_Zoomed_all->SetBinContent(3,1036);
   AlphaT_Zoomed_all->SetBinContent(4,2045);
   AlphaT_Zoomed_all->SetBinContent(5,568);
   AlphaT_Zoomed_all->SetBinContent(6,40);
   AlphaT_Zoomed_all->SetBinContent(7,16);
   AlphaT_Zoomed_all->SetBinContent(8,7);
   AlphaT_Zoomed_all->SetBinContent(9,4);
   AlphaT_Zoomed_all->SetBinContent(10,2);
   AlphaT_Zoomed_all->SetBinContent(12,3);
   AlphaT_Zoomed_all->SetBinContent(13,4);
   AlphaT_Zoomed_all->SetBinError(0,37.64306);
   AlphaT_Zoomed_all->SetBinError(1,18.81489);
   AlphaT_Zoomed_all->SetBinError(2,24.20744);
   AlphaT_Zoomed_all->SetBinError(3,32.18695);
   AlphaT_Zoomed_all->SetBinError(4,45.22168);
   AlphaT_Zoomed_all->SetBinError(5,23.83275);
   AlphaT_Zoomed_all->SetBinError(6,6.324555);
   AlphaT_Zoomed_all->SetBinError(7,4);
   AlphaT_Zoomed_all->SetBinError(8,2.86);
   AlphaT_Zoomed_all->SetBinError(9,2.3);
   AlphaT_Zoomed_all->SetBinError(10,2);
   AlphaT_Zoomed_all->SetBinError(12,1.732051);
   AlphaT_Zoomed_all->SetBinError(13,2);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(205464);
   AlphaT_Zoomed_all->SetEntries(6082);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis5909[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5909);
   AlphaT_Zoomed_all->SetBinContent(0,16.61598);
   AlphaT_Zoomed_all->SetBinContent(1,6.448842);
   AlphaT_Zoomed_all->SetBinContent(2,5.341649);
   AlphaT_Zoomed_all->SetBinContent(3,5.534902);
   AlphaT_Zoomed_all->SetBinContent(4,5.363251);
   AlphaT_Zoomed_all->SetBinContent(5,4.233834);
   AlphaT_Zoomed_all->SetBinContent(6,1.458627);
   AlphaT_Zoomed_all->SetBinContent(7,1.223332);
   AlphaT_Zoomed_all->SetBinContent(8,0.9509709);
   AlphaT_Zoomed_all->SetBinContent(9,0.9636322);
   AlphaT_Zoomed_all->SetBinContent(10,0.8096827);
   AlphaT_Zoomed_all->SetBinContent(12,1.611018);
   AlphaT_Zoomed_all->SetBinContent(13,0.8895175);
   AlphaT_Zoomed_all->SetBinError(0,0.9763154);
   AlphaT_Zoomed_all->SetBinError(1,0.09524362);
   AlphaT_Zoomed_all->SetBinError(2,0.06131525);
   AlphaT_Zoomed_all->SetBinError(3,0.04637699);
   AlphaT_Zoomed_all->SetBinError(4,0.03494955);
   AlphaT_Zoomed_all->SetBinError(5,0.0642193);
   AlphaT_Zoomed_all->SetBinError(6,0.1827666);
   AlphaT_Zoomed_all->SetBinError(7,0.2792717);
   AlphaT_Zoomed_all->SetBinError(8,0.4435398);
   AlphaT_Zoomed_all->SetBinError(9,0.6139971);
   AlphaT_Zoomed_all->SetBinError(10,1.036216);
   AlphaT_Zoomed_all->SetBinError(12,0.6952923);
   AlphaT_Zoomed_all->SetBinError(13,0.498957);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(345.5165);
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
   gre->SetPointError(0,0.00625,0.07903473);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.04531087);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.03443218);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.02706425);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.04861641);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.09167132);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.1244696);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.1726178);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.2153311);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.2715567);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.4598291);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.3874249);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all985 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all985","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all985->SetMinimum(0.448205);
   Graph_Graph_from_AlphaT_Zoomed_all985->SetMaximum(1.551795);
   Graph_Graph_from_AlphaT_Zoomed_all985->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all985->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all985->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all985);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5910[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5910);
   AlphaT_Zoomed_all->SetBinContent(0,16.61598);
   AlphaT_Zoomed_all->SetBinContent(1,6.448842);
   AlphaT_Zoomed_all->SetBinContent(2,5.341649);
   AlphaT_Zoomed_all->SetBinContent(3,5.534902);
   AlphaT_Zoomed_all->SetBinContent(4,5.363251);
   AlphaT_Zoomed_all->SetBinContent(5,4.233834);
   AlphaT_Zoomed_all->SetBinContent(6,1.458627);
   AlphaT_Zoomed_all->SetBinContent(7,1.223332);
   AlphaT_Zoomed_all->SetBinContent(8,0.9509709);
   AlphaT_Zoomed_all->SetBinContent(9,0.9636322);
   AlphaT_Zoomed_all->SetBinContent(10,0.8096827);
   AlphaT_Zoomed_all->SetBinContent(12,1.611018);
   AlphaT_Zoomed_all->SetBinContent(13,0.8895175);
   AlphaT_Zoomed_all->SetBinError(0,0.9763154);
   AlphaT_Zoomed_all->SetBinError(1,0.09524362);
   AlphaT_Zoomed_all->SetBinError(2,0.06131525);
   AlphaT_Zoomed_all->SetBinError(3,0.04637699);
   AlphaT_Zoomed_all->SetBinError(4,0.03494955);
   AlphaT_Zoomed_all->SetBinError(5,0.0642193);
   AlphaT_Zoomed_all->SetBinError(6,0.1827666);
   AlphaT_Zoomed_all->SetBinError(7,0.2792717);
   AlphaT_Zoomed_all->SetBinError(8,0.4435398);
   AlphaT_Zoomed_all->SetBinError(9,0.6139971);
   AlphaT_Zoomed_all->SetBinError(10,1.036216);
   AlphaT_Zoomed_all->SetBinError(12,0.6952923);
   AlphaT_Zoomed_all->SetBinError(13,0.498957);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(345.5165);
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
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->Modified();
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all->SetSelected(canvasbtag_morethanzero_675_775/AlphaT_Zoomed_all);
}
