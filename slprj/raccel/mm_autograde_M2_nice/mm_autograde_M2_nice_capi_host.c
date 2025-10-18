#include "mm_autograde_M2_nice_capi_host.h"
static mm_autograde_M2_nice_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        mm_autograde_M2_nice_host_InitializeDataMapInfo(&(root), "mm_autograde_M2_nice");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
