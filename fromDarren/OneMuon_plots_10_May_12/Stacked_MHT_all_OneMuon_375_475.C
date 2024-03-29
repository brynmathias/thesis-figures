{
//=========Macro generated from canvas: canvasOneMuon_375_475/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:06:21 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_375_475/MHT_all = new TCanvas("canvasOneMuon_375_475/MHT_all", "cannameMHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_375_475/MHT_all->SetHighLightColor(2);
   canvasOneMuon_375_475/MHT_all->Range(0,0,1,1);
   canvasOneMuon_375_475/MHT_all->SetFillColor(0);
   canvasOneMuon_375_475/MHT_all->SetBorderMode(0);
   canvasOneMuon_375_475/MHT_all->SetBorderSize(2);
   canvasOneMuon_375_475/MHT_all->SetTickx(1);
   canvasOneMuon_375_475/MHT_all->SetTicky(1);
   canvasOneMuon_375_475/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-0.7959623,585,4.153361);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis373[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis373);
   MHT_all->SetBinContent(2,2);
   MHT_all->SetBinContent(3,3);
   MHT_all->SetBinContent(4,17);
   MHT_all->SetBinContent(5,54);
   MHT_all->SetBinContent(6,108);
   MHT_all->SetBinContent(7,171);
   MHT_all->SetBinContent(8,173);
   MHT_all->SetBinContent(9,133);
   MHT_all->SetBinContent(10,119);
   MHT_all->SetBinContent(11,95);
   MHT_all->SetBinContent(12,85);
   MHT_all->SetBinContent(13,85);
   MHT_all->SetBinContent(14,82);
   MHT_all->SetBinContent(15,70);
   MHT_all->SetBinContent(16,51);
   MHT_all->SetBinContent(17,40);
   MHT_all->SetBinContent(18,32);
   MHT_all->SetBinContent(19,38);
   MHT_all->SetBinContent(20,33);
   MHT_all->SetBinContent(21,25);
   MHT_all->SetBinContent(22,17);
   MHT_all->SetBinContent(23,7);
   MHT_all->SetBinContent(24,1);
   MHT_all->SetBinError(2,2);
   MHT_all->SetBinError(3,2.14);
   MHT_all->SetBinError(4,4.123106);
   MHT_all->SetBinError(5,7.348469);
   MHT_all->SetBinError(6,10.3923);
   MHT_all->SetBinError(7,13.0767);
   MHT_all->SetBinError(8,13.15295);
   MHT_all->SetBinError(9,11.53256);
   MHT_all->SetBinError(10,10.90871);
   MHT_all->SetBinError(11,9.746794);
   MHT_all->SetBinError(12,9.219544);
   MHT_all->SetBinError(13,9.219544);
   MHT_all->SetBinError(14,9.055385);
   MHT_all->SetBinError(15,8.3666);
   MHT_all->SetBinError(16,7.141428);
   MHT_all->SetBinError(17,6.324555);
   MHT_all->SetBinError(18,5.656854);
   MHT_all->SetBinError(19,6.164414);
   MHT_all->SetBinError(20,5.744563);
   MHT_all->SetBinError(21,5);
   MHT_all->SetBinError(22,4.123106);
   MHT_all->SetBinError(23,2.86);
   MHT_all->SetBinError(24,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(4554.372);
   MHT_all->SetEntries(1442);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_25 = new TH1F("_stack_25","",30,0,600);
   _stack_25->SetMinimum(0.1821749);
   _stack_25->SetMaximum(728.6995);
   _stack_25->SetDirectory(0);
   _stack_25->SetStats(0);
   _stack_25->GetXaxis()->SetLabelFont(42);
   _stack_25->GetXaxis()->SetLabelOffset(0.007);
   _stack_25->GetXaxis()->SetLabelSize(0.05);
   _stack_25->GetXaxis()->SetTitleSize(0.05);
   _stack_25->GetYaxis()->SetLabelFont(42);
   _stack_25->GetYaxis()->SetLabelOffset(0.007);
   _stack_25->GetYaxis()->SetLabelSize(0.05);
   _stack_25->GetZaxis()->SetLabelFont(42);
   _stack_25->GetZaxis()->SetLabelOffset(0.007);
   _stack_25->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_25);
   
   Double_t xAxis374[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis374);
   MHT_all->SetEntries(1);
   MHT_all->SetFillColor(5);
   MHT_all->SetLineColor(5);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis375[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis375);
   MHT_all->SetBinContent(5,0.1350632);
   MHT_all->SetBinError(5,0.1350632);
   MHT_all->SetEntries(2);
   MHT_all->SetFillColor(7);
   MHT_all->SetLineColor(7);
   MHT_all->SetLineStyle(10);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis376[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis376);
   MHT_all->SetBinContent(1,0.4709131);
   MHT_all->SetBinContent(2,0.8159219);
   MHT_all->SetBinContent(3,1.855659);
   MHT_all->SetBinContent(4,1.221493);
   MHT_all->SetBinContent(5,0.9709089);
   MHT_all->SetBinContent(6,1.232853);
   MHT_all->SetBinContent(7,1.801755);
   MHT_all->SetBinContent(8,1.315946);
   MHT_all->SetBinContent(9,1.569198);
   MHT_all->SetBinContent(10,1.387347);
   MHT_all->SetBinContent(11,0.9524085);
   MHT_all->SetBinContent(12,0.9529073);
   MHT_all->SetBinContent(13,0.7084994);
   MHT_all->SetBinContent(14,0.6502972);
   MHT_all->SetBinContent(15,0.551378);
   MHT_all->SetBinContent(16,0.4419098);
   MHT_all->SetBinContent(17,0.4233353);
   MHT_all->SetBinContent(18,0.4602731);
   MHT_all->SetBinContent(19,0.2569892);
   MHT_all->SetBinContent(20,0.4342607);
   MHT_all->SetBinContent(21,0.136401);
   MHT_all->SetBinContent(22,0.2725515);
   MHT_all->SetBinContent(23,0.007989333);
   MHT_all->SetBinError(1,0.121111);
   MHT_all->SetBinError(2,0.1627348);
   MHT_all->SetBinError(3,0.2488273);
   MHT_all->SetBinError(4,0.2054599);
   MHT_all->SetBinError(5,0.1785597);
   MHT_all->SetBinError(6,0.2045767);
   MHT_all->SetBinError(7,0.2542318);
   MHT_all->SetBinError(8,0.206374);
   MHT_all->SetBinError(9,0.2397478);
   MHT_all->SetBinError(10,0.2249797);
   MHT_all->SetBinError(11,0.1834359);
   MHT_all->SetBinError(12,0.1856922);
   MHT_all->SetBinError(13,0.1547465);
   MHT_all->SetBinError(14,0.1517938);
   MHT_all->SetBinError(15,0.1401479);
   MHT_all->SetBinError(16,0.1213096);
   MHT_all->SetBinError(17,0.125642);
   MHT_all->SetBinError(18,0.1198723);
   MHT_all->SetBinError(19,0.08473433);
   MHT_all->SetBinError(20,0.1160996);
   MHT_all->SetBinError(21,0.0667145);
   MHT_all->SetBinError(22,0.09978862);
   MHT_all->SetBinError(23,0.007989333);
   MHT_all->SetEntries(749);
   MHT_all->SetFillColor(44);
   MHT_all->SetLineColor(44);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis377[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis377);
   MHT_all->SetBinContent(1,3.663789);
   MHT_all->SetBinContent(2,5.197406);
   MHT_all->SetBinContent(3,16.4166);
   MHT_all->SetBinContent(4,10.12639);
   MHT_all->SetBinContent(5,15.98982);
   MHT_all->SetBinContent(6,7.106275);
   MHT_all->SetBinContent(7,5.635885);
   MHT_all->SetBinContent(8,8.410581);
   MHT_all->SetBinContent(9,4.673736);
   MHT_all->SetBinContent(10,3.050064);
   MHT_all->SetBinContent(11,1.731228);
   MHT_all->SetBinContent(12,1.440757);
   MHT_all->SetBinContent(13,0.9361151);
   MHT_all->SetBinContent(14,1.39373);
   MHT_all->SetBinContent(15,0.02819469);
   MHT_all->SetBinContent(17,0.5650835);
   MHT_all->SetBinContent(19,0.5650835);
   MHT_all->SetBinError(1,1.29571);
   MHT_all->SetBinError(2,1.594024);
   MHT_all->SetBinError(3,3.071357);
   MHT_all->SetBinError(4,2.501792);
   MHT_all->SetBinError(5,8.499366);
   MHT_all->SetBinError(6,1.700776);
   MHT_all->SetBinError(7,1.675309);
   MHT_all->SetBinError(8,2.293502);
   MHT_all->SetBinError(9,1.573076);
   MHT_all->SetBinError(10,1.172985);
   MHT_all->SetBinError(11,1.003262);
   MHT_all->SetBinError(12,0.8174391);
   MHT_all->SetBinError(13,0.5468203);
   MHT_all->SetBinError(14,0.8054261);
   MHT_all->SetBinError(15,0.02819469);
   MHT_all->SetBinError(17,0.5650835);
   MHT_all->SetBinError(19,0.5650835);
   MHT_all->SetEntries(198);
   MHT_all->SetFillColor(6);
   MHT_all->SetLineColor(6);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis378[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis378);
   MHT_all->SetBinContent(1,2.634805);
   MHT_all->SetBinContent(2,7.387084);
   MHT_all->SetBinContent(3,9.46057);
   MHT_all->SetBinContent(4,10.71318);
   MHT_all->SetBinContent(5,12.15439);
   MHT_all->SetBinContent(6,10.0185);
   MHT_all->SetBinContent(7,11.34973);
   MHT_all->SetBinContent(8,9.532246);
   MHT_all->SetBinContent(9,6.045717);
   MHT_all->SetBinContent(10,6.891733);
   MHT_all->SetBinContent(11,4.182276);
   MHT_all->SetBinContent(12,3.64085);
   MHT_all->SetBinContent(13,2.670972);
   MHT_all->SetBinContent(14,2.567175);
   MHT_all->SetBinContent(15,1.700941);
   MHT_all->SetBinContent(16,1.882988);
   MHT_all->SetBinContent(17,0.7691233);
   MHT_all->SetBinContent(18,1.571759);
   MHT_all->SetBinContent(19,1.843594);
   MHT_all->SetBinContent(20,1.361532);
   MHT_all->SetBinContent(21,0.5382603);
   MHT_all->SetBinContent(22,0.3323209);
   MHT_all->SetBinContent(23,0.01926069);
   MHT_all->SetBinContent(24,0.102222);
   MHT_all->SetBinError(1,0.3690894);
   MHT_all->SetBinError(2,0.6605807);
   MHT_all->SetBinError(3,0.8203861);
   MHT_all->SetBinError(4,0.737258);
   MHT_all->SetBinError(5,0.8315814);
   MHT_all->SetBinError(6,0.7842428);
   MHT_all->SetBinError(7,0.8108519);
   MHT_all->SetBinError(8,1.158234);
   MHT_all->SetBinError(9,0.5560559);
   MHT_all->SetBinError(10,0.8582418);
   MHT_all->SetBinError(11,0.4727909);
   MHT_all->SetBinError(12,0.46467);
   MHT_all->SetBinError(13,0.3758387);
   MHT_all->SetBinError(14,0.4536683);
   MHT_all->SetBinError(15,0.2986288);
   MHT_all->SetBinError(16,0.3248428);
   MHT_all->SetBinError(17,0.1971226);
   MHT_all->SetBinError(18,0.304406);
   MHT_all->SetBinError(19,0.3122355);
   MHT_all->SetBinError(20,0.3033556);
   MHT_all->SetBinError(21,0.1821717);
   MHT_all->SetBinError(22,0.1389218);
   MHT_all->SetBinError(23,0.01648848);
   MHT_all->SetBinError(24,0.07362589);
   MHT_all->SetEntries(2587);
   MHT_all->SetFillColor(40);
   MHT_all->SetLineColor(40);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis379[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis379);
   MHT_all->SetBinContent(1,25.94756);
   MHT_all->SetBinContent(2,66.76044);
   MHT_all->SetBinContent(3,108.2865);
   MHT_all->SetBinContent(4,129.2359);
   MHT_all->SetBinContent(5,144.908);
   MHT_all->SetBinContent(6,135.8603);
   MHT_all->SetBinContent(7,116.9166);
   MHT_all->SetBinContent(8,105.3741);
   MHT_all->SetBinContent(9,95.87983);
   MHT_all->SetBinContent(10,70.64383);
   MHT_all->SetBinContent(11,55.65862);
   MHT_all->SetBinContent(12,40.69392);
   MHT_all->SetBinContent(13,32.91345);
   MHT_all->SetBinContent(14,21.004);
   MHT_all->SetBinContent(15,19.93209);
   MHT_all->SetBinContent(16,12.67507);
   MHT_all->SetBinContent(17,8.100911);
   MHT_all->SetBinContent(18,7.233898);
   MHT_all->SetBinContent(19,6.344147);
   MHT_all->SetBinContent(20,4.785453);
   MHT_all->SetBinContent(21,2.246666);
   MHT_all->SetBinContent(22,2.239953);
   MHT_all->SetBinContent(23,0.4636476);
   MHT_all->SetBinError(1,2.553994);
   MHT_all->SetBinError(2,4.222168);
   MHT_all->SetBinError(3,5.309279);
   MHT_all->SetBinError(4,6.004581);
   MHT_all->SetBinError(5,6.530893);
   MHT_all->SetBinError(6,6.264296);
   MHT_all->SetBinError(7,5.374023);
   MHT_all->SetBinError(8,5.099502);
   MHT_all->SetBinError(9,4.97547);
   MHT_all->SetBinError(10,4.296087);
   MHT_all->SetBinError(11,3.781393);
   MHT_all->SetBinError(12,3.249427);
   MHT_all->SetBinError(13,2.904877);
   MHT_all->SetBinError(14,2.442449);
   MHT_all->SetBinError(15,3.428803);
   MHT_all->SetBinError(16,1.770187);
   MHT_all->SetBinError(17,1.39947);
   MHT_all->SetBinError(18,1.304118);
   MHT_all->SetBinError(19,1.192529);
   MHT_all->SetBinError(20,0.9813795);
   MHT_all->SetBinError(21,0.7576855);
   MHT_all->SetBinError(22,0.6886732);
   MHT_all->SetBinError(23,0.3283055);
   MHT_all->SetEntries(6388);
   MHT_all->SetFillColor(2);
   MHT_all->SetLineColor(2);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis380[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis380);
   MHT_all->SetBinContent(1,87.28593);
   MHT_all->SetBinContent(2,198.0658);
   MHT_all->SetBinContent(3,251.6203);
   MHT_all->SetBinContent(4,278.0512);
   MHT_all->SetBinContent(5,281.279);
   MHT_all->SetBinContent(6,280.1229);
   MHT_all->SetBinContent(7,284.8043);
   MHT_all->SetBinContent(8,246.7309);
   MHT_all->SetBinContent(9,212.7726);
   MHT_all->SetBinContent(10,181.1102);
   MHT_all->SetBinContent(11,137.7811);
   MHT_all->SetBinContent(12,110.9285);
   MHT_all->SetBinContent(13,88.36015);
   MHT_all->SetBinContent(14,71.44042);
   MHT_all->SetBinContent(15,54.58573);
   MHT_all->SetBinContent(16,43.23336);
   MHT_all->SetBinContent(17,34.41553);
   MHT_all->SetBinContent(18,33.25344);
   MHT_all->SetBinContent(19,34.1489);
   MHT_all->SetBinContent(20,25.05982);
   MHT_all->SetBinContent(21,17.98173);
   MHT_all->SetBinContent(22,9.568446);
   MHT_all->SetBinContent(23,6.131799);
   MHT_all->SetBinContent(24,1.055584);
   MHT_all->SetBinError(1,2.388039);
   MHT_all->SetBinError(2,3.657909);
   MHT_all->SetBinError(3,4.070084);
   MHT_all->SetBinError(4,4.366407);
   MHT_all->SetBinError(5,4.420949);
   MHT_all->SetBinError(6,4.17073);
   MHT_all->SetBinError(7,4.29636);
   MHT_all->SetBinError(8,3.948253);
   MHT_all->SetBinError(9,3.653766);
   MHT_all->SetBinError(10,3.365776);
   MHT_all->SetBinError(11,2.877759);
   MHT_all->SetBinError(12,2.768924);
   MHT_all->SetBinError(13,2.339079);
   MHT_all->SetBinError(14,2.169467);
   MHT_all->SetBinError(15,1.83772);
   MHT_all->SetBinError(16,1.611858);
   MHT_all->SetBinError(17,1.449339);
   MHT_all->SetBinError(18,1.410232);
   MHT_all->SetBinError(19,1.500862);
   MHT_all->SetBinError(20,1.325953);
   MHT_all->SetBinError(21,1.188046);
   MHT_all->SetBinError(22,0.740247);
   MHT_all->SetBinError(23,0.634968);
   MHT_all->SetBinError(24,0.2354223);
   MHT_all->SetEntries(65480);
   MHT_all->SetFillColor(4);
   MHT_all->SetLineColor(4);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
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
   leg->Draw();
   Double_t xAxis381[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis381);
   MHT_all->SetBinContent(2,2);
   MHT_all->SetBinContent(3,3);
   MHT_all->SetBinContent(4,17);
   MHT_all->SetBinContent(5,54);
   MHT_all->SetBinContent(6,108);
   MHT_all->SetBinContent(7,171);
   MHT_all->SetBinContent(8,173);
   MHT_all->SetBinContent(9,133);
   MHT_all->SetBinContent(10,119);
   MHT_all->SetBinContent(11,95);
   MHT_all->SetBinContent(12,85);
   MHT_all->SetBinContent(13,85);
   MHT_all->SetBinContent(14,82);
   MHT_all->SetBinContent(15,70);
   MHT_all->SetBinContent(16,51);
   MHT_all->SetBinContent(17,40);
   MHT_all->SetBinContent(18,32);
   MHT_all->SetBinContent(19,38);
   MHT_all->SetBinContent(20,33);
   MHT_all->SetBinContent(21,25);
   MHT_all->SetBinContent(22,17);
   MHT_all->SetBinContent(23,7);
   MHT_all->SetBinContent(24,1);
   MHT_all->SetBinError(2,2);
   MHT_all->SetBinError(3,2.14);
   MHT_all->SetBinError(4,4.123106);
   MHT_all->SetBinError(5,7.348469);
   MHT_all->SetBinError(6,10.3923);
   MHT_all->SetBinError(7,13.0767);
   MHT_all->SetBinError(8,13.15295);
   MHT_all->SetBinError(9,11.53256);
   MHT_all->SetBinError(10,10.90871);
   MHT_all->SetBinError(11,9.746794);
   MHT_all->SetBinError(12,9.219544);
   MHT_all->SetBinError(13,9.219544);
   MHT_all->SetBinError(14,9.055385);
   MHT_all->SetBinError(15,8.3666);
   MHT_all->SetBinError(16,7.141428);
   MHT_all->SetBinError(17,6.324555);
   MHT_all->SetBinError(18,5.656854);
   MHT_all->SetBinError(19,6.164414);
   MHT_all->SetBinError(20,5.744563);
   MHT_all->SetBinError(21,5);
   MHT_all->SetBinError(22,4.123106);
   MHT_all->SetBinError(23,2.86);
   MHT_all->SetBinError(24,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(4554.372);
   MHT_all->SetEntries(1442);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
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
   u->Modified();
   canvasOneMuon_375_475/MHT_all->cd();
  
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
   Double_t xAxis382[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis382);
   MHT_all->SetBinContent(2,0.007188383);
   MHT_all->SetBinContent(3,0.007739147);
   MHT_all->SetBinContent(4,0.0395949);
   MHT_all->SetBinContent(5,0.1185674);
   MHT_all->SetBinContent(6,0.2486527);
   MHT_all->SetBinContent(7,0.4066508);
   MHT_all->SetBinContent(8,0.4658506);
   MHT_all->SetBinContent(9,0.4144063);
   MHT_all->SetBinContent(10,0.4523285);
   MHT_all->SetBinContent(11,0.4742752);
   MHT_all->SetBinContent(12,0.5391453);
   MHT_all->SetBinContent(13,0.6768099);
   MHT_all->SetBinContent(14,0.8448764);
   MHT_all->SetBinContent(15,0.9114781);
   MHT_all->SetBinContent(16,0.8757871);
   MHT_all->SetBinContent(17,0.9034651);
   MHT_all->SetBinContent(18,0.7525981);
   MHT_all->SetBinContent(19,0.8804712);
   MHT_all->SetBinContent(20,1.042948);
   MHT_all->SetBinContent(21,1.195998);
   MHT_all->SetBinContent(22,1.369502);
   MHT_all->SetBinContent(23,1.056971);
   MHT_all->SetBinContent(24,0.8637028);
   MHT_all->SetBinError(2,1.000221);
   MHT_all->SetBinError(3,0.7135895);
   MHT_all->SetBinError(4,0.2432276);
   MHT_all->SetBinError(5,0.1384566);
   MHT_all->SetBinError(6,0.09786874);
   MHT_all->SetBinError(7,0.07833021);
   MHT_all->SetBinError(8,0.0782951);
   MHT_all->SetBinError(9,0.08897373);
   MHT_all->SetBinError(10,0.09415387);
   MHT_all->SetBinError(11,0.1054543);
   MHT_all->SetBinError(12,0.1119595);
   MHT_all->SetBinError(13,0.1125878);
   MHT_all->SetBinError(14,0.11585);
   MHT_all->SetBinError(15,0.1298855);
   MHT_all->SetBinError(16,0.1460599);
   MHT_all->SetBinError(17,0.1651107);
   MHT_all->SetBinError(18,0.1826197);
   MHT_all->SetBinError(19,0.1688675);
   MHT_all->SetBinError(20,0.1820069);
   MHT_all->SetBinError(21,0.211259);
   MHT_all->SetBinError(22,0.2562176);
   MHT_all->SetBinError(23,0.422597);
   MHT_all->SetBinError(24,1.022443);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(159.866);
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
   gre->SetPointError(0,10,0.0312413);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.02102242);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.01911815);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.0183343);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.02552848);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.01786145);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.01696079);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.01870228);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.01993808);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.02148464);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.02437798);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.0277528);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.03018796);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.03501587);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0.05083828);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.04154094);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0.04755578);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0.04582531);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,0.04690884);
   gre->SetPoint(19,390,1);
   gre->SetPointError(19,10,0.05313656);
   gre->SetPoint(20,410,1);
   gre->SetPointError(20,10,0.06804676);
   gre->SetPoint(21,430,1);
   gre->SetPointError(21,10,0.08260703);
   gre->SetPoint(22,450,1);
   gre->SetPointError(22,10,0.1079705);
   gre->SetPoint(23,470,1);
   gre->SetPointError(23,10,0.2130466);
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
   
   TH1F *Graph_Graph_from_MHT_all64 = new TH1F("Graph_Graph_from_MHT_all64","",100,0,660);
   Graph_Graph_from_MHT_all64->SetMinimum(0.744344);
   Graph_Graph_from_MHT_all64->SetMaximum(1.255656);
   Graph_Graph_from_MHT_all64->SetDirectory(0);
   Graph_Graph_from_MHT_all64->SetStats(0);
   Graph_Graph_from_MHT_all64->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all64->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all64->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all64->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all64->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all64->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all64->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all64->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all64->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all64->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all64);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis383[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis383);
   MHT_all->SetBinContent(2,0.007188383);
   MHT_all->SetBinContent(3,0.007739147);
   MHT_all->SetBinContent(4,0.0395949);
   MHT_all->SetBinContent(5,0.1185674);
   MHT_all->SetBinContent(6,0.2486527);
   MHT_all->SetBinContent(7,0.4066508);
   MHT_all->SetBinContent(8,0.4658506);
   MHT_all->SetBinContent(9,0.4144063);
   MHT_all->SetBinContent(10,0.4523285);
   MHT_all->SetBinContent(11,0.4742752);
   MHT_all->SetBinContent(12,0.5391453);
   MHT_all->SetBinContent(13,0.6768099);
   MHT_all->SetBinContent(14,0.8448764);
   MHT_all->SetBinContent(15,0.9114781);
   MHT_all->SetBinContent(16,0.8757871);
   MHT_all->SetBinContent(17,0.9034651);
   MHT_all->SetBinContent(18,0.7525981);
   MHT_all->SetBinContent(19,0.8804712);
   MHT_all->SetBinContent(20,1.042948);
   MHT_all->SetBinContent(21,1.195998);
   MHT_all->SetBinContent(22,1.369502);
   MHT_all->SetBinContent(23,1.056971);
   MHT_all->SetBinContent(24,0.8637028);
   MHT_all->SetBinError(2,1.000221);
   MHT_all->SetBinError(3,0.7135895);
   MHT_all->SetBinError(4,0.2432276);
   MHT_all->SetBinError(5,0.1384566);
   MHT_all->SetBinError(6,0.09786874);
   MHT_all->SetBinError(7,0.07833021);
   MHT_all->SetBinError(8,0.0782951);
   MHT_all->SetBinError(9,0.08897373);
   MHT_all->SetBinError(10,0.09415387);
   MHT_all->SetBinError(11,0.1054543);
   MHT_all->SetBinError(12,0.1119595);
   MHT_all->SetBinError(13,0.1125878);
   MHT_all->SetBinError(14,0.11585);
   MHT_all->SetBinError(15,0.1298855);
   MHT_all->SetBinError(16,0.1460599);
   MHT_all->SetBinError(17,0.1651107);
   MHT_all->SetBinError(18,0.1826197);
   MHT_all->SetBinError(19,0.1688675);
   MHT_all->SetBinError(20,0.1820069);
   MHT_all->SetBinError(21,0.211259);
   MHT_all->SetBinError(22,0.2562176);
   MHT_all->SetBinError(23,0.422597);
   MHT_all->SetBinError(24,1.022443);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(159.866);
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
   canvasOneMuon_375_475/MHT_all->cd();
   canvasOneMuon_375_475/MHT_all->Modified();
   canvasOneMuon_375_475/MHT_all->cd();
   canvasOneMuon_375_475/MHT_all->SetSelected(canvasOneMuon_375_475/MHT_all);
}
