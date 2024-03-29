{
//=========Macro generated from canvas: canvasbtag_morethanzero_875/MHT_all/cannameMHT_all
//=========  (Thu May 10 12:26:28 2012) by ROOT version5.32/00
   TCanvas *canvasbtag_morethanzero_875/MHT_all = new TCanvas("canvasbtag_morethanzero_875/MHT_all", "cannameMHT_all",1,1,1200,1176);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_875/MHT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_875/MHT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_875/MHT_all->SetFillColor(0);
   canvasbtag_morethanzero_875/MHT_all->SetBorderMode(0);
   canvasbtag_morethanzero_875/MHT_all->SetBorderSize(2);
   canvasbtag_morethanzero_875/MHT_all->SetTickx(1);
   canvasbtag_morethanzero_875/MHT_all->SetTicky(1);
   canvasbtag_morethanzero_875/MHT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-65,-0.9515974,585,5.554076);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis6894[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis6894);
   MHT_all->SetBinContent(1,260);
   MHT_all->SetBinContent(2,480);
   MHT_all->SetBinContent(3,494);
   MHT_all->SetBinContent(4,340);
   MHT_all->SetBinContent(5,230);
   MHT_all->SetBinContent(6,111);
   MHT_all->SetBinContent(7,87);
   MHT_all->SetBinContent(8,59);
   MHT_all->SetBinContent(9,43);
   MHT_all->SetBinContent(10,35);
   MHT_all->SetBinContent(11,32);
   MHT_all->SetBinContent(12,26);
   MHT_all->SetBinContent(13,20);
   MHT_all->SetBinContent(14,11);
   MHT_all->SetBinContent(15,12);
   MHT_all->SetBinContent(16,11);
   MHT_all->SetBinContent(17,5);
   MHT_all->SetBinContent(18,8);
   MHT_all->SetBinContent(19,2);
   MHT_all->SetBinContent(20,2);
   MHT_all->SetBinContent(21,4);
   MHT_all->SetBinContent(22,2);
   MHT_all->SetBinContent(23,1);
   MHT_all->SetBinContent(24,2);
   MHT_all->SetBinContent(26,3);
   MHT_all->SetBinContent(27,2);
   MHT_all->SetBinContent(28,1);
   MHT_all->SetBinContent(31,2);
   MHT_all->SetBinError(1,16.12452);
   MHT_all->SetBinError(2,21.9089);
   MHT_all->SetBinError(3,22.22611);
   MHT_all->SetBinError(4,18.43909);
   MHT_all->SetBinError(5,15.16575);
   MHT_all->SetBinError(6,10.53565);
   MHT_all->SetBinError(7,9.327379);
   MHT_all->SetBinError(8,7.681146);
   MHT_all->SetBinError(9,6.557439);
   MHT_all->SetBinError(10,5.91608);
   MHT_all->SetBinError(11,5.656854);
   MHT_all->SetBinError(12,5.09902);
   MHT_all->SetBinError(13,4.472136);
   MHT_all->SetBinError(14,3.316625);
   MHT_all->SetBinError(15,3.464102);
   MHT_all->SetBinError(16,3.316625);
   MHT_all->SetBinError(17,2.49);
   MHT_all->SetBinError(18,3.03);
   MHT_all->SetBinError(19,2);
   MHT_all->SetBinError(20,2);
   MHT_all->SetBinError(21,2.3);
   MHT_all->SetBinError(22,2);
   MHT_all->SetBinError(23,1);
   MHT_all->SetBinError(24,2);
   MHT_all->SetBinError(26,2.14);
   MHT_all->SetBinError(27,2);
   MHT_all->SetBinError(28,1);
   MHT_all->SetBinError(31,1.414214);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(80077.17);
   MHT_all->SetEntries(2283);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("");
   Double_t xAxis6895[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis6895);
   MHT_all->SetBinContent(1,0.3333764);
   MHT_all->SetBinContent(2,0.8953028);
   MHT_all->SetBinContent(3,1.345934);
   MHT_all->SetBinContent(4,1.737326);
   MHT_all->SetBinContent(5,2.199113);
   MHT_all->SetBinContent(6,2.087189);
   MHT_all->SetBinContent(7,1.83974);
   MHT_all->SetBinContent(8,1.804149);
   MHT_all->SetBinContent(9,1.750876);
   MHT_all->SetBinContent(10,1.456846);
   MHT_all->SetBinContent(11,1.707187);
   MHT_all->SetBinContent(12,0.8246118);
   MHT_all->SetBinContent(13,1.214866);
   MHT_all->SetBinContent(14,1.059109);
   MHT_all->SetBinContent(15,0.800178);
   MHT_all->SetBinContent(16,0.8842953);
   MHT_all->SetBinContent(17,0.4865622);
   MHT_all->SetBinContent(18,0.4895832);
   MHT_all->SetBinContent(19,1.077601);
   MHT_all->SetBinContent(20,0.6031581);
   MHT_all->SetBinContent(21,0.9487203);
   MHT_all->SetBinContent(22,0.4244358);
   MHT_all->SetBinContent(23,0.1447868);
   MHT_all->SetBinContent(24,0.2862164);
   MHT_all->SetBinContent(25,0.1728845);
   MHT_all->SetBinContent(26,1.428117);
   MHT_all->SetBinContent(27,0.07163091);
   MHT_all->SetBinContent(28,0.3211307);
   MHT_all->SetBinContent(29,0.08000721);
   MHT_all->SetBinContent(30,0.2255071);
   MHT_all->SetBinContent(31,1.266862);
   MHT_all->SetBinError(1,0.146348);
   MHT_all->SetBinError(2,0.2355801);
   MHT_all->SetBinError(3,0.3003593);
   MHT_all->SetBinError(4,0.3358032);
   MHT_all->SetBinError(5,0.3921244);
   MHT_all->SetBinError(6,0.3833101);
   MHT_all->SetBinError(7,0.3667275);
   MHT_all->SetBinError(8,0.3639201);
   MHT_all->SetBinError(9,0.3367867);
   MHT_all->SetBinError(10,0.3399216);
   MHT_all->SetBinError(11,0.3671221);
   MHT_all->SetBinError(12,0.2500945);
   MHT_all->SetBinError(13,0.2986343);
   MHT_all->SetBinError(14,0.2542049);
   MHT_all->SetBinError(15,0.2199908);
   MHT_all->SetBinError(16,0.2358829);
   MHT_all->SetBinError(17,0.1719549);
   MHT_all->SetBinError(18,0.1834142);
   MHT_all->SetBinError(19,0.2812731);
   MHT_all->SetBinError(20,0.216676);
   MHT_all->SetBinError(21,0.3620112);
   MHT_all->SetBinError(22,0.1869903);
   MHT_all->SetBinError(23,0.08346399);
   MHT_all->SetBinError(24,0.1299948);
   MHT_all->SetBinError(25,0.1094694);
   MHT_all->SetBinError(26,1.079759);
   MHT_all->SetBinError(27,0.07163091);
   MHT_all->SetBinError(28,0.1629799);
   MHT_all->SetBinError(29,0.08000721);
   MHT_all->SetBinError(30,0.1144498);
   MHT_all->SetBinError(31,0.2926784);
   MHT_all->SetEntries(535);
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
   
   TH1F *_stack_460 = new TH1F("_stack_460","",30,0,600);
   _stack_460->SetMinimum(0.01839416);
   _stack_460->SetMaximum(16177.44);
   _stack_460->SetDirectory(0);
   _stack_460->SetStats(0);
   _stack_460->GetXaxis()->SetLabelFont(42);
   _stack_460->GetXaxis()->SetLabelOffset(0.007);
   _stack_460->GetXaxis()->SetLabelSize(0.05);
   _stack_460->GetXaxis()->SetTitleSize(0.05);
   _stack_460->GetYaxis()->SetLabelFont(42);
   _stack_460->GetYaxis()->SetLabelOffset(0.007);
   _stack_460->GetYaxis()->SetLabelSize(0.05);
   _stack_460->GetZaxis()->SetLabelFont(42);
   _stack_460->GetZaxis()->SetLabelOffset(0.007);
   _stack_460->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_460);
   
   Double_t xAxis6896[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis6896);
   MHT_all->SetBinContent(1,48.82346);
   MHT_all->SetBinContent(2,104.8884);
   MHT_all->SetBinContent(3,96.54912);
   MHT_all->SetBinContent(4,79.99978);
   MHT_all->SetBinContent(5,64.50456);
   MHT_all->SetBinContent(6,49.66871);
   MHT_all->SetBinContent(7,33.83901);
   MHT_all->SetBinContent(8,26.2467);
   MHT_all->SetBinContent(9,21.14148);
   MHT_all->SetBinContent(10,20.58511);
   MHT_all->SetBinContent(11,14.69098);
   MHT_all->SetBinContent(12,14.64883);
   MHT_all->SetBinContent(13,12.88084);
   MHT_all->SetBinContent(14,11.04018);
   MHT_all->SetBinContent(15,7.092784);
   MHT_all->SetBinContent(16,5.503702);
   MHT_all->SetBinContent(17,6.694404);
   MHT_all->SetBinContent(18,4.468112);
   MHT_all->SetBinContent(19,3.923835);
   MHT_all->SetBinContent(20,2.920796);
   MHT_all->SetBinContent(21,2.478588);
   MHT_all->SetBinContent(22,1.398094);
   MHT_all->SetBinContent(23,2.323406);
   MHT_all->SetBinContent(24,1.512219);
   MHT_all->SetBinContent(25,1.199674);
   MHT_all->SetBinContent(26,5.03761);
   MHT_all->SetBinContent(27,0.6129197);
   MHT_all->SetBinContent(28,0.7246147);
   MHT_all->SetBinContent(29,0.481183);
   MHT_all->SetBinContent(30,0.6928881);
   MHT_all->SetBinContent(31,3.877971);
   MHT_all->SetBinError(1,3.401798);
   MHT_all->SetBinError(2,5.903026);
   MHT_all->SetBinError(3,4.95673);
   MHT_all->SetBinError(4,5.348918);
   MHT_all->SetBinError(5,4.701499);
   MHT_all->SetBinError(6,3.403732);
   MHT_all->SetBinError(7,2.683664);
   MHT_all->SetBinError(8,2.482115);
   MHT_all->SetBinError(9,2.147094);
   MHT_all->SetBinError(10,2.011593);
   MHT_all->SetBinError(11,1.685459);
   MHT_all->SetBinError(12,1.82604);
   MHT_all->SetBinError(13,1.871997);
   MHT_all->SetBinError(14,1.415642);
   MHT_all->SetBinError(15,1.205396);
   MHT_all->SetBinError(16,0.9089131);
   MHT_all->SetBinError(17,1.396167);
   MHT_all->SetBinError(18,0.8585533);
   MHT_all->SetBinError(19,0.7737721);
   MHT_all->SetBinError(20,0.7448457);
   MHT_all->SetBinError(21,0.5675696);
   MHT_all->SetBinError(22,0.400587);
   MHT_all->SetBinError(23,0.8519455);
   MHT_all->SetBinError(24,0.456981);
   MHT_all->SetBinError(25,0.4171329);
   MHT_all->SetBinError(26,2.12921);
   MHT_all->SetBinError(27,0.2780545);
   MHT_all->SetBinError(28,0.2699999);
   MHT_all->SetBinError(29,0.1753199);
   MHT_all->SetBinError(30,0.2731921);
   MHT_all->SetBinError(31,0.6650588);
   MHT_all->SetEntries(5708);
   MHT_all->SetLineColor(3);
   MHT_all->SetLineWidth(3);
   MHT_all->SetMarkerColor(3);
   MHT_all->SetMarkerStyle(20);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle(" Events/10 GeV");
   ->Add(MHT_all,"");
   Double_t xAxis6897[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis6897);
   MHT_all->SetBinContent(1,5080.594);
   MHT_all->SetBinContent(2,7902.829);
   MHT_all->SetBinContent(3,5837.864);
   MHT_all->SetBinContent(4,3526.303);
   MHT_all->SetBinContent(5,1768.133);
   MHT_all->SetBinContent(6,870.4871);
   MHT_all->SetBinContent(7,451.4362);
   MHT_all->SetBinContent(8,229.1423);
   MHT_all->SetBinContent(9,147.8456);
   MHT_all->SetBinContent(10,73.36738);
   MHT_all->SetBinContent(11,59.43128);
   MHT_all->SetBinContent(12,34.53781);
   MHT_all->SetBinContent(13,22.8073);
   MHT_all->SetBinContent(14,16.40396);
   MHT_all->SetBinContent(15,9.027608);
   MHT_all->SetBinContent(16,9.329212);
   MHT_all->SetBinContent(17,4.078059);
   MHT_all->SetBinContent(18,3.801534);
   MHT_all->SetBinContent(19,1.78051);
   MHT_all->SetBinContent(20,1.382161);
   MHT_all->SetBinContent(21,1.009924);
   MHT_all->SetBinContent(22,1.063694);
   MHT_all->SetBinContent(23,0.7241212);
   MHT_all->SetBinContent(24,0.2849703);
   MHT_all->SetBinContent(25,0.2366051);
   MHT_all->SetBinContent(26,1.352626);
   MHT_all->SetBinContent(27,0.07531004);
   MHT_all->SetBinContent(28,0.09821381);
   MHT_all->SetBinContent(29,0.1117299);
   MHT_all->SetBinContent(30,0.4186392);
   MHT_all->SetBinContent(31,57.4958);
   MHT_all->SetBinError(1,97.22653);
   MHT_all->SetBinError(2,113.9612);
   MHT_all->SetBinError(3,103.287);
   MHT_all->SetBinError(4,75.80569);
   MHT_all->SetBinError(5,62.28878);
   MHT_all->SetBinError(6,35.57533);
   MHT_all->SetBinError(7,24.09516);
   MHT_all->SetBinError(8,12.07584);
   MHT_all->SetBinError(9,9.03398);
   MHT_all->SetBinError(10,3.99992);
   MHT_all->SetBinError(11,6.583542);
   MHT_all->SetBinError(12,3.165907);
   MHT_all->SetBinError(13,2.621978);
   MHT_all->SetBinError(14,2.44802);
   MHT_all->SetBinError(15,1.099989);
   MHT_all->SetBinError(16,2.563583);
   MHT_all->SetBinError(17,0.6725252);
   MHT_all->SetBinError(18,0.6717677);
   MHT_all->SetBinError(19,0.4456746);
   MHT_all->SetBinError(20,0.362941);
   MHT_all->SetBinError(21,0.3345528);
   MHT_all->SetBinError(22,0.3726791);
   MHT_all->SetBinError(23,0.2760902);
   MHT_all->SetBinError(24,0.1533453);
   MHT_all->SetBinError(25,0.1641554);
   MHT_all->SetBinError(26,1.123388);
   MHT_all->SetBinError(27,0.04910686);
   MHT_all->SetBinError(28,0.0724866);
   MHT_all->SetBinError(29,0.1117299);
   MHT_all->SetBinError(30,0.222976);
   MHT_all->SetBinError(31,57.43204);
   MHT_all->SetEntries(136408);
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_875    Jet Multiplicity=all");
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
   Double_t xAxis6898[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis6898);
   MHT_all->SetBinContent(1,260);
   MHT_all->SetBinContent(2,480);
   MHT_all->SetBinContent(3,494);
   MHT_all->SetBinContent(4,340);
   MHT_all->SetBinContent(5,230);
   MHT_all->SetBinContent(6,111);
   MHT_all->SetBinContent(7,87);
   MHT_all->SetBinContent(8,59);
   MHT_all->SetBinContent(9,43);
   MHT_all->SetBinContent(10,35);
   MHT_all->SetBinContent(11,32);
   MHT_all->SetBinContent(12,26);
   MHT_all->SetBinContent(13,20);
   MHT_all->SetBinContent(14,11);
   MHT_all->SetBinContent(15,12);
   MHT_all->SetBinContent(16,11);
   MHT_all->SetBinContent(17,5);
   MHT_all->SetBinContent(18,8);
   MHT_all->SetBinContent(19,2);
   MHT_all->SetBinContent(20,2);
   MHT_all->SetBinContent(21,4);
   MHT_all->SetBinContent(22,2);
   MHT_all->SetBinContent(23,1);
   MHT_all->SetBinContent(24,2);
   MHT_all->SetBinContent(26,3);
   MHT_all->SetBinContent(27,2);
   MHT_all->SetBinContent(28,1);
   MHT_all->SetBinContent(31,2);
   MHT_all->SetBinError(1,16.12452);
   MHT_all->SetBinError(2,21.9089);
   MHT_all->SetBinError(3,22.22611);
   MHT_all->SetBinError(4,18.43909);
   MHT_all->SetBinError(5,15.16575);
   MHT_all->SetBinError(6,10.53565);
   MHT_all->SetBinError(7,9.327379);
   MHT_all->SetBinError(8,7.681146);
   MHT_all->SetBinError(9,6.557439);
   MHT_all->SetBinError(10,5.91608);
   MHT_all->SetBinError(11,5.656854);
   MHT_all->SetBinError(12,5.09902);
   MHT_all->SetBinError(13,4.472136);
   MHT_all->SetBinError(14,3.316625);
   MHT_all->SetBinError(15,3.464102);
   MHT_all->SetBinError(16,3.316625);
   MHT_all->SetBinError(17,2.49);
   MHT_all->SetBinError(18,3.03);
   MHT_all->SetBinError(19,2);
   MHT_all->SetBinError(20,2);
   MHT_all->SetBinError(21,2.3);
   MHT_all->SetBinError(22,2);
   MHT_all->SetBinError(23,1);
   MHT_all->SetBinError(24,2);
   MHT_all->SetBinError(26,2.14);
   MHT_all->SetBinError(27,2);
   MHT_all->SetBinError(28,1);
   MHT_all->SetBinError(31,1.414214);
   MHT_all->SetMinimum(0.5);
   MHT_all->SetMaximum(80077.17);
   MHT_all->SetEntries(2283);
   MHT_all->SetLineWidth(2);
   MHT_all->SetMarkerStyle(20);
   MHT_all->SetMarkerSize(1.5);
   MHT_all->GetXaxis()->SetTitle("#slash{H}_{T} (GeV)");
   MHT_all->GetXaxis()->SetRange(1,26);
   MHT_all->GetYaxis()->SetTitle("Events / 20 GeV");
   MHT_all->GetYaxis()->SetTitleOffset(1.3);
   MHT_all->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_875/MHT_all->cd();
  
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
   Double_t xAxis6899[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis6899);
   MHT_all->SetBinContent(1,5.325309);
   MHT_all->SetBinContent(2,4.576294);
   MHT_all->SetBinContent(3,5.116567);
   MHT_all->SetBinContent(4,4.250011);
   MHT_all->SetBinContent(5,3.565639);
   MHT_all->SetBinContent(6,2.234808);
   MHT_all->SetBinContent(7,2.570997);
   MHT_all->SetBinContent(8,2.247902);
   MHT_all->SetBinContent(9,2.033916);
   MHT_all->SetBinContent(10,1.700258);
   MHT_all->SetBinContent(11,2.178208);
   MHT_all->SetBinContent(12,1.774885);
   MHT_all->SetBinContent(13,1.552694);
   MHT_all->SetBinContent(14,0.9963604);
   MHT_all->SetBinContent(15,1.69186);
   MHT_all->SetBinContent(16,1.998655);
   MHT_all->SetBinContent(17,0.7468925);
   MHT_all->SetBinContent(18,1.790465);
   MHT_all->SetBinContent(19,0.5097054);
   MHT_all->SetBinContent(20,0.6847448);
   MHT_all->SetBinContent(21,1.613822);
   MHT_all->SetBinContent(22,1.430519);
   MHT_all->SetBinContent(23,0.4304027);
   MHT_all->SetBinContent(24,1.322559);
   MHT_all->SetBinContent(26,0.5955205);
   MHT_all->SetBinContent(27,3.26307);
   MHT_all->SetBinContent(28,1.380044);
   MHT_all->SetBinContent(31,0.5157337);
   MHT_all->SetBinError(1,0.09327822);
   MHT_all->SetBinError(2,0.07246154);
   MHT_all->SetBinError(3,0.06826404);
   MHT_all->SetBinError(4,0.08609098);
   MHT_all->SetBinError(5,0.09828652);
   MHT_all->SetBinError(6,0.1170692);
   MHT_all->SetBinError(7,0.133356);
   MHT_all->SetBinError(8,0.1609111);
   MHT_all->SetBinError(9,0.1832209);
   MHT_all->SetBinError(10,0.1952454);
   MHT_all->SetBinError(11,0.2107425);
   MHT_all->SetBinError(12,0.2323795);
   MHT_all->SetBinError(13,0.2666859);
   MHT_all->SetBinError(14,0.3276447);
   MHT_all->SetBinError(15,0.3349855);
   MHT_all->SetBinError(16,0.3437764);
   MHT_all->SetBinError(17,0.5399076);
   MHT_all->SetBinError(18,0.4247042);
   MHT_all->SetBinError(19,1.019258);
   MHT_all->SetBinError(20,1.032004);
   MHT_all->SetBinError(21,0.6189192);
   MHT_all->SetBinError(22,1.040238);
   MHT_all->SetBinError(23,1.065107);
   MHT_all->SetBinError(24,1.044663);
   MHT_all->SetBinError(26,0.8291491);
   MHT_all->SetBinError(27,1.098091);
   MHT_all->SetBinError(28,1.067164);
   MHT_all->SetBinError(31,0.3752511);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(284.8544);
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
   gre->SetPointError(0,10,0.06967548);
   gre->SetPoint(1,30,1);
   gre->SetPointError(1,10,0.05627913);
   gre->SetPoint(2,50,1);
   gre->SetPointError(2,10,0.05133895);
   gre->SetPoint(3,70,1);
   gre->SetPointError(3,10,0.06686165);
   gre->SetPoint(4,90,1);
   gre->SetPointError(4,10,0.07288631);
   gre->SetPoint(5,110,1);
   gre->SetPointError(5,10,0.0685287);
   gre->SetPoint(6,130,1);
   gre->SetPointError(6,10,0.07930682);
   gre->SetPoint(7,150,1);
   gre->SetPointError(7,10,0.09456864);
   gre->SetPoint(8,170,1);
   gre->SetPointError(8,10,0.1015583);
   gre->SetPoint(9,190,1);
   gre->SetPointError(9,10,0.09772078);
   gre->SetPoint(10,210,1);
   gre->SetPointError(10,10,0.1147275);
   gre->SetPoint(11,230,1);
   gre->SetPointError(11,10,0.1246543);
   gre->SetPoint(12,250,1);
   gre->SetPointError(12,10,0.1453319);
   gre->SetPoint(13,270,1);
   gre->SetPointError(13,10,0.1282263);
   gre->SetPoint(14,290,1);
   gre->SetPointError(14,10,0.1699468);
   gre->SetPoint(15,310,1);
   gre->SetPointError(15,10,0.1651458);
   gre->SetPoint(16,330,1);
   gre->SetPointError(16,10,0.2085574);
   gre->SetPoint(17,350,1);
   gre->SetPointError(17,10,0.1921512);
   gre->SetPoint(18,370,1);
   gre->SetPointError(18,10,0.1971979);
   gre->SetPoint(19,390,1);
   gre->SetPointError(19,10,0.2550146);
   gre->SetPoint(20,410,1);
   gre->SetPointError(20,10,0.2289891);
   gre->SetPoint(21,430,1);
   gre->SetPointError(21,10,0.2865237);
   gre->SetPoint(22,450,1);
   gre->SetPointError(22,10,0.3666796);
   gre->SetPoint(23,470,1);
   gre->SetPointError(23,10,0.3021923);
   gre->SetPoint(24,490,1);
   gre->SetPointError(24,10,0.3477052);
   gre->SetPoint(25,510,1);
   gre->SetPointError(25,10,0.4226628);
   gre->SetPoint(26,530,1);
   gre->SetPointError(26,10,0.4536556);
   gre->SetPoint(27,550,1);
   gre->SetPointError(27,10,0.3726117);
   gre->SetPoint(28,570,1);
   gre->SetPointError(28,10,0.3643518);
   gre->SetPoint(29,590,1);
   gre->SetPointError(29,10,0.3942802);
   
   TH1F *Graph_Graph_from_MHT_all1150 = new TH1F("Graph_Graph_from_MHT_all1150","",100,0,660);
   Graph_Graph_from_MHT_all1150->SetMinimum(0.4556133);
   Graph_Graph_from_MHT_all1150->SetMaximum(1.544387);
   Graph_Graph_from_MHT_all1150->SetDirectory(0);
   Graph_Graph_from_MHT_all1150->SetStats(0);
   Graph_Graph_from_MHT_all1150->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all1150->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all1150->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all1150->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_MHT_all1150->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all1150->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all1150->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_MHT_all1150->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_MHT_all1150->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_MHT_all1150->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_MHT_all1150);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,520,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis6900[31] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600}; 
   
   TH1D *MHT_all = new TH1D("MHT_all","",30, xAxis6900);
   MHT_all->SetBinContent(1,5.325309);
   MHT_all->SetBinContent(2,4.576294);
   MHT_all->SetBinContent(3,5.116567);
   MHT_all->SetBinContent(4,4.250011);
   MHT_all->SetBinContent(5,3.565639);
   MHT_all->SetBinContent(6,2.234808);
   MHT_all->SetBinContent(7,2.570997);
   MHT_all->SetBinContent(8,2.247902);
   MHT_all->SetBinContent(9,2.033916);
   MHT_all->SetBinContent(10,1.700258);
   MHT_all->SetBinContent(11,2.178208);
   MHT_all->SetBinContent(12,1.774885);
   MHT_all->SetBinContent(13,1.552694);
   MHT_all->SetBinContent(14,0.9963604);
   MHT_all->SetBinContent(15,1.69186);
   MHT_all->SetBinContent(16,1.998655);
   MHT_all->SetBinContent(17,0.7468925);
   MHT_all->SetBinContent(18,1.790465);
   MHT_all->SetBinContent(19,0.5097054);
   MHT_all->SetBinContent(20,0.6847448);
   MHT_all->SetBinContent(21,1.613822);
   MHT_all->SetBinContent(22,1.430519);
   MHT_all->SetBinContent(23,0.4304027);
   MHT_all->SetBinContent(24,1.322559);
   MHT_all->SetBinContent(26,0.5955205);
   MHT_all->SetBinContent(27,3.26307);
   MHT_all->SetBinContent(28,1.380044);
   MHT_all->SetBinContent(31,0.5157337);
   MHT_all->SetBinError(1,0.09327822);
   MHT_all->SetBinError(2,0.07246154);
   MHT_all->SetBinError(3,0.06826404);
   MHT_all->SetBinError(4,0.08609098);
   MHT_all->SetBinError(5,0.09828652);
   MHT_all->SetBinError(6,0.1170692);
   MHT_all->SetBinError(7,0.133356);
   MHT_all->SetBinError(8,0.1609111);
   MHT_all->SetBinError(9,0.1832209);
   MHT_all->SetBinError(10,0.1952454);
   MHT_all->SetBinError(11,0.2107425);
   MHT_all->SetBinError(12,0.2323795);
   MHT_all->SetBinError(13,0.2666859);
   MHT_all->SetBinError(14,0.3276447);
   MHT_all->SetBinError(15,0.3349855);
   MHT_all->SetBinError(16,0.3437764);
   MHT_all->SetBinError(17,0.5399076);
   MHT_all->SetBinError(18,0.4247042);
   MHT_all->SetBinError(19,1.019258);
   MHT_all->SetBinError(20,1.032004);
   MHT_all->SetBinError(21,0.6189192);
   MHT_all->SetBinError(22,1.040238);
   MHT_all->SetBinError(23,1.065107);
   MHT_all->SetBinError(24,1.044663);
   MHT_all->SetBinError(26,0.8291491);
   MHT_all->SetBinError(27,1.098091);
   MHT_all->SetBinError(28,1.067164);
   MHT_all->SetBinError(31,0.3752511);
   MHT_all->SetMinimum(0);
   MHT_all->SetMaximum(2);
   MHT_all->SetEntries(284.8544);
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
   canvasbtag_morethanzero_875/MHT_all->cd();
   canvasbtag_morethanzero_875/MHT_all->Modified();
   canvasbtag_morethanzero_875/MHT_all->cd();
   canvasbtag_morethanzero_875/MHT_all->SetSelected(canvasbtag_morethanzero_875/MHT_all);
}
