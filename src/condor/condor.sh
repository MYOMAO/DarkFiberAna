# All local jobs are part of the vanilla universe.
Universe=vanilla

# We want email if the job completed successfully. This can
# be set to Always, Error, or Never.
Notification=Never

# The executable we want to run.
Executable=Fun4All_G4_Prototype2.sh
# The argument to pass to the executable.
Arguments=1000 $(Cluster)


transfer_input_files=Fun4All_G4_Prototype4.C, build, Compile.sh, analysis, g4detectors, ChangeSoft.sh

# The requirement line specifies which machines we want to
# run this job on.  Any arbitrary classad expression can
# be used.
Requirements=(CPU_Speed >= 1)

# Rank is an expression that states how to rank machines which 
# have already met the requirements expression.  Essentially, 
# rank expresses preference.  A higher numeric value equals better 
# rank.  Condor will give the job the machine with the highest rank.
Rank=CPU_Speed

# Jobs by default get 1.4Gb of RAM allocated, ask for more if needed
# but if a job needs more than 2Gb it will not be able to run on the
# older nodes
request_memory=1800M

# If you need multiple cores you can ask for them, but the scheduling
# may take longer the "larger" a job you ask for
request_cpus=1

# This flag is used to order only one's own submitted jobs 
# The jobs with the highest numbers get considered for 
# scheduling first.
Priority=4

# Copy all of the user's current shell environment variables 
# at the time of job submission.
GetEnv=True

# Used to give jobs a directory with respect to file input 
# and output.
#Initialdir=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/macros/macros/prototype4/condor/directory
Initialdir=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/directory/

# Input file given to the job.
Input=/dev/null

# The job's stdout is sent to this file.
#Output=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/macros/macros/prototype4/condor/out/job.$(Cluster).out
Output=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/out/job.$(Cluster).out
# The job's stderr is sent to this file.
#Error=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/macros/macros/prototype4/condor/err/job.$(Cluster).err
Error=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/err/job.$(Cluster).err

# The condor log file for this job, useful when debugging.
#Log=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/macros/macros/prototype4/condor/log/myjob.$(Cluster).log
Log=/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/log/myjob.$(Cluster).log

should_transfer_files=YES
when_to_transfer_output=ON_EXIT_OR_EVICT
#transfer_output_files=G4Prototype3New$(Cluster).root
#transfer_output_remaps="/sphenix/user/zshi/2019sPHENIXAna/EMCAL/Simulations/macros/macros/prototype4/condor/outputfiles/G4Prototype3New$(Cluster).root"
transfer_output_files=FileList.lst_EMCalCalib$(Cluster).root

# This should be the last command and tells condor to queue the
# job.  If a number is placed after the command (i.e. Queue 15)
# then the job will be submitted N times.  Use the $(Process)
# macro to make your input/output and log files unique.
Queue

