#!/bin/sh

NEvent=$1

#source /opt/sphenix/core/bin/sphenix_setup.csh -n

source /opt/sphenix/core/bin/sphenix_setup.csh -n root6


root -b -l -q Fun4All_G4_Prototype4.C'('${NEvent}')'


