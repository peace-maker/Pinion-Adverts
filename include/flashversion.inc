#if defined _flashversion_included
  #endinput
#endif
#define _flashversion_included

functag public FlashCB(client, flashversion[4], bool:bError, any:data);

native Flash_GetClientVersion(client, bool:show, FlashCB:callback, any:data);

public SharedPlugin:__pl_flashversion = 
{
	name = "flashversion",
	file = "flashversion.smx",
#if defined REQUIRE_PLUGIN
	required = 1
#else
	required = 0
#endif
};

#if !defined REQUIRE_PLUGIN
public __pl_flashversion_SetNTVOptional()
{
	MarkNativeAsOptional("Flash_GetClientVersion");
}
#endif