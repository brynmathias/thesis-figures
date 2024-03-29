{
//=========Macro generated from canvas: canvasbtag_morethanzero_325_375/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:24:51 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_325_375/MHT_all = new TCanvas("canvasbtag_morethanzero_325_375/MHT_all", "cannameMHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_325_375/MHT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_325_375/MHT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_325_375/MHT_all->SetFillColor(0);
   canvasbtag_morethanzero_325_375/MHT_all->SetBorderMode(0);
   canvasbtag_morethanzero_325_375/MHT_all->SetBorderSize(2);
   canvasbtag_morethanzero_325_375/MHT_all->SetTickx(1);
   canvasbtag_morethanzero_325_375/MHT_all->SetTicky(1);
   canvasbtag_morethanzero_325_375/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-1.203173,585,7.818253);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4164[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4164);
   MHT_all->SetBinContent(1,23);
   MHT_all->SetBinContent(2,103);
   MHT_all->SetBinContent(3,329);
   MHT_all->SetBinContent(4,672);
   MHT_all->SetBinContent(5,1060);
   MHT_all->SetBinContent(6,1388);
   MHT_all->SetBinContent(7,948);
   MHT_all->SetBinContent(8,391);
   MHT_all->SetBinContent(9,154);
   MHT_all->SetBinContent(10,104);
   MHT_all->SetBinContent(11,69);
   MHT_all->SetBinContent(12,51);
   MHT_all->SetBinContent(13,39);
   MHT_all->SetBinContent(14,22);
   MHT_all->SetBinContent(15,20);
   MHT_all->SetBinContent(16,13);
   MHT_all->SetBinContent(17,12);
   MHT_all->SetBinContent(18,11);
   MHT_all->SetBinContent(19,4);
   MHT_all->SetBinError(1,4.795832);
   MHT_all->SetBinError(2,10.14889);
   MHT_all->SetBinError(3,18.13836);
   MHT_all->SetBinError(4,25.92296);
   MHT_all->SetBinError(5,32.55764);
   MHT_all->SetBinError(6,37.25587);
   MHT_all->SetBinError(7,30.78961);
   MHT_all->SetBinError(8,19.77372);
   MHT_all->SetBinError(9,12.40967);
   MHT_all->SetBinError(10,10.19804);
   MHT_all->SetBinError(11,8.306624);
   MHT_all->SetBinError(12,7.141428);
   MHT_all->SetBinError(13,6.244998);
   MHT_all->SetBinError(14,4.690416);
   MHT_all->SetBinError(15,4.472136);
   MHT_all->SetBinError(16,3.605551);
   MHT_all->SetBinError(17,3.464102);
   MHT_all->SetBinError(18,3.316625);
   MHT_all->SetBinError(19,2.3);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(8243479);
   MHT_all->SetEntries(5414);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("");
   Double_t xAxis4165[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4165);
   MHT_all->SetBinContent(1,13.0411);
   MHT_all->SetBinContent(2,28.72396);
   MHT_all->SetBinContent(3,43.29863);
   MHT_all->SetBinContent(4,52.08517);
   MHT_all->SetBinContent(5,56.06809);
   MHT_all->SetBinContent(6,61.02217);
   MHT_all->SetBinContent(7,53.67071);
   MHT_all->SetBinContent(8,41.89378);
   MHT_all->SetBinContent(9,36.12719);
   MHT_all->SetBinContent(10,26.86092);
   MHT_all->SetBinContent(11,17.39067);
   MHT_all->SetBinContent(12,14.97864);
   MHT_all->SetBinContent(13,10.89495);
   MHT_all->SetBinContent(14,7.760621);
   MHT_all->SetBinContent(15,6.383061);
   MHT_all->SetBinContent(16,7.482527);
   MHT_all->SetBinContent(17,5.864522);
   MHT_all->SetBinContent(18,3.498469);
   MHT_all->SetBinContent(19,0.4439082);
   MHT_all->SetBinError(1,1.033626);
   MHT_all->SetBinError(2,1.44208);
   MHT_all->SetBinError(3,1.85319);
   MHT_all->SetBinError(4,2.02345);
   MHT_all->SetBinError(5,2.231618);
   MHT_all->SetBinError(6,2.167922);
   MHT_all->SetBinError(7,2.127397);
   MHT_all->SetBinError(8,1.770868);
   MHT_all->SetBinError(9,1.815811);
   MHT_all->SetBinError(10,1.404847);
   MHT_all->SetBinError(11,1.115519);
   MHT_all->SetBinError(12,1.035005);
   MHT_all->SetBinError(13,0.9091921);
   MHT_all->SetBinError(14,0.7617528);
   MHT_all->SetBinError(15,0.6616833);
   MHT_all->SetBinError(16,0.8138394);
   MHT_all->SetBinError(17,0.6372057);
   MHT_all->SetBinError(18,0.5055851);
   MHT_all->SetBinError(19,0.1850114);
   MHT_all->SetEntries(8623);
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
   
   TH1F *_stack_278 = new TH1F("_stack_278","",30,0,600);
   _stack_278->SetMinimum(332.588);
   _stack_278->SetMaximum(1330352);
   _stack_278->SetDirectory(0);
   _stack_278->SetStats(0);
   _stack_278->GetXaxis()->SetLabelFont(42);
   _stack_278->GetXaxis()->SetLabelOffset(0.007);
   _stack_278->GetXaxis()->SetLabelSize(0.05);
   _stack_278->GetXaxis()->SetTitleSize(0.05);
   _stack_278->GetYaxis()->SetLabelFont(42);
   _stack_278->GetYaxis()->SetLabelOffset(0.007);
   _stack_278->GetYaxis()->SetLabelSize(0.05);
   _stack_278->GetZaxis()->SetLabelFont(42);
   _stack_278->GetZaxis()->SetLabelOffset(0.007);
   _stack_278->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_278);
   
   Double_t xAxis4166[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4166);
   MHT_all->SetBinContent(1,712.3416);
   MHT_all->SetBinContent(2,1362.667);
   MHT_all->SetBinContent(3,1286.269);
   MHT_all->SetBinContent(4,1024.96);
   MHT_all->SetBinContent(5,700.9019);
   MHT_all->SetBinContent(6,589.7653);
   MHT_all->SetBinContent(7,399.8723);
   MHT_all->SetBinContent(8,265.6018);
   MHT_all->SetBinContent(9,203.5453);
   MHT_all->SetBinContent(10,121.6298);
   MHT_all->SetBinContent(11,80.68012);
   MHT_all->SetBinContent(12,57.57086);
   MHT_all->SetBinContent(13,28.56828);
   MHT_all->SetBinContent(14,25.28492);
   MHT_all->SetBinContent(15,27.45203);
   MHT_all->SetBinContent(16,15.20186);
   MHT_all->SetBinContent(17,17.25305);
   MHT_all->SetBinContent(18,5.739244);
   MHT_all->SetBinContent(19,0.8675643);
   MHT_all->SetBinError(1,23.89688);
   MHT_all->SetBinError(2,30.18389);
   MHT_all->SetBinError(3,31.82284);
   MHT_all->SetBinError(4,31.83954);
   MHT_all->SetBinError(5,25.05211);
   MHT_all->SetBinError(6,26.5885);
   MHT_all->SetBinError(7,18.34396);
   MHT_all->SetBinError(8,15.40282);
   MHT_all->SetBinError(9,14.76641);
   MHT_all->SetBinError(10,10.33511);
   MHT_all->SetBinError(11,9.640705);
   MHT_all->SetBinError(12,7.869234);
   MHT_all->SetBinError(13,3.970121);
   MHT_all->SetBinError(14,5.271483);
   MHT_all->SetBinError(15,14.62758);
   MHT_all->SetBinError(16,1.833326);
   MHT_all->SetBinError(17,4.103912);
   MHT_all->SetBinError(18,0.8291242);
   MHT_all->SetBinError(19,0.3063407);
   MHT_all->SetEntries(52982);
   MHT_all->SetLineColor(3);
   MHT_all->SetLineWidth(3);
   MHT_all->SetMarkerColor(3);
   MHT_all->SetMarkerStyle(20);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis4167[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4167);
   MHT_all->SetBinContent(1,731506.7);
   MHT_all->SetBinContent(2,822985.2);
   MHT_all->SetBinContent(3,358187.8);
   MHT_all->SetBinContent(4,107701.8);
   MHT_all->SetBinContent(5,26270.88);
   MHT_all->SetBinContent(6,6534.279);
   MHT_all->SetBinContent(7,1236.552);
   MHT_all->SetBinContent(8,122.3545);
   MHT_all->SetBinContent(9,56.95467);
   MHT_all->SetBinContent(10,94.7351);
   MHT_all->SetBinError(1,7916.789);
   MHT_all->SetBinError(2,8484.691);
   MHT_all->SetBinError(3,6157.734);
   MHT_all->SetBinError(4,3100.368);
   MHT_all->SetBinError(5,1424.323);
   MHT_all->SetBinError(6,935.2181);
   MHT_all->SetBinError(7,245.978);
   MHT_all->SetBinError(8,74.64599);
   MHT_all->SetBinError(9,43.44426);
   MHT_all->SetBinError(10,65.60094);
   MHT_all->SetEntries(40830);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_325_375    Jet Multiplicity=all");
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
   Double_t xAxis4168[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4168);
   MHT_all->SetBinContent(1,23);
   MHT_all->SetBinContent(2,103);
   MHT_all->SetBinContent(3,329);
   MHT_all->SetBinContent(4,672);
   MHT_all->SetBinContent(5,1060);
   MHT_all->SetBinContent(6,1388);
   MHT_all->SetBinContent(7,948);
   MHT_all->SetBinContent(8,391);
   MHT_all->SetBinContent(9,154);
   MHT_all->SetBinContent(10,104);
   MHT_all->SetBinContent(11,69);
   MHT_all->SetBinContent(12,51);
   MHT_all->SetBinContent(13,39);
   MHT_all->SetBinContent(14,22);
   MHT_all->SetBinContent(15,20);
   MHT_all->SetBinContent(16,13);
   MHT_all->SetBinContent(17,12);
   MHT_all->SetBinContent(18,11);
   MHT_all->SetBinContent(19,4);
   MHT_all->SetBinError(1,4.795832);
   MHT_all->SetBinError(2,10.14889);
   MHT_all->SetBinError(3,18.13836);
   MHT_all->SetBinError(4,25.92296);
   MHT_all->SetBinError(5,32.55764);
   MHT_all->SetBinError(6,37.25587);
   MHT_all->SetBinError(7,30.78961);
   MHT_all->SetBinError(8,19.77372);
   MHT_all->SetBinError(9,12.40967);
   MHT_all->SetBinError(10,10.19804);
   MHT_all->SetBinError(11,8.306624);
   MHT_all->SetBinError(12,7.141428);
   MHT_all->SetBinError(13,6.244998);
   MHT_all->SetBinError(14,4.690416);
   MHT_all->SetBinError(15,4.472136);
   MHT_all->SetBinError(16,3.605551);
   MHT_all->SetBinError(17,3.464102);
   MHT_all->SetBinError(18,3.316625);
   MHT_all->SetBinError(19,2.3);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(8243479);
   MHT_all->SetEntries(5414);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_325_375/MHT_all->cd();
  
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
   Double_t xAxis4169[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4169);
   MHT_all->SetBinContent(1,0.03228788);
   MHT_all->SetBinContent(2,0.07558707);
   MHT_all->SetBinContent(3,0.2557785);
   MHT_all->SetBinContent(4,0.6556352);
   MHT_all->SetBinContent(5,1.512337);
   MHT_all->SetBinContent(6,2.353479);
   MHT_all->SetBinContent(7,2.370757);
   MHT_all->SetBinContent(8,1.472128);
   MHT_all->SetBinContent(9,0.7565883);
   MHT_all->SetBinContent(10,0.8550536);
   MHT_all->SetBinContent(11,0.8552293);
   MHT_all->SetBinContent(12,0.8858648);
   MHT_all->SetBinContent(13,1.36515);
   MHT_all->SetBinContent(14,0.8700839);
   MHT_all->SetBinContent(15,0.7285436);
   MHT_all->SetBinContent(16,0.8551587);
   MHT_all->SetBinContent(17,0.6955294);
   MHT_all->SetBinContent(18,1.916629);
   MHT_all->SetBinContent(19,4.610609);
   MHT_all->SetBinError(1,0.2111958);
   MHT_all->SetBinError(2,0.100992);
   MHT_all->SetBinError(3,0.06042848);
   MHT_all->SetBinError(4,0.04952856);
   MHT_all->SetBinError(5,0.0471268);
   MHT_all->SetBinError(6,0.05246861);
   MHT_all->SetBinError(7,0.05620787);
   MHT_all->SetBinError(8,0.07694564);
   MHT_all->SetBinError(9,0.1084271);
   MHT_all->SetBinError(10,0.1297521);
   MHT_all->SetBinError(11,0.1696211);
   MHT_all->SetBinError(12,0.1956819);
   MHT_all->SetBinError(13,0.2120225);
   MHT_all->SetBinError(14,0.2981943);
   MHT_all->SetBinError(15,0.5778581);
   MHT_all->SetBinError(16,0.3024354);
   MHT_all->SetBinError(17,0.3740502);
   MHT_all->SetBinError(18,0.3343343);
   MHT_all->SetBinError(19,0.6747649);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(50.08508);
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
   gre->SetPointError(0,10,0.03354694);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.0221506);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.02474041);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.03106417);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.03574268);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.04508318);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.04587453);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.05799213);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.07254604);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.08497183);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.1194929);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.1366878);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.1389695);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.2084833);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0.5328414);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.1205988);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0.2378659);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0.1444658);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,0.3531044);
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
   gre->SetPointError(25,10,0);
   gre->SetPoint(26,530,1);
   gre->SetPointError(26,10,0);
   gre->SetPoint(27,550,1);
   gre->SetPointError(27,10,0);
   gre->SetPoint(28,570,1);
   gre->SetPointError(28,10,0);
   gre->SetPoint(29,590,1);
   gre->SetPointError(29,10,0);
   
   TH1F *Graph_Graph_from_MHT_all695 = new TH1F("Graph_Graph_from_MHT_all695","",100,0,660);
   Graph_Graph_from_MHT_all695->SetMinimum(0.3605903);
   Graph_Graph_from_MHT_all695->SetMaximum(1.63941);
   Graph_Graph_from_MHT_all695->SetDirectory(0);
   Graph_Graph_from_MHT_all695->SetStats(0);
   Graph_Graph_from_MHT_all695->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all695->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all695->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all695->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all695->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all695->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all695->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all695->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all695->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all695->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all695);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4170[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis4170);
   MHT_all->SetBinContent(1,0.03228788);
   MHT_all->SetBinContent(2,0.07558707);
   MHT_all->SetBinContent(3,0.2557785);
   MHT_all->SetBinContent(4,0.6556352);
   MHT_all->SetBinContent(5,1.512337);
   MHT_all->SetBinContent(6,2.353479);
   MHT_all->SetBinContent(7,2.370757);
   MHT_all->SetBinContent(8,1.472128);
   MHT_all->SetBinContent(9,0.7565883);
   MHT_all->SetBinContent(10,0.8550536);
   MHT_all->SetBinContent(11,0.8552293);
   MHT_all->SetBinContent(12,0.8858648);
   MHT_all->SetBinContent(13,1.36515);
   MHT_all->SetBinContent(14,0.8700839);
   MHT_all->SetBinContent(15,0.7285436);
   MHT_all->SetBinContent(16,0.8551587);
   MHT_all->SetBinContent(17,0.6955294);
   MHT_all->SetBinContent(18,1.916629);
   MHT_all->SetBinContent(19,4.610609);
   MHT_all->SetBinError(1,0.2111958);
   MHT_all->SetBinError(2,0.100992);
   MHT_all->SetBinError(3,0.06042848);
   MHT_all->SetBinError(4,0.04952856);
   MHT_all->SetBinError(5,0.0471268);
   MHT_all->SetBinError(6,0.05246861);
   MHT_all->SetBinError(7,0.05620787);
   MHT_all->SetBinError(8,0.07694564);
   MHT_all->SetBinError(9,0.1084271);
   MHT_all->SetBinError(10,0.1297521);
   MHT_all->SetBinError(11,0.1696211);
   MHT_all->SetBinError(12,0.1956819);
   MHT_all->SetBinError(13,0.2120225);
   MHT_all->SetBinError(14,0.2981943);
   MHT_all->SetBinError(15,0.5778581);
   MHT_all->SetBinError(16,0.3024354);
   MHT_all->SetBinError(17,0.3740502);
   MHT_all->SetBinError(18,0.3343343);
   MHT_all->SetBinError(19,0.6747649);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(50.08508);
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
   canvasbtag_morethanzero_325_375/MHT_all->cd();
   canvasbtag_morethanzero_325_375/MHT_all->Modified();
   canvasbtag_morethanzero_325_375/MHT_all->cd();
   canvasbtag_morethanzero_325_375/MHT_all->SetSelected(canvasbtag_morethanzero_325_375/MHT_all);
}
