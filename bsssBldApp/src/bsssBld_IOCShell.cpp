#include <stdio.h>
#include <string.h>

#include <iocsh.h>
#include <epicsExport.h>

#include <bldStream.h>

static void bld_callback(void *pUsr, void *buf, unsigned size)
{
//    ((bsssAsynDriver *)pUsr)->bsssCallback(buf, size);
    printf("Callback called with size = %ud\n", size);
}

static const iocshArg initArg0 = { "portName",                                           iocshArgString };
static const iocshArg initArg1 = { "register path (which should be described in yaml):", iocshArgString };
static const iocshArg initArg2 = { "named_root (optional)",                              iocshArgString };
static const iocshArg * const initArgs[] = { &initArg0,
                                             &initArg1,
                                             &initArg2 };
static const iocshFuncDef initFuncDef = { "bldAsynDriverConfigure", 3, initArgs };
static void initCallFunc(const iocshArgBuf *args)
{
 
//    bsssAsynDriverConfigure(args[0].sval,  /* port name */
//                           args[1].sval,  /* register path */
//                           (args[2].sval && strlen(args[2].sval))? args[2].sval: NULL);  /* named_root */

    char *named_root;
    named_root = (args[2].sval && strlen(args[2].sval))? args[2].sval: NULL;

    registerBldCallback(named_root, bld_callback, NULL);//(void *) this);
}

void bldAsynDriverRegister(void)
{
    iocshRegister(&initFuncDef,        initCallFunc);
//    iocshRegister(&associateFuncDef,   associateCallFunc);
}

epicsExportRegistrar(bldAsynDriverRegister);
