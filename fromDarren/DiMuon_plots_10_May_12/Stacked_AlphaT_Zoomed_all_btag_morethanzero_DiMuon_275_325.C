{
//=========Macro generated from canvas: canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:47:55 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all = new TCanvas("canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->SetFillColor(0);
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->SetTickx(1);
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->SetTicky(1);
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-0.5864931,0.61875,2.268138);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5803[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5803);
   AlphaT_Zoomed_all->SetBinContent(7,3);
   AlphaT_Zoomed_all->SetBinContent(9,7);
   AlphaT_Zoomed_all->SetBinContent(10,2);
   AlphaT_Zoomed_all->SetBinContent(11,1);
   AlphaT_Zoomed_all->SetBinContent(13,9);
   AlphaT_Zoomed_all->SetBinError(7,2.14);
   AlphaT_Zoomed_all->SetBinError(9,2.86);
   AlphaT_Zoomed_all->SetBinError(10,2);
   AlphaT_Zoomed_all->SetBinError(11,1);
   AlphaT_Zoomed_all->SetBinError(13,3);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(96.0893);
   AlphaT_Zoomed_all->SetEntries(22);
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
   
   TH1F *_stack_387 = new TH1F("_stack_387","",12,0.45,0.6);
   _stack_387->SetMinimum(0.003843572);
   _stack_387->SetMaximum(15.37429);
   _stack_387->SetDirectory(0);
   _stack_387->SetStats(0);
   _stack_387->GetXaxis()->SetLabelFont(42);
   _stack_387->GetXaxis()->SetLabelOffset(0.007);
   _stack_387->GetXaxis()->SetLabelSize(0.05);
   _stack_387->GetXaxis()->SetTitleSize(0.05);
   _stack_387->GetYaxis()->SetLabelFont(42);
   _stack_387->GetYaxis()->SetLabelOffset(0.007);
   _stack_387->GetYaxis()->SetLabelSize(0.05);
   _stack_387->GetZaxis()->SetLabelFont(42);
   _stack_387->GetZaxis()->SetLabelOffset(0.007);
   _stack_387->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_387);
   
   Double_t xAxis5804[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5804);
   AlphaT_Zoomed_all->SetFillColor(4);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5805[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5805);
   AlphaT_Zoomed_all->SetFillColor(5);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5806[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5806);
   AlphaT_Zoomed_all->SetFillColor(7);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5807[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5807);
   AlphaT_Zoomed_all->SetBinContent(0,0.3592278);
   AlphaT_Zoomed_all->SetBinContent(1,0.003262842);
   AlphaT_Zoomed_all->SetBinContent(2,0.1315741);
   AlphaT_Zoomed_all->SetBinContent(3,0.07919192);
   AlphaT_Zoomed_all->SetBinContent(4,0.03233293);
   AlphaT_Zoomed_all->SetBinContent(5,0.003277954);
   AlphaT_Zoomed_all->SetBinContent(6,0.0885526);
   AlphaT_Zoomed_all->SetBinContent(7,0.05881926);
   AlphaT_Zoomed_all->SetBinContent(12,0.03233293);
   AlphaT_Zoomed_all->SetBinContent(13,0.2954324);
   AlphaT_Zoomed_all->SetBinError(0,0.1553478);
   AlphaT_Zoomed_all->SetBinError(1,0.003262842);
   AlphaT_Zoomed_all->SetBinError(2,0.09517301);
   AlphaT_Zoomed_all->SetBinError(3,0.06115715);
   AlphaT_Zoomed_all->SetBinError(4,0.03233293);
   AlphaT_Zoomed_all->SetBinError(5,0.003277954);
   AlphaT_Zoomed_all->SetBinError(6,0.06490944);
   AlphaT_Zoomed_all->SetBinError(7,0.05881926);
   AlphaT_Zoomed_all->SetBinError(12,0.03233293);
   AlphaT_Zoomed_all->SetBinError(13,0.149611);
   AlphaT_Zoomed_all->SetEntries(27);
   AlphaT_Zoomed_all->SetFillColor(40);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5808[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5808);
   AlphaT_Zoomed_all->SetBinContent(0,0.1888303);
   AlphaT_Zoomed_all->SetBinContent(1,0.02020864);
   AlphaT_Zoomed_all->SetBinContent(2,0.0707771);
   AlphaT_Zoomed_all->SetBinContent(3,0.07946614);
   AlphaT_Zoomed_all->SetBinContent(4,0.08200887);
   AlphaT_Zoomed_all->SetBinContent(5,0.043639);
   AlphaT_Zoomed_all->SetBinContent(6,0.02445476);
   AlphaT_Zoomed_all->SetBinContent(7,0.01842447);
   AlphaT_Zoomed_all->SetBinContent(8,0.029947);
   AlphaT_Zoomed_all->SetBinContent(9,0.005973294);
   AlphaT_Zoomed_all->SetBinContent(10,0.04046443);
   AlphaT_Zoomed_all->SetBinContent(11,0.01652014);
   AlphaT_Zoomed_all->SetBinContent(13,0.3739644);
   AlphaT_Zoomed_all->SetBinError(0,0.04469326);
   AlphaT_Zoomed_all->SetBinError(1,0.01170482);
   AlphaT_Zoomed_all->SetBinError(2,0.02521296);
   AlphaT_Zoomed_all->SetBinError(3,0.02991464);
   AlphaT_Zoomed_all->SetBinError(4,0.02612462);
   AlphaT_Zoomed_all->SetBinError(5,0.01708023);
   AlphaT_Zoomed_all->SetBinError(6,0.01897165);
   AlphaT_Zoomed_all->SetBinError(7,0.01080427);
   AlphaT_Zoomed_all->SetBinError(8,0.01907821);
   AlphaT_Zoomed_all->SetBinError(9,0.005973294);
   AlphaT_Zoomed_all->SetBinError(10,0.01836857);
   AlphaT_Zoomed_all->SetBinError(11,0.01652014);
   AlphaT_Zoomed_all->SetBinError(13,0.0589513);
   AlphaT_Zoomed_all->SetEntries(134);
   AlphaT_Zoomed_all->SetFillColor(44);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5809[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5809);
   AlphaT_Zoomed_all->SetBinContent(0,10.0767);
   AlphaT_Zoomed_all->SetBinContent(1,3.215626);
   AlphaT_Zoomed_all->SetBinContent(2,1.395874);
   AlphaT_Zoomed_all->SetBinContent(3,2.272895);
   AlphaT_Zoomed_all->SetBinContent(4,3.504179);
   AlphaT_Zoomed_all->SetBinContent(5,2.207968);
   AlphaT_Zoomed_all->SetBinContent(6,1.450038);
   AlphaT_Zoomed_all->SetBinContent(7,2.145555);
   AlphaT_Zoomed_all->SetBinContent(8,1.582652);
   AlphaT_Zoomed_all->SetBinContent(9,1.197381);
   AlphaT_Zoomed_all->SetBinContent(10,0.2717112);
   AlphaT_Zoomed_all->SetBinContent(11,0.698767);
   AlphaT_Zoomed_all->SetBinContent(12,0.5603163);
   AlphaT_Zoomed_all->SetBinContent(13,3.337456);
   AlphaT_Zoomed_all->SetBinError(0,1.63971);
   AlphaT_Zoomed_all->SetBinError(1,0.8970644);
   AlphaT_Zoomed_all->SetBinError(2,0.5413131);
   AlphaT_Zoomed_all->SetBinError(3,0.7600495);
   AlphaT_Zoomed_all->SetBinError(4,1.082335);
   AlphaT_Zoomed_all->SetBinError(5,0.8281888);
   AlphaT_Zoomed_all->SetBinError(6,0.6167989);
   AlphaT_Zoomed_all->SetBinError(7,0.718884);
   AlphaT_Zoomed_all->SetBinError(8,0.6494683);
   AlphaT_Zoomed_all->SetBinError(9,0.5351307);
   AlphaT_Zoomed_all->SetBinError(10,0.2717112);
   AlphaT_Zoomed_all->SetBinError(11,0.5197566);
   AlphaT_Zoomed_all->SetBinError(12,0.3362286);
   AlphaT_Zoomed_all->SetBinError(13,0.9999649);
   AlphaT_Zoomed_all->SetEntries(168);
   AlphaT_Zoomed_all->SetFillColor(2);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   ->Add(AlphaT_Zoomed_all,"");
   Double_t xAxis5810[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5810);
   AlphaT_Zoomed_all->SetBinContent(0,21.33043);
   AlphaT_Zoomed_all->SetBinContent(1,3.982249);
   AlphaT_Zoomed_all->SetBinContent(2,3.586838);
   AlphaT_Zoomed_all->SetBinContent(3,4.861437);
   AlphaT_Zoomed_all->SetBinContent(4,5.990409);
   AlphaT_Zoomed_all->SetBinContent(5,3.638354);
   AlphaT_Zoomed_all->SetBinContent(6,5.290334);
   AlphaT_Zoomed_all->SetBinContent(7,2.765192);
   AlphaT_Zoomed_all->SetBinContent(8,2.364894);
   AlphaT_Zoomed_all->SetBinContent(9,2.425332);
   AlphaT_Zoomed_all->SetBinContent(10,2.286016);
   AlphaT_Zoomed_all->SetBinContent(11,1.835549);
   AlphaT_Zoomed_all->SetBinContent(12,1.431322);
   AlphaT_Zoomed_all->SetBinContent(13,9.66552);
   AlphaT_Zoomed_all->SetBinError(0,3.329452);
   AlphaT_Zoomed_all->SetBinError(1,1.399553);
   AlphaT_Zoomed_all->SetBinError(2,1.282349);
   AlphaT_Zoomed_all->SetBinError(3,1.515881);
   AlphaT_Zoomed_all->SetBinError(4,1.723917);
   AlphaT_Zoomed_all->SetBinError(5,1.346242);
   AlphaT_Zoomed_all->SetBinError(6,1.577299);
   AlphaT_Zoomed_all->SetBinError(7,1.235946);
   AlphaT_Zoomed_all->SetBinError(8,1.092645);
   AlphaT_Zoomed_all->SetBinError(9,1.09348);
   AlphaT_Zoomed_all->SetBinError(10,1.012809);
   AlphaT_Zoomed_all->SetBinError(11,1.065741);
   AlphaT_Zoomed_all->SetBinError(12,0.8309202);
   AlphaT_Zoomed_all->SetBinError(13,2.23485);
   AlphaT_Zoomed_all->SetEntries(180);
   AlphaT_Zoomed_all->SetFillColor(6);
   AlphaT_Zoomed_all->SetLineColor(6);
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
   entry=leg->AddEntry("AlphaT_Zoomed_all","Single Top","L");
   entry->SetLineColor(40);
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
   leg->Draw();
   Double_t xAxis5811[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5811);
   AlphaT_Zoomed_all->SetBinContent(7,3);
   AlphaT_Zoomed_all->SetBinContent(9,7);
   AlphaT_Zoomed_all->SetBinContent(10,2);
   AlphaT_Zoomed_all->SetBinContent(11,1);
   AlphaT_Zoomed_all->SetBinContent(13,9);
   AlphaT_Zoomed_all->SetBinError(7,2.14);
   AlphaT_Zoomed_all->SetBinError(9,2.86);
   AlphaT_Zoomed_all->SetBinError(10,2);
   AlphaT_Zoomed_all->SetBinError(11,1);
   AlphaT_Zoomed_all->SetBinError(13,3);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(96.0893);
   AlphaT_Zoomed_all->SetEntries(22);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_DiMuon_275_325    Jet Multiplicity=all");
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
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis5812[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5812);
   AlphaT_Zoomed_all->SetBinContent(7,0.6014445);
   AlphaT_Zoomed_all->SetBinContent(9,1.929073);
   AlphaT_Zoomed_all->SetBinContent(10,0.7697663);
   AlphaT_Zoomed_all->SetBinContent(11,0.3920284);
   AlphaT_Zoomed_all->SetBinContent(13,0.6582618);
   AlphaT_Zoomed_all->SetBinError(7,0.7688671);
   AlphaT_Zoomed_all->SetBinError(9,0.5286673);
   AlphaT_Zoomed_all->SetBinError(10,1.078397);
   AlphaT_Zoomed_all->SetBinError(11,1.102777);
   AlphaT_Zoomed_all->SetBinError(13,0.2491996);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(6.400846);
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
   gre->SetPointError(0,0.00625,0.2302083);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.2691186);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.2327052);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.2118804);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.2682201);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.2473173);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.286901);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.3196079);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.3354975);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.4036589);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.464884);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.4431644);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all969 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all969","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all969->SetMinimum(0.4421392);
   Graph_Graph_from_AlphaT_Zoomed_all969->SetMaximum(1.557861);
   Graph_Graph_from_AlphaT_Zoomed_all969->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all969->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all969->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all969);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5813[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis5813);
   AlphaT_Zoomed_all->SetBinContent(7,0.6014445);
   AlphaT_Zoomed_all->SetBinContent(9,1.929073);
   AlphaT_Zoomed_all->SetBinContent(10,0.7697663);
   AlphaT_Zoomed_all->SetBinContent(11,0.3920284);
   AlphaT_Zoomed_all->SetBinContent(13,0.6582618);
   AlphaT_Zoomed_all->SetBinError(7,0.7688671);
   AlphaT_Zoomed_all->SetBinError(9,0.5286673);
   AlphaT_Zoomed_all->SetBinError(10,1.078397);
   AlphaT_Zoomed_all->SetBinError(11,1.102777);
   AlphaT_Zoomed_all->SetBinError(13,0.2491996);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(6.400846);
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
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->Modified();
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all->SetSelected(canvasbtag_morethanzero_DiMuon_275_325/AlphaT_Zoomed_all);
}
