#pragma once
#if ROOT_VERSION_CODE >= ROOT_VERSION(6,00,0)
#include <fun4all/SubsysReco.h>
#include <fun4all/Fun4AllServer.h>
#include <fun4all/Fun4AllInputManager.h>
#include <fun4all/Fun4AllDstInputManager.h>
#include <fun4all/Fun4AllDstOutputManager.h>
#include <fun4all/Fun4AllOutputManager.h>
#include <fun4all/Fun4AllDummyInputManager.h>
#include <g4detectors/PHG4BlockSubsystem.h>
#include <g4eval/PHG4DSTReader.h>
#include <g4main/PHG4ParticleGun.h>
#include <g4main/PHG4Reco.h>
#include <g4main/PHG4TruthSubsystem.h>
#include <g4main/PHG4TruthSubsystem.h>


	R__LOAD_LIBRARY(libProto3ShowCalib.so)
	R__LOAD_LIBRARY(libPrototype3.so)	
	R__LOAD_LIBRARY(libg4eval.so)
	R__LOAD_LIBRARY(libfun4all.so)
	R__LOAD_LIBRARY(libg4testbench.so)
	R__LOAD_LIBRARY(libg4detectors.so)
	R__LOAD_LIBRARY(libphfield_io.so)

#endif

	int Fun4All_TestBeam_ShowerCalib(const int nEvents = 10000000, const char * inputFile =
			"/sphenix/user/jinhuang/Prototype_2017/ShowerCalib/JointEnergyScan1_Neg.lst")
{

	gSystem->Load("libfun4all");
	gSystem->Load("libg4detectors");
	gSystem->Load("libg4testbench");
	gSystem->Load("libg4eval");
	gSystem->Load("libg4histos");	
	gSystem->Load("libphfield_io");	
	
	TString s_outputFile = inputFile;
	s_outputFile += "_Ana.root";
	const char * outputFile = s_outputFile.Data();

	//---------------
	// Load libraries
	//---------------
	gSystem->Load("libPrototype3.so");

	//---------------
	// Fun4All server
	//---------------

	Fun4AllServer *se = Fun4AllServer::instance();
	se->Verbosity(1);

	//-------------- 
	// IO management
	//--------------

	// Hits file
	Fun4AllInputManager *hitsin = new Fun4AllDstInputManager("DSTin");
	//  hitsin->fileopen(inputFile);
	hitsin->AddListFile(inputFile);
	se->registerInputManager(hitsin);

	gSystem->Load("libProto3ShowCalib.so");
	Proto3ShowerCalib * emcal_ana = new Proto3ShowerCalib(
			string(inputFile) + string("_EMCalCalib.root"));

	emcal_ana->Verbosity(1);
	emcal_ana->LoadRecalibMap( "/phenix/u/jinhuang/links/sPHENIX_work/Prototype_2017/ShowerCalib/ShowerCalibFit_CablibConst.dat");
	se->registerSubsystem(emcal_ana);

	cout << "nEVENTS :" << nEvents << endl;

	//-----------------
	// Event processing
	//-----------------
	if (nEvents < 0)
	{
		return 0;
	}

	gSystem->ListLibraries();

	se->run(nEvents);

	//-----
	// Exit
	//-----
	gSystem->Exec("ps -o sid,ppid,pid,user,comm,vsize,rssize,time");

	se->End();

	std::cout << "All done" << std::endl;
	delete se;
	gSystem->Exit(0);
}
