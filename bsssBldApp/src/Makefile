TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================
#==================================================================================
# Path to "NON EPICS" External PACKAGES: USER INCLUDES
#==================================================================================
# Support for CPSW
USR_INCLUDES = -I$(BOOST_INCLUDE) 
USR_INCLUDES += -I$(CPSW_FRAMEWORK_INCLUDE) #-I$(YAML_INCLUDE)
#USR_INCLUDES += -I$(CPSW_DEVICE_LIBRARY_INCLUDE)
#USR_INCLUDES += -I$(YAMLREADER_INCLUDE)
#USR_INCLUDES += -I$(COMMONATCA_INCLUDE)
#==================================================================================

#======================================================
# PATH TO "NON EPICS" EXTERNAL PACKAGES: USER LIBRARIES
#======================================================
# Support for CPSW
cpsw_DIR = $(CPSW_FRAMEWORK_LIB)
#deviceLib_DIR = $(CPSW_DEVICE_LIBRARY_LIB)
boost_system_DIR = $(BOOST_LIB)
#yaml-cpp_DIR = $(YAML_LIB)
#hpstpr_DIR = $(HPSTPR_LIB)
#yamlReader_DIR = $(YAMLREADER_LIB)
#commonATCA_DIR = $(COMMONATCA_LIB)
# =====================================================

# ======================================================
# LINK "NON EPICS" EXTERNAL PACKAGE LIBRARIES STATICALLY
#=======================================================
#USR_LIBS_Linux += yamlReader
#USR_LIBS_Linux += deviceLib
USR_LIBS_Linux += cpsw
#USR_LIBS_Linux += yaml-cpp
USR_LIBS_Linux += boost_system
#USR_LIBS_Linux += hpstpr
#USR_LIBS_Linux += commonATCA
#======================================================

#==================================================
# build a support library

LIBRARY_IOC += bsssBld

# xxxRecord.h will be created from xxxRecord.dbd
#DBDINC += xxxRecord
# install bsssBld.dbd into <top>/dbd
DBD += bsssBld.dbd

# specify all source files to be compiled and added to the library
bsssBld_SRCS += bsssBld_IOCShell.cpp

#bsssBld_LIBS += cpsw
bsssBld_LIBS += bsaDriver

bsssBld_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

