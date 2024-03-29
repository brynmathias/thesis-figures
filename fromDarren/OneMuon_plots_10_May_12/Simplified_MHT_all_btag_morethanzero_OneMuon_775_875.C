{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_775_875/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:08:52 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_775_875/MHT_all = new TCanvas("canvasbtag_morethanzero_OneMuon_775_875/MHT_all", "cannameMHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-0.5519834,585,1.95755);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4824[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4824);
   MHT_all->SetBinContent(4,2);
   MHT_all->SetBinContent(5,3);
   MHT_all->SetBinContent(6,2);
   MHT_all->SetBinContent(8,1);
   MHT_all->SetBinContent(9,2);
   MHT_all->SetBinContent(10,5);
   MHT_all->SetBinContent(11,4);
   MHT_all->SetBinContent(13,2);
   MHT_all->SetBinContent(14,4);
   MHT_all->SetBinContent(15,2);
   MHT_all->SetBinContent(16,2);
   MHT_all->SetBinContent(17,1);
   MHT_all->SetBinContent(18,1);
   MHT_all->SetBinContent(21,1);
   MHT_all->SetBinContent(26,1);
   MHT_all->SetBinError(4,2);
   MHT_all->SetBinError(5,2.14);
   MHT_all->SetBinError(6,2);
   MHT_all->SetBinError(8,1);
   MHT_all->SetBinError(9,2);
   MHT_all->SetBinError(10,2.49);
   MHT_all->SetBinError(11,2.3);
   MHT_all->SetBinError(13,2);
   MHT_all->SetBinError(14,2.3);
   MHT_all->SetBinError(15,2);
   MHT_all->SetBinError(16,2);
   MHT_all->SetBinError(17,1);
   MHT_all->SetBinError(18,1);
   MHT_all->SetBinError(21,1);
   MHT_all->SetBinError(26,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(50.88581);
   MHT_all->SetEntries(34);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("");
   Double_t xAxis4825[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4825);
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
   
   TH1F *_stack_322 = new TH1F("_stack_322","",30,0,600);
   _stack_322->SetMinimum(0.002456602);
   _stack_322->SetMaximum(9.826408);
   _stack_322->SetDirectory(0);
   _stack_322->SetStats(0);
   _stack_322->GetXaxis()->SetLabelFont(42);
   _stack_322->GetXaxis()->SetLabelOffset(0.007);
   _stack_322->GetXaxis()->SetLabelSize(0.05);
   _stack_322->GetXaxis()->SetTitleSize(0.05);
   _stack_322->GetYaxis()->SetLabelFont(42);
   _stack_322->GetYaxis()->SetLabelOffset(0.007);
   _stack_322->GetYaxis()->SetLabelSize(0.05);
   _stack_322->GetZaxis()->SetLabelFont(42);
   _stack_322->GetZaxis()->SetLabelOffset(0.007);
   _stack_322->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_322);
   
   Double_t xAxis4826[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4826);
   MHT_all->SetBinContent(1,0.04753348);
   MHT_all->SetBinContent(2,0.6684043);
   MHT_all->SetBinContent(3,1.825669);
   MHT_all->SetBinContent(4,1.929415);
   MHT_all->SetBinContent(5,2.209916);
   MHT_all->SetBinContent(6,3.419172);
   MHT_all->SetBinContent(7,3.051701);
   MHT_all->SetBinContent(8,5.088581);
   MHT_all->SetBinContent(9,2.914836);
   MHT_all->SetBinContent(10,2.497883);
   MHT_all->SetBinContent(11,2.849583);
   MHT_all->SetBinContent(12,1.452671);
   MHT_all->SetBinContent(13,2.214092);
   MHT_all->SetBinContent(14,1.458761);
   MHT_all->SetBinContent(15,2.775495);
   MHT_all->SetBinContent(16,2.0628);
   MHT_all->SetBinContent(17,1.385911);
   MHT_all->SetBinContent(18,0.58157);
   MHT_all->SetBinContent(19,1.366511);
   MHT_all->SetBinContent(20,0.3455644);
   MHT_all->SetBinContent(21,0.4626183);
   MHT_all->SetBinContent(22,0.1864502);
   MHT_all->SetBinContent(23,0.2326182);
   MHT_all->SetBinContent(24,0.3851379);
   MHT_all->SetBinContent(25,0.04120891);
   MHT_all->SetBinContent(26,0.897214);
   MHT_all->SetBinContent(27,0.05645457);
   MHT_all->SetBinContent(28,0.05645457);
   MHT_all->SetBinContent(29,0.05910411);
   MHT_all->SetBinContent(31,1.179602);
   MHT_all->SetBinError(1,0.04753348);
   MHT_all->SetBinError(2,0.3898307);
   MHT_all->SetBinError(3,0.6151582);
   MHT_all->SetBinError(4,0.5987215);
   MHT_all->SetBinError(5,0.5823975);
   MHT_all->SetBinError(6,0.7699822);
   MHT_all->SetBinError(7,0.7195486);
   MHT_all->SetBinError(8,1.052924);
   MHT_all->SetBinError(9,0.762191);
   MHT_all->SetBinError(10,0.78158);
   MHT_all->SetBinError(11,0.7955341);
   MHT_all->SetBinError(12,0.4681222);
   MHT_all->SetBinError(13,0.6405173);
   MHT_all->SetBinError(14,0.4570345);
   MHT_all->SetBinError(15,1.088057);
   MHT_all->SetBinError(16,0.7061067);
   MHT_all->SetBinError(17,0.4794033);
   MHT_all->SetBinError(18,0.2117166);
   MHT_all->SetBinError(19,0.5616);
   MHT_all->SetBinError(20,0.2442543);
   MHT_all->SetBinError(21,0.3251036);
   MHT_all->SetBinError(22,0.121947);
   MHT_all->SetBinError(23,0.1153384);
   MHT_all->SetBinError(24,0.2214527);
   MHT_all->SetBinError(25,0.04120891);
   MHT_all->SetBinError(26,0.914932);
   MHT_all->SetBinError(27,0.05645457);
   MHT_all->SetBinError(28,0.05645457);
   MHT_all->SetBinError(29,0.04482886);
   MHT_all->SetBinError(31,0.3919488);
   MHT_all->SetEntries(449);
   MHT_all->SetLineColor(3);
   MHT_all->SetLineWidth(3);
   MHT_all->SetMarkerColor(3);
   MHT_all->SetMarkerStyle(20);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis4827[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4827);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_OneMuon_775_875    Jet Multiplicity=all");
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
   Double_t xAxis4828[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4828);
   MHT_all->SetBinContent(4,2);
   MHT_all->SetBinContent(5,3);
   MHT_all->SetBinContent(6,2);
   MHT_all->SetBinContent(8,1);
   MHT_all->SetBinContent(9,2);
   MHT_all->SetBinContent(10,5);
   MHT_all->SetBinContent(11,4);
   MHT_all->SetBinContent(13,2);
   MHT_all->SetBinContent(14,4);
   MHT_all->SetBinContent(15,2);
   MHT_all->SetBinContent(16,2);
   MHT_all->SetBinContent(17,1);
   MHT_all->SetBinContent(18,1);
   MHT_all->SetBinContent(21,1);
   MHT_all->SetBinContent(26,1);
   MHT_all->SetBinError(4,2);
   MHT_all->SetBinError(5,2.14);
   MHT_all->SetBinError(6,2);
   MHT_all->SetBinError(8,1);
   MHT_all->SetBinError(9,2);
   MHT_all->SetBinError(10,2.49);
   MHT_all->SetBinError(11,2.3);
   MHT_all->SetBinError(13,2);
   MHT_all->SetBinError(14,2.3);
   MHT_all->SetBinError(15,2);
   MHT_all->SetBinError(16,2);
   MHT_all->SetBinError(17,1);
   MHT_all->SetBinError(18,1);
   MHT_all->SetBinError(21,1);
   MHT_all->SetBinError(26,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(50.88581);
   MHT_all->SetEntries(34);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->cd();
  
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
   Double_t xAxis4829[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4829);
   MHT_all->SetBinContent(4,1.036584);
   MHT_all->SetBinContent(5,1.357518);
   MHT_all->SetBinContent(6,0.5849369);
   MHT_all->SetBinContent(8,0.1965184);
   MHT_all->SetBinContent(9,0.686145);
   MHT_all->SetBinContent(10,2.001695);
   MHT_all->SetBinContent(11,1.403714);
   MHT_all->SetBinContent(13,0.9033048);
   MHT_all->SetBinContent(14,2.742054);
   MHT_all->SetBinContent(15,0.7205922);
   MHT_all->SetBinContent(16,0.969556);
   MHT_all->SetBinContent(17,0.721547);
   MHT_all->SetBinContent(18,1.719484);
   MHT_all->SetBinContent(21,2.161609);
   MHT_all->SetBinContent(26,1.114561);
   MHT_all->SetBinError(4,1.047041);
   MHT_all->SetBinError(5,0.7604583);
   MHT_all->SetBinError(6,1.025043);
   MHT_all->SetBinError(8,1.021183);
   MHT_all->SetBinError(9,1.033622);
   MHT_all->SetBinError(10,0.5881398);
   MHT_all->SetBinError(11,0.6391901);
   MHT_all->SetBinError(13,1.041004);
   MHT_all->SetBinError(14,0.654816);
   MHT_all->SetBinError(15,1.074096);
   MHT_all->SetBinError(16,1.056964);
   MHT_all->SetBinError(17,1.058138);
   MHT_all->SetBinError(18,1.064203);
   MHT_all->SetBinError(21,1.222233);
   MHT_all->SetBinError(26,1.428246);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(13.67602);
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
   gre->SetPointError(0,10,1);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.5832259);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.3369494);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.3103125);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.2635383);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.2251955);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.2357861);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.206919);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.2614868);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.3128969);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.2791756);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.3222493);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.2892912);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.3133033);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0.3920228);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.342305);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0.3459121);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0.3640432);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,0.4109736);
   gre->SetPoint(19,390,1);
   gre->SetPointError(19,10,0.7068272);
   gre->SetPoint(20,410,1);
   gre->SetPointError(20,10,0.702747);
   gre->SetPoint(21,430,1);
   gre->SetPointError(21,10,0.6540459);
   gre->SetPoint(22,450,1);
   gre->SetPointError(22,10,0.4958269);
   gre->SetPoint(23,470,1);
   gre->SetPointError(23,10,0.5749959);
   gre->SetPoint(24,490,1);
   gre->SetPointError(24,10,1);
   gre->SetPoint(25,510,1);
   gre->SetPointError(25,10,1.019748);
   gre->SetPoint(26,530,1);
   gre->SetPointError(26,10,1);
   gre->SetPoint(27,550,1);
   gre->SetPointError(27,10,1);
   gre->SetPoint(28,570,1);
   gre->SetPointError(28,10,0.7584727);
   gre->SetPoint(29,590,1);
   gre->SetPointError(29,10,0);
   
   TH1F *Graph_Graph_from_MHT_all805 = new TH1F("Graph_Graph_from_MHT_all805","",100,0,660);
   Graph_Graph_from_MHT_all805->SetMinimum(-0.2236975);
   Graph_Graph_from_MHT_all805->SetMaximum(2.223697);
   Graph_Graph_from_MHT_all805->SetDirectory(0);
   Graph_Graph_from_MHT_all805->SetStats(0);
   Graph_Graph_from_MHT_all805->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all805->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all805->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all805->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all805->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all805->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all805->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all805->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all805->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all805->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all805);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4830[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4830);
   MHT_all->SetBinContent(4,1.036584);
   MHT_all->SetBinContent(5,1.357518);
   MHT_all->SetBinContent(6,0.5849369);
   MHT_all->SetBinContent(8,0.1965184);
   MHT_all->SetBinContent(9,0.686145);
   MHT_all->SetBinContent(10,2.001695);
   MHT_all->SetBinContent(11,1.403714);
   MHT_all->SetBinContent(13,0.9033048);
   MHT_all->SetBinContent(14,2.742054);
   MHT_all->SetBinContent(15,0.7205922);
   MHT_all->SetBinContent(16,0.969556);
   MHT_all->SetBinContent(17,0.721547);
   MHT_all->SetBinContent(18,1.719484);
   MHT_all->SetBinContent(21,2.161609);
   MHT_all->SetBinContent(26,1.114561);
   MHT_all->SetBinError(4,1.047041);
   MHT_all->SetBinError(5,0.7604583);
   MHT_all->SetBinError(6,1.025043);
   MHT_all->SetBinError(8,1.021183);
   MHT_all->SetBinError(9,1.033622);
   MHT_all->SetBinError(10,0.5881398);
   MHT_all->SetBinError(11,0.6391901);
   MHT_all->SetBinError(13,1.041004);
   MHT_all->SetBinError(14,0.654816);
   MHT_all->SetBinError(15,1.074096);
   MHT_all->SetBinError(16,1.056964);
   MHT_all->SetBinError(17,1.058138);
   MHT_all->SetBinError(18,1.064203);
   MHT_all->SetBinError(21,1.222233);
   MHT_all->SetBinError(26,1.428246);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(13.67602);
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
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->cd();
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->Modified();
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->cd();
   canvasbtag_morethanzero_OneMuon_775_875/MHT_all->SetSelected(canvasbtag_morethanzero_OneMuon_775_875/MHT_all);
}
