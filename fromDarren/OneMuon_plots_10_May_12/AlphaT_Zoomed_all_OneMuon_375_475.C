{
//=========Macro generated from canvas: canvasOneMuon_375_475/AlphaT_Zoomed_all/cannameAlphaT_Zoomed_all
//=========  (Thu May 10 12:06:08 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_375_475/AlphaT_Zoomed_all = new TCanvas("canvasOneMuon_375_475/AlphaT_Zoomed_all", "cannameAlphaT_Zoomed_all",0,0,1200,1200);
   gStyle->SetOptStat(0);
   canvasOneMuon_375_475/AlphaT_Zoomed_all->SetHighLightColor(2);
   canvasOneMuon_375_475/AlphaT_Zoomed_all->Range(0,0,1,1);
   canvasOneMuon_375_475/AlphaT_Zoomed_all->SetFillColor(0);
   canvasOneMuon_375_475/AlphaT_Zoomed_all->SetBorderMode(0);
   canvasOneMuon_375_475/AlphaT_Zoomed_all->SetBorderSize(2);
   canvasOneMuon_375_475/AlphaT_Zoomed_all->SetTickx(1);
   canvasOneMuon_375_475/AlphaT_Zoomed_all->SetTicky(1);
   canvasOneMuon_375_475/AlphaT_Zoomed_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(0.43125,-0.8012182,0.61875,4.200663);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis61[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis61);
   AlphaT_Zoomed_all->SetBinContent(0,175);
   AlphaT_Zoomed_all->SetBinContent(1,42);
   AlphaT_Zoomed_all->SetBinContent(2,52);
   AlphaT_Zoomed_all->SetBinContent(3,85);
   AlphaT_Zoomed_all->SetBinContent(4,109);
   AlphaT_Zoomed_all->SetBinContent(5,131);
   AlphaT_Zoomed_all->SetBinContent(6,147);
   AlphaT_Zoomed_all->SetBinContent(7,115);
   AlphaT_Zoomed_all->SetBinContent(8,68);
   AlphaT_Zoomed_all->SetBinContent(9,74);
   AlphaT_Zoomed_all->SetBinContent(10,48);
   AlphaT_Zoomed_all->SetBinContent(11,37);
   AlphaT_Zoomed_all->SetBinContent(12,31);
   AlphaT_Zoomed_all->SetBinContent(13,327);
   AlphaT_Zoomed_all->SetBinError(0,13.22876);
   AlphaT_Zoomed_all->SetBinError(1,6.480741);
   AlphaT_Zoomed_all->SetBinError(2,7.211103);
   AlphaT_Zoomed_all->SetBinError(3,9.219544);
   AlphaT_Zoomed_all->SetBinError(4,10.44031);
   AlphaT_Zoomed_all->SetBinError(5,11.44552);
   AlphaT_Zoomed_all->SetBinError(6,12.12436);
   AlphaT_Zoomed_all->SetBinError(7,10.72381);
   AlphaT_Zoomed_all->SetBinError(8,8.246211);
   AlphaT_Zoomed_all->SetBinError(9,8.602325);
   AlphaT_Zoomed_all->SetBinError(10,6.928203);
   AlphaT_Zoomed_all->SetBinError(11,6.082763);
   AlphaT_Zoomed_all->SetBinError(12,5.567764);
   AlphaT_Zoomed_all->SetBinError(13,18.08314);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(5017.36);
   AlphaT_Zoomed_all->SetEntries(1441);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PE0");
   Double_t xAxis62[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis62);
   AlphaT_Zoomed_all->SetBinContent(0,1065.562);
   AlphaT_Zoomed_all->SetBinContent(1,237.2683);
   AlphaT_Zoomed_all->SetBinContent(2,263.5147);
   AlphaT_Zoomed_all->SetBinContent(3,286.0978);
   AlphaT_Zoomed_all->SetBinContent(4,312.5478);
   AlphaT_Zoomed_all->SetBinContent(5,200.5066);
   AlphaT_Zoomed_all->SetBinContent(6,122.7941);
   AlphaT_Zoomed_all->SetBinContent(7,78.10489);
   AlphaT_Zoomed_all->SetBinContent(8,56.56624);
   AlphaT_Zoomed_all->SetBinContent(9,40.82185);
   AlphaT_Zoomed_all->SetBinContent(10,33.35153);
   AlphaT_Zoomed_all->SetBinContent(11,25.36674);
   AlphaT_Zoomed_all->SetBinContent(12,22.81365);
   AlphaT_Zoomed_all->SetBinContent(13,224.4714);
   AlphaT_Zoomed_all->SetBinError(0,8.334959);
   AlphaT_Zoomed_all->SetBinError(1,3.845091);
   AlphaT_Zoomed_all->SetBinError(2,4.080788);
   AlphaT_Zoomed_all->SetBinError(3,4.283823);
   AlphaT_Zoomed_all->SetBinError(4,4.580757);
   AlphaT_Zoomed_all->SetBinError(5,3.61366);
   AlphaT_Zoomed_all->SetBinError(6,2.880468);
   AlphaT_Zoomed_all->SetBinError(7,2.206375);
   AlphaT_Zoomed_all->SetBinError(8,1.939455);
   AlphaT_Zoomed_all->SetBinError(9,1.674979);
   AlphaT_Zoomed_all->SetBinError(10,1.441893);
   AlphaT_Zoomed_all->SetBinError(11,1.243271);
   AlphaT_Zoomed_all->SetBinError(12,1.24499);
   AlphaT_Zoomed_all->SetBinError(13,3.845827);
   AlphaT_Zoomed_all->SetEntries(65479);
   AlphaT_Zoomed_all->SetLineColor(4);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis63[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis63);
   AlphaT_Zoomed_all->SetBinContent(0,249.5415);
   AlphaT_Zoomed_all->SetBinContent(1,81.84865);
   AlphaT_Zoomed_all->SetBinContent(2,102.6028);
   AlphaT_Zoomed_all->SetBinContent(3,140.2001);
   AlphaT_Zoomed_all->SetBinContent(4,164.7474);
   AlphaT_Zoomed_all->SetBinContent(5,132.3744);
   AlphaT_Zoomed_all->SetBinContent(6,89.03238);
   AlphaT_Zoomed_all->SetBinContent(7,57.86894);
   AlphaT_Zoomed_all->SetBinContent(8,40.25547);
   AlphaT_Zoomed_all->SetBinContent(9,25.23116);
   AlphaT_Zoomed_all->SetBinContent(10,19.46832);
   AlphaT_Zoomed_all->SetBinContent(11,14.4748);
   AlphaT_Zoomed_all->SetBinContent(12,14.77928);
   AlphaT_Zoomed_all->SetBinContent(13,81.67975);
   AlphaT_Zoomed_all->SetBinError(0,8.278082);
   AlphaT_Zoomed_all->SetBinError(1,4.626376);
   AlphaT_Zoomed_all->SetBinError(2,4.956461);
   AlphaT_Zoomed_all->SetBinError(3,6.428127);
   AlphaT_Zoomed_all->SetBinError(4,6.921198);
   AlphaT_Zoomed_all->SetBinError(5,5.685658);
   AlphaT_Zoomed_all->SetBinError(6,4.779382);
   AlphaT_Zoomed_all->SetBinError(7,3.784431);
   AlphaT_Zoomed_all->SetBinError(8,3.153099);
   AlphaT_Zoomed_all->SetBinError(9,2.470812);
   AlphaT_Zoomed_all->SetBinError(10,2.14205);
   AlphaT_Zoomed_all->SetBinError(11,1.946528);
   AlphaT_Zoomed_all->SetBinError(12,2.026794);
   AlphaT_Zoomed_all->SetBinError(13,5.309662);
   AlphaT_Zoomed_all->SetEntries(6387);
   AlphaT_Zoomed_all->SetLineColor(2);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis64[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis64);
   AlphaT_Zoomed_all->SetLineColor(5);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis65[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis65);
   AlphaT_Zoomed_all->SetBinContent(0,26.17669);
   AlphaT_Zoomed_all->SetBinContent(1,9.751164);
   AlphaT_Zoomed_all->SetBinContent(2,5.633657);
   AlphaT_Zoomed_all->SetBinContent(3,8.707953);
   AlphaT_Zoomed_all->SetBinContent(4,11.47969);
   AlphaT_Zoomed_all->SetBinContent(5,5.988718);
   AlphaT_Zoomed_all->SetBinContent(6,12.98029);
   AlphaT_Zoomed_all->SetBinContent(7,0.7570471);
   AlphaT_Zoomed_all->SetBinContent(8,1.203406);
   AlphaT_Zoomed_all->SetBinContent(9,0.9368588);
   AlphaT_Zoomed_all->SetBinContent(10,0.4870903);
   AlphaT_Zoomed_all->SetBinContent(11,0.4664048);
   AlphaT_Zoomed_all->SetBinContent(12,0.4870903);
   AlphaT_Zoomed_all->SetBinContent(13,1.874677);
   AlphaT_Zoomed_all->SetBinError(0,3.775708);
   AlphaT_Zoomed_all->SetBinError(1,2.320505);
   AlphaT_Zoomed_all->SetBinError(2,1.711602);
   AlphaT_Zoomed_all->SetBinError(3,2.019319);
   AlphaT_Zoomed_all->SetBinError(4,2.320922);
   AlphaT_Zoomed_all->SetBinError(5,2.083237);
   AlphaT_Zoomed_all->SetBinError(6,8.413968);
   AlphaT_Zoomed_all->SetBinError(7,0.7293975);
   AlphaT_Zoomed_all->SetBinError(8,0.7117779);
   AlphaT_Zoomed_all->SetBinError(9,0.6624592);
   AlphaT_Zoomed_all->SetBinError(10,0.4870903);
   AlphaT_Zoomed_all->SetBinError(11,0.4391163);
   AlphaT_Zoomed_all->SetBinError(12,0.4870903);
   AlphaT_Zoomed_all->SetBinError(13,0.9533124);
   AlphaT_Zoomed_all->SetEntries(197);
   AlphaT_Zoomed_all->SetLineColor(6);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis66[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis66);
   AlphaT_Zoomed_all->SetBinContent(0,4.262207);
   AlphaT_Zoomed_all->SetBinContent(1,1.255301);
   AlphaT_Zoomed_all->SetBinContent(2,1.587746);
   AlphaT_Zoomed_all->SetBinContent(3,1.674944);
   AlphaT_Zoomed_all->SetBinContent(4,1.775952);
   AlphaT_Zoomed_all->SetBinContent(5,1.411799);
   AlphaT_Zoomed_all->SetBinContent(6,0.8328646);
   AlphaT_Zoomed_all->SetBinContent(7,1.039507);
   AlphaT_Zoomed_all->SetBinContent(8,0.6820643);
   AlphaT_Zoomed_all->SetBinContent(9,0.3286867);
   AlphaT_Zoomed_all->SetBinContent(10,0.4099613);
   AlphaT_Zoomed_all->SetBinContent(11,0.286039);
   AlphaT_Zoomed_all->SetBinContent(12,0.3751218);
   AlphaT_Zoomed_all->SetBinContent(13,2.969002);
   AlphaT_Zoomed_all->SetBinError(0,0.3784069);
   AlphaT_Zoomed_all->SetBinError(1,0.214426);
   AlphaT_Zoomed_all->SetBinError(2,0.2375429);
   AlphaT_Zoomed_all->SetBinError(3,0.239078);
   AlphaT_Zoomed_all->SetBinError(4,0.2387983);
   AlphaT_Zoomed_all->SetBinError(5,0.2269438);
   AlphaT_Zoomed_all->SetBinError(6,0.1686745);
   AlphaT_Zoomed_all->SetBinError(7,0.1864098);
   AlphaT_Zoomed_all->SetBinError(8,0.1535951);
   AlphaT_Zoomed_all->SetBinError(9,0.1104149);
   AlphaT_Zoomed_all->SetBinError(10,0.1209465);
   AlphaT_Zoomed_all->SetBinError(11,0.1009265);
   AlphaT_Zoomed_all->SetBinError(12,0.1202599);
   AlphaT_Zoomed_all->SetBinError(13,0.3155202);
   AlphaT_Zoomed_all->SetEntries(748);
   AlphaT_Zoomed_all->SetLineColor(44);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis67[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis67);
   AlphaT_Zoomed_all->SetBinContent(0,0.1350632);
   AlphaT_Zoomed_all->SetBinError(0,0.1350632);
   AlphaT_Zoomed_all->SetEntries(1);
   AlphaT_Zoomed_all->SetLineColor(7);
   AlphaT_Zoomed_all->SetLineStyle(10);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis68[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis68);
   AlphaT_Zoomed_all->SetBinContent(0,33.76253);
   AlphaT_Zoomed_all->SetBinContent(1,8.668507);
   AlphaT_Zoomed_all->SetBinContent(2,8.487177);
   AlphaT_Zoomed_all->SetBinContent(3,10.40903);
   AlphaT_Zoomed_all->SetBinContent(4,11.18517);
   AlphaT_Zoomed_all->SetBinContent(5,8.799161);
   AlphaT_Zoomed_all->SetBinContent(6,5.756824);
   AlphaT_Zoomed_all->SetBinContent(7,3.851185);
   AlphaT_Zoomed_all->SetBinContent(8,1.845119);
   AlphaT_Zoomed_all->SetBinContent(9,2.138385);
   AlphaT_Zoomed_all->SetBinContent(10,1.534432);
   AlphaT_Zoomed_all->SetBinContent(11,0.7295957);
   AlphaT_Zoomed_all->SetBinContent(12,1.08671);
   AlphaT_Zoomed_all->SetBinContent(13,11.11742);
   AlphaT_Zoomed_all->SetBinError(0,1.662504);
   AlphaT_Zoomed_all->SetBinError(1,0.6945878);
   AlphaT_Zoomed_all->SetBinError(2,0.7525582);
   AlphaT_Zoomed_all->SetBinError(3,0.7561079);
   AlphaT_Zoomed_all->SetBinError(4,0.7669274);
   AlphaT_Zoomed_all->SetBinError(5,0.7137769);
   AlphaT_Zoomed_all->SetBinError(6,0.8287862);
   AlphaT_Zoomed_all->SetBinError(7,0.4655001);
   AlphaT_Zoomed_all->SetBinError(8,0.3202643);
   AlphaT_Zoomed_all->SetBinError(9,0.3382092);
   AlphaT_Zoomed_all->SetBinError(10,0.3124802);
   AlphaT_Zoomed_all->SetBinError(11,0.1919802);
   AlphaT_Zoomed_all->SetBinError(12,0.2382208);
   AlphaT_Zoomed_all->SetBinError(13,0.8408864);
   AlphaT_Zoomed_all->SetEntries(2586);
   AlphaT_Zoomed_all->SetLineColor(40);
   AlphaT_Zoomed_all->SetLineWidth(3);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle(" Events/0.0025");
   AlphaT_Zoomed_all->Draw("HISTSAME");
   Double_t xAxis69[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis69);
   AlphaT_Zoomed_all->SetBinContent(0,1379.44);
   AlphaT_Zoomed_all->SetBinContent(1,338.7919);
   AlphaT_Zoomed_all->SetBinContent(2,381.8261);
   AlphaT_Zoomed_all->SetBinContent(3,447.0898);
   AlphaT_Zoomed_all->SetBinContent(4,501.736);
   AlphaT_Zoomed_all->SetBinContent(5,349.0806);
   AlphaT_Zoomed_all->SetBinContent(6,231.3964);
   AlphaT_Zoomed_all->SetBinContent(7,141.6216);
   AlphaT_Zoomed_all->SetBinContent(8,100.5523);
   AlphaT_Zoomed_all->SetBinContent(9,69.45694);
   AlphaT_Zoomed_all->SetBinContent(10,55.25134);
   AlphaT_Zoomed_all->SetBinContent(11,41.32358);
   AlphaT_Zoomed_all->SetBinContent(12,39.54186);
   AlphaT_Zoomed_all->SetBinContent(13,322.1123);
   AlphaT_Zoomed_all->SetBinError(0,12.45711);
   AlphaT_Zoomed_all->SetBinError(1,6.488548);
   AlphaT_Zoomed_all->SetBinError(2,6.691165);
   AlphaT_Zoomed_all->SetBinError(3,8.023619);
   AlphaT_Zoomed_all->SetBinError(4,8.65553);
   AlphaT_Zoomed_all->SetBinError(5,7.09127);
   AlphaT_Zoomed_all->SetBinError(6,10.13162);
   AlphaT_Zoomed_all->SetBinError(7,4.469169);
   AlphaT_Zoomed_all->SetBinError(8,3.786331);
   AlphaT_Zoomed_all->SetBinError(9,3.078295);
   AlphaT_Zoomed_all->SetBinError(10,2.648955);
   AlphaT_Zoomed_all->SetBinError(11,2.36105);
   AlphaT_Zoomed_all->SetBinError(12,2.442614);
   AlphaT_Zoomed_all->SetBinError(13,6.685682);
   AlphaT_Zoomed_all->SetEntries(75398);
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
   gre->SetPoint(0,0.45625,0);
   gre->SetPointError(0,0.00625,0);
   gre->SetPoint(1,0.46875,0);
   gre->SetPointError(1,0.00625,0);
   gre->SetPoint(2,0.48125,0);
   gre->SetPointError(2,0.00625,0);
   gre->SetPoint(3,0.49375,0);
   gre->SetPointError(3,0.00625,0);
   gre->SetPoint(4,0.50625,0);
   gre->SetPointError(4,0.00625,0);
   gre->SetPoint(5,0.51875,0);
   gre->SetPointError(5,0.00625,0);
   gre->SetPoint(6,0.53125,0);
   gre->SetPointError(6,0.00625,0);
   gre->SetPoint(7,0.54375,0);
   gre->SetPointError(7,0.00625,0);
   gre->SetPoint(8,0.55625,0);
   gre->SetPointError(8,0.00625,0);
   gre->SetPoint(9,0.56875,0);
   gre->SetPointError(9,0.00625,0);
   gre->SetPoint(10,0.58125,0);
   gre->SetPointError(10,0.00625,0);
   gre->SetPoint(11,0.59375,0);
   gre->SetPointError(11,0.00625,0);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all11 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all11","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all11->SetMinimum(0.0011);
   Graph_Graph_from_AlphaT_Zoomed_all11->SetMaximum(1.1);
   Graph_Graph_from_AlphaT_Zoomed_all11->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all11->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all11->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all11);
   
   gre->Draw("2");
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph_from_AlphaT_Zoomed_all");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetPoint(0,0.45625,338.7919);
   gre->SetPointError(0,0.00625,6.488548);
   gre->SetPoint(1,0.46875,381.8261);
   gre->SetPointError(1,0.00625,6.691165);
   gre->SetPoint(2,0.48125,447.0898);
   gre->SetPointError(2,0.00625,8.023619);
   gre->SetPoint(3,0.49375,501.736);
   gre->SetPointError(3,0.00625,8.65553);
   gre->SetPoint(4,0.50625,349.0806);
   gre->SetPointError(4,0.00625,7.09127);
   gre->SetPoint(5,0.51875,231.3964);
   gre->SetPointError(5,0.00625,10.13162);
   gre->SetPoint(6,0.53125,141.6216);
   gre->SetPointError(6,0.00625,4.469169);
   gre->SetPoint(7,0.54375,100.5523);
   gre->SetPointError(7,0.00625,3.786331);
   gre->SetPoint(8,0.55625,69.45694);
   gre->SetPointError(8,0.00625,3.078295);
   gre->SetPoint(9,0.56875,55.25134);
   gre->SetPointError(9,0.00625,2.648955);
   gre->SetPoint(10,0.58125,41.32358);
   gre->SetPointError(10,0.00625,2.36105);
   gre->SetPoint(11,0.59375,39.54186);
   gre->SetPointError(11,0.00625,2.442614);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all12 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all12","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all12->SetMinimum(33.38932);
   Graph_Graph_from_AlphaT_Zoomed_all12->SetMaximum(557.7208);
   Graph_Graph_from_AlphaT_Zoomed_all12->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all12->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all12->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all12);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_375_475    Jet Multiplicity=all");
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
   Double_t xAxis70[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis70);
   AlphaT_Zoomed_all->SetBinContent(0,175);
   AlphaT_Zoomed_all->SetBinContent(1,42);
   AlphaT_Zoomed_all->SetBinContent(2,52);
   AlphaT_Zoomed_all->SetBinContent(3,85);
   AlphaT_Zoomed_all->SetBinContent(4,109);
   AlphaT_Zoomed_all->SetBinContent(5,131);
   AlphaT_Zoomed_all->SetBinContent(6,147);
   AlphaT_Zoomed_all->SetBinContent(7,115);
   AlphaT_Zoomed_all->SetBinContent(8,68);
   AlphaT_Zoomed_all->SetBinContent(9,74);
   AlphaT_Zoomed_all->SetBinContent(10,48);
   AlphaT_Zoomed_all->SetBinContent(11,37);
   AlphaT_Zoomed_all->SetBinContent(12,31);
   AlphaT_Zoomed_all->SetBinContent(13,327);
   AlphaT_Zoomed_all->SetBinError(0,13.22876);
   AlphaT_Zoomed_all->SetBinError(1,6.480741);
   AlphaT_Zoomed_all->SetBinError(2,7.211103);
   AlphaT_Zoomed_all->SetBinError(3,9.219544);
   AlphaT_Zoomed_all->SetBinError(4,10.44031);
   AlphaT_Zoomed_all->SetBinError(5,11.44552);
   AlphaT_Zoomed_all->SetBinError(6,12.12436);
   AlphaT_Zoomed_all->SetBinError(7,10.72381);
   AlphaT_Zoomed_all->SetBinError(8,8.246211);
   AlphaT_Zoomed_all->SetBinError(9,8.602325);
   AlphaT_Zoomed_all->SetBinError(10,6.928203);
   AlphaT_Zoomed_all->SetBinError(11,6.082763);
   AlphaT_Zoomed_all->SetBinError(12,5.567764);
   AlphaT_Zoomed_all->SetBinError(13,18.08314);
   AlphaT_Zoomed_all->SetMinimum(0.5);
   AlphaT_Zoomed_all->SetMaximum(5017.36);
   AlphaT_Zoomed_all->SetEntries(1441);
   AlphaT_Zoomed_all->SetLineWidth(2);
   AlphaT_Zoomed_all->SetMarkerStyle(20);
   AlphaT_Zoomed_all->SetMarkerSize(1.5);
   AlphaT_Zoomed_all->GetXaxis()->SetTitle("#alpha_{T}");
   AlphaT_Zoomed_all->GetYaxis()->SetTitle("Events / 0.08");
   AlphaT_Zoomed_all->GetYaxis()->SetTitleOffset(1.3);
   AlphaT_Zoomed_all->Draw("PSAME");
   u->Modified();
   canvasOneMuon_375_475/AlphaT_Zoomed_all->cd();
  
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
   Double_t xAxis71[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis71);
   AlphaT_Zoomed_all->SetBinContent(0,0.1268631);
   AlphaT_Zoomed_all->SetBinContent(1,0.1239699);
   AlphaT_Zoomed_all->SetBinContent(2,0.1361877);
   AlphaT_Zoomed_all->SetBinContent(3,0.1901184);
   AlphaT_Zoomed_all->SetBinContent(4,0.2172457);
   AlphaT_Zoomed_all->SetBinContent(5,0.3752715);
   AlphaT_Zoomed_all->SetBinContent(6,0.6352734);
   AlphaT_Zoomed_all->SetBinContent(7,0.8120232);
   AlphaT_Zoomed_all->SetBinContent(8,0.676265);
   AlphaT_Zoomed_all->SetBinContent(9,1.065408);
   AlphaT_Zoomed_all->SetBinContent(10,0.8687573);
   AlphaT_Zoomed_all->SetBinContent(11,0.8953726);
   AlphaT_Zoomed_all->SetBinContent(12,0.7839794);
   AlphaT_Zoomed_all->SetBinContent(13,1.015174);
   AlphaT_Zoomed_all->SetBinError(0,0.009658135);
   AlphaT_Zoomed_all->SetBinError(1,0.1554874);
   AlphaT_Zoomed_all->SetBinError(2,0.1397779);
   AlphaT_Zoomed_all->SetBinError(3,0.1099399);
   AlphaT_Zoomed_all->SetBinError(4,0.09732376);
   AlphaT_Zoomed_all->SetBinError(5,0.0897009);
   AlphaT_Zoomed_all->SetBinError(6,0.09337998);
   AlphaT_Zoomed_all->SetBinError(7,0.09844544);
   AlphaT_Zoomed_all->SetBinError(8,0.1269796);
   AlphaT_Zoomed_all->SetBinError(9,0.1244095);
   AlphaT_Zoomed_all->SetBinError(10,0.1520919);
   AlphaT_Zoomed_all->SetBinError(11,0.1740446);
   AlphaT_Zoomed_all->SetBinError(12,0.1899314);
   AlphaT_Zoomed_all->SetBinError(13,0.05996324);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(452.793);
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
   gre->SetPointError(0,0.00625,0.01915202);
   gre->SetPoint(1,0.46875,1);
   gre->SetPointError(1,0.00625,0.01752412);
   gre->SetPoint(2,0.48125,1);
   gre->SetPointError(2,0.00625,0.01794632);
   gre->SetPoint(3,0.49375,1);
   gre->SetPointError(3,0.00625,0.01725116);
   gre->SetPoint(4,0.50625,1);
   gre->SetPointError(4,0.00625,0.02031413);
   gre->SetPoint(5,0.51875,1);
   gre->SetPointError(5,0.00625,0.0437847);
   gre->SetPoint(6,0.53125,1);
   gre->SetPointError(6,0.00625,0.03155712);
   gre->SetPoint(7,0.54375,1);
   gre->SetPointError(7,0.00625,0.03765535);
   gre->SetPoint(8,0.55625,1);
   gre->SetPointError(8,0.00625,0.04431947);
   gre->SetPoint(9,0.56875,1);
   gre->SetPointError(9,0.00625,0.04794373);
   gre->SetPoint(10,0.58125,1);
   gre->SetPointError(10,0.00625,0.05713568);
   gre->SetPoint(11,0.59375,1);
   gre->SetPointError(11,0.00625,0.06177288);
   
   TH1F *Graph_Graph_from_AlphaT_Zoomed_all13 = new TH1F("Graph_Graph_from_AlphaT_Zoomed_all13","",100,0.435,0.615);
   Graph_Graph_from_AlphaT_Zoomed_all13->SetMinimum(0.9258725);
   Graph_Graph_from_AlphaT_Zoomed_all13->SetMaximum(1.074127);
   Graph_Graph_from_AlphaT_Zoomed_all13->SetDirectory(0);
   Graph_Graph_from_AlphaT_Zoomed_all13->SetStats(0);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_AlphaT_Zoomed_all13->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_AlphaT_Zoomed_all13);
   
   gre->Draw("2");
   TLine *line = new TLine(0.45,1,0.6,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis72[13] = {0.45, 0.4625, 0.475, 0.4875, 0.5, 0.5125, 0.525, 0.5375, 0.55, 0.5625, 0.575, 0.5875, 0.6}; 
   
   TH1D *AlphaT_Zoomed_all = new TH1D("AlphaT_Zoomed_all","",12, xAxis72);
   AlphaT_Zoomed_all->SetBinContent(0,0.1268631);
   AlphaT_Zoomed_all->SetBinContent(1,0.1239699);
   AlphaT_Zoomed_all->SetBinContent(2,0.1361877);
   AlphaT_Zoomed_all->SetBinContent(3,0.1901184);
   AlphaT_Zoomed_all->SetBinContent(4,0.2172457);
   AlphaT_Zoomed_all->SetBinContent(5,0.3752715);
   AlphaT_Zoomed_all->SetBinContent(6,0.6352734);
   AlphaT_Zoomed_all->SetBinContent(7,0.8120232);
   AlphaT_Zoomed_all->SetBinContent(8,0.676265);
   AlphaT_Zoomed_all->SetBinContent(9,1.065408);
   AlphaT_Zoomed_all->SetBinContent(10,0.8687573);
   AlphaT_Zoomed_all->SetBinContent(11,0.8953726);
   AlphaT_Zoomed_all->SetBinContent(12,0.7839794);
   AlphaT_Zoomed_all->SetBinContent(13,1.015174);
   AlphaT_Zoomed_all->SetBinError(0,0.009658135);
   AlphaT_Zoomed_all->SetBinError(1,0.1554874);
   AlphaT_Zoomed_all->SetBinError(2,0.1397779);
   AlphaT_Zoomed_all->SetBinError(3,0.1099399);
   AlphaT_Zoomed_all->SetBinError(4,0.09732376);
   AlphaT_Zoomed_all->SetBinError(5,0.0897009);
   AlphaT_Zoomed_all->SetBinError(6,0.09337998);
   AlphaT_Zoomed_all->SetBinError(7,0.09844544);
   AlphaT_Zoomed_all->SetBinError(8,0.1269796);
   AlphaT_Zoomed_all->SetBinError(9,0.1244095);
   AlphaT_Zoomed_all->SetBinError(10,0.1520919);
   AlphaT_Zoomed_all->SetBinError(11,0.1740446);
   AlphaT_Zoomed_all->SetBinError(12,0.1899314);
   AlphaT_Zoomed_all->SetBinError(13,0.05996324);
   AlphaT_Zoomed_all->SetMinimum(0);
   AlphaT_Zoomed_all->SetMaximum(2);
   AlphaT_Zoomed_all->SetEntries(452.793);
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
   canvasOneMuon_375_475/AlphaT_Zoomed_all->cd();
   canvasOneMuon_375_475/AlphaT_Zoomed_all->Modified();
   canvasOneMuon_375_475/AlphaT_Zoomed_all->cd();
   canvasOneMuon_375_475/AlphaT_Zoomed_all->SetSelected(canvasOneMuon_375_475/AlphaT_Zoomed_all);
}
