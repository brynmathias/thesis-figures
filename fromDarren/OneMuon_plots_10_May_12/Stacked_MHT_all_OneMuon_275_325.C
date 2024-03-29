{
//=========Macro generated from canvas: canvasOneMuon_275_325/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:07:32 2012) by ROOT version5.32/00
   TCanvas *canvasOneMuon_275_325/MHT_all = new TCanvas("canvasOneMuon_275_325/MHT_all", "cannameMHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasOneMuon_275_325/MHT_all->SetHighLightColor(2);
   canvasOneMuon_275_325/MHT_all->Range(0,0,1,1);
   canvasOneMuon_275_325/MHT_all->SetFillColor(0);
   canvasOneMuon_275_325/MHT_all->SetBorderMode(0);
   canvasOneMuon_275_325/MHT_all->SetBorderSize(2);
   canvasOneMuon_275_325/MHT_all->SetTickx(1);
   canvasOneMuon_275_325/MHT_all->SetTicky(1);
   canvasOneMuon_275_325/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-0.8526062,585,4.663155);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis2503[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2503);
   MHT_all->SetBinContent(3,1);
   MHT_all->SetBinContent(4,4);
   MHT_all->SetBinContent(5,19);
   MHT_all->SetBinContent(6,124);
   MHT_all->SetBinContent(7,220);
   MHT_all->SetBinContent(8,288);
   MHT_all->SetBinContent(9,264);
   MHT_all->SetBinContent(10,258);
   MHT_all->SetBinContent(11,224);
   MHT_all->SetBinContent(12,180);
   MHT_all->SetBinContent(13,153);
   MHT_all->SetBinContent(14,173);
   MHT_all->SetBinContent(15,121);
   MHT_all->SetBinContent(16,48);
   MHT_all->SetBinContent(17,1);
   MHT_all->SetBinError(3,1);
   MHT_all->SetBinError(4,2.3);
   MHT_all->SetBinError(5,4.358899);
   MHT_all->SetBinError(6,11.13553);
   MHT_all->SetBinError(7,14.8324);
   MHT_all->SetBinError(8,16.97056);
   MHT_all->SetBinError(9,16.24808);
   MHT_all->SetBinError(10,16.06238);
   MHT_all->SetBinError(11,14.96663);
   MHT_all->SetBinError(12,13.41641);
   MHT_all->SetBinError(13,12.36932);
   MHT_all->SetBinError(14,13.15295);
   MHT_all->SetBinError(15,11);
   MHT_all->SetBinError(16,6.928203);
   MHT_all->SetBinError(17,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(12929.42);
   MHT_all->SetEntries(2079);
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
   
   TH1F *_stack_167 = new TH1F("_stack_167","",30,0,600);
   _stack_167->SetMinimum(0.5171767);
   _stack_167->SetMaximum(2068.707);
   _stack_167->SetDirectory(0);
   _stack_167->SetStats(0);
   _stack_167->GetXaxis()->SetLabelFont(42);
   _stack_167->GetXaxis()->SetLabelOffset(0.007);
   _stack_167->GetXaxis()->SetLabelSize(0.05);
   _stack_167->GetXaxis()->SetTitleSize(0.05);
   _stack_167->GetYaxis()->SetLabelFont(42);
   _stack_167->GetYaxis()->SetLabelOffset(0.007);
   _stack_167->GetYaxis()->SetLabelSize(0.05);
   _stack_167->GetZaxis()->SetLabelFont(42);
   _stack_167->GetZaxis()->SetLabelOffset(0.007);
   _stack_167->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_167);
   
   Double_t xAxis2504[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2504);
   MHT_all->SetEntries(1);
   MHT_all->SetFillColor(5);
   MHT_all->SetLineColor(5);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis2505[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2505);
   MHT_all->SetBinContent(1,49.74534);
   MHT_all->SetBinError(1,49.74534);
   MHT_all->SetEntries(2);
   MHT_all->SetFillColor(7);
   MHT_all->SetLineColor(7);
   MHT_all->SetLineStyle(10);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis2506[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2506);
   MHT_all->SetBinContent(1,0.8628395);
   MHT_all->SetBinContent(2,2.653032);
   MHT_all->SetBinContent(3,2.906966);
   MHT_all->SetBinContent(4,4.767201);
   MHT_all->SetBinContent(5,5.512213);
   MHT_all->SetBinContent(6,4.948776);
   MHT_all->SetBinContent(7,4.629036);
   MHT_all->SetBinContent(8,4.18865);
   MHT_all->SetBinContent(9,4.582703);
   MHT_all->SetBinContent(10,2.983521);
   MHT_all->SetBinContent(11,2.951325);
   MHT_all->SetBinContent(12,2.223855);
   MHT_all->SetBinContent(13,2.572278);
   MHT_all->SetBinContent(14,4.23798);
   MHT_all->SetBinContent(15,3.078759);
   MHT_all->SetBinContent(16,1.533874);
   MHT_all->SetBinContent(17,0.00908894);
   MHT_all->SetBinError(1,0.1580817);
   MHT_all->SetBinError(2,0.2964395);
   MHT_all->SetBinError(3,0.2989893);
   MHT_all->SetBinError(4,0.4051582);
   MHT_all->SetBinError(5,0.4270013);
   MHT_all->SetBinError(6,0.4063199);
   MHT_all->SetBinError(7,0.3914149);
   MHT_all->SetBinError(8,0.3725854);
   MHT_all->SetBinError(9,0.4067365);
   MHT_all->SetBinError(10,0.3122751);
   MHT_all->SetBinError(11,0.3146132);
   MHT_all->SetBinError(12,0.2788411);
   MHT_all->SetBinError(13,0.300831);
   MHT_all->SetBinError(14,0.3879254);
   MHT_all->SetBinError(15,0.324195);
   MHT_all->SetBinError(16,0.2299025);
   MHT_all->SetBinError(17,0.00908894);
   MHT_all->SetEntries(2207);
   MHT_all->SetFillColor(44);
   MHT_all->SetLineColor(44);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis2507[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2507);
   MHT_all->SetBinContent(1,8.289422);
   MHT_all->SetBinContent(2,17.04233);
   MHT_all->SetBinContent(3,24.68572);
   MHT_all->SetBinContent(4,28.92706);
   MHT_all->SetBinContent(5,31.30582);
   MHT_all->SetBinContent(6,22.7824);
   MHT_all->SetBinContent(7,22.5668);
   MHT_all->SetBinContent(8,8.212372);
   MHT_all->SetBinContent(9,7.793898);
   MHT_all->SetBinContent(10,7.592383);
   MHT_all->SetBinContent(11,2.980931);
   MHT_all->SetBinContent(12,1.986754);
   MHT_all->SetBinContent(13,0.4664048);
   MHT_all->SetBinContent(14,1.976476);
   MHT_all->SetBinContent(15,0.7288524);
   MHT_all->SetBinContent(16,0.2781055);
   MHT_all->SetBinError(1,1.985393);
   MHT_all->SetBinError(2,3.280425);
   MHT_all->SetBinError(3,3.38892);
   MHT_all->SetBinError(4,4.538327);
   MHT_all->SetBinError(5,3.936443);
   MHT_all->SetBinError(6,3.281521);
   MHT_all->SetBinError(7,3.728935);
   MHT_all->SetBinError(8,2.074918);
   MHT_all->SetBinError(9,1.891888);
   MHT_all->SetBinError(10,1.945098);
   MHT_all->SetBinError(11,1.326223);
   MHT_all->SetBinError(12,0.9950393);
   MHT_all->SetBinError(13,0.4391163);
   MHT_all->SetBinError(14,0.9878203);
   MHT_all->SetBinError(15,0.7288524);
   MHT_all->SetBinError(16,0.2781055);
   MHT_all->SetEntries(491);
   MHT_all->SetFillColor(6);
   MHT_all->SetLineColor(6);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis2508[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2508);
   MHT_all->SetBinContent(1,8.008912);
   MHT_all->SetBinContent(2,17.92636);
   MHT_all->SetBinContent(3,26.66831);
   MHT_all->SetBinContent(4,31.51336);
   MHT_all->SetBinContent(5,35.98545);
   MHT_all->SetBinContent(6,32.05268);
   MHT_all->SetBinContent(7,28.33633);
   MHT_all->SetBinContent(8,20.92074);
   MHT_all->SetBinContent(9,14.33319);
   MHT_all->SetBinContent(10,10.88826);
   MHT_all->SetBinContent(11,7.806107);
   MHT_all->SetBinContent(12,7.992384);
   MHT_all->SetBinContent(13,7.002408);
   MHT_all->SetBinContent(14,5.94303);
   MHT_all->SetBinContent(15,2.838056);
   MHT_all->SetBinContent(16,1.208209);
   MHT_all->SetBinContent(17,0.04101893);
   MHT_all->SetBinError(1,0.7426796);
   MHT_all->SetBinError(2,1.006775);
   MHT_all->SetBinError(3,1.245796);
   MHT_all->SetBinError(4,1.373004);
   MHT_all->SetBinError(5,1.416951);
   MHT_all->SetBinError(6,1.343608);
   MHT_all->SetBinError(7,1.344672);
   MHT_all->SetBinError(8,1.10242);
   MHT_all->SetBinError(9,0.867528);
   MHT_all->SetBinError(10,0.8300447);
   MHT_all->SetBinError(11,0.6868086);
   MHT_all->SetBinError(12,0.6782779);
   MHT_all->SetBinError(13,0.6039044);
   MHT_all->SetBinError(14,0.5919699);
   MHT_all->SetBinError(15,0.4268452);
   MHT_all->SetBinError(16,0.2517871);
   MHT_all->SetBinError(17,0.04101893);
   MHT_all->SetEntries(6204);
   MHT_all->SetFillColor(40);
   MHT_all->SetLineColor(40);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis2509[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2509);
   MHT_all->SetBinContent(1,43.15951);
   MHT_all->SetBinContent(2,140.0481);
   MHT_all->SetBinContent(3,240.7685);
   MHT_all->SetBinContent(4,321.2281);
   MHT_all->SetBinContent(5,340.7546);
   MHT_all->SetBinContent(6,312.2898);
   MHT_all->SetBinContent(7,266.2192);
   MHT_all->SetBinContent(8,199.3171);
   MHT_all->SetBinContent(9,148.9541);
   MHT_all->SetBinContent(10,106.477);
   MHT_all->SetBinContent(11,70.5595);
   MHT_all->SetBinContent(12,60.7789);
   MHT_all->SetBinContent(13,46.3737);
   MHT_all->SetBinContent(14,35.03022);
   MHT_all->SetBinContent(15,16.74288);
   MHT_all->SetBinContent(16,5.655679);
   MHT_all->SetBinError(1,3.418642);
   MHT_all->SetBinError(2,6.421707);
   MHT_all->SetBinError(3,7.819089);
   MHT_all->SetBinError(4,9.340413);
   MHT_all->SetBinError(5,9.846806);
   MHT_all->SetBinError(6,9.487103);
   MHT_all->SetBinError(7,8.70356);
   MHT_all->SetBinError(8,7.010802);
   MHT_all->SetBinError(9,6.350595);
   MHT_all->SetBinError(10,5.907164);
   MHT_all->SetBinError(11,4.210923);
   MHT_all->SetBinError(12,4.422799);
   MHT_all->SetBinError(13,3.43632);
   MHT_all->SetBinError(14,2.87465);
   MHT_all->SetBinError(15,1.968756);
   MHT_all->SetBinError(16,1.113356);
   MHT_all->SetEntries(12350);
   MHT_all->SetFillColor(2);
   MHT_all->SetLineColor(2);
   MHT_all->SetLineWidth(3);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis2510[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2510);
   MHT_all->SetBinContent(1,219.25);
   MHT_all->SetBinContent(2,432.3218);
   MHT_all->SetBinContent(3,648.6819);
   MHT_all->SetBinContent(4,837.9547);
   MHT_all->SetBinContent(5,879.3836);
   MHT_all->SetBinContent(6,795.3456);
   MHT_all->SetBinContent(7,677.0836);
   MHT_all->SetBinContent(8,574.7974);
   MHT_all->SetBinContent(9,483.3096);
   MHT_all->SetBinContent(10,334.9749);
   MHT_all->SetBinContent(11,242.43);
   MHT_all->SetBinContent(12,142.8813);
   MHT_all->SetBinContent(13,167.9182);
   MHT_all->SetBinContent(14,129.7555);
   MHT_all->SetBinContent(15,114.5804);
   MHT_all->SetBinContent(16,43.20757);
   MHT_all->SetBinError(1,28.81898);
   MHT_all->SetBinError(2,44.35727);
   MHT_all->SetBinError(3,52.00088);
   MHT_all->SetBinError(4,61.77321);
   MHT_all->SetBinError(5,67.0435);
   MHT_all->SetBinError(6,56.5479);
   MHT_all->SetBinError(7,52.41306);
   MHT_all->SetBinError(8,46.24679);
   MHT_all->SetBinError(9,46.72349);
   MHT_all->SetBinError(10,44.28189);
   MHT_all->SetBinError(11,34.18613);
   MHT_all->SetBinError(12,23.32588);
   MHT_all->SetBinError(13,25.2007);
   MHT_all->SetBinError(14,20.97177);
   MHT_all->SetBinError(15,21.59311);
   MHT_all->SetBinError(16,12.65522);
   MHT_all->SetEntries(2205);
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
   Double_t xAxis2511[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2511);
   MHT_all->SetBinContent(3,1);
   MHT_all->SetBinContent(4,4);
   MHT_all->SetBinContent(5,19);
   MHT_all->SetBinContent(6,124);
   MHT_all->SetBinContent(7,220);
   MHT_all->SetBinContent(8,288);
   MHT_all->SetBinContent(9,264);
   MHT_all->SetBinContent(10,258);
   MHT_all->SetBinContent(11,224);
   MHT_all->SetBinContent(12,180);
   MHT_all->SetBinContent(13,153);
   MHT_all->SetBinContent(14,173);
   MHT_all->SetBinContent(15,121);
   MHT_all->SetBinContent(16,48);
   MHT_all->SetBinContent(17,1);
   MHT_all->SetBinError(3,1);
   MHT_all->SetBinError(4,2.3);
   MHT_all->SetBinError(5,4.358899);
   MHT_all->SetBinError(6,11.13553);
   MHT_all->SetBinError(7,14.8324);
   MHT_all->SetBinError(8,16.97056);
   MHT_all->SetBinError(9,16.24808);
   MHT_all->SetBinError(10,16.06238);
   MHT_all->SetBinError(11,14.96663);
   MHT_all->SetBinError(12,13.41641);
   MHT_all->SetBinError(13,12.36932);
   MHT_all->SetBinError(14,13.15295);
   MHT_all->SetBinError(15,11);
   MHT_all->SetBinError(16,6.928203);
   MHT_all->SetBinError(17,1);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(12929.42);
   MHT_all->SetEntries(2079);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_275_325    Jet Multiplicity=all");
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
   canvasOneMuon_275_325/MHT_all->cd();
  
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
   Double_t xAxis2512[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2512);
   MHT_all->SetBinContent(3,0.001059646);
   MHT_all->SetBinContent(4,0.003266932);
   MHT_all->SetBinContent(5,0.01469517);
   MHT_all->SetBinContent(6,0.1062172);
   MHT_all->SetBinContent(7,0.2202566);
   MHT_all->SetBinContent(8,0.3566845);
   MHT_all->SetBinContent(9,0.4006231);
   MHT_all->SetBinContent(10,0.5573365);
   MHT_all->SetBinContent(11,0.6855859);
   MHT_all->SetBinContent(12,0.8338614);
   MHT_all->SetBinContent(13,0.6820219);
   MHT_all->SetBinContent(14,0.9777149);
   MHT_all->SetBinContent(15,0.8770092);
   MHT_all->SetBinContent(16,0.9251508);
   MHT_all->SetBinContent(17,19.95694);
   MHT_all->SetBinError(3,1.001559);
   MHT_all->SetBinError(4,0.5772727);
   MHT_all->SetBinError(5,0.2353486);
   MHT_all->SetBinError(6,0.1024021);
   MHT_all->SetBinError(7,0.08596993);
   MHT_all->SetBinError(8,0.08268521);
   MHT_all->SetBinError(9,0.09443733);
   MHT_all->SetBinError(10,0.1149378);
   MHT_all->SetBinError(11,0.1249001);
   MHT_all->SetBinError(12,0.1329842);
   MHT_all->SetBinError(13,0.1392942);
   MHT_all->SetBinError(14,0.1419121);
   MHT_all->SetBinError(15,0.1816743);
   MHT_all->SetBinError(16,0.2843606);
   MHT_all->SetBinError(17,1.305001);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(1.042813);
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
   gre->SetPointError(0,10,0.1750023);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.07369257);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.05585406);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.05117351);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.05251058);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.04921042);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.05334204);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.05800536);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.07162772);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.09661639);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.105526);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.1101329);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.1134325);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.1198278);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0.157293);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.2450054);
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
   
   TH1F *Graph_Graph_from_MHT_all419 = new TH1F("Graph_Graph_from_MHT_all419","",100,0,660);
   Graph_Graph_from_MHT_all419->SetMinimum(0);
   Graph_Graph_from_MHT_all419->SetMaximum(2.006161);
   Graph_Graph_from_MHT_all419->SetDirectory(0);
   Graph_Graph_from_MHT_all419->SetStats(0);
   Graph_Graph_from_MHT_all419->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all419->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all419->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all419->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all419->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all419->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all419->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all419->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all419->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all419->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all419);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis2513[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis2513);
   MHT_all->SetBinContent(3,0.001059646);
   MHT_all->SetBinContent(4,0.003266932);
   MHT_all->SetBinContent(5,0.01469517);
   MHT_all->SetBinContent(6,0.1062172);
   MHT_all->SetBinContent(7,0.2202566);
   MHT_all->SetBinContent(8,0.3566845);
   MHT_all->SetBinContent(9,0.4006231);
   MHT_all->SetBinContent(10,0.5573365);
   MHT_all->SetBinContent(11,0.6855859);
   MHT_all->SetBinContent(12,0.8338614);
   MHT_all->SetBinContent(13,0.6820219);
   MHT_all->SetBinContent(14,0.9777149);
   MHT_all->SetBinContent(15,0.8770092);
   MHT_all->SetBinContent(16,0.9251508);
   MHT_all->SetBinContent(17,19.95694);
   MHT_all->SetBinError(3,1.001559);
   MHT_all->SetBinError(4,0.5772727);
   MHT_all->SetBinError(5,0.2353486);
   MHT_all->SetBinError(6,0.1024021);
   MHT_all->SetBinError(7,0.08596993);
   MHT_all->SetBinError(8,0.08268521);
   MHT_all->SetBinError(9,0.09443733);
   MHT_all->SetBinError(10,0.1149378);
   MHT_all->SetBinError(11,0.1249001);
   MHT_all->SetBinError(12,0.1329842);
   MHT_all->SetBinError(13,0.1392942);
   MHT_all->SetBinError(14,0.1419121);
   MHT_all->SetBinError(15,0.1816743);
   MHT_all->SetBinError(16,0.2843606);
   MHT_all->SetBinError(17,1.305001);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(1.042813);
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
   canvasOneMuon_275_325/MHT_all->cd();
   canvasOneMuon_275_325/MHT_all->Modified();
   canvasOneMuon_275_325/MHT_all->cd();
   canvasOneMuon_275_325/MHT_all->SetSelected(canvasOneMuon_275_325/MHT_all);
}
