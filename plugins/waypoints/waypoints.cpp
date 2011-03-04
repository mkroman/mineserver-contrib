#include <string>

#define MINESERVER_C_API
#include "plugin_api.h"
#include "logtype.h"

typedef mineserver_pointer_struct mineserver_t;

mineserver_t* p_mineserver;

PLUGIN_API_EXPORT void CALLCONVERSION waypoints_init(mineserver_t* mineserver)
{
	p_mineserver = mineserver;
	p_mineserver->logger.log(LOG_INFO, "plugin.waypoints", "initialized waypoints plugin");
}

PLUGIN_API_EXPORT void CALLCONVERSION waypoints_shutdown(void)
{

}
