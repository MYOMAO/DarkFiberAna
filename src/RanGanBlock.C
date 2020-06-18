#include "TROOT.h"
#include "TH1.h"
#include "TTree.h"
#include "TH2.h"
#include "TF1.h"
#include "TFile.h"
#include "TMath.h"
#include "TSystem.h"
#include "TVector2.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "TRandom.h"
#include <iostream>
#include <fstream>
#include <random>

using namespace std;

using std::cout;
using std::endl;

void RanGanBlock(){

	gStyle->SetOptTitle(0);
	gStyle->SetOptStat(0);	
	
	const int NBlocksX = 4;
	const int NBlocksY = 4;
	const int NBlocks = NBlocksX * NBlocksY;
	const int NBlack = 8;
	const int NEdges = 3;

	std::vector<int> BlockVec;
	std::vector<int> EdgeVec;

	int FinalDis[NBlocks];

	for(int i = 0; i < NBlocks; i++){
		BlockVec.push_back(i);
	}
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::shuffle(BlockVec.begin(), BlockVec.end(), std::default_random_engine(seed));

	for(int i = 0; i < NBlocks; i++){
		cout << "i = " << i << "   Shuffled Numbers  = " << BlockVec[i] << endl;

	}

	for(int i = 1; i < NEdges+1; i++){
		EdgeVec.push_back(i);
	}

	for(int i = 0;  i < NBlack; i++){
		std::shuffle(EdgeVec.begin(), EdgeVec.end(), std::default_random_engine(seed));
		FinalDis[ BlockVec[i] ] = EdgeVec[0];
	}

	
	for(int i = NBlack; i < NBlocks; i ++){
		FinalDis[ BlockVec[i] ] = 0;
	}
	

	for(int i = 0; i < NBlocks; i++){
		cout << "i = " << i << "   FinalDis = " << FinalDis[i] << endl;
	}


	TH2I * BlockIDs = new TH2I("BlockIDs","",4,-0.5,3.5,4,-0.5,3.5);	
	BlockIDs->GetXaxis()->SetTitle("#Phi ID");
	BlockIDs->GetYaxis()->SetTitle("z ID");
	BlockIDs->GetYaxis()->SetTitleOffset(1.4);
	BlockIDs->GetXaxis()->CenterTitle();
	BlockIDs->GetYaxis()->CenterTitle();

	

	for(int i = 0; i < NBlocksX; i++){

		for(int j = 0; j < NBlocksX; j++){
		
			BlockIDs->SetBinContent(i+1,j+1,FinalDis[i + j * 4]);
			
		}
	}

	TCanvas *c = new TCanvas("c","c",600,600);
	c->cd();
	BlockIDs->Draw("COLZ");
	c->SaveAs("BLOCKMaskPlot.png");

}
