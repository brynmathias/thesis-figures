{
//=========Macro generated from canvas: canvasbtag_morethanzero_OneMuon_275_325/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:09:12 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_OneMuon_275_325/MHT_all = new TCanvas("canvasbtag_morethanzero_OneMuon_275_325/MHT_all", "cannameMHT_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->SetFillColor(0);
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->SetBorderMode(0);
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->SetBorderSize(2);
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->SetTickx(1);
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->SetTicky(1);
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-0.7927655,585,4.12459);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis5461[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5461);
   MHT_all->SetBinContent(4,3);
   MHT_all->SetBinContent(5,8);
   MHT_all->SetBinContent(6,44);
   MHT_all->SetBinContent(7,91);
   MHT_all->SetBinContent(8,117);
   MHT_all->SetBinContent(9,110);
   MHT_all->SetBinContent(10,97);
   MHT_all->SetBinContent(11,70);
   MHT_all->SetBinContent(12,57);
   MHT_all->SetBinContent(13,45);
   MHT_all->SetBinContent(14,35);
   MHT_all->SetBinContent(15,20);
   MHT_all->SetBinContent(16,5);
   MHT_all->SetBinError(4,2.14);
   MHT_all->SetBinError(5,3.03);
   MHT_all->SetBinError(6,6.63325);
   MHT_all->SetBinError(7,9.539392);
   MHT_all->SetBinError(8,10.81665);
   MHT_all->SetBinError(9,10.48809);
   MHT_all->SetBinError(10,9.848858);
   MHT_all->SetBinError(11,8.3666);
   MHT_all->SetBinError(12,7.549834);
   MHT_all->SetBinError(13,6.708204);
   MHT_all->SetBinError(14,5.91608);
   MHT_all->SetBinError(15,4.472136);
   MHT_all->SetBinError(16,2.49);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(4293.921);
   MHT_all->SetEntries(703);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PE0");
   Double_t xAxis5462[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5462);
   MHT_all->SetBinContent(1,2.403044);
   MHT_all->SetBinContent(2,22.69543);
   MHT_all->SetBinContent(3,80.43067);
   MHT_all->SetBinContent(4,115.8187);
   MHT_all->SetBinContent(5,87.25302);
   MHT_all->SetBinContent(6,110.6831);
   MHT_all->SetBinContent(7,55.60924);
   MHT_all->SetBinContent(8,53.81816);
   MHT_all->SetBinContent(9,48.56811);
   MHT_all->SetBinContent(10,56.22028);
   MHT_all->SetBinContent(11,23.98929);
   MHT_all->SetBinContent(12,16.74311);
   MHT_all->SetBinContent(13,15.224);
   MHT_all->SetBinContent(14,12.86593);
   MHT_all->SetBinContent(15,13.56672);
   MHT_all->SetBinError(1,2.19303);
   MHT_all->SetBinError(2,9.278654);
   MHT_all->SetBinError(3,18.14297);
   MHT_all->SetBinError(4,24.27434);
   MHT_all->SetBinError(5,18.696);
   MHT_all->SetBinError(6,23.85563);
   MHT_all->SetBinError(7,14.48031);
   MHT_all->SetBinError(8,13.41851);
   MHT_all->SetBinError(9,14.64592);
   MHT_all->SetBinError(10,20.4442);
   MHT_all->SetBinError(11,9.035469);
   MHT_all->SetBinError(12,6.927504);
   MHT_all->SetBinError(13,7.050618);
   MHT_all->SetBinError(14,6.382886);
   MHT_all->SetBinError(15,7.987124);
   MHT_all->SetEntries(223);
   MHT_all->SetLineColor(4);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("HISTSAME");
   Double_t xAxis5463[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5463);
   MHT_all->SetBinContent(1,36.9581);
   MHT_all->SetBinContent(2,124.6758);
   MHT_all->SetBinContent(3,212.5478);
   MHT_all->SetBinContent(4,285.3851);
   MHT_all->SetBinContent(5,297.1393);
   MHT_all->SetBinContent(6,271.8956);
   MHT_all->SetBinContent(7,227.1243);
   MHT_all->SetBinContent(8,165.6985);
   MHT_all->SetBinContent(9,117.7533);
   MHT_all->SetBinContent(10,85.41414);
   MHT_all->SetBinContent(11,55.31172);
   MHT_all->SetBinContent(12,46.71208);
   MHT_all->SetBinContent(13,30.55909);
   MHT_all->SetBinContent(14,21.97127);
   MHT_all->SetBinContent(15,9.119067);
   MHT_all->SetBinContent(16,1.887942);
   MHT_all->SetBinError(1,3.13625);
   MHT_all->SetBinError(2,6.134001);
   MHT_all->SetBinError(3,7.361825);
   MHT_all->SetBinError(4,8.782249);
   MHT_all->SetBinError(5,9.305334);
   MHT_all->SetBinError(6,8.917439);
   MHT_all->SetBinError(7,8.062872);
   MHT_all->SetBinError(8,6.397143);
   MHT_all->SetBinError(9,5.653087);
   MHT_all->SetBinError(10,5.439102);
   MHT_all->SetBinError(11,3.732063);
   MHT_all->SetBinError(12,4.034355);
   MHT_all->SetBinError(13,2.77978);
   MHT_all->SetBinError(14,2.30556);
   MHT_all->SetBinError(15,1.467703);
   MHT_all->SetBinError(16,0.5885544);
   MHT_all->SetEntries(10414);
   MHT_all->SetLineColor(2);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("HISTSAME");
   Double_t xAxis5464[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5464);
   MHT_all->SetEntries(1);
   MHT_all->SetLineColor(5);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("HISTSAME");
   Double_t xAxis5465[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5465);
   MHT_all->SetBinContent(1,0.9253005);
   MHT_all->SetBinContent(2,0.4382102);
   MHT_all->SetBinContent(3,2.950212);
   MHT_all->SetBinContent(4,2.20084);
   MHT_all->SetBinContent(5,5.457628);
   MHT_all->SetBinContent(6,2.010241);
   MHT_all->SetBinContent(7,0.8463089);
   MHT_all->SetBinContent(8,2.931188);
   MHT_all->SetBinContent(9,0.2781055);
   MHT_all->SetBinContent(12,0.02819469);
   MHT_all->SetBinContent(14,0.4382102);
   MHT_all->SetBinError(1,0.6551986);
   MHT_all->SetBinError(2,0.4382102);
   MHT_all->SetBinError(3,1.230137);
   MHT_all->SetBinError(4,0.9912412);
   MHT_all->SetBinError(5,1.638855);
   MHT_all->SetBinError(6,0.9026503);
   MHT_all->SetBinError(7,0.5806464);
   MHT_all->SetBinError(8,1.390491);
   MHT_all->SetBinError(9,0.2781055);
   MHT_all->SetBinError(12,0.02819469);
   MHT_all->SetBinError(14,0.4382102);
   MHT_all->SetEntries(52);
   MHT_all->SetLineColor(6);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("HISTSAME");
   Double_t xAxis5466[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5466);
   MHT_all->SetBinContent(1,0.1191592);
   MHT_all->SetBinContent(2,0.4616415);
   MHT_all->SetBinContent(3,0.4745381);
   MHT_all->SetBinContent(4,0.5463735);
   MHT_all->SetBinContent(5,0.6169069);
   MHT_all->SetBinContent(6,1.089285);
   MHT_all->SetBinContent(7,0.8293147);
   MHT_all->SetBinContent(8,0.4471587);
   MHT_all->SetBinContent(9,0.4405992);
   MHT_all->SetBinContent(10,0.414811);
   MHT_all->SetBinContent(11,0.4604508);
   MHT_all->SetBinContent(12,0.3922806);
   MHT_all->SetBinContent(13,0.4424086);
   MHT_all->SetBinContent(14,0.6901195);
   MHT_all->SetBinContent(15,0.3583812);
   MHT_all->SetBinContent(16,0.3448509);
   MHT_all->SetBinContent(17,0.00908894);
   MHT_all->SetBinError(1,0.0560441);
   MHT_all->SetBinError(2,0.1134956);
   MHT_all->SetBinError(3,0.1132931);
   MHT_all->SetBinError(4,0.1219449);
   MHT_all->SetBinError(5,0.1285921);
   MHT_all->SetBinError(6,0.1909788);
   MHT_all->SetBinError(7,0.1520965);
   MHT_all->SetBinError(8,0.1111938);
   MHT_all->SetBinError(9,0.1222995);
   MHT_all->SetBinError(10,0.1163147);
   MHT_all->SetBinError(11,0.1260891);
   MHT_all->SetBinError(12,0.1062692);
   MHT_all->SetBinError(13,0.1236452);
   MHT_all->SetBinError(14,0.1538302);
   MHT_all->SetBinError(15,0.1088408);
   MHT_all->SetBinError(16,0.1059262);
   MHT_all->SetBinError(17,0.00908894);
   MHT_all->SetEntries(387);
   MHT_all->SetLineColor(44);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("HISTSAME");
   Double_t xAxis5467[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5467);
   MHT_all->SetBinContent(1,49.74534);
   MHT_all->SetBinError(1,49.74534);
   MHT_all->SetEntries(2);
   MHT_all->SetLineColor(7);
   MHT_all->SetLineStyle(10);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("HISTSAME");
   Double_t xAxis5468[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5468);
   MHT_all->SetBinContent(1,6.610273);
   MHT_all->SetBinContent(2,14.28628);
   MHT_all->SetBinContent(3,21.7988);
   MHT_all->SetBinContent(4,25.44111);
   MHT_all->SetBinContent(5,28.90074);
   MHT_all->SetBinContent(6,25.06555);
   MHT_all->SetBinContent(7,22.20459);
   MHT_all->SetBinContent(8,15.80924);
   MHT_all->SetBinContent(9,10.31345);
   MHT_all->SetBinContent(10,7.341654);
   MHT_all->SetBinContent(11,5.852144);
   MHT_all->SetBinContent(12,5.394677);
   MHT_all->SetBinContent(13,4.911376);
   MHT_all->SetBinContent(14,3.738268);
   MHT_all->SetBinContent(15,1.909954);
   MHT_all->SetBinContent(16,0.713497);
   MHT_all->SetBinContent(17,0.04101893);
   MHT_all->SetBinError(1,0.6900467);
   MHT_all->SetBinError(2,0.8866325);
   MHT_all->SetBinError(3,1.140519);
   MHT_all->SetBinError(4,1.251061);
   MHT_all->SetBinError(5,1.275252);
   MHT_all->SetBinError(6,1.198021);
   MHT_all->SetBinError(7,1.185629);
   MHT_all->SetBinError(8,0.9315355);
   MHT_all->SetBinError(9,0.7375278);
   MHT_all->SetBinError(10,0.6399716);
   MHT_all->SetBinError(11,0.5804877);
   MHT_all->SetBinError(12,0.5489263);
   MHT_all->SetBinError(13,0.5043318);
   MHT_all->SetBinError(14,0.4504844);
   MHT_all->SetBinError(15,0.3525219);
   MHT_all->SetBinError(16,0.2031868);
   MHT_all->SetBinError(17,0.04101893);
   MHT_all->SetEntries(4821);
   MHT_all->SetLineColor(40);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("HISTSAME");
   Double_t xAxis5469[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5469);
   MHT_all->SetBinContent(1,96.76122);
   MHT_all->SetBinContent(2,162.5574);
   MHT_all->SetBinContent(3,318.2021);
   MHT_all->SetBinContent(4,429.3921);
   MHT_all->SetBinContent(5,419.3676);
   MHT_all->SetBinContent(6,410.7438);
   MHT_all->SetBinContent(7,306.6137);
   MHT_all->SetBinContent(8,238.7043);
   MHT_all->SetBinContent(9,177.3535);
   MHT_all->SetBinContent(10,149.3909);
   MHT_all->SetBinContent(11,85.6136);
   MHT_all->SetBinContent(12,69.27034);
   MHT_all->SetBinContent(13,51.13687);
   MHT_all->SetBinContent(14,39.7038);
   MHT_all->SetBinContent(15,24.95413);
   MHT_all->SetBinContent(16,2.94629);
   MHT_all->SetBinContent(17,0.05010787);
   MHT_all->SetBinError(1,49.90144);
   MHT_all->SetBinError(2,11.16738);
   MHT_all->SetBinError(3,19.65174);
   MHT_all->SetBinError(4,25.86376);
   MHT_all->SetBinError(5,20.9871);
   MHT_all->SetBinError(6,25.51271);
   MHT_all->SetBinError(7,16.62694);
   MHT_all->SetBinError(8,14.95973);
   MHT_all->SetBinError(9,15.71931);
   MHT_all->SetBinError(10,21.16536);
   MHT_all->SetBinError(11,9.79392);
   MHT_all->SetBinError(12,8.036152);
   MHT_all->SetBinError(13,7.59658);
   MHT_all->SetBinError(14,6.817292);
   MHT_all->SetBinError(15,8.129232);
   MHT_all->SetBinError(16,0.6315865);
   MHT_all->SetBinError(17,0.04201383);
   MHT_all->SetEntries(15900);
   MHT_all->SetLineColor(3);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   MHT_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(30);
   gre->SetName("Graph_from_MHT_all");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   gre->SetPoint(0,10,49.74534);
   gre->SetPointError(0,10,49.74534);
   gre->SetPoint(1,30,0);
   gre->SetPointError(1,10,0);
   gre->SetPoint(2,50,0);
   gre->SetPointError(2,10,0);
   gre->SetPoint(3,70,0);
   gre->SetPointError(3,10,0);
   gre->SetPoint(4,90,0);
   gre->SetPointError(4,10,0);
   gre->SetPoint(5,110,0);
   gre->SetPointError(5,10,0);
   gre->SetPoint(6,130,0);
   gre->SetPointError(6,10,0);
   gre->SetPoint(7,150,0);
   gre->SetPointError(7,10,0);
   gre->SetPoint(8,170,0);
   gre->SetPointError(8,10,0);
   gre->SetPoint(9,190,0);
   gre->SetPointError(9,10,0);
   gre->SetPoint(10,210,0);
   gre->SetPointError(10,10,0);
   gre->SetPoint(11,230,0);
   gre->SetPointError(11,10,0);
   gre->SetPoint(12,250,0);
   gre->SetPointError(12,10,0);
   gre->SetPoint(13,270,0);
   gre->SetPointError(13,10,0);
   gre->SetPoint(14,290,0);
   gre->SetPointError(14,10,0);
   gre->SetPoint(15,310,0);
   gre->SetPointError(15,10,0);
   gre->SetPoint(16,330,0);
   gre->SetPointError(16,10,0);
   gre->SetPoint(17,350,0);
   gre->SetPointError(17,10,0);
   gre->SetPoint(18,370,0);
   gre->SetPointError(18,10,0);
   gre->SetPoint(19,390,0);
   gre->SetPointError(19,10,0);
   gre->SetPoint(20,410,0);
   gre->SetPointError(20,10,0);
   gre->SetPoint(21,430,0);
   gre->SetPointError(21,10,0);
   gre->SetPoint(22,450,0);
   gre->SetPointError(22,10,0);
   gre->SetPoint(23,470,0);
   gre->SetPointError(23,10,0);
   gre->SetPoint(24,490,0);
   gre->SetPointError(24,10,0);
   gre->SetPoint(25,510,0);
   gre->SetPointError(25,10,0);
   gre->SetPoint(26,530,0);
   gre->SetPointError(26,10,0);
   gre->SetPoint(27,550,0);
   gre->SetPointError(27,10,0);
   gre->SetPoint(28,570,0);
   gre->SetPointError(28,10,0);
   gre->SetPoint(29,590,0);
   gre->SetPointError(29,10,0);
   
   TH1F *Graph_Graph_from_MHT_all911 = new TH1F("Graph_Graph_from_MHT_all911","",100,0,660);
   Graph_Graph_from_MHT_all911->SetMinimum(0.1094398);
   Graph_Graph_from_MHT_all911->SetMaximum(109.4398);
   Graph_Graph_from_MHT_all911->SetDirectory(0);
   Graph_Graph_from_MHT_all911->SetStats(0);
   Graph_Graph_from_MHT_all911->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all911->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all911->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all911->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all911->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all911->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all911->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all911->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all911->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all911->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all911);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(30);
   gre->SetName("Graph_from_MHT_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,10,96.76122);
   gre->SetPointError(0,10,49.90144);
   gre->SetPoint(1,30,162.5574);
   gre->SetPointError(1,10,11.16738);
   gre->SetPoint(2,50,318.2021);
   gre->SetPointError(2,10,19.65174);
   gre->SetPoint(3,70,429.3921);
   gre->SetPointError(3,10,25.86376);
   gre->SetPoint(4,90,419.3676);
   gre->SetPointError(4,10,20.9871);
   gre->SetPoint(5,110,410.7438);
   gre->SetPointError(5,10,25.51271);
   gre->SetPoint(6,130,306.6137);
   gre->SetPointError(6,10,16.62694);
   gre->SetPoint(7,150,238.7043);
   gre->SetPointError(7,10,14.95973);
   gre->SetPoint(8,170,177.3535);
   gre->SetPointError(8,10,15.71931);
   gre->SetPoint(9,190,149.3909);
   gre->SetPointError(9,10,21.16536);
   gre->SetPoint(10,210,85.6136);
   gre->SetPointError(10,10,9.79392);
   gre->SetPoint(11,230,69.27034);
   gre->SetPointError(11,10,8.036152);
   gre->SetPoint(12,250,51.13687);
   gre->SetPointError(12,10,7.59658);
   gre->SetPoint(13,270,39.7038);
   gre->SetPointError(13,10,6.817292);
   gre->SetPoint(14,290,24.95413);
   gre->SetPointError(14,10,8.129232);
   gre->SetPoint(15,310,2.94629);
   gre->SetPointError(15,10,0.6315865);
   gre->SetPoint(16,330,0.05010787);
   gre->SetPointError(16,10,0.04201383);
   gre->SetPoint(17,350,0);
   gre->SetPointError(17,10,0);
   gre->SetPoint(18,370,0);
   gre->SetPointError(18,10,0);
   gre->SetPoint(19,390,0);
   gre->SetPointError(19,10,0);
   gre->SetPoint(20,410,0);
   gre->SetPointError(20,10,0);
   gre->SetPoint(21,430,0);
   gre->SetPointError(21,10,0);
   gre->SetPoint(22,450,0);
   gre->SetPointError(22,10,0);
   gre->SetPoint(23,470,0);
   gre->SetPointError(23,10,0);
   gre->SetPoint(24,490,0);
   gre->SetPointError(24,10,0);
   gre->SetPoint(25,510,0);
   gre->SetPointError(25,10,0);
   gre->SetPoint(26,530,0);
   gre->SetPointError(26,10,0);
   gre->SetPoint(27,550,0);
   gre->SetPointError(27,10,0);
   gre->SetPoint(28,570,0);
   gre->SetPointError(28,10,0);
   gre->SetPoint(29,590,0);
   gre->SetPointError(29,10,0);
   
   TH1F *Graph_Graph_from_MHT_all912 = new TH1F("Graph_Graph_from_MHT_all912","",100,0,660);
   Graph_Graph_from_MHT_all912->SetMinimum(0.5007814);
   Graph_Graph_from_MHT_all912->SetMaximum(500.7814);
   Graph_Graph_from_MHT_all912->SetDirectory(0);
   Graph_Graph_from_MHT_all912->SetStats(0);
   Graph_Graph_from_MHT_all912->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all912->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all912->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all912->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all912->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all912->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all912->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all912->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all912->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all912->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all912);
   
   gre->Draw("2");
   
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
   entry=leg->AddEntry("MHT_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MHT_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MHT_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MHT_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MHT_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
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
   entry=leg->AddEntry("MHT_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MHT_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_OneMuon_275_325    Jet Multiplicity=all");
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
   Double_t xAxis5470[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5470);
   MHT_all->SetBinContent(4,3);
   MHT_all->SetBinContent(5,8);
   MHT_all->SetBinContent(6,44);
   MHT_all->SetBinContent(7,91);
   MHT_all->SetBinContent(8,117);
   MHT_all->SetBinContent(9,110);
   MHT_all->SetBinContent(10,97);
   MHT_all->SetBinContent(11,70);
   MHT_all->SetBinContent(12,57);
   MHT_all->SetBinContent(13,45);
   MHT_all->SetBinContent(14,35);
   MHT_all->SetBinContent(15,20);
   MHT_all->SetBinContent(16,5);
   MHT_all->SetBinError(4,2.14);
   MHT_all->SetBinError(5,3.03);
   MHT_all->SetBinError(6,6.63325);
   MHT_all->SetBinError(7,9.539392);
   MHT_all->SetBinError(8,10.81665);
   MHT_all->SetBinError(9,10.48809);
   MHT_all->SetBinError(10,9.848858);
   MHT_all->SetBinError(11,8.3666);
   MHT_all->SetBinError(12,7.549834);
   MHT_all->SetBinError(13,6.708204);
   MHT_all->SetBinError(14,5.91608);
   MHT_all->SetBinError(15,4.472136);
   MHT_all->SetBinError(16,2.49);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(4293.921);
   MHT_all->SetEntries(703);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->cd();
  
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
   Double_t xAxis5471[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5471);
   MHT_all->SetBinContent(4,0.006986622);
   MHT_all->SetBinContent(5,0.01907634);
   MHT_all->SetBinContent(6,0.1071227);
   MHT_all->SetBinContent(7,0.2967904);
   MHT_all->SetBinContent(8,0.4901463);
   MHT_all->SetBinContent(9,0.6202301);
   MHT_all->SetBinContent(10,0.6493033);
   MHT_all->SetBinContent(11,0.8176271);
   MHT_all->SetBinContent(12,0.822863);
   MHT_all->SetBinContent(13,0.8799912);
   MHT_all->SetBinContent(14,0.8815278);
   MHT_all->SetBinContent(15,0.8014706);
   MHT_all->SetBinContent(16,1.697049);
   MHT_all->SetBinError(4,0.7158719);
   MHT_all->SetBinError(5,0.3820419);
   MHT_all->SetBinError(6,0.1630502);
   MHT_all->SetBinError(7,0.1180239);
   MHT_all->SetBinError(8,0.1116898);
   MHT_all->SetBinError(9,0.1301793);
   MHT_all->SetBinError(10,0.1743039);
   MHT_all->SetBinError(11,0.1654459);
   MHT_all->SetBinError(12,0.1760753);
   MHT_all->SetBinError(13,0.210453);
   MHT_all->SetBinError(14,0.2409432);
   MHT_all->SetBinError(15,0.3951255);
   MHT_all->SetBinError(16,0.5421781);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(60.0737);
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
   
   gre = new TGraphErrors(30);
   gre->SetName("Graph_from_MHT_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,10,1);
   gre->SetPointError(0,10,0.5157173);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.06869808);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.06175867);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.06023344);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.05004465);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.06211344);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.05422766);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.06267055);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.0886326);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.1416777);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.1143968);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.1160114);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.1485539);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.1717038);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0.325767);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.2143667);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0.8384676);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,0);
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
   
   TH1F *Graph_Graph_from_MHT_all913 = new TH1F("Graph_Graph_from_MHT_all913","",100,0,660);
   Graph_Graph_from_MHT_all913->SetMinimum(0);
   Graph_Graph_from_MHT_all913->SetMaximum(2.006161);
   Graph_Graph_from_MHT_all913->SetDirectory(0);
   Graph_Graph_from_MHT_all913->SetStats(0);
   Graph_Graph_from_MHT_all913->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all913->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all913->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all913->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all913->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all913->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all913->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all913->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all913->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all913->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all913);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis5472[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis5472);
   MHT_all->SetBinContent(4,0.006986622);
   MHT_all->SetBinContent(5,0.01907634);
   MHT_all->SetBinContent(6,0.1071227);
   MHT_all->SetBinContent(7,0.2967904);
   MHT_all->SetBinContent(8,0.4901463);
   MHT_all->SetBinContent(9,0.6202301);
   MHT_all->SetBinContent(10,0.6493033);
   MHT_all->SetBinContent(11,0.8176271);
   MHT_all->SetBinContent(12,0.822863);
   MHT_all->SetBinContent(13,0.8799912);
   MHT_all->SetBinContent(14,0.8815278);
   MHT_all->SetBinContent(15,0.8014706);
   MHT_all->SetBinContent(16,1.697049);
   MHT_all->SetBinError(4,0.7158719);
   MHT_all->SetBinError(5,0.3820419);
   MHT_all->SetBinError(6,0.1630502);
   MHT_all->SetBinError(7,0.1180239);
   MHT_all->SetBinError(8,0.1116898);
   MHT_all->SetBinError(9,0.1301793);
   MHT_all->SetBinError(10,0.1743039);
   MHT_all->SetBinError(11,0.1654459);
   MHT_all->SetBinError(12,0.1760753);
   MHT_all->SetBinError(13,0.210453);
   MHT_all->SetBinError(14,0.2409432);
   MHT_all->SetBinError(15,0.3951255);
   MHT_all->SetBinError(16,0.5421781);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(60.0737);
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
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->cd();
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->Modified();
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->cd();
   canvasbtag_morethanzero_OneMuon_275_325/MHT_all->SetSelected(canvasbtag_morethanzero_OneMuon_275_325/MHT_all);
}
