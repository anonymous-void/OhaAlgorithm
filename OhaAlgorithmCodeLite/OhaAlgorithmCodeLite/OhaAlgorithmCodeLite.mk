##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=OhaAlgorithmCodeLite
ConfigurationName      :=Debug
WorkspacePath          := "D:\Project\C_Project\OhaAlgorithm\OhaAlgorithmCodeLite"
ProjectPath            := "D:\Project\C_Project\OhaAlgorithm\OhaAlgorithmCodeLite\OhaAlgorithmCodeLite"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Tesla
Date                   :=2015/11/10
CodeLitePath           :="D:\Software\CodeLite"
LinkerName             :=D:/Software/CodeBlocks/MinGW/bin/g++.exe
SharedObjectLinkerName :=D:/Software/CodeBlocks/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="OhaAlgorithmCodeLite.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=D:/Software/CodeBlocks/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/Software/CodeBlocks/MinGW/bin/ar.exe rcu
CXX      := D:/Software/CodeBlocks/MinGW/bin/g++.exe
CC       := D:/Software/CodeBlocks/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/Software/CodeBlocks/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\Software\CodeLite
Objects0=$(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(ObjectSuffix): ../../P93-Chap4-BFS.c $(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/Project/C_Project/OhaAlgorithm/P93-Chap4-BFS.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(DependSuffix): ../../P93-Chap4-BFS.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(ObjectSuffix) -MF$(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(DependSuffix) -MM "../../P93-Chap4-BFS.c"

$(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(PreprocessSuffix): ../../P93-Chap4-BFS.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/OhaAlgorithm_P93-Chap4-BFS.c$(PreprocessSuffix) "../../P93-Chap4-BFS.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


