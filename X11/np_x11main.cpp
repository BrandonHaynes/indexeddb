/**********************************************************\
  Default auto-generated np_x11main.cpp

  This file contains the entrypoints for a windows NPAPI
  plugin.  Don't change this unless you know what you're
  doing!
\**********************************************************/

#include "config.h"
#include "NpapiTypes.h"
#include "NpapiPluginModule.h"

using namespace FB::Npapi;
FB::Npapi::NpapiPluginModule *module = NULL;

void initPluginModule()
{
    if (module == NULL) {
        module = new NpapiPluginModule();
        NpapiPluginModule::Default = module;
    }
}

char * NP_GetMIMEDescription()
{
    printf("Mime description queried\n");
    return FBSTRING_X11MIMEType;
}

NPError NP_GetValue(void *future, NPPVariable variable, void *value)
{
    printf("GetValue\n");
    initPluginModule();
    return module->NPP_GetValue((NPP_t *)future, variable, value);
}

NPError OSCALL NP_Initialize(NPNetscapeFuncs* pFuncs
                             , NPPluginFuncs *pluginFuncs)
{
    initPluginModule();
    module->getPluginFuncs(pluginFuncs);
    module->setNetscapeFuncs(pFuncs);

    return NPERR_NO_ERROR;
}

NPError OSCALL NP_Shutdown()
{
    delete module;
    return NPERR_NO_ERROR;
}
