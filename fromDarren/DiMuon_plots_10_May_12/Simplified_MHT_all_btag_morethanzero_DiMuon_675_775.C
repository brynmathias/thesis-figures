{
//=========Macro generated from canvas: canvasbtag_morethanzero_DiMuon_675_775/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:47:30 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_DiMuon_675_775/MHT_all = new TCanvas("canvasbtag_morethanzero_DiMuon_675_775/MHT_all", "cannameMHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->SetFillColor(0);
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->SetBorderMode(0);
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->SetBorderSize(2);
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->SetTickx(1);
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->SetTicky(1);
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-0.5012875,585,1.501288);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4884[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4884);
   MHT_all->SetBinContent(7,1);
   MHT_all->SetBinContent(8,1);
   MHT_all->SetBinContent(9,1);
   MHT_all->SetBinContent(10,2);
   MHT_all->SetBinContent(11,2);
   MHT_all->SetBinContent(14,1);
   MHT_all->SetBinContent(17,1);
   MHT_all->SetBinError(7,1);
   MHT_all->SetBinError(8,1);
   MHT_all->SetBinError(9,1);
   MHT_all->SetBinError(10,2);
   MHT_all->SetBinError(11,2);
   MHT_all->SetBinError(14,1);
   MHT_all->SetBinError(17,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(20);
   MHT_all->SetEntries(10);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("");
   Double_t xAxis4885[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4885);
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
   
   TH1F *_stack_326 = new TH1F("_stack_326","",30,0,600);
   _stack_326->SetMinimum(0.0005940502);
   _stack_326->SetMaximum(2.376201);
   _stack_326->SetDirectory(0);
   _stack_326->SetStats(0);
   _stack_326->GetXaxis()->SetLabelFont(42);
   _stack_326->GetXaxis()->SetLabelOffset(0.007);
   _stack_326->GetXaxis()->SetLabelSize(0.05);
   _stack_326->GetXaxis()->SetTitleSize(0.05);
   _stack_326->GetYaxis()->SetLabelFont(42);
   _stack_326->GetYaxis()->SetLabelOffset(0.007);
   _stack_326->GetYaxis()->SetLabelSize(0.05);
   _stack_326->GetZaxis()->SetLabelFont(42);
   _stack_326->GetZaxis()->SetLabelOffset(0.007);
   _stack_326->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_326);
   
   Double_t xAxis4886[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4886);
   MHT_all->SetBinContent(2,0.2353455);
   MHT_all->SetBinContent(4,0.3648812);
   MHT_all->SetBinContent(5,0.03690937);
   MHT_all->SetBinContent(6,0.007242861);
   MHT_all->SetBinContent(8,0.4282571);
   MHT_all->SetBinContent(9,0.4071855);
   MHT_all->SetBinContent(10,0.3026934);
   MHT_all->SetBinContent(11,0.08059191);
   MHT_all->SetBinContent(14,0.522069);
   MHT_all->SetBinContent(15,0.522069);
   MHT_all->SetBinContent(16,0.1608371);
   MHT_all->SetBinContent(17,0.2919753);
   MHT_all->SetBinContent(19,0.2353455);
   MHT_all->SetBinContent(26,0.6678838);
   MHT_all->SetBinContent(29,0.6678838);
   MHT_all->SetBinError(2,0.2353455);
   MHT_all->SetBinError(4,0.3360234);
   MHT_all->SetBinError(5,0.03095104);
   MHT_all->SetBinError(6,0.007242861);
   MHT_all->SetBinError(8,0.3101401);
   MHT_all->SetBinError(9,0.4071855);
   MHT_all->SetBinError(10,0.2981124);
   MHT_all->SetBinError(11,0.08059191);
   MHT_all->SetBinError(14,0.522069);
   MHT_all->SetBinError(15,0.522069);
   MHT_all->SetBinError(16,0.1608371);
   MHT_all->SetBinError(17,0.2420629);
   MHT_all->SetBinError(19,0.2353455);
   MHT_all->SetBinError(26,0.8172416);
   MHT_all->SetBinError(29,0.6678838);
   MHT_all->SetEntries(26);
   MHT_all->SetLineColor(3);
   MHT_all->SetLineWidth(3);
   MHT_all->SetMarkerColor(3);
   MHT_all->SetMarkerStyle(20);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis4887[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4887);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_DiMuon_675_775    Jet Multiplicity=all");
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
   Double_t xAxis4888[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4888);
   MHT_all->SetBinContent(7,1);
   MHT_all->SetBinContent(8,1);
   MHT_all->SetBinContent(9,1);
   MHT_all->SetBinContent(10,2);
   MHT_all->SetBinContent(11,2);
   MHT_all->SetBinContent(14,1);
   MHT_all->SetBinContent(17,1);
   MHT_all->SetBinError(7,1);
   MHT_all->SetBinError(8,1);
   MHT_all->SetBinError(9,1);
   MHT_all->SetBinError(10,2);
   MHT_all->SetBinError(11,2);
   MHT_all->SetBinError(14,1);
   MHT_all->SetBinError(17,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(20);
   MHT_all->SetEntries(10);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->cd();
  
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
   Double_t xAxis4889[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4889);
   MHT_all->SetBinContent(8,2.335046);
   MHT_all->SetBinContent(9,2.455883);
   MHT_all->SetBinContent(10,6.607345);
   MHT_all->SetBinContent(11,24.81639);
   MHT_all->SetBinContent(14,1.915456);
   MHT_all->SetBinContent(17,3.424947);
   MHT_all->SetBinError(8,1.234688);
   MHT_all->SetBinError(9,1.414214);
   MHT_all->SetBinError(10,1.403553);
   MHT_all->SetBinError(11,1.414214);
   MHT_all->SetBinError(14,1.414214);
   MHT_all->SetBinError(17,1.298972);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(1.264874);
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
   gre->SetPointError(0,10,0);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,1);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.9209119);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.8385687);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,1);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.7241914);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,1);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.9848657);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,1);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,1);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,1);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,1);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0.8290526);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,1);
   gre->SetPoint(19,390,1);
   gre->SetPointError(19,10,0);
   gre->SetPoint(20,410,1);
   gre->SetPointError(20,10,0);
   gre->SetPoint(21,430,1);
   gre->SetPointError(21,10,0);
   gre->SetPoint(22,450,1);
   gre->SetPointError(22,10,0);
   gre->SetPoint(23,470,1);
   gre->SetPointError(23,10,0);
   gre->SetPoint(24,490,1);
   gre->SetPointError(24,10,0);
   gre->SetPoint(25,510,1);
   gre->SetPointError(25,10,1.223628);
   gre->SetPoint(26,530,1);
   gre->SetPointError(26,10,0);
   gre->SetPoint(27,550,1);
   gre->SetPointError(27,10,0);
   gre->SetPoint(28,570,1);
   gre->SetPointError(28,10,1);
   gre->SetPoint(29,590,1);
   gre->SetPointError(29,10,0);
   
   TH1F *Graph_Graph_from_MHT_all815 = new TH1F("Graph_Graph_from_MHT_all815","",100,0,660);
   Graph_Graph_from_MHT_all815->SetMinimum(-0.468354);
   Graph_Graph_from_MHT_all815->SetMaximum(2.468354);
   Graph_Graph_from_MHT_all815->SetDirectory(0);
   Graph_Graph_from_MHT_all815->SetStats(0);
   Graph_Graph_from_MHT_all815->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all815->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all815->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all815->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all815->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all815->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all815->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all815->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all815->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all815->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all815);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4890[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4890);
   MHT_all->SetBinContent(8,2.335046);
   MHT_all->SetBinContent(9,2.455883);
   MHT_all->SetBinContent(10,6.607345);
   MHT_all->SetBinContent(11,24.81639);
   MHT_all->SetBinContent(14,1.915456);
   MHT_all->SetBinContent(17,3.424947);
   MHT_all->SetBinError(8,1.234688);
   MHT_all->SetBinError(9,1.414214);
   MHT_all->SetBinError(10,1.403553);
   MHT_all->SetBinError(11,1.414214);
   MHT_all->SetBinError(14,1.414214);
   MHT_all->SetBinError(17,1.298972);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(1.264874);
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
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->cd();
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->Modified();
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->cd();
   canvasbtag_morethanzero_DiMuon_675_775/MHT_all->SetSelected(canvasbtag_morethanzero_DiMuon_675_775/MHT_all);
}
