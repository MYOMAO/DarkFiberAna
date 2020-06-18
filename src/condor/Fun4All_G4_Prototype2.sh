#!/bin/csh
setenv HOME /star/u/$LOGNAME
#setenv HOME /sphenix/user/$LOGNAME

source /etc/csh.login
foreach i (/etc/profile.d/*.csh)
 source $i
end

source $HOME/.login
#source /direct/star+u/zshi/.login

#source /cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/bin/sphenix_setup.csh -n ana.141

#source /cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/bin/sphenix_setup.csh -n
#source /cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/bin/setup_root6.csh

source /opt/sphenix/core/bin/sphenix_setup.csh -n
#source /opt/sphenix/core/bin/setup_root6.csh

source /opt/sphenix/core/bin/setup_root6_include_path.csh

printenv
set NEvent=$argv[1]
set Name=$argv[2]

#source /opt/sphenix/core/bin/sphenix_setup.csh -n

echo "Now PWD"

pwd

ls

echo "DONE CHECK"

source ChangeSoft.sh

root -b -l -q Fun4All_G4_Prototype4.C'('${NEvent}')'

ls *root

#mv G4Prototype3New.root G4Prototype3New${Name}.root

source Compile.sh

rm -rf FileList.lst

ls ../../install/lib

echo ../../G4Prototype4New.root >& FileList.lst


pwd

ls

root -b -l -q Fun4All_TestBeam_ShowerCalib.C'('${NEvent},'"'FileList.lst'"'')'

mv FileList.lst_EMCalCalib.root FileList.lst_EMCalCalib${Name}.root

mv FileList.lst_EMCalCalib${Name}.root ../..

cd ../..

rm G4Prototype4New.root

#mv FileList.lst_EMCalCalib.root FileList.lst_EMCalCalib${Name}.root
