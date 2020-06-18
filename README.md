### Please Read the Following Instruction to Get Started ###

This repository is made to run the Dark Fiber simulations for sPHENIX EMCAL. 

## To START ##

To start, first log into to RCF and find a fresh folder. 

Then get this repository first download it from github by doing:

git clone https://github.com/MYOMAO/EMCALDarkFiberAna.git


cd EMCALDarkFiberAna/src/condor/directory/

source ChangeSoft.sh

source Compile.sh


cd ../../


root -b -l -q Fun4All_G4_Prototype4.C'(10)'


cd build/macros/


root -b -l -q Fun4All_TestBeam_ShowerCalib.C'(10,"test.list")'


You can change the file location on "test.list" or make your own file location

The final output file will be after you run the macron will be: test.list_EMCalCalib.root

You can find the simulation EMCAL information inside the rootfile test.list_EMCalCalib.root


To make change to mask different fibers, go to the code:

EMCALDarkFiberAna/src/condor/directory/g4detectors/PHG4FullProjSpacalCellReco.cc

You can see that I assign ID to mask signals insi. The definition is as follows (also inside the code PHG4FullProjSpacalCellReco.cc)

int MaskIndex[NBlocks] = {2,0,1,23,0,123,0,0,0,1,2,0,12,0,0,1}; 

//Masking ID Explanation:
// Left Column = 1
// Right Column = 2
// Bottom Row = 3
// Left Column + Right Column = 12
// Left Column + Bottom Row = 13
// Right Column + Bottom Row = 23
// Left Column + Right Column + Bottom Row = 123



The implementation start from line 598 - 632 in PHG4FullProjSpacalCellReco.cc


You can change the fiber x and y to mask as you wish. The range of the fiber id is from fiber_x: 0 - 91 and fiber_y: 0 - 57.


After you change anything in the code  PHG4FullProjSpacalCellReco.cc return to 

EMCALDarkFiberAna/src/condor/directory/
 

And recompile with

source ChangeSoft.sh

Your change will be updated to the new simulation. Just redo 


root -b -l -q Fun4All_G4_Prototype4.C'(10)'


cd build/macros/


root -b -l -q Fun4All_TestBeam_ShowerCalib.C'(10,"test.list")'


To obtain a new file of your new simulation setup.



## To Submit Jobs ##

To run a larger scale of simulations, you need to submit condor jobs to RCF

To submit jobs, simply go to 

modify the file condor.sh

modify the lines:

Initialdir=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/directory/
Output=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/out/job.$(Cluster).out
Error=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/err/job.$(Cluster).err
Log=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/log/myjob.$(Cluster).log

To your working folders with the same suffix: out, err, log for later debugging.

cd EMCALDarkFiberAna/src/condor/

csh submit.csh

The default is submitting 2000 jobs.

If you want to change the number of jobs to submit, change the number

set f=Number of jobs you want to submit


Once your jobs are submitted, check the status of your jobs by doing:

condor_q Your USERNAME

The default output files from jobs can be found at "$Initialdir" you defined

The default output file are named "FileList.lst_EMCalCalib"$JobID".root"

If you have any question, please feel free to contact me at zzshi@mit.edu 

