TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#==================================================
# build a support library

LIBRARY_IOC += bldBss

# xxxRecord.h will be created from xxxRecord.dbd
#DBDINC += xxxRecord
# install bldBss.dbd into <top>/dbd
DBD += bldBss.dbd

# specify all source files to be compiled and added to the library
#bldBss_SRCS += xxx

bldBss_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

