##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ObjReader
ConfigurationName      :=Debug
WorkspacePath          :=/home/alejandro/Documentos/GCA/C++
ProjectPath            :=/home/alejandro/Documentos/GCA/C++/ArchivosObj
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Alejandro
Date                   :=16/03/19
CodeLitePath           :=/home/alejandro/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
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
ObjectsFileList        :="ObjReader.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)GL $(LibrarySwitch)glfw $(LibrarySwitch)armadillo 
ArLibs                 :=  "GL" "glfw" "armadillo" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Reader.cpp$(ObjectSuffix) $(IntermediateDirectory)/Model.cpp$(ObjectSuffix) $(IntermediateDirectory)/Transformation.cpp$(ObjectSuffix) $(IntermediateDirectory)/Object.cpp$(ObjectSuffix) 



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
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/C++/ArchivosObj/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Reader.cpp$(ObjectSuffix): Reader.cpp $(IntermediateDirectory)/Reader.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/C++/ArchivosObj/Reader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Reader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Reader.cpp$(DependSuffix): Reader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Reader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Reader.cpp$(DependSuffix) -MM Reader.cpp

$(IntermediateDirectory)/Reader.cpp$(PreprocessSuffix): Reader.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Reader.cpp$(PreprocessSuffix) Reader.cpp

$(IntermediateDirectory)/Model.cpp$(ObjectSuffix): Model.cpp $(IntermediateDirectory)/Model.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/C++/ArchivosObj/Model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Model.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Model.cpp$(DependSuffix): Model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Model.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Model.cpp$(DependSuffix) -MM Model.cpp

$(IntermediateDirectory)/Model.cpp$(PreprocessSuffix): Model.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Model.cpp$(PreprocessSuffix) Model.cpp

$(IntermediateDirectory)/Transformation.cpp$(ObjectSuffix): Transformation.cpp $(IntermediateDirectory)/Transformation.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/C++/ArchivosObj/Transformation.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Transformation.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Transformation.cpp$(DependSuffix): Transformation.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Transformation.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Transformation.cpp$(DependSuffix) -MM Transformation.cpp

$(IntermediateDirectory)/Transformation.cpp$(PreprocessSuffix): Transformation.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Transformation.cpp$(PreprocessSuffix) Transformation.cpp

$(IntermediateDirectory)/Object.cpp$(ObjectSuffix): Object.cpp $(IntermediateDirectory)/Object.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/C++/ArchivosObj/Object.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Object.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Object.cpp$(DependSuffix): Object.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Object.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Object.cpp$(DependSuffix) -MM Object.cpp

$(IntermediateDirectory)/Object.cpp$(PreprocessSuffix): Object.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Object.cpp$(PreprocessSuffix) Object.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


