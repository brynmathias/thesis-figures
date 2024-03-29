{
//=========Macro generated from canvas: canvasDiMuon_375_475/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:45:07 2012) by ROOT version5.32/00
   TCanvas *canvasDiMuon_375_475/MHT_all = new TCanvas("canvasDiMuon_375_475/MHT_all", "cannameMHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasDiMuon_375_475/MHT_all->SetHighLightColor(2);
   canvasDiMuon_375_475/MHT_all->Range(0,0,1,1);
   canvasDiMuon_375_475/MHT_all->SetFillColor(0);
   canvasDiMuon_375_475/MHT_all->SetBorderMode(0);
   canvasDiMuon_375_475/MHT_all->SetBorderSize(2);
   canvasDiMuon_375_475/MHT_all->SetTickx(1);
   canvasDiMuon_375_475/MHT_all->SetTicky(1);
   canvasDiMuon_375_475/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-0.6814118,585,3.122406);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis403[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis403);
   MHT_all->SetBinContent(4,1);
   MHT_all->SetBinContent(5,8);
   MHT_all->SetBinContent(6,8);
   MHT_all->SetBinContent(7,11);
   MHT_all->SetBinContent(8,17);
   MHT_all->SetBinContent(9,19);
   MHT_all->SetBinContent(10,24);
   MHT_all->SetBinContent(11,14);
   MHT_all->SetBinContent(12,13);
   MHT_all->SetBinContent(13,12);
   MHT_all->SetBinContent(14,17);
   MHT_all->SetBinContent(15,6);
   MHT_all->SetBinContent(16,10);
   MHT_all->SetBinContent(17,8);
   MHT_all->SetBinContent(18,7);
   MHT_all->SetBinContent(19,3);
   MHT_all->SetBinContent(20,7);
   MHT_all->SetBinContent(21,1);
   MHT_all->SetBinContent(22,4);
   MHT_all->SetBinContent(23,2);
   MHT_all->SetBinContent(24,3);
   MHT_all->SetBinContent(25,5);
   MHT_all->SetBinContent(26,8);
   MHT_all->SetBinContent(27,2);
   MHT_all->SetBinContent(30,1);
   MHT_all->SetBinContent(31,1);
   MHT_all->SetBinError(4,1);
   MHT_all->SetBinError(5,3.03);
   MHT_all->SetBinError(6,3.03);
   MHT_all->SetBinError(7,3.316625);
   MHT_all->SetBinError(8,4.123106);
   MHT_all->SetBinError(9,4.358899);
   MHT_all->SetBinError(10,4.898979);
   MHT_all->SetBinError(11,3.741657);
   MHT_all->SetBinError(12,3.605551);
   MHT_all->SetBinError(13,3.464102);
   MHT_all->SetBinError(14,4.123106);
   MHT_all->SetBinError(15,2.68);
   MHT_all->SetBinError(16,3.162278);
   MHT_all->SetBinError(17,3.03);
   MHT_all->SetBinError(18,2.86);
   MHT_all->SetBinError(19,2.14);
   MHT_all->SetBinError(20,2.86);
   MHT_all->SetBinError(21,1);
   MHT_all->SetBinError(22,2.3);
   MHT_all->SetBinError(23,2);
   MHT_all->SetBinError(24,2.14);
   MHT_all->SetBinError(25,2.49);
   MHT_all->SetBinError(26,3.03);
   MHT_all->SetBinError(27,2);
   MHT_all->SetBinError(30,1);
   MHT_all->SetBinError(31,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(552.1078);
   MHT_all->SetEntries(205);
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
   
   TH1F *_stack_27 = new TH1F("_stack_27","",30,0,600);
   _stack_27->SetMinimum(0.02314667);
   _stack_27->SetMaximum(92.58667);
   _stack_27->SetDirectory(0);
   _stack_27->SetStats(0);
   _stack_27->GetXaxis()->SetLabelFont(42);
   _stack_27->GetXaxis()->SetLabelOffset(0.007);
   _stack_27->GetXaxis()->SetLabelSize(0.05);
   _stack_27->GetXaxis()->SetTitleSize(0.05);
   _stack_27->GetYaxis()->SetLabelFont(42);
   _stack_27->GetYaxis()->SetLabelOffset(0.007);
   _stack_27->GetYaxis()->SetLabelSize(0.05);
   _stack_27->GetZaxis()->SetLabelFont(42);
   _stack_27->GetZaxis()->SetLabelOffset(0.007);
   _stack_27->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_27);
   
   Double_t xAxis404[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis404);
   MHT_all->SetEntries(1);
   MHT_all->SetFillColor(5);
   MHT_all->SetLineColor(5);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis405[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis405);
   MHT_all->SetEntries(1);
   MHT_all->SetFillColor(7);
   MHT_all->SetLineColor(7);
   MHT_all->SetLineStyle(10);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis406[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis406);
   MHT_all->SetBinContent(6,0.04907353);
   MHT_all->SetBinError(6,0.04907353);
   MHT_all->SetEntries(2);
   MHT_all->SetFillColor(4);
   MHT_all->SetLineColor(4);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis407[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis407);
   MHT_all->SetBinContent(4,0.01736587);
   MHT_all->SetBinContent(5,0.05071205);
   MHT_all->SetBinContent(6,0.05854809);
   MHT_all->SetBinContent(7,0.1464499);
   MHT_all->SetBinContent(8,0.05854809);
   MHT_all->SetBinContent(9,0.1809252);
   MHT_all->SetBinContent(10,0.003277954);
   MHT_all->SetBinContent(11,0.03233293);
   MHT_all->SetBinContent(12,0.1962081);
   MHT_all->SetBinContent(13,0.233474);
   MHT_all->SetBinContent(14,0.05446026);
   MHT_all->SetBinContent(16,0.05662981);
   MHT_all->SetBinContent(17,0.07399568);
   MHT_all->SetBinContent(18,0.04416818);
   MHT_all->SetBinContent(19,0.1442945);
   MHT_all->SetBinContent(20,0.003262842);
   MHT_all->SetBinContent(21,0.08640875);
   MHT_all->SetBinContent(22,0.07211263);
   MHT_all->SetBinContent(23,0.03233293);
   MHT_all->SetBinError(4,0.01736587);
   MHT_all->SetBinError(5,0.05071205);
   MHT_all->SetBinError(6,0.05854809);
   MHT_all->SetBinError(7,0.08486303);
   MHT_all->SetBinError(8,0.05854809);
   MHT_all->SetBinError(9,0.09223868);
   MHT_all->SetBinError(10,0.003277954);
   MHT_all->SetBinError(11,0.03233293);
   MHT_all->SetBinError(12,0.1092452);
   MHT_all->SetBinError(13,0.1064092);
   MHT_all->SetBinError(14,0.05446026);
   MHT_all->SetBinError(16,0.05662981);
   MHT_all->SetBinError(17,0.05923267);
   MHT_all->SetBinError(18,0.04416818);
   MHT_all->SetBinError(19,0.08264635);
   MHT_all->SetBinError(20,0.003262842);
   MHT_all->SetBinError(21,0.06035011);
   MHT_all->SetBinError(22,0.07211263);
   MHT_all->SetBinError(23,0.03233293);
   MHT_all->SetEntries(41);
   MHT_all->SetFillColor(40);
   MHT_all->SetLineColor(40);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis408[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis408);
   MHT_all->SetBinContent(1,0.05232781);
   MHT_all->SetBinContent(2,0.02930292);
   MHT_all->SetBinContent(3,0.1207222);
   MHT_all->SetBinContent(4,0.1480747);
   MHT_all->SetBinContent(5,0.16961);
   MHT_all->SetBinContent(6,0.2266324);
   MHT_all->SetBinContent(7,0.2335706);
   MHT_all->SetBinContent(8,0.1919502);
   MHT_all->SetBinContent(9,0.2481431);
   MHT_all->SetBinContent(10,0.1779159);
   MHT_all->SetBinContent(11,0.3917629);
   MHT_all->SetBinContent(12,0.1514471);
   MHT_all->SetBinContent(13,0.2114008);
   MHT_all->SetBinContent(14,0.2298809);
   MHT_all->SetBinContent(15,0.1267497);
   MHT_all->SetBinContent(16,0.1066553);
   MHT_all->SetBinContent(17,0.0929981);
   MHT_all->SetBinContent(18,0.1096419);
   MHT_all->SetBinContent(19,0.1656642);
   MHT_all->SetBinContent(20,0.179117);
   MHT_all->SetBinContent(21,0.06435558);
   MHT_all->SetBinContent(22,0.04311032);
   MHT_all->SetBinContent(23,0.01710458);
   MHT_all->SetBinContent(24,0.01517283);
   MHT_all->SetBinContent(25,0.01905172);
   MHT_all->SetBinContent(26,0.0694793);
   MHT_all->SetBinContent(27,0.00253158);
   MHT_all->SetBinContent(28,0.02363782);
   MHT_all->SetBinContent(29,0.001977001);
   MHT_all->SetBinContent(30,0.01513279);
   MHT_all->SetBinContent(31,0.04925857);
   MHT_all->SetBinError(1,0.02611388);
   MHT_all->SetBinError(2,0.01952391);
   MHT_all->SetBinError(3,0.03555245);
   MHT_all->SetBinError(4,0.03822815);
   MHT_all->SetBinError(5,0.04268569);
   MHT_all->SetBinError(6,0.04838359);
   MHT_all->SetBinError(7,0.05026035);
   MHT_all->SetBinError(8,0.04491855);
   MHT_all->SetBinError(9,0.05433901);
   MHT_all->SetBinError(10,0.04108887);
   MHT_all->SetBinError(11,0.08184495);
   MHT_all->SetBinError(12,0.04217979);
   MHT_all->SetBinError(13,0.0500887);
   MHT_all->SetBinError(14,0.06800786);
   MHT_all->SetBinError(15,0.0306533);
   MHT_all->SetBinError(16,0.04389359);
   MHT_all->SetBinError(17,0.0309111);
   MHT_all->SetBinError(18,0.03314217);
   MHT_all->SetBinError(19,0.06194428);
   MHT_all->SetBinError(20,0.04754299);
   MHT_all->SetBinError(21,0.03038244);
   MHT_all->SetBinError(22,0.02182416);
   MHT_all->SetBinError(23,0.01014329);
   MHT_all->SetBinError(24,0.009648846);
   MHT_all->SetBinError(25,0.01671299);
   MHT_all->SetBinError(26,0.2635893);
   MHT_all->SetBinError(27,0.00253158);
   MHT_all->SetBinError(28,0.01798823);
   MHT_all->SetBinError(29,0.001977001);
   MHT_all->SetBinError(30,0.009142457);
   MHT_all->SetBinError(31,0.04711108);
   MHT_all->SetEntries(418);
   MHT_all->SetFillColor(44);
   MHT_all->SetLineColor(44);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis409[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis409);
   MHT_all->SetBinContent(1,1.347615);
   MHT_all->SetBinContent(2,2.111938);
   MHT_all->SetBinContent(3,1.995799);
   MHT_all->SetBinContent(4,2.310995);
   MHT_all->SetBinContent(5,2.002631);
   MHT_all->SetBinContent(6,2.515712);
   MHT_all->SetBinContent(7,2.569966);
   MHT_all->SetBinContent(8,2.547895);
   MHT_all->SetBinContent(9,3.536398);
   MHT_all->SetBinContent(10,1.22993);
   MHT_all->SetBinContent(11,1.531676);
   MHT_all->SetBinContent(12,1.421182);
   MHT_all->SetBinContent(13,1.146559);
   MHT_all->SetBinContent(14,0.9290503);
   MHT_all->SetBinContent(15,0.6251024);
   MHT_all->SetBinContent(16,0.974093);
   MHT_all->SetBinContent(17,0.2353455);
   MHT_all->SetBinContent(18,0.5031502);
   MHT_all->SetBinContent(19,0.7110884);
   MHT_all->SetBinContent(21,0.1493596);
   MHT_all->SetBinContent(22,0.2717112);
   MHT_all->SetBinContent(23,0.1493596);
   MHT_all->SetBinContent(25,0.2615972);
   MHT_all->SetBinContent(26,0.5603163);
   MHT_all->SetBinContent(28,0.1493596);
   MHT_all->SetBinContent(30,0.1493596);
   MHT_all->SetBinContent(31,0.4634214);
   MHT_all->SetBinError(1,0.6717716);
   MHT_all->SetBinError(2,0.7857453);
   MHT_all->SetBinError(3,0.7017698);
   MHT_all->SetBinError(4,0.8294421);
   MHT_all->SetBinError(5,0.7548808);
   MHT_all->SetBinError(6,0.7952014);
   MHT_all->SetBinError(7,0.7880688);
   MHT_all->SetBinError(8,0.8043309);
   MHT_all->SetBinError(9,0.9974183);
   MHT_all->SetBinError(10,0.5614347);
   MHT_all->SetBinError(11,0.6250381);
   MHT_all->SetBinError(12,0.5751869);
   MHT_all->SetBinError(13,0.5150004);
   MHT_all->SetBinError(14,0.5699311);
   MHT_all->SetBinError(15,0.3711659);
   MHT_all->SetBinError(16,0.5278501);
   MHT_all->SetBinError(17,0.2353455);
   MHT_all->SetBinError(18,0.355781);
   MHT_all->SetBinError(19,0.4133321);
   MHT_all->SetBinError(21,0.1493596);
   MHT_all->SetBinError(22,0.2717112);
   MHT_all->SetBinError(23,0.1493596);
   MHT_all->SetBinError(25,0.2615972);
   MHT_all->SetBinError(26,0.7485428);
   MHT_all->SetBinError(28,0.1493596);
   MHT_all->SetBinError(30,0.1493596);
   MHT_all->SetBinError(31,0.4634214);
   MHT_all->SetEntries(153);
   MHT_all->SetFillColor(2);
   MHT_all->SetLineColor(2);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis410[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis410);
   MHT_all->SetBinContent(1,9.90404);
   MHT_all->SetBinContent(2,26.85892);
   MHT_all->SetBinContent(3,32.97069);
   MHT_all->SetBinContent(4,39.4158);
   MHT_all->SetBinContent(5,40.59224);
   MHT_all->SetBinContent(6,51.02156);
   MHT_all->SetBinContent(7,52.05115);
   MHT_all->SetBinContent(8,52.41239);
   MHT_all->SetBinContent(9,37.2668);
   MHT_all->SetBinContent(10,32.59564);
   MHT_all->SetBinContent(11,31.92108);
   MHT_all->SetBinContent(12,40.08555);
   MHT_all->SetBinContent(13,24.40872);
   MHT_all->SetBinContent(14,20.94027);
   MHT_all->SetBinContent(15,21.49908);
   MHT_all->SetBinContent(16,11.80135);
   MHT_all->SetBinContent(17,11.8838);
   MHT_all->SetBinContent(18,8.623292);
   MHT_all->SetBinContent(19,10.20611);
   MHT_all->SetBinContent(20,13.56674);
   MHT_all->SetBinContent(21,7.543852);
   MHT_all->SetBinContent(22,3.932805);
   MHT_all->SetBinContent(23,7.162971);
   MHT_all->SetBinContent(24,1.429152);
   MHT_all->SetBinContent(25,0.9594739);
   MHT_all->SetBinContent(26,6.73413);
   MHT_all->SetBinContent(27,0.6981032);
   MHT_all->SetBinContent(28,1.320044);
   MHT_all->SetBinContent(29,1.273547);
   MHT_all->SetBinContent(30,1.034355);
   MHT_all->SetBinContent(31,2.417467);
   MHT_all->SetBinError(1,2.270749);
   MHT_all->SetBinError(2,3.932099);
   MHT_all->SetBinError(3,4.046751);
   MHT_all->SetBinError(4,4.745063);
   MHT_all->SetBinError(5,4.72743);
   MHT_all->SetBinError(6,5.047543);
   MHT_all->SetBinError(7,5.472867);
   MHT_all->SetBinError(8,5.454284);
   MHT_all->SetBinError(9,4.298463);
   MHT_all->SetBinError(10,4.527297);
   MHT_all->SetBinError(11,4.059687);
   MHT_all->SetBinError(12,4.623092);
   MHT_all->SetBinError(13,3.542516);
   MHT_all->SetBinError(14,3.248097);
   MHT_all->SetBinError(15,4.165346);
   MHT_all->SetBinError(16,2.48742);
   MHT_all->SetBinError(17,2.499342);
   MHT_all->SetBinError(18,2.004397);
   MHT_all->SetBinError(19,2.339249);
   MHT_all->SetBinError(20,2.933648);
   MHT_all->SetBinError(21,1.963679);
   MHT_all->SetBinError(22,1.323703);
   MHT_all->SetBinError(23,2.023189);
   MHT_all->SetBinError(24,0.8123222);
   MHT_all->SetBinError(25,0.6627739);
   MHT_all->SetBinError(26,2.59502);
   MHT_all->SetBinError(27,0.6685672);
   MHT_all->SetBinError(28,0.7634899);
   MHT_all->SetBinError(29,0.9016077);
   MHT_all->SetBinError(30,0.7106741);
   MHT_all->SetBinError(31,1.116615);
   MHT_all->SetEntries(1470);
   MHT_all->SetFillColor(6);
   MHT_all->SetLineColor(6);
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
   entry=leg->AddEntry("MHT_all","Single Top","L");
   entry->SetLineColor(40);
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
   leg->Draw();
   Double_t xAxis411[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis411);
   MHT_all->SetBinContent(4,1);
   MHT_all->SetBinContent(5,8);
   MHT_all->SetBinContent(6,8);
   MHT_all->SetBinContent(7,11);
   MHT_all->SetBinContent(8,17);
   MHT_all->SetBinContent(9,19);
   MHT_all->SetBinContent(10,24);
   MHT_all->SetBinContent(11,14);
   MHT_all->SetBinContent(12,13);
   MHT_all->SetBinContent(13,12);
   MHT_all->SetBinContent(14,17);
   MHT_all->SetBinContent(15,6);
   MHT_all->SetBinContent(16,10);
   MHT_all->SetBinContent(17,8);
   MHT_all->SetBinContent(18,7);
   MHT_all->SetBinContent(19,3);
   MHT_all->SetBinContent(20,7);
   MHT_all->SetBinContent(21,1);
   MHT_all->SetBinContent(22,4);
   MHT_all->SetBinContent(23,2);
   MHT_all->SetBinContent(24,3);
   MHT_all->SetBinContent(25,5);
   MHT_all->SetBinContent(26,8);
   MHT_all->SetBinContent(27,2);
   MHT_all->SetBinContent(30,1);
   MHT_all->SetBinContent(31,1);
   MHT_all->SetBinError(4,1);
   MHT_all->SetBinError(5,3.03);
   MHT_all->SetBinError(6,3.03);
   MHT_all->SetBinError(7,3.316625);
   MHT_all->SetBinError(8,4.123106);
   MHT_all->SetBinError(9,4.358899);
   MHT_all->SetBinError(10,4.898979);
   MHT_all->SetBinError(11,3.741657);
   MHT_all->SetBinError(12,3.605551);
   MHT_all->SetBinError(13,3.464102);
   MHT_all->SetBinError(14,4.123106);
   MHT_all->SetBinError(15,2.68);
   MHT_all->SetBinError(16,3.162278);
   MHT_all->SetBinError(17,3.03);
   MHT_all->SetBinError(18,2.86);
   MHT_all->SetBinError(19,2.14);
   MHT_all->SetBinError(20,2.86);
   MHT_all->SetBinError(21,1);
   MHT_all->SetBinError(22,2.3);
   MHT_all->SetBinError(23,2);
   MHT_all->SetBinError(24,2.14);
   MHT_all->SetBinError(25,2.49);
   MHT_all->SetBinError(26,3.03);
   MHT_all->SetBinError(27,2);
   MHT_all->SetBinError(30,1);
   MHT_all->SetBinError(31,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(552.1078);
   MHT_all->SetEntries(205);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"DiMuon_375_    Jet Multiplicity=all");
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
   canvasDiMuon_375_475/MHT_all->cd();
  
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
   Double_t xAxis412[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis412);
   MHT_all->SetBinContent(4,0.02387077);
   MHT_all->SetBinContent(5,0.1868496);
   MHT_all->SetBinContent(6,0.1485015);
   MHT_all->SetBinContent(7,0.1999959);
   MHT_all->SetBinContent(8,0.3079109);
   MHT_all->SetBinContent(9,0.4608042);
   MHT_all->SetBinContent(10,0.705742);
   MHT_all->SetBinContent(11,0.4132615);
   MHT_all->SetBinContent(12,0.3106007);
   MHT_all->SetBinContent(13,0.4615357);
   MHT_all->SetBinContent(14,0.7673674);
   MHT_all->SetBinContent(15,0.2696517);
   MHT_all->SetBinContent(16,0.7728734);
   MHT_all->SetBinContent(17,0.6511405);
   MHT_all->SetBinContent(18,0.7542899);
   MHT_all->SetBinContent(19,0.2672092);
   MHT_all->SetBinContent(20,0.5091233);
   MHT_all->SetBinContent(21,0.1274864);
   MHT_all->SetBinContent(22,0.9259818);
   MHT_all->SetBinContent(23,0.2716739);
   MHT_all->SetBinContent(24,2.077094);
   MHT_all->SetBinContent(25,4.031859);
   MHT_all->SetBinContent(26,1.086377);
   MHT_all->SetBinContent(27,2.854554);
   MHT_all->SetBinContent(30,0.8341343);
   MHT_all->SetBinContent(31,0.3412798);
   MHT_all->SetBinError(4,1.00659);
   MHT_all->SetBinError(5,0.3949129);
   MHT_all->SetBinError(6,0.39045);
   MHT_all->SetBinError(7,0.3178345);
   MHT_all->SetBinError(8,0.2622919);
   MHT_all->SetBinError(9,0.2531631);
   MHT_all->SetBinError(10,0.2442624);
   MHT_all->SetBinError(11,0.2934903);
   MHT_all->SetBinError(12,0.2988652);
   MHT_all->SetBinError(13,0.3198596);
   MHT_all->SetBinError(14,0.2846002);
   MHT_all->SetBinError(15,0.4845974);
   MHT_all->SetBinError(16,0.3723621);
   MHT_all->SetBinError(17,0.4303847);
   MHT_all->SetBinError(18,0.463773);
   MHT_all->SetBinError(19,0.744108);
   MHT_all->SetBinError(20,0.4609439);
   MHT_all->SetBinError(21,1.031071);
   MHT_all->SetBinError(22,0.6548173);
   MHT_all->SetBinError(23,1.037285);
   MHT_all->SetBinError(24,0.9084101);
   MHT_all->SetBinError(25,0.7604681);
   MHT_all->SetBinError(26,0.5284399);
   MHT_all->SetBinError(27,1.382233);
   MHT_all->SetBinError(30,1.169183);
   MHT_all->SetBinError(31,0.3692282);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(17.29764);
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
   gre->SetPointError(0,10,0.2094993);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.1382712);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.1170598);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.1149901);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.1118243);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.0948664);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.1005469);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.09986756);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.1070512);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.1341546);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.1212764);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.1113433);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.1377563);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.1489086);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0.1879455);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.196605);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0.2044001);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0.219442);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,0.2117837);
   gre->SetPoint(19,390,1);
   gre->SetPointError(19,10,0.2133979);
   gre->SetPoint(20,410,1);
   gre->SetPointError(20,10,0.2512131);
   gre->SetPoint(21,430,1);
   gre->SetPointError(21,10,0.313306);
   gre->SetPoint(22,450,1);
   gre->SetPointError(22,10,0.2756101);
   gre->SetPoint(23,470,1);
   gre->SetPointError(23,10,0.5624629);
   gre->SetPoint(24,490,1);
   gre->SetPointError(24,10,0.574724);
   gre->SetPoint(25,510,1);
   gre->SetPointError(25,10,0.3685066);
   gre->SetPoint(26,530,1);
   gre->SetPointError(26,10,0.9542374);
   gre->SetPoint(27,550,1);
   gre->SetPointError(27,10,0.5211981);
   gre->SetPoint(28,570,1);
   gre->SetPointError(28,10,0.7068546);
   gre->SetPoint(29,590,1);
   gre->SetPointError(29,10,0.6057961);
   
   TH1F *Graph_Graph_from_MHT_all69 = new TH1F("Graph_Graph_from_MHT_all69","",100,0,660);
   Graph_Graph_from_MHT_all69->SetMinimum(0);
   Graph_Graph_from_MHT_all69->SetMaximum(2.145085);
   Graph_Graph_from_MHT_all69->SetDirectory(0);
   Graph_Graph_from_MHT_all69->SetStats(0);
   Graph_Graph_from_MHT_all69->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all69->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all69->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all69->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all69->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all69->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all69->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all69->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all69->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all69->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all69);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis413[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis413);
   MHT_all->SetBinContent(4,0.02387077);
   MHT_all->SetBinContent(5,0.1868496);
   MHT_all->SetBinContent(6,0.1485015);
   MHT_all->SetBinContent(7,0.1999959);
   MHT_all->SetBinContent(8,0.3079109);
   MHT_all->SetBinContent(9,0.4608042);
   MHT_all->SetBinContent(10,0.705742);
   MHT_all->SetBinContent(11,0.4132615);
   MHT_all->SetBinContent(12,0.3106007);
   MHT_all->SetBinContent(13,0.4615357);
   MHT_all->SetBinContent(14,0.7673674);
   MHT_all->SetBinContent(15,0.2696517);
   MHT_all->SetBinContent(16,0.7728734);
   MHT_all->SetBinContent(17,0.6511405);
   MHT_all->SetBinContent(18,0.7542899);
   MHT_all->SetBinContent(19,0.2672092);
   MHT_all->SetBinContent(20,0.5091233);
   MHT_all->SetBinContent(21,0.1274864);
   MHT_all->SetBinContent(22,0.9259818);
   MHT_all->SetBinContent(23,0.2716739);
   MHT_all->SetBinContent(24,2.077094);
   MHT_all->SetBinContent(25,4.031859);
   MHT_all->SetBinContent(26,1.086377);
   MHT_all->SetBinContent(27,2.854554);
   MHT_all->SetBinContent(30,0.8341343);
   MHT_all->SetBinContent(31,0.3412798);
   MHT_all->SetBinError(4,1.00659);
   MHT_all->SetBinError(5,0.3949129);
   MHT_all->SetBinError(6,0.39045);
   MHT_all->SetBinError(7,0.3178345);
   MHT_all->SetBinError(8,0.2622919);
   MHT_all->SetBinError(9,0.2531631);
   MHT_all->SetBinError(10,0.2442624);
   MHT_all->SetBinError(11,0.2934903);
   MHT_all->SetBinError(12,0.2988652);
   MHT_all->SetBinError(13,0.3198596);
   MHT_all->SetBinError(14,0.2846002);
   MHT_all->SetBinError(15,0.4845974);
   MHT_all->SetBinError(16,0.3723621);
   MHT_all->SetBinError(17,0.4303847);
   MHT_all->SetBinError(18,0.463773);
   MHT_all->SetBinError(19,0.744108);
   MHT_all->SetBinError(20,0.4609439);
   MHT_all->SetBinError(21,1.031071);
   MHT_all->SetBinError(22,0.6548173);
   MHT_all->SetBinError(23,1.037285);
   MHT_all->SetBinError(24,0.9084101);
   MHT_all->SetBinError(25,0.7604681);
   MHT_all->SetBinError(26,0.5284399);
   MHT_all->SetBinError(27,1.382233);
   MHT_all->SetBinError(30,1.169183);
   MHT_all->SetBinError(31,0.3692282);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(17.29764);
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
   canvasDiMuon_375_475/MHT_all->cd();
   canvasDiMuon_375_475/MHT_all->Modified();
   canvasDiMuon_375_475/MHT_all->cd();
   canvasDiMuon_375_475/MHT_all->SetSelected(canvasDiMuon_375_475/MHT_all);
}
