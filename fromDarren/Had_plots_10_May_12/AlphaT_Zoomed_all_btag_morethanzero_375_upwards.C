{
//=========Macro generated from canvas: canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:24:59 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all = new TCanvas("canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->SetFillColor(0);
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->SetTickx(1);
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->SetTicky(1);
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-1.182278,0.61875,7.630206);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis4381[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4381);
   AlphaT_Zoomed_all->SetBinContent(0,14015);
   AlphaT_Zoomed_all->SetBinContent(1,4275);
   AlphaT_Zoomed_all->SetBinContent(2,6330);
   AlphaT_Zoomed_all->SetBinContent(3,9600);
   AlphaT_Zoomed_all->SetBinContent(4,17003);
   AlphaT_Zoomed_all->SetBinContent(5,7019);
   AlphaT_Zoomed_all->SetBinContent(6,1007);
   AlphaT_Zoomed_all->SetBinContent(7,379);
   AlphaT_Zoomed_all->SetBinContent(8,153);
   AlphaT_Zoomed_all->SetBinContent(9,79);
   AlphaT_Zoomed_all->SetBinContent(10,76);
   AlphaT_Zoomed_all->SetBinContent(11,42);
   AlphaT_Zoomed_all->SetBinContent(12,42);
   AlphaT_Zoomed_all->SetBinContent(13,176);
   AlphaT_Zoomed_all->SetBinError(0,118.385);
   AlphaT_Zoomed_all->SetBinError(1,65.38348);
   AlphaT_Zoomed_all->SetBinError(2,79.5613);
   AlphaT_Zoomed_all->SetBinError(3,97.97959);
   AlphaT_Zoomed_all->SetBinError(4,130.3956);
   AlphaT_Zoomed_all->SetBinError(5,83.77947);
   AlphaT_Zoomed_all->SetBinError(6,31.73326);
   AlphaT_Zoomed_all->SetBinError(7,19.46792);
   AlphaT_Zoomed_all->SetBinError(8,12.36932);
   AlphaT_Zoomed_all->SetBinError(9,8.888194);
   AlphaT_Zoomed_all->SetBinError(10,8.717798);
   AlphaT_Zoomed_all->SetBinError(11,6.480741);
   AlphaT_Zoomed_all->SetBinError(12,6.480741);
   AlphaT_Zoomed_all->SetBinError(13,13.2665);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(5609931);
   AlphaT_Zoomed_all->SetEntries(60196);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PE0");
   Double_t xAxis4382[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4382);
   AlphaT_Zoomed_all->SetBinContent(0,513.9624);
   AlphaT_Zoomed_all->SetBinContent(1,185.6244);
   AlphaT_Zoomed_all->SetBinContent(2,229.9251);
   AlphaT_Zoomed_all->SetBinContent(3,277.7649);
   AlphaT_Zoomed_all->SetBinContent(4,313.3163);
   AlphaT_Zoomed_all->SetBinContent(5,167.0965);
   AlphaT_Zoomed_all->SetBinContent(6,67.65377);
   AlphaT_Zoomed_all->SetBinContent(7,35.47004);
   AlphaT_Zoomed_all->SetBinContent(8,22.026);
   AlphaT_Zoomed_all->SetBinContent(9,13.87472);
   AlphaT_Zoomed_all->SetBinContent(10,10.12905);
   AlphaT_Zoomed_all->SetBinContent(11,6.543844);
   AlphaT_Zoomed_all->SetBinContent(12,6.26206);
   AlphaT_Zoomed_all->SetBinContent(13,32.57066);
   AlphaT_Zoomed_all->SetBinError(0,5.642153);
   AlphaT_Zoomed_all->SetBinError(1,3.527308);
   AlphaT_Zoomed_all->SetBinError(2,4.099522);
   AlphaT_Zoomed_all->SetBinError(3,4.411307);
   AlphaT_Zoomed_all->SetBinError(4,4.580893);
   AlphaT_Zoomed_all->SetBinError(5,3.381377);
   AlphaT_Zoomed_all->SetBinError(6,2.118549);
   AlphaT_Zoomed_all->SetBinError(7,1.625873);
   AlphaT_Zoomed_all->SetBinError(8,1.307101);
   AlphaT_Zoomed_all->SetBinError(9,1.142321);
   AlphaT_Zoomed_all->SetBinError(10,0.8563148);
   AlphaT_Zoomed_all->SetBinError(11,0.6821189);
   AlphaT_Zoomed_all->SetBinError(12,0.7177017);
   AlphaT_Zoomed_all->SetBinError(13,1.593205);
   AlphaT_Zoomed_all->SetEntries(42460);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis4383[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4383);
   AlphaT_Zoomed_all->SetBinContent(0,1229.412);
   AlphaT_Zoomed_all->SetBinContent(1,822.0652);
   AlphaT_Zoomed_all->SetBinContent(2,1293.914);
   AlphaT_Zoomed_all->SetBinContent(3,1976.27);
   AlphaT_Zoomed_all->SetBinContent(4,3271.112);
   AlphaT_Zoomed_all->SetBinContent(5,1356.096);
   AlphaT_Zoomed_all->SetBinContent(6,343.87);
   AlphaT_Zoomed_all->SetBinContent(7,183.8182);
   AlphaT_Zoomed_all->SetBinContent(8,89.20541);
   AlphaT_Zoomed_all->SetBinContent(9,58.8853);
   AlphaT_Zoomed_all->SetBinContent(10,38.07879);
   AlphaT_Zoomed_all->SetBinContent(11,28.70993);
   AlphaT_Zoomed_all->SetBinContent(12,19.91493);
   AlphaT_Zoomed_all->SetBinContent(13,85.74247);
   AlphaT_Zoomed_all->SetBinError(0,19.74035);
   AlphaT_Zoomed_all->SetBinError(1,16.39465);
   AlphaT_Zoomed_all->SetBinError(2,19.65445);
   AlphaT_Zoomed_all->SetBinError(3,24.83133);
   AlphaT_Zoomed_all->SetBinError(4,32.44981);
   AlphaT_Zoomed_all->SetBinError(5,21.08417);
   AlphaT_Zoomed_all->SetBinError(6,9.6112);
   AlphaT_Zoomed_all->SetBinError(7,7.746484);
   AlphaT_Zoomed_all->SetBinError(8,5.09109);
   AlphaT_Zoomed_all->SetBinError(9,3.918035);
   AlphaT_Zoomed_all->SetBinError(10,3.240046);
   AlphaT_Zoomed_all->SetBinError(11,3.258547);
   AlphaT_Zoomed_all->SetBinError(12,2.263632);
   AlphaT_Zoomed_all->SetBinError(13,5.816565);
   AlphaT_Zoomed_all->SetEntries(51527);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis4384[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4384);
   AlphaT_Zoomed_all->SetBinContent(0,250.6083);
   AlphaT_Zoomed_all->SetBinContent(1,66.36258);
   AlphaT_Zoomed_all->SetBinContent(2,81.80977);
   AlphaT_Zoomed_all->SetBinContent(3,87.66707);
   AlphaT_Zoomed_all->SetBinContent(4,106.5542);
   AlphaT_Zoomed_all->SetBinContent(5,71.46532);
   AlphaT_Zoomed_all->SetBinContent(6,42.42718);
   AlphaT_Zoomed_all->SetBinContent(7,25.71905);
   AlphaT_Zoomed_all->SetBinContent(8,18.41484);
   AlphaT_Zoomed_all->SetBinContent(9,12.96313);
   AlphaT_Zoomed_all->SetBinContent(10,8.494129);
   AlphaT_Zoomed_all->SetBinContent(11,7.714994);
   AlphaT_Zoomed_all->SetBinContent(12,6.007708);
   AlphaT_Zoomed_all->SetBinContent(13,47.88024);
   AlphaT_Zoomed_all->SetBinError(0,4.565385);
   AlphaT_Zoomed_all->SetBinError(1,2.330025);
   AlphaT_Zoomed_all->SetBinError(2,2.66758);
   AlphaT_Zoomed_all->SetBinError(3,2.618351);
   AlphaT_Zoomed_all->SetBinError(4,2.936115);
   AlphaT_Zoomed_all->SetBinError(5,2.401868);
   AlphaT_Zoomed_all->SetBinError(6,1.99447);
   AlphaT_Zoomed_all->SetBinError(7,1.406823);
   AlphaT_Zoomed_all->SetBinError(8,1.166143);
   AlphaT_Zoomed_all->SetBinError(9,0.9507727);
   AlphaT_Zoomed_all->SetBinError(10,0.8226192);
   AlphaT_Zoomed_all->SetBinError(11,0.7381581);
   AlphaT_Zoomed_all->SetBinError(12,0.6370375);
   AlphaT_Zoomed_all->SetBinError(13,2.157043);
   AlphaT_Zoomed_all->SetEntries(15009);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis4385[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4385);
   AlphaT_Zoomed_all->SetBinContent(0,45.62172);
   AlphaT_Zoomed_all->SetBinContent(1,14.01293);
   AlphaT_Zoomed_all->SetBinContent(2,22.43321);
   AlphaT_Zoomed_all->SetBinContent(3,29.73901);
   AlphaT_Zoomed_all->SetBinContent(4,38.2822);
   AlphaT_Zoomed_all->SetBinContent(5,9.59612);
   AlphaT_Zoomed_all->SetBinContent(6,1.65806);
   AlphaT_Zoomed_all->SetBinContent(7,0.4684294);
   AlphaT_Zoomed_all->SetBinContent(8,0.3799041);
   AlphaT_Zoomed_all->SetBinContent(9,0.515285);
   AlphaT_Zoomed_all->SetBinContent(11,0.4382102);
   AlphaT_Zoomed_all->SetBinContent(13,0.9930128);
   AlphaT_Zoomed_all->SetBinError(0,4.831608);
   AlphaT_Zoomed_all->SetBinError(1,2.601035);
   AlphaT_Zoomed_all->SetBinError(2,3.480199);
   AlphaT_Zoomed_all->SetBinError(3,3.989167);
   AlphaT_Zoomed_all->SetBinError(4,4.948713);
   AlphaT_Zoomed_all->SetBinError(5,2.192884);
   AlphaT_Zoomed_all->SetBinError(6,1.116267);
   AlphaT_Zoomed_all->SetBinError(7,0.4684294);
   AlphaT_Zoomed_all->SetBinError(8,0.3799041);
   AlphaT_Zoomed_all->SetBinError(9,0.4879057);
   AlphaT_Zoomed_all->SetBinError(11,0.4382102);
   AlphaT_Zoomed_all->SetBinError(13,0.7022924);
   AlphaT_Zoomed_all->SetEntries(403);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis4386[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4386);
   AlphaT_Zoomed_all->SetBinContent(0,18.46234);
   AlphaT_Zoomed_all->SetBinContent(1,11.9601);
   AlphaT_Zoomed_all->SetBinContent(2,16.4597);
   AlphaT_Zoomed_all->SetBinContent(3,21.44249);
   AlphaT_Zoomed_all->SetBinContent(4,29.244);
   AlphaT_Zoomed_all->SetBinContent(5,6.046182);
   AlphaT_Zoomed_all->SetBinContent(6,1.505691);
   AlphaT_Zoomed_all->SetBinContent(7,0.9132932);
   AlphaT_Zoomed_all->SetBinContent(8,0.5093878);
   AlphaT_Zoomed_all->SetBinContent(9,0.5717001);
   AlphaT_Zoomed_all->SetBinContent(10,0.1799742);
   AlphaT_Zoomed_all->SetBinContent(11,0.2922847);
   AlphaT_Zoomed_all->SetBinContent(12,0.1801656);
   AlphaT_Zoomed_all->SetBinContent(13,1.587178);
   AlphaT_Zoomed_all->SetBinError(0,0.6823663);
   AlphaT_Zoomed_all->SetBinError(1,0.5415301);
   AlphaT_Zoomed_all->SetBinError(2,0.6279416);
   AlphaT_Zoomed_all->SetBinError(3,0.7022427);
   AlphaT_Zoomed_all->SetBinError(4,0.8307984);
   AlphaT_Zoomed_all->SetBinError(5,0.3843353);
   AlphaT_Zoomed_all->SetBinError(6,0.1957285);
   AlphaT_Zoomed_all->SetBinError(7,0.1487279);
   AlphaT_Zoomed_all->SetBinError(8,0.120973);
   AlphaT_Zoomed_all->SetBinError(9,0.1096066);
   AlphaT_Zoomed_all->SetBinError(10,0.0689863);
   AlphaT_Zoomed_all->SetBinError(11,0.0802654);
   AlphaT_Zoomed_all->SetBinError(12,0.06994797);
   AlphaT_Zoomed_all->SetBinError(13,0.1782176);
   AlphaT_Zoomed_all->SetEntries(9100);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis4387[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4387);
   AlphaT_Zoomed_all->SetBinContent(0,405004.2);
   AlphaT_Zoomed_all->SetBinContent(1,239641.3);
   AlphaT_Zoomed_all->SetBinContent(2,339486.2);
   AlphaT_Zoomed_all->SetBinContent(3,443463.1);
   AlphaT_Zoomed_all->SetBinContent(4,556877.8);
   AlphaT_Zoomed_all->SetBinContent(5,43381.27);
   AlphaT_Zoomed_all->SetBinContent(6,653.3884);
   AlphaT_Zoomed_all->SetBinContent(7,39.85933);
   AlphaT_Zoomed_all->SetBinContent(8,18.03795);
   AlphaT_Zoomed_all->SetBinContent(9,57.53252);
   AlphaT_Zoomed_all->SetBinError(0,4971.063);
   AlphaT_Zoomed_all->SetBinError(1,3766.421);
   AlphaT_Zoomed_all->SetBinError(2,5045.013);
   AlphaT_Zoomed_all->SetBinError(3,4909.001);
   AlphaT_Zoomed_all->SetBinError(4,5762.925);
   AlphaT_Zoomed_all->SetBinError(5,1592.274);
   AlphaT_Zoomed_all->SetBinError(6,156.0517);
   AlphaT_Zoomed_all->SetBinError(7,9.378759);
   AlphaT_Zoomed_all->SetBinError(8,7.146423);
   AlphaT_Zoomed_all->SetBinError(9,57.43209);
   AlphaT_Zoomed_all->SetEntries(407429);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis4388[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4388);
   AlphaT_Zoomed_all->SetBinContent(0,272.4638);
   AlphaT_Zoomed_all->SetBinContent(1,157.3538);
   AlphaT_Zoomed_all->SetBinContent(2,208.1266);
   AlphaT_Zoomed_all->SetBinContent(3,270.7118);
   AlphaT_Zoomed_all->SetBinContent(4,356.7789);
   AlphaT_Zoomed_all->SetBinContent(5,107.0185);
   AlphaT_Zoomed_all->SetBinContent(6,21.7545);
   AlphaT_Zoomed_all->SetBinContent(7,9.000073);
   AlphaT_Zoomed_all->SetBinContent(8,5.655449);
   AlphaT_Zoomed_all->SetBinContent(9,3.598057);
   AlphaT_Zoomed_all->SetBinContent(10,2.350578);
   AlphaT_Zoomed_all->SetBinContent(11,1.522538);
   AlphaT_Zoomed_all->SetBinContent(12,0.9330292);
   AlphaT_Zoomed_all->SetBinContent(13,6.337775);
   AlphaT_Zoomed_all->SetBinError(0,4.203689);
   AlphaT_Zoomed_all->SetBinError(1,3.449457);
   AlphaT_Zoomed_all->SetBinError(2,4.004054);
   AlphaT_Zoomed_all->SetBinError(3,4.380097);
   AlphaT_Zoomed_all->SetBinError(4,5.062678);
   AlphaT_Zoomed_all->SetBinError(5,2.809815);
   AlphaT_Zoomed_all->SetBinError(6,1.261484);
   AlphaT_Zoomed_all->SetBinError(7,0.6950524);
   AlphaT_Zoomed_all->SetBinError(8,0.5473351);
   AlphaT_Zoomed_all->SetBinError(9,0.4663535);
   AlphaT_Zoomed_all->SetBinError(10,0.3585312);
   AlphaT_Zoomed_all->SetBinError(11,0.2846188);
   AlphaT_Zoomed_all->SetBinError(12,0.2272785);
   AlphaT_Zoomed_all->SetBinError(13,0.6017766);
   AlphaT_Zoomed_all->SetEntries(30825);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis4389[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4389);
   AlphaT_Zoomed_all->SetBinContent(0,407334.8);
   AlphaT_Zoomed_all->SetBinContent(1,240898.7);
   AlphaT_Zoomed_all->SetBinContent(2,341338.9);
   AlphaT_Zoomed_all->SetBinContent(3,446126.7);
   AlphaT_Zoomed_all->SetBinContent(4,560993.1);
   AlphaT_Zoomed_all->SetBinContent(5,45098.59);
   AlphaT_Zoomed_all->SetBinContent(6,1132.258);
   AlphaT_Zoomed_all->SetBinContent(7,295.2484);
   AlphaT_Zoomed_all->SetBinContent(8,154.2289);
   AlphaT_Zoomed_all->SetBinContent(9,147.9407);
   AlphaT_Zoomed_all->SetBinContent(10,59.23253);
   AlphaT_Zoomed_all->SetBinContent(11,45.2218);
   AlphaT_Zoomed_all->SetBinContent(12,33.29789);
   AlphaT_Zoomed_all->SetBinContent(13,175.1113);
   AlphaT_Zoomed_all->SetBinError(0,4971.111);
   AlphaT_Zoomed_all->SetBinError(1,3766.461);
   AlphaT_Zoomed_all->SetBinError(2,5045.057);
   AlphaT_Zoomed_all->SetBinError(3,4909.07);
   AlphaT_Zoomed_all->SetBinError(4,5763.024);
   AlphaT_Zoomed_all->SetBinError(5,1592.423);
   AlphaT_Zoomed_all->SetBinError(6,156.3837);
   AlphaT_Zoomed_all->SetBinError(7,12.3821);
   AlphaT_Zoomed_all->SetBinError(8,8.973155);
   AlphaT_Zoomed_all->SetBinError(9,57.58882);
   AlphaT_Zoomed_all->SetBinError(10,3.47004);
   AlphaT_Zoomed_all->SetBinError(11,3.450764);
   AlphaT_Zoomed_all->SetBinError(12,2.47012);
   AlphaT_Zoomed_all->SetBinError(13,6.473845);
   AlphaT_Zoomed_all->SetEntries(556753);
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
   gre->SetPoint(0,0.45625,239641.3);
   gre->SetPointError(0,0.00625,3766.421);
   gre->SetPoint(1,0.46875,339486.2);
   gre->SetPointError(1,0.00625,5045.013);
   gre->SetPoint(2,0.48125,443463.1);
   gre->SetPointError(2,0.00625,4909.001);
   gre->SetPoint(3,0.49375,556877.8);
   gre->SetPointError(3,0.00625,5762.925);
   gre->SetPoint(4,0.50625,43381.27);
   gre->SetPointError(4,0.00625,1592.274);
   gre->SetPoint(5,0.51875,653.3884);
   gre->SetPointError(5,0.00625,156.0517);
   gre->SetPoint(6,0.53125,39.85933);
   gre->SetPointError(6,0.00625,9.378759);
   gre->SetPoint(7,0.54375,18.03795);
   gre->SetPointError(7,0.00625,7.146423);
   gre->SetPoint(8,0.55625,57.53252);
   gre->SetPointError(8,0.00625,57.43209);
   gre->SetPoint(9,0.56875,0);
   gre->SetPointError(9,0.00625,0);
   gre->SetPoint(10,0.58125,0);
   gre->SetPointError(10,0.00625,0);
   gre->SetPoint(11,0.59375,0);
   gre->SetPointError(11,0.00625,0);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all731 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all731","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all731->SetMinimum(618.9048);
   Graph_Graph_from_AlphaT_Zoomed_all731->SetMaximum(618904.8);
   Graph_Graph_from_AlphaT_Zoomed_all731->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all731->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all731->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all731);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,240898.7);
   gre->SetPointError(0,0.00625,3766.461);
   gre->SetPoint(1,0.46875,341338.9);
   gre->SetPointError(1,0.00625,5045.057);
   gre->SetPoint(2,0.48125,446126.7);
   gre->SetPointError(2,0.00625,4909.07);
   gre->SetPoint(3,0.49375,560993.1);
   gre->SetPointError(3,0.00625,5763.024);
   gre->SetPoint(4,0.50625,45098.59);
   gre->SetPointError(4,0.00625,1592.423);
   gre->SetPoint(5,0.51875,1132.258);
   gre->SetPointError(5,0.00625,156.3837);
   gre->SetPoint(6,0.53125,295.2484);
   gre->SetPointError(6,0.00625,12.3821);
   gre->SetPoint(7,0.54375,154.2289);
   gre->SetPointError(7,0.00625,8.973155);
   gre->SetPoint(8,0.55625,147.9407);
   gre->SetPointError(8,0.00625,57.58882);
   gre->SetPoint(9,0.56875,59.23253);
   gre->SetPointError(9,0.00625,3.47004);
   gre->SetPoint(10,0.58125,45.2218);
   gre->SetPointError(10,0.00625,3.450764);
   gre->SetPoint(11,0.59375,33.29789);
   gre->SetPointError(11,0.00625,2.47012);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all732 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all732","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all732->SetMinimum(27.745);
   Graph_Graph_from_AlphaT_Zoomed_all732->SetMaximum(623428.6);
   Graph_Graph_from_AlphaT_Zoomed_all732->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all732->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all732->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all732);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_375_    Jet Multiplicity=all");
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
   Double_t xAxis4390[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4390);
   AlphaT_Zoomed_all->SetBinContent(0,14015);
   AlphaT_Zoomed_all->SetBinContent(1,4275);
   AlphaT_Zoomed_all->SetBinContent(2,6330);
   AlphaT_Zoomed_all->SetBinContent(3,9600);
   AlphaT_Zoomed_all->SetBinContent(4,17003);
   AlphaT_Zoomed_all->SetBinContent(5,7019);
   AlphaT_Zoomed_all->SetBinContent(6,1007);
   AlphaT_Zoomed_all->SetBinContent(7,379);
   AlphaT_Zoomed_all->SetBinContent(8,153);
   AlphaT_Zoomed_all->SetBinContent(9,79);
   AlphaT_Zoomed_all->SetBinContent(10,76);
   AlphaT_Zoomed_all->SetBinContent(11,42);
   AlphaT_Zoomed_all->SetBinContent(12,42);
   AlphaT_Zoomed_all->SetBinContent(13,176);
   AlphaT_Zoomed_all->SetBinError(0,118.385);
   AlphaT_Zoomed_all->SetBinError(1,65.38348);
   AlphaT_Zoomed_all->SetBinError(2,79.5613);
   AlphaT_Zoomed_all->SetBinError(3,97.97959);
   AlphaT_Zoomed_all->SetBinError(4,130.3956);
   AlphaT_Zoomed_all->SetBinError(5,83.77947);
   AlphaT_Zoomed_all->SetBinError(6,31.73326);
   AlphaT_Zoomed_all->SetBinError(7,19.46792);
   AlphaT_Zoomed_all->SetBinError(8,12.36932);
   AlphaT_Zoomed_all->SetBinError(9,8.888194);
   AlphaT_Zoomed_all->SetBinError(10,8.717798);
   AlphaT_Zoomed_all->SetBinError(11,6.480741);
   AlphaT_Zoomed_all->SetBinError(12,6.480741);
   AlphaT_Zoomed_all->SetBinError(13,13.2665);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(5609931);
   AlphaT_Zoomed_all->SetEntries(60196);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis4391[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4391);
   AlphaT_Zoomed_all->SetBinContent(0,0.03440659);
   AlphaT_Zoomed_all->SetBinContent(1,0.01774605);
   AlphaT_Zoomed_all->SetBinContent(2,0.01854462);
   AlphaT_Zoomed_all->SetBinContent(3,0.02151855);
   AlphaT_Zoomed_all->SetBinContent(4,0.03030875);
   AlphaT_Zoomed_all->SetBinContent(5,0.1556368);
   AlphaT_Zoomed_all->SetBinContent(6,0.8893736);
   AlphaT_Zoomed_all->SetBinContent(7,1.283665);
   AlphaT_Zoomed_all->SetBinContent(8,0.9920317);
   AlphaT_Zoomed_all->SetBinContent(9,0.5339977);
   AlphaT_Zoomed_all->SetBinContent(10,1.283079);
   AlphaT_Zoomed_all->SetBinContent(11,0.9287555);
   AlphaT_Zoomed_all->SetBinContent(12,1.261341);
   AlphaT_Zoomed_all->SetBinContent(13,1.005075);
   AlphaT_Zoomed_all->SetBinError(0,0.000510668);
   AlphaT_Zoomed_all->SetBinError(1,0.02187173);
   AlphaT_Zoomed_all->SetBinError(2,0.01940186);
   AlphaT_Zoomed_all->SetBinError(3,0.01500831);
   AlphaT_Zoomed_all->SetBinError(4,0.01281973);
   AlphaT_Zoomed_all->SetBinError(5,0.03727268);
   AlphaT_Zoomed_all->SetBinError(6,0.1416661);
   AlphaT_Zoomed_all->SetBinError(7,0.06631221);
   AlphaT_Zoomed_all->SetBinError(8,0.09960395);
   AlphaT_Zoomed_all->SetBinError(9,0.4052025);
   AlphaT_Zoomed_all->SetBinError(10,0.1288018);
   AlphaT_Zoomed_all->SetBinError(11,0.1721405);
   AlphaT_Zoomed_all->SetBinError(12,0.1712091);
   AlphaT_Zoomed_all->SetBinError(13,0.08438195);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(306.8257);
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
   gre->SetPointError(0,0.00625,0.01563504);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.0147802);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.01100376);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.0102729);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.03530981);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.1381167);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.0419379);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.05818074);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.3892696);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.05858336);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.07630752);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.07418247);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all733 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all733","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all733->SetMinimum(0.5328765);
   Graph_Graph_from_AlphaT_Zoomed_all733->SetMaximum(1.467124);
   Graph_Graph_from_AlphaT_Zoomed_all733->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all733->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all733->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all733);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis4392[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis4392);
   AlphaT_Zoomed_all->SetBinContent(0,0.03440659);
   AlphaT_Zoomed_all->SetBinContent(1,0.01774605);
   AlphaT_Zoomed_all->SetBinContent(2,0.01854462);
   AlphaT_Zoomed_all->SetBinContent(3,0.02151855);
   AlphaT_Zoomed_all->SetBinContent(4,0.03030875);
   AlphaT_Zoomed_all->SetBinContent(5,0.1556368);
   AlphaT_Zoomed_all->SetBinContent(6,0.8893736);
   AlphaT_Zoomed_all->SetBinContent(7,1.283665);
   AlphaT_Zoomed_all->SetBinContent(8,0.9920317);
   AlphaT_Zoomed_all->SetBinContent(9,0.5339977);
   AlphaT_Zoomed_all->SetBinContent(10,1.283079);
   AlphaT_Zoomed_all->SetBinContent(11,0.9287555);
   AlphaT_Zoomed_all->SetBinContent(12,1.261341);
   AlphaT_Zoomed_all->SetBinContent(13,1.005075);
   AlphaT_Zoomed_all->SetBinError(0,0.000510668);
   AlphaT_Zoomed_all->SetBinError(1,0.02187173);
   AlphaT_Zoomed_all->SetBinError(2,0.01940186);
   AlphaT_Zoomed_all->SetBinError(3,0.01500831);
   AlphaT_Zoomed_all->SetBinError(4,0.01281973);
   AlphaT_Zoomed_all->SetBinError(5,0.03727268);
   AlphaT_Zoomed_all->SetBinError(6,0.1416661);
   AlphaT_Zoomed_all->SetBinError(7,0.06631221);
   AlphaT_Zoomed_all->SetBinError(8,0.09960395);
   AlphaT_Zoomed_all->SetBinError(9,0.4052025);
   AlphaT_Zoomed_all->SetBinError(10,0.1288018);
   AlphaT_Zoomed_all->SetBinError(11,0.1721405);
   AlphaT_Zoomed_all->SetBinError(12,0.1712091);
   AlphaT_Zoomed_all->SetBinError(13,0.08438195);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(306.8257);
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
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->cd();
   canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all->SetSelected(canvasbtag_morethanzero_375_475/AlphaT_Zoomed_all);
}
