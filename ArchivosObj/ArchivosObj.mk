##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ArchivosObj
ConfigurationName      :=Debug
WorkspacePath          :=/home/alejandro/Documentos/GCA/c++
ProjectPath            :=/home/alejandro/Documentos/GCA/c++/ArchivosObj
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Alejandro
Date                   :=10/02/19
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
ObjectsFileList        :="ArchivosObj.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vertex.cpp$(ObjectSuffix) $(IntermediateDirectory)/Object.cpp$(ObjectSuffix) $(IntermediateDirectory)/Reader.cpp$(ObjectSuffix) $(IntermediateDirectory)/Face.cpp$(ObjectSuffix) 



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
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/c++/ArchivosObj/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Vertex.cpp$(ObjectSuffix): Vertex.cpp $(IntermediateDirectory)/Vertex.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/c++/ArchivosObj/Vertex.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vertex.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vertex.cpp$(DependSuffix): Vertex.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Vertex.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Vertex.cpp$(DependSuffix) -MM Vertex.cpp

$(IntermediateDirectory)/Vertex.cpp$(PreprocessSuffix): Vertex.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vertex.cpp$(PreprocessSuffix) Vertex.cpp

$(IntermediateDirectory)/Object.cpp$(ObjectSuffix): Object.cpp $(IntermediateDirectory)/Object.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/c++/ArchivosObj/Object.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Object.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Object.cpp$(DependSuffix): Object.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Object.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Object.cpp$(DependSuffix) -MM Object.cpp

$(IntermediateDirectory)/Object.cpp$(PreprocessSuffix): Object.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Object.cpp$(PreprocessSuffix) Object.cpp

$(IntermediateDirectory)/Reader.cpp$(ObjectSuffix): Reader.cpp $(IntermediateDirectory)/Reader.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/c++/ArchivosObj/Reader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Reader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Reader.cpp$(DependSuffix): Reader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Reader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Reader.cpp$(DependSuffix) -MM Reader.cpp

$(IntermediateDirectory)/Reader.cpp$(PreprocessSuffix): Reader.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Reader.cpp$(PreprocessSuffix) Reader.cpp

$(IntermediateDirectory)/Face.cpp$(ObjectSuffix): Face.cpp $(IntermediateDirectory)/Face.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alejandro/Documentos/GCA/c++/ArchivosObj/Face.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Face.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Face.cpp$(DependSuffix): Face.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Face.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Face.cpp$(DependSuffix) -MM Face.cpp

$(IntermediateDirectory)/Face.cpp$(PreprocessSuffix): Face.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Face.cpp$(PreprocessSuffix) Face.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


