TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#==================================================
# build a support library

LIBRARY_IOC += bsssBld

# xxxRecord.h will be created from xxxRecord.dbd
#DBDINC += xxxRecord
# install bsssBld.dbd into <top>/dbd
DBD += bsssBld.dbd

# specify all source files to be compiled and added to the library
#bsssBld_SRCS += xxx

bsssBld_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

