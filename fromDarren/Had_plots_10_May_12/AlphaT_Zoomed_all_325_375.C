{
//=========Macro generated from canvas: canvas325_375/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:22:39 2012) by ROOT version5.32/00
   TCanvas *canvas325_375/AlphaT_Zoomed_all = new TCanvas("canvas325_375/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvas325_375/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvas325_375/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvas325_375/AlphaT_Zoomed_all->SetFillColor(0);
   canvas325_375/AlphaT_Zoomed_all->SetBorderMode(0);
   canvas325_375/AlphaT_Zoomed_all->SetBorderSize(2);
   canvas325_375/AlphaT_Zoomed_all->SetTickx(1);
   canvas325_375/AlphaT_Zoomed_all->SetTicky(1);
   canvas325_375/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-1.293488,0.61875,8.63109);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis421[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis421);
   AlphaT_Zoomed_all->SetBinContent(0,3405);
   AlphaT_Zoomed_all->SetBinContent(1,1060);
   AlphaT_Zoomed_all->SetBinContent(2,1778);
   AlphaT_Zoomed_all->SetBinContent(3,2581);
   AlphaT_Zoomed_all->SetBinContent(4,3089);
   AlphaT_Zoomed_all->SetBinContent(5,3285);
   AlphaT_Zoomed_all->SetBinContent(6,2602);
   AlphaT_Zoomed_all->SetBinContent(7,1299);
   AlphaT_Zoomed_all->SetBinContent(8,504);
   AlphaT_Zoomed_all->SetBinContent(9,248);
   AlphaT_Zoomed_all->SetBinContent(10,169);
   AlphaT_Zoomed_all->SetBinContent(11,134);
   AlphaT_Zoomed_all->SetBinContent(12,109);
   AlphaT_Zoomed_all->SetBinContent(13,876);
   AlphaT_Zoomed_all->SetBinError(0,58.35238);
   AlphaT_Zoomed_all->SetBinError(1,32.55764);
   AlphaT_Zoomed_all->SetBinError(2,42.16634);
   AlphaT_Zoomed_all->SetBinError(3,50.80354);
   AlphaT_Zoomed_all->SetBinError(4,55.57877);
   AlphaT_Zoomed_all->SetBinError(5,57.31492);
   AlphaT_Zoomed_all->SetBinError(6,51.0098);
   AlphaT_Zoomed_all->SetBinError(7,36.04164);
   AlphaT_Zoomed_all->SetBinError(8,22.44994);
   AlphaT_Zoomed_all->SetBinError(9,15.74802);
   AlphaT_Zoomed_all->SetBinError(10,13);
   AlphaT_Zoomed_all->SetBinError(11,11.57584);
   AlphaT_Zoomed_all->SetBinError(12,10.44031);
   AlphaT_Zoomed_all->SetBinError(13,29.5973);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(4.351432e+07);
   AlphaT_Zoomed_all->SetEntries(21139);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PE0");
   Double_t xAxis422[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis422);
   AlphaT_Zoomed_all->SetBinContent(0,3737.056);
   AlphaT_Zoomed_all->SetBinContent(1,1004.237);
   AlphaT_Zoomed_all->SetBinContent(2,1166.999);
   AlphaT_Zoomed_all->SetBinContent(3,1390.034);
   AlphaT_Zoomed_all->SetBinContent(4,1443.789);
   AlphaT_Zoomed_all->SetBinContent(5,738.1886);
   AlphaT_Zoomed_all->SetBinContent(6,475.5534);
   AlphaT_Zoomed_all->SetBinContent(7,198.0544);
   AlphaT_Zoomed_all->SetBinContent(8,159.2489);
   AlphaT_Zoomed_all->SetBinContent(9,78.66124);
   AlphaT_Zoomed_all->SetBinContent(10,118.1864);
   AlphaT_Zoomed_all->SetBinContent(11,84.13495);
   AlphaT_Zoomed_all->SetBinContent(12,68.42589);
   AlphaT_Zoomed_all->SetBinContent(13,270.173);
   AlphaT_Zoomed_all->SetBinError(0,125.5704);
   AlphaT_Zoomed_all->SetBinError(1,65.91788);
   AlphaT_Zoomed_all->SetBinError(2,68.73688);
   AlphaT_Zoomed_all->SetBinError(3,79.68643);
   AlphaT_Zoomed_all->SetBinError(4,81.31531);
   AlphaT_Zoomed_all->SetBinError(5,55.5352);
   AlphaT_Zoomed_all->SetBinError(6,45.70742);
   AlphaT_Zoomed_all->SetBinError(7,27.97062);
   AlphaT_Zoomed_all->SetBinError(8,25.48978);
   AlphaT_Zoomed_all->SetBinError(9,17.36937);
   AlphaT_Zoomed_all->SetBinError(10,39.13903);
   AlphaT_Zoomed_all->SetBinError(11,19.73077);
   AlphaT_Zoomed_all->SetBinError(12,20.24763);
   AlphaT_Zoomed_all->SetBinError(13,33.94778);
   AlphaT_Zoomed_all->SetEntries(3453);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis423[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis423);
   AlphaT_Zoomed_all->SetBinContent(0,939.2757);
   AlphaT_Zoomed_all->SetBinContent(1,447.2382);
   AlphaT_Zoomed_all->SetBinContent(2,636.3554);
   AlphaT_Zoomed_all->SetBinContent(3,842.3364);
   AlphaT_Zoomed_all->SetBinContent(4,1083.025);
   AlphaT_Zoomed_all->SetBinContent(5,586.7916);
   AlphaT_Zoomed_all->SetBinContent(6,244.9883);
   AlphaT_Zoomed_all->SetBinContent(7,123.8842);
   AlphaT_Zoomed_all->SetBinContent(8,82.04337);
   AlphaT_Zoomed_all->SetBinContent(9,49.83872);
   AlphaT_Zoomed_all->SetBinContent(10,32.79486);
   AlphaT_Zoomed_all->SetBinContent(11,22.75326);
   AlphaT_Zoomed_all->SetBinContent(12,18.52305);
   AlphaT_Zoomed_all->SetBinContent(13,96.02192);
   AlphaT_Zoomed_all->SetBinError(0,16.33414);
   AlphaT_Zoomed_all->SetBinError(1,11.36513);
   AlphaT_Zoomed_all->SetBinError(2,13.9819);
   AlphaT_Zoomed_all->SetBinError(3,15.87516);
   AlphaT_Zoomed_all->SetBinError(4,17.9724);
   AlphaT_Zoomed_all->SetBinError(5,12.58557);
   AlphaT_Zoomed_all->SetBinError(6,8.67591);
   AlphaT_Zoomed_all->SetBinError(7,5.803275);
   AlphaT_Zoomed_all->SetBinError(8,4.87949);
   AlphaT_Zoomed_all->SetBinError(9,3.607714);
   AlphaT_Zoomed_all->SetBinError(10,2.977614);
   AlphaT_Zoomed_all->SetBinError(11,2.303613);
   AlphaT_Zoomed_all->SetBinError(12,2.565799);
   AlphaT_Zoomed_all->SetBinError(13,5.087596);
   AlphaT_Zoomed_all->SetEntries(25609);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis424[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis424);
   AlphaT_Zoomed_all->SetBinContent(0,1465.763);
   AlphaT_Zoomed_all->SetBinContent(1,314.4525);
   AlphaT_Zoomed_all->SetBinContent(2,348.4567);
   AlphaT_Zoomed_all->SetBinContent(3,380.3952);
   AlphaT_Zoomed_all->SetBinContent(4,416.022);
   AlphaT_Zoomed_all->SetBinContent(5,316.9121);
   AlphaT_Zoomed_all->SetBinContent(6,209.301);
   AlphaT_Zoomed_all->SetBinContent(7,144.218);
   AlphaT_Zoomed_all->SetBinContent(8,103.8258);
   AlphaT_Zoomed_all->SetBinContent(9,79.36287);
   AlphaT_Zoomed_all->SetBinContent(10,58.58446);
   AlphaT_Zoomed_all->SetBinContent(11,46.98736);
   AlphaT_Zoomed_all->SetBinContent(12,39.64139);
   AlphaT_Zoomed_all->SetBinContent(13,405.7695);
   AlphaT_Zoomed_all->SetBinError(0,10.65186);
   AlphaT_Zoomed_all->SetBinError(1,4.946097);
   AlphaT_Zoomed_all->SetBinError(2,5.373426);
   AlphaT_Zoomed_all->SetBinError(3,5.726998);
   AlphaT_Zoomed_all->SetBinError(4,5.845912);
   AlphaT_Zoomed_all->SetBinError(5,5.386701);
   AlphaT_Zoomed_all->SetBinError(6,4.103517);
   AlphaT_Zoomed_all->SetBinError(7,3.352205);
   AlphaT_Zoomed_all->SetBinError(8,3.033205);
   AlphaT_Zoomed_all->SetBinError(9,2.485154);
   AlphaT_Zoomed_all->SetBinError(10,2.200403);
   AlphaT_Zoomed_all->SetBinError(11,1.874308);
   AlphaT_Zoomed_all->SetBinError(12,1.730182);
   AlphaT_Zoomed_all->SetBinError(13,5.623153);
   AlphaT_Zoomed_all->SetEntries(77750);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis425[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis425);
   AlphaT_Zoomed_all->SetBinContent(0,269.49);
   AlphaT_Zoomed_all->SetBinContent(1,102.9746);
   AlphaT_Zoomed_all->SetBinContent(2,109.9254);
   AlphaT_Zoomed_all->SetBinContent(3,111.0642);
   AlphaT_Zoomed_all->SetBinContent(4,130.3811);
   AlphaT_Zoomed_all->SetBinContent(5,41.573);
   AlphaT_Zoomed_all->SetBinContent(6,17.15168);
   AlphaT_Zoomed_all->SetBinContent(7,3.700475);
   AlphaT_Zoomed_all->SetBinContent(8,2.250063);
   AlphaT_Zoomed_all->SetBinContent(9,0.515285);
   AlphaT_Zoomed_all->SetBinContent(10,2.049415);
   AlphaT_Zoomed_all->SetBinContent(13,1.040104);
   AlphaT_Zoomed_all->SetBinError(0,13.7876);
   AlphaT_Zoomed_all->SetBinError(1,7.70999);
   AlphaT_Zoomed_all->SetBinError(2,9.029913);
   AlphaT_Zoomed_all->SetBinError(3,7.856462);
   AlphaT_Zoomed_all->SetBinError(4,8.681916);
   AlphaT_Zoomed_all->SetBinError(5,5.276354);
   AlphaT_Zoomed_all->SetBinError(6,4.203498);
   AlphaT_Zoomed_all->SetBinError(7,1.41688);
   AlphaT_Zoomed_all->SetBinError(8,0.9211043);
   AlphaT_Zoomed_all->SetBinError(9,0.4879057);
   AlphaT_Zoomed_all->SetBinError(10,1.191408);
   AlphaT_Zoomed_all->SetBinError(13,0.6775455);
   AlphaT_Zoomed_all->SetEntries(1818);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis426[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis426);
   AlphaT_Zoomed_all->SetBinContent(0,73.40527);
   AlphaT_Zoomed_all->SetBinContent(1,32.97906);
   AlphaT_Zoomed_all->SetBinContent(2,39.68738);
   AlphaT_Zoomed_all->SetBinContent(3,49.45385);
   AlphaT_Zoomed_all->SetBinContent(4,61.46691);
   AlphaT_Zoomed_all->SetBinContent(5,19.23832);
   AlphaT_Zoomed_all->SetBinContent(6,4.949472);
   AlphaT_Zoomed_all->SetBinContent(7,3.440072);
   AlphaT_Zoomed_all->SetBinContent(8,1.760997);
   AlphaT_Zoomed_all->SetBinContent(9,1.530625);
   AlphaT_Zoomed_all->SetBinContent(10,1.307968);
   AlphaT_Zoomed_all->SetBinContent(11,0.9484833);
   AlphaT_Zoomed_all->SetBinContent(12,0.8374681);
   AlphaT_Zoomed_all->SetBinContent(13,10.62152);
   AlphaT_Zoomed_all->SetBinError(0,1.413191);
   AlphaT_Zoomed_all->SetBinError(1,0.940808);
   AlphaT_Zoomed_all->SetBinError(2,1.039048);
   AlphaT_Zoomed_all->SetBinError(3,1.156381);
   AlphaT_Zoomed_all->SetBinError(4,1.304055);
   AlphaT_Zoomed_all->SetBinError(5,0.7179592);
   AlphaT_Zoomed_all->SetBinError(6,0.3572812);
   AlphaT_Zoomed_all->SetBinError(7,0.2964531);
   AlphaT_Zoomed_all->SetBinError(8,0.1932193);
   AlphaT_Zoomed_all->SetBinError(9,0.1926148);
   AlphaT_Zoomed_all->SetBinError(10,0.1676777);
   AlphaT_Zoomed_all->SetBinError(11,0.1486431);
   AlphaT_Zoomed_all->SetBinError(12,0.1354868);
   AlphaT_Zoomed_all->SetBinError(13,0.4346363);
   AlphaT_Zoomed_all->SetEntries(21088);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis427[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis427);
   AlphaT_Zoomed_all->SetBinContent(0,4141793);
   AlphaT_Zoomed_all->SetBinContent(1,2248568);
   AlphaT_Zoomed_all->SetBinContent(2,2945314);
   AlphaT_Zoomed_all->SetBinContent(3,3745294);
   AlphaT_Zoomed_all->SetBinContent(4,4348081);
   AlphaT_Zoomed_all->SetBinContent(5,429695);
   AlphaT_Zoomed_all->SetBinContent(6,24278);
   AlphaT_Zoomed_all->SetBinContent(7,545.7093);
   AlphaT_Zoomed_all->SetBinContent(8,106.9083);
   AlphaT_Zoomed_all->SetBinContent(9,57.43201);
   AlphaT_Zoomed_all->SetBinContent(10,0.1350632);
   AlphaT_Zoomed_all->SetBinContent(11,2.243954);
   AlphaT_Zoomed_all->SetBinContent(13,2.243954);
   AlphaT_Zoomed_all->SetBinError(0,19938.44);
   AlphaT_Zoomed_all->SetBinError(1,17764.7);
   AlphaT_Zoomed_all->SetBinError(2,16551.58);
   AlphaT_Zoomed_all->SetBinError(3,18334.67);
   AlphaT_Zoomed_all->SetBinError(4,20786.46);
   AlphaT_Zoomed_all->SetBinError(5,8212.775);
   AlphaT_Zoomed_all->SetBinError(6,6497.536);
   AlphaT_Zoomed_all->SetBinError(7,184.1612);
   AlphaT_Zoomed_all->SetBinError(8,70.48376);
   AlphaT_Zoomed_all->SetBinError(9,57.43201);
   AlphaT_Zoomed_all->SetBinError(10,0.1350632);
   AlphaT_Zoomed_all->SetBinError(11,2.243954);
   AlphaT_Zoomed_all->SetBinError(13,2.243954);
   AlphaT_Zoomed_all->SetEntries(357301);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis428[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis428);
   AlphaT_Zoomed_all->SetBinContent(0,308.056);
   AlphaT_Zoomed_all->SetBinContent(1,126.7729);
   AlphaT_Zoomed_all->SetBinContent(2,151.0555);
   AlphaT_Zoomed_all->SetBinContent(3,180.9528);
   AlphaT_Zoomed_all->SetBinContent(4,216.3987);
   AlphaT_Zoomed_all->SetBinContent(5,81.84251);
   AlphaT_Zoomed_all->SetBinContent(6,21.51303);
   AlphaT_Zoomed_all->SetBinContent(7,11.56018);
   AlphaT_Zoomed_all->SetBinContent(8,5.850655);
   AlphaT_Zoomed_all->SetBinContent(9,4.18313);
   AlphaT_Zoomed_all->SetBinContent(10,3.137063);
   AlphaT_Zoomed_all->SetBinContent(11,1.695471);
   AlphaT_Zoomed_all->SetBinContent(12,1.34442);
   AlphaT_Zoomed_all->SetBinContent(13,8.964575);
   AlphaT_Zoomed_all->SetBinError(0,4.417192);
   AlphaT_Zoomed_all->SetBinError(1,3.063223);
   AlphaT_Zoomed_all->SetBinError(2,3.356964);
   AlphaT_Zoomed_all->SetBinError(3,3.497738);
   AlphaT_Zoomed_all->SetBinError(4,3.927847);
   AlphaT_Zoomed_all->SetBinError(5,2.323979);
   AlphaT_Zoomed_all->SetBinError(6,1.33715);
   AlphaT_Zoomed_all->SetBinError(7,0.8777913);
   AlphaT_Zoomed_all->SetBinError(8,0.6458447);
   AlphaT_Zoomed_all->SetBinError(9,0.5304237);
   AlphaT_Zoomed_all->SetBinError(10,0.4613478);
   AlphaT_Zoomed_all->SetBinError(11,0.29293);
   AlphaT_Zoomed_all->SetBinError(12,0.2734296);
   AlphaT_Zoomed_all->SetBinError(13,0.737064);
   AlphaT_Zoomed_all->SetEntries(23940);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis429[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis429);
   AlphaT_Zoomed_all->SetBinContent(0,4148586);
   AlphaT_Zoomed_all->SetBinContent(1,2250597);
   AlphaT_Zoomed_all->SetBinContent(2,2947767);
   AlphaT_Zoomed_all->SetBinContent(3,3748248);
   AlphaT_Zoomed_all->SetBinContent(4,4351432);
   AlphaT_Zoomed_all->SetBinContent(5,431479.5);
   AlphaT_Zoomed_all->SetBinContent(6,25251.46);
   AlphaT_Zoomed_all->SetBinContent(7,1030.567);
   AlphaT_Zoomed_all->SetBinContent(8,461.8881);
   AlphaT_Zoomed_all->SetBinContent(9,271.5239);
   AlphaT_Zoomed_all->SetBinContent(10,216.1953);
   AlphaT_Zoomed_all->SetBinContent(11,158.7635);
   AlphaT_Zoomed_all->SetBinContent(12,128.7722);
   AlphaT_Zoomed_all->SetBinContent(13,794.8345);
   AlphaT_Zoomed_all->SetBinError(0,19938.85);
   AlphaT_Zoomed_all->SetBinError(1,17764.83);
   AlphaT_Zoomed_all->SetBinError(2,16551.74);
   AlphaT_Zoomed_all->SetBinError(3,18334.86);
   AlphaT_Zoomed_all->SetBinError(4,20786.63);
   AlphaT_Zoomed_all->SetBinError(5,8212.976);
   AlphaT_Zoomed_all->SetBinError(6,6497.705);
   AlphaT_Zoomed_all->SetBinError(7,186.4014);
   AlphaT_Zoomed_all->SetBinError(8,75.1798);
   AlphaT_Zoomed_all->SetBinError(9,60.16543);
   AlphaT_Zoomed_all->SetBinError(10,39.3351);
   AlphaT_Zoomed_all->SetBinError(11,20.08149);
   AlphaT_Zoomed_all->SetBinError(12,20.48504);
   AlphaT_Zoomed_all->SetBinError(13,34.8738);
   AlphaT_Zoomed_all->SetEntries(510959);
   AlphaT_Zoomed_all->SetLineColor(3);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   
   TGraphErrors *gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,2248568);
   gre->SetPointError(0,0.00625,17764.7);
   gre->SetPoint(1,0.46875,2945314);
   gre->SetPointError(1,0.00625,16551.58);
   gre->SetPoint(2,0.48125,3745294);
   gre->SetPointError(2,0.00625,18334.67);
   gre->SetPoint(3,0.49375,4348081);
   gre->SetPointError(3,0.00625,20786.46);
   gre->SetPoint(4,0.50625,429695);
   gre->SetPointError(4,0.00625,8212.775);
   gre->SetPoint(5,0.51875,24278);
   gre->SetPointError(5,0.00625,6497.536);
   gre->SetPoint(6,0.53125,545.7093);
   gre->SetPointError(6,0.00625,184.1612);
   gre->SetPoint(7,0.54375,106.9083);
   gre->SetPointError(7,0.00625,70.48376);
   gre->SetPoint(8,0.55625,57.43201);
   gre->SetPointError(8,0.00625,57.43201);
   gre->SetPoint(9,0.56875,0.1350632);
   gre->SetPointError(9,0.00625,0.1350632);
   gre->SetPoint(10,0.58125,2.243954);
   gre->SetPointError(10,0.00625,2.243954);
   gre->SetPoint(11,0.59375,0);
   gre->SetPointError(11,0.00625,0);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all71 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all71","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all71->SetMinimum(4805.754);
   Graph_Graph_from_AlphaT_Zoomed_all71->SetMaximum(4805754);
   Graph_Graph_from_AlphaT_Zoomed_all71->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all71->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all71->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all71);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,2250597);
   gre->SetPointError(0,0.00625,17764.83);
   gre->SetPoint(1,0.46875,2947767);
   gre->SetPointError(1,0.00625,16551.74);
   gre->SetPoint(2,0.48125,3748248);
   gre->SetPointError(2,0.00625,18334.86);
   gre->SetPoint(3,0.49375,4351432);
   gre->SetPointError(3,0.00625,20786.63);
   gre->SetPoint(4,0.50625,431479.5);
   gre->SetPointError(4,0.00625,8212.976);
   gre->SetPoint(5,0.51875,25251.46);
   gre->SetPointError(5,0.00625,6497.705);
   gre->SetPoint(6,0.53125,1030.567);
   gre->SetPointError(6,0.00625,186.4014);
   gre->SetPoint(7,0.54375,461.8881);
   gre->SetPointError(7,0.00625,75.1798);
   gre->SetPoint(8,0.55625,271.5239);
   gre->SetPointError(8,0.00625,60.16543);
   gre->SetPoint(9,0.56875,216.1953);
   gre->SetPointError(9,0.00625,39.3351);
   gre->SetPoint(10,0.58125,158.7635);
   gre->SetPointError(10,0.00625,20.08149);
   gre->SetPoint(11,0.59375,128.7722);
   gre->SetPointError(11,0.00625,20.48504);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all72 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all72","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all72->SetMinimum(97.45847);
   Graph_Graph_from_AlphaT_Zoomed_all72->SetMaximum(4809430);
   Graph_Graph_from_AlphaT_Zoomed_all72->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all72->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all72->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all72);
   
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
   entry=leg->AddEntry("AlphaT_Zoomed_all","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"325_375    Jet Multiplicity=all");
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
   Double_t xAxis430[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis430);
   AlphaT_Zoomed_all->SetBinContent(0,3405);
   AlphaT_Zoomed_all->SetBinContent(1,1060);
   AlphaT_Zoomed_all->SetBinContent(2,1778);
   AlphaT_Zoomed_all->SetBinContent(3,2581);
   AlphaT_Zoomed_all->SetBinContent(4,3089);
   AlphaT_Zoomed_all->SetBinContent(5,3285);
   AlphaT_Zoomed_all->SetBinContent(6,2602);
   AlphaT_Zoomed_all->SetBinContent(7,1299);
   AlphaT_Zoomed_all->SetBinContent(8,504);
   AlphaT_Zoomed_all->SetBinContent(9,248);
   AlphaT_Zoomed_all->SetBinContent(10,169);
   AlphaT_Zoomed_all->SetBinContent(11,134);
   AlphaT_Zoomed_all->SetBinContent(12,109);
   AlphaT_Zoomed_all->SetBinContent(13,876);
   AlphaT_Zoomed_all->SetBinError(0,58.35238);
   AlphaT_Zoomed_all->SetBinError(1,32.55764);
   AlphaT_Zoomed_all->SetBinError(2,42.16634);
   AlphaT_Zoomed_all->SetBinError(3,50.80354);
   AlphaT_Zoomed_all->SetBinError(4,55.57877);
   AlphaT_Zoomed_all->SetBinError(5,57.31492);
   AlphaT_Zoomed_all->SetBinError(6,51.0098);
   AlphaT_Zoomed_all->SetBinError(7,36.04164);
   AlphaT_Zoomed_all->SetBinError(8,22.44994);
   AlphaT_Zoomed_all->SetBinError(9,15.74802);
   AlphaT_Zoomed_all->SetBinError(10,13);
   AlphaT_Zoomed_all->SetBinError(11,11.57584);
   AlphaT_Zoomed_all->SetBinError(12,10.44031);
   AlphaT_Zoomed_all->SetBinError(13,29.5973);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(4.351432e+07);
   AlphaT_Zoomed_all->SetEntries(21139);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvas325_375/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis431[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis431);
   AlphaT_Zoomed_all->SetBinContent(0,0.0008207615);
   AlphaT_Zoomed_all->SetBinContent(1,0.0004709862);
   AlphaT_Zoomed_all->SetBinContent(2,0.0006031685);
   AlphaT_Zoomed_all->SetBinContent(3,0.0006885884);
   AlphaT_Zoomed_all->SetBinContent(4,0.0007098812);
   AlphaT_Zoomed_all->SetBinContent(5,0.00761334);
   AlphaT_Zoomed_all->SetBinContent(6,0.1030435);
   AlphaT_Zoomed_all->SetBinContent(7,1.260472);
   AlphaT_Zoomed_all->SetBinContent(8,1.091173);
   AlphaT_Zoomed_all->SetBinContent(9,0.9133635);
   AlphaT_Zoomed_all->SetBinContent(10,0.7817008);
   AlphaT_Zoomed_all->SetBinContent(11,0.8440228);
   AlphaT_Zoomed_all->SetBinContent(12,0.8464558);
   AlphaT_Zoomed_all->SetBinContent(13,1.102116);
   AlphaT_Zoomed_all->SetBinError(0,1.460829e-05);
   AlphaT_Zoomed_all->SetBinError(1,0.0317128);
   AlphaT_Zoomed_all->SetBinError(2,0.02437125);
   AlphaT_Zoomed_all->SetBinError(3,0.02028236);
   AlphaT_Zoomed_all->SetBinError(4,0.01861582);
   AlphaT_Zoomed_all->SetBinError(5,0.02582101);
   AlphaT_Zoomed_all->SetBinError(6,0.2580657);
   AlphaT_Zoomed_all->SetBinError(7,0.1829884);
   AlphaT_Zoomed_all->SetBinError(8,0.1687512);
   AlphaT_Zoomed_all->SetBinError(9,0.2305035);
   AlphaT_Zoomed_all->SetBinError(10,0.1975354);
   AlphaT_Zoomed_all->SetBinError(11,0.1531718);
   AlphaT_Zoomed_all->SetBinError(12,0.1856896);
   AlphaT_Zoomed_all->SetBinError(13,0.06103193);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(173.385);
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
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.45625,1);
   gre->SetPointError(0,0.00625,0.007893387);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.005615009);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.00489158);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.004776962);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.01903445);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.25732);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.1808727);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.1627663);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.2215843);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.1819425);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.1264868);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.1590796);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all73 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all73","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all73->SetMinimum(0.691216);
   Graph_Graph_from_AlphaT_Zoomed_all73->SetMaximum(1.308784);
   Graph_Graph_from_AlphaT_Zoomed_all73->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all73->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all73->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all73);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis432[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis432);
   AlphaT_Zoomed_all->SetBinContent(0,0.0008207615);
   AlphaT_Zoomed_all->SetBinContent(1,0.0004709862);
   AlphaT_Zoomed_all->SetBinContent(2,0.0006031685);
   AlphaT_Zoomed_all->SetBinContent(3,0.0006885884);
   AlphaT_Zoomed_all->SetBinContent(4,0.0007098812);
   AlphaT_Zoomed_all->SetBinContent(5,0.00761334);
   AlphaT_Zoomed_all->SetBinContent(6,0.1030435);
   AlphaT_Zoomed_all->SetBinContent(7,1.260472);
   AlphaT_Zoomed_all->SetBinContent(8,1.091173);
   AlphaT_Zoomed_all->SetBinContent(9,0.9133635);
   AlphaT_Zoomed_all->SetBinContent(10,0.7817008);
   AlphaT_Zoomed_all->SetBinContent(11,0.8440228);
   AlphaT_Zoomed_all->SetBinContent(12,0.8464558);
   AlphaT_Zoomed_all->SetBinContent(13,1.102116);
   AlphaT_Zoomed_all->SetBinError(0,1.460829e-05);
   AlphaT_Zoomed_all->SetBinError(1,0.0317128);
   AlphaT_Zoomed_all->SetBinError(2,0.02437125);
   AlphaT_Zoomed_all->SetBinError(3,0.02028236);
   AlphaT_Zoomed_all->SetBinError(4,0.01861582);
   AlphaT_Zoomed_all->SetBinError(5,0.02582101);
   AlphaT_Zoomed_all->SetBinError(6,0.2580657);
   AlphaT_Zoomed_all->SetBinError(7,0.1829884);
   AlphaT_Zoomed_all->SetBinError(8,0.1687512);
   AlphaT_Zoomed_all->SetBinError(9,0.2305035);
   AlphaT_Zoomed_all->SetBinError(10,0.1975354);
   AlphaT_Zoomed_all->SetBinError(11,0.1531718);
   AlphaT_Zoomed_all->SetBinError(12,0.1856896);
   AlphaT_Zoomed_all->SetBinError(13,0.06103193);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(173.385);
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
   canvas325_375/AlphaT_Zoomed_all->cd();
   canvas325_375/AlphaT_Zoomed_all->Modified();
   canvas325_375/AlphaT_Zoomed_all->cd();
   canvas325_375/AlphaT_Zoomed_all->SetSelected(canvas325_375/AlphaT_Zoomed_all);
}
