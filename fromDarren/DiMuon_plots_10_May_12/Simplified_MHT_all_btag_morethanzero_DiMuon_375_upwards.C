{
//=========Macro generated from canvas: canvasbtag_morethanzero_DiMuon_375_475/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:46:54 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_DiMuon_375_475/MHT_all = new TCanvas("canvasbtag_morethanzero_DiMuon_375_475/MHT_all", "cannameMHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->SetFillColor(0);
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->SetBorderMode(0);
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->SetBorderSize(2);
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->SetTickx(1);
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->SetTicky(1);
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-0.6029017,585,2.415815);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3654[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis3654);
   MHT_all->SetBinContent(2,3);
   MHT_all->SetBinContent(3,2);
   MHT_all->SetBinContent(4,8);
   MHT_all->SetBinContent(5,10);
   MHT_all->SetBinContent(6,8);
   MHT_all->SetBinContent(7,8);
   MHT_all->SetBinContent(8,6);
   MHT_all->SetBinContent(9,13);
   MHT_all->SetBinContent(10,7);
   MHT_all->SetBinContent(11,8);
   MHT_all->SetBinContent(12,2);
   MHT_all->SetBinContent(13,6);
   MHT_all->SetBinContent(14,3);
   MHT_all->SetBinContent(15,6);
   MHT_all->SetBinContent(16,3);
   MHT_all->SetBinContent(17,3);
   MHT_all->SetBinContent(19,1);
   MHT_all->SetBinContent(22,1);
   MHT_all->SetBinContent(24,1);
   MHT_all->SetBinContent(25,1);
   MHT_all->SetBinContent(26,2);
   MHT_all->SetBinContent(30,1);
   MHT_all->SetBinError(2,2.14);
   MHT_all->SetBinError(3,2);
   MHT_all->SetBinError(4,3.03);
   MHT_all->SetBinError(5,3.162278);
   MHT_all->SetBinError(6,3.03);
   MHT_all->SetBinError(7,3.03);
   MHT_all->SetBinError(8,2.68);
   MHT_all->SetBinError(9,3.605551);
   MHT_all->SetBinError(10,2.86);
   MHT_all->SetBinError(11,3.03);
   MHT_all->SetBinError(12,2);
   MHT_all->SetBinError(13,2.68);
   MHT_all->SetBinError(14,2.14);
   MHT_all->SetBinError(15,2.68);
   MHT_all->SetBinError(16,2.14);
   MHT_all->SetBinError(17,2.14);
   MHT_all->SetBinError(19,1);
   MHT_all->SetBinError(22,1);
   MHT_all->SetBinError(24,1);
   MHT_all->SetBinError(25,1);
   MHT_all->SetBinError(26,2);
   MHT_all->SetBinError(30,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(130);
   MHT_all->SetEntries(102);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("");
   Double_t xAxis3655[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis3655);
   MHT_all->SetEntries(1);
   MHT_all->SetLineColor(5);
   MHT_all->SetLineWidth(3);
   MHT_all->SetMarkerStyle(20);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_244 = new TH1F("_stack_244","",30,0,600);
   _stack_244->SetMinimum(0.004798501);
   _stack_244->SetMaximum(19.194);
   _stack_244->SetDirectory(0);
   _stack_244->SetStats(0);
   _stack_244->GetXaxis()->SetLabelFont(42);
   _stack_244->GetXaxis()->SetLabelOffset(0.007);
   _stack_244->GetXaxis()->SetLabelSize(0.05);
   _stack_244->GetXaxis()->SetTitleSize(0.05);
   _stack_244->GetYaxis()->SetLabelFont(42);
   _stack_244->GetYaxis()->SetLabelOffset(0.007);
   _stack_244->GetYaxis()->SetLabelSize(0.05);
   _stack_244->GetZaxis()->SetLabelFont(42);
   _stack_244->GetZaxis()->SetLabelOffset(0.007);
   _stack_244->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_244);
   
   Double_t xAxis3656[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis3656);
   MHT_all->SetBinContent(1,0.956177);
   MHT_all->SetBinContent(2,5.078178);
   MHT_all->SetBinContent(3,2.734594);
   MHT_all->SetBinContent(4,5.406698);
   MHT_all->SetBinContent(5,4.103895);
   MHT_all->SetBinContent(6,5.272364);
   MHT_all->SetBinContent(7,4.760887);
   MHT_all->SetBinContent(8,9.891155);
   MHT_all->SetBinContent(9,7.093719);
   MHT_all->SetBinContent(10,4.03575);
   MHT_all->SetBinContent(11,3.575355);
   MHT_all->SetBinContent(12,2.719707);
   MHT_all->SetBinContent(13,3.07898);
   MHT_all->SetBinContent(14,4.048139);
   MHT_all->SetBinContent(15,4.002851);
   MHT_all->SetBinContent(16,1.736359);
   MHT_all->SetBinContent(17,0.9299456);
   MHT_all->SetBinContent(18,0.9274592);
   MHT_all->SetBinContent(19,1.462692);
   MHT_all->SetBinContent(20,1.373495);
   MHT_all->SetBinContent(21,1.143855);
   MHT_all->SetBinContent(22,0.07808592);
   MHT_all->SetBinContent(23,1.586139);
   MHT_all->SetBinContent(24,0.006708972);
   MHT_all->SetBinContent(25,0.00253158);
   MHT_all->SetBinContent(26,2.720776);
   MHT_all->SetBinContent(28,1.141107);
   MHT_all->SetBinContent(29,0.6678838);
   MHT_all->SetBinContent(30,0.502068);
   MHT_all->SetBinContent(31,0.4634214);
   MHT_all->SetBinError(1,0.5459426);
   MHT_all->SetBinError(2,1.453619);
   MHT_all->SetBinError(3,0.931851);
   MHT_all->SetBinError(4,1.616005);
   MHT_all->SetBinError(5,1.221249);
   MHT_all->SetBinError(6,1.347334);
   MHT_all->SetBinError(7,1.333419);
   MHT_all->SetBinError(8,2.105096);
   MHT_all->SetBinError(9,1.632134);
   MHT_all->SetBinError(10,1.681835);
   MHT_all->SetBinError(11,1.146571);
   MHT_all->SetBinError(12,0.9009536);
   MHT_all->SetBinError(13,1.313386);
   MHT_all->SetBinError(14,1.293235);
   MHT_all->SetBinError(15,1.260226);
   MHT_all->SetBinError(16,0.9330889);
   MHT_all->SetBinError(17,0.4865696);
   MHT_all->SetBinError(18,0.5408207);
   MHT_all->SetBinError(19,0.6876849);
   MHT_all->SetBinError(20,0.9515769);
   MHT_all->SetBinError(21,0.6798232);
   MHT_all->SetBinError(22,0.0723596);
   MHT_all->SetBinError(23,1.048498);
   MHT_all->SetBinError(24,0.006708972);
   MHT_all->SetBinError(25,0.00253158);
   MHT_all->SetBinError(26,1.649478);
   MHT_all->SetBinError(28,0.717957);
   MHT_all->SetBinError(29,0.6678838);
   MHT_all->SetBinError(30,0.502068);
   MHT_all->SetBinError(31,0.4634214);
   MHT_all->SetEntries(372);
   MHT_all->SetLineColor(3);
   MHT_all->SetLineWidth(3);
   MHT_all->SetMarkerColor(3);
   MHT_all->SetMarkerStyle(20);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis3657[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis3657);
   MHT_all->SetEntries(1);
   MHT_all->SetLineColor(7);
   MHT_all->SetLineStyle(10);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
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
   TLegendEntry *entry=leg->AddEntry("MHT_all","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("MHT_all","Zinv","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MHT_all","Combined EWK","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MHT_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_DiMuon_375_    Jet Multiplicity=all");
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
   Double_t xAxis3658[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis3658);
   MHT_all->SetBinContent(2,3);
   MHT_all->SetBinContent(3,2);
   MHT_all->SetBinContent(4,8);
   MHT_all->SetBinContent(5,10);
   MHT_all->SetBinContent(6,8);
   MHT_all->SetBinContent(7,8);
   MHT_all->SetBinContent(8,6);
   MHT_all->SetBinContent(9,13);
   MHT_all->SetBinContent(10,7);
   MHT_all->SetBinContent(11,8);
   MHT_all->SetBinContent(12,2);
   MHT_all->SetBinContent(13,6);
   MHT_all->SetBinContent(14,3);
   MHT_all->SetBinContent(15,6);
   MHT_all->SetBinContent(16,3);
   MHT_all->SetBinContent(17,3);
   MHT_all->SetBinContent(19,1);
   MHT_all->SetBinContent(22,1);
   MHT_all->SetBinContent(24,1);
   MHT_all->SetBinContent(25,1);
   MHT_all->SetBinContent(26,2);
   MHT_all->SetBinContent(30,1);
   MHT_all->SetBinError(2,2.14);
   MHT_all->SetBinError(3,2);
   MHT_all->SetBinError(4,3.03);
   MHT_all->SetBinError(5,3.162278);
   MHT_all->SetBinError(6,3.03);
   MHT_all->SetBinError(7,3.03);
   MHT_all->SetBinError(8,2.68);
   MHT_all->SetBinError(9,3.605551);
   MHT_all->SetBinError(10,2.86);
   MHT_all->SetBinError(11,3.03);
   MHT_all->SetBinError(12,2);
   MHT_all->SetBinError(13,2.68);
   MHT_all->SetBinError(14,2.14);
   MHT_all->SetBinError(15,2.68);
   MHT_all->SetBinError(16,2.14);
   MHT_all->SetBinError(17,2.14);
   MHT_all->SetBinError(19,1);
   MHT_all->SetBinError(22,1);
   MHT_all->SetBinError(24,1);
   MHT_all->SetBinError(25,1);
   MHT_all->SetBinError(26,2);
   MHT_all->SetBinError(30,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(130);
   MHT_all->SetEntries(102);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-65,-0.25,585,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis3659[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis3659);
   MHT_all->SetBinContent(2,0.590763);
   MHT_all->SetBinContent(3,0.7313699);
   MHT_all->SetBinContent(4,1.479646);
   MHT_all->SetBinContent(5,2.43671);
   MHT_all->SetBinContent(6,1.517346);
   MHT_all->SetBinContent(7,1.680359);
   MHT_all->SetBinContent(8,0.6066025);
   MHT_all->SetBinContent(9,1.832607);
   MHT_all->SetBinContent(10,1.734498);
   MHT_all->SetBinContent(11,2.23754);
   MHT_all->SetBinContent(12,0.7353734);
   MHT_all->SetBinContent(13,1.948697);
   MHT_all->SetBinContent(14,0.7410813);
   MHT_all->SetBinContent(15,1.498932);
   MHT_all->SetBinContent(16,1.727753);
   MHT_all->SetBinContent(17,3.225995);
   MHT_all->SetBinContent(19,0.6836711);
   MHT_all->SetBinContent(22,12.80641);
   MHT_all->SetBinContent(24,149.0541);
   MHT_all->SetBinContent(25,395.0103);
   MHT_all->SetBinContent(26,0.7350844);
   MHT_all->SetBinContent(30,1.991762);
   MHT_all->SetBinError(2,0.7686237);
   MHT_all->SetBinError(3,1.056466);
   MHT_all->SetBinError(4,0.4824795);
   MHT_all->SetBinError(5,0.4342299);
   MHT_all->SetBinError(6,0.4568978);
   MHT_all->SetBinError(7,0.4710576);
   MHT_all->SetBinError(8,0.4947788);
   MHT_all->SetBinError(9,0.3603618);
   MHT_all->SetBinError(10,0.5836077);
   MHT_all->SetBinError(11,0.4962781);
   MHT_all->SetBinError(12,1.053441);
   MHT_all->SetBinError(13,0.6176318);
   MHT_all->SetBinError(14,0.7816021);
   MHT_all->SetBinError(15,0.5464708);
   MHT_all->SetBinError(16,0.8930982);
   MHT_all->SetBinError(17,0.8846511);
   MHT_all->SetBinError(19,1.105007);
   MHT_all->SetBinError(22,1.363345);
   MHT_all->SetBinError(24,1.414214);
   MHT_all->SetBinError(25,1.414214);
   MHT_all->SetBinError(26,1.16942);
   MHT_all->SetBinError(30,1.414214);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(0.9525813);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetXaxis()->SetLabelSize(0.12);
   MHT_all->GetYaxis()->SetTitle("Data/MC");
   MHT_all->GetYaxis()->SetNdivisions(505);
   MHT_all->GetYaxis()->SetLabelSize(0.11);
   MHT_all->GetYaxis()->SetTitleSize(0.1);
   MHT_all->GetYaxis()->SetTitleOffset(0.5);
   MHT_all->Draw("P");
   
   TGraphErrors *gre = new TGraphErrors(30);
   gre->SetName("Graph_from_MHT_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,10,1);
   gre->SetPointError(0,10,0.5709639);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.2862481);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.3407639);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.2988894);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.297583);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.2555465);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.2800779);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.2128261);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.2300816);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.4167342);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.3206873);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.3312687);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.4265652);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.3194642);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0.314832);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.5373824);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0.5232238);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0.5831208);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,0.4701503);
   gre->SetPoint(19,390,1);
   gre->SetPointError(19,10,0.6928142);
   gre->SetPoint(20,410,1);
   gre->SetPointError(20,10,0.5943263);
   gre->SetPoint(21,430,1);
   gre->SetPointError(21,10,0.9266664);
   gre->SetPoint(22,450,1);
   gre->SetPointError(22,10,0.6610384);
   gre->SetPoint(23,470,1);
   gre->SetPointError(23,10,1);
   gre->SetPoint(24,490,1);
   gre->SetPointError(24,10,1);
   gre->SetPoint(25,510,1);
   gre->SetPointError(25,10,0.6062526);
   gre->SetPoint(26,530,1);
   gre->SetPointError(26,10,0);
   gre->SetPoint(27,550,1);
   gre->SetPointError(27,10,0.6291758);
   gre->SetPoint(28,570,1);
   gre->SetPointError(28,10,1);
   gre->SetPoint(29,590,1);
   gre->SetPointError(29,10,1);
   
   TH1F *Graph_Graph_from_MHT_all610 = new TH1F("Graph_Graph_from_MHT_all610","",100,0,660);
   Graph_Graph_from_MHT_all610->SetMinimum(0);
   Graph_Graph_from_MHT_all610->SetMaximum(2.2);
   Graph_Graph_from_MHT_all610->SetDirectory(0);
   Graph_Graph_from_MHT_all610->SetStats(0);
   Graph_Graph_from_MHT_all610->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all610->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all610->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all610->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all610->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all610->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all610->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all610->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all610->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all610->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all610);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3660[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis3660);
   MHT_all->SetBinContent(2,0.590763);
   MHT_all->SetBinContent(3,0.7313699);
   MHT_all->SetBinContent(4,1.479646);
   MHT_all->SetBinContent(5,2.43671);
   MHT_all->SetBinContent(6,1.517346);
   MHT_all->SetBinContent(7,1.680359);
   MHT_all->SetBinContent(8,0.6066025);
   MHT_all->SetBinContent(9,1.832607);
   MHT_all->SetBinContent(10,1.734498);
   MHT_all->SetBinContent(11,2.23754);
   MHT_all->SetBinContent(12,0.7353734);
   MHT_all->SetBinContent(13,1.948697);
   MHT_all->SetBinContent(14,0.7410813);
   MHT_all->SetBinContent(15,1.498932);
   MHT_all->SetBinContent(16,1.727753);
   MHT_all->SetBinContent(17,3.225995);
   MHT_all->SetBinContent(19,0.6836711);
   MHT_all->SetBinContent(22,12.80641);
   MHT_all->SetBinContent(24,149.0541);
   MHT_all->SetBinContent(25,395.0103);
   MHT_all->SetBinContent(26,0.7350844);
   MHT_all->SetBinContent(30,1.991762);
   MHT_all->SetBinError(2,0.7686237);
   MHT_all->SetBinError(3,1.056466);
   MHT_all->SetBinError(4,0.4824795);
   MHT_all->SetBinError(5,0.4342299);
   MHT_all->SetBinError(6,0.4568978);
   MHT_all->SetBinError(7,0.4710576);
   MHT_all->SetBinError(8,0.4947788);
   MHT_all->SetBinError(9,0.3603618);
   MHT_all->SetBinError(10,0.5836077);
   MHT_all->SetBinError(11,0.4962781);
   MHT_all->SetBinError(12,1.053441);
   MHT_all->SetBinError(13,0.6176318);
   MHT_all->SetBinError(14,0.7816021);
   MHT_all->SetBinError(15,0.5464708);
   MHT_all->SetBinError(16,0.8930982);
   MHT_all->SetBinError(17,0.8846511);
   MHT_all->SetBinError(19,1.105007);
   MHT_all->SetBinError(22,1.363345);
   MHT_all->SetBinError(24,1.414214);
   MHT_all->SetBinError(25,1.414214);
   MHT_all->SetBinError(26,1.16942);
   MHT_all->SetBinError(30,1.414214);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(0.9525813);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetXaxis()->SetLabelSize(0.12);
   MHT_all->GetYaxis()->SetTitle("Data/MC");
   MHT_all->GetYaxis()->SetNdivisions(505);
   MHT_all->GetYaxis()->SetLabelSize(0.11);
   MHT_all->GetYaxis()->SetTitleSize(0.1);
   MHT_all->GetYaxis()->SetTitleOffset(0.5);
   MHT_all->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->cd();
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->Modified();
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->cd();
   canvasbtag_morethanzero_DiMuon_375_475/MHT_all->SetSelected(canvasbtag_morethanzero_DiMuon_375_475/MHT_all);
}
