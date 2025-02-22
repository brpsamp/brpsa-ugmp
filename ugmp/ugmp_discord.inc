#if defined UGMP_DISCORD_INCLUDED
	#endinput
#endif
#define UGMP_DISCORD_INCLUDED
#pragma library UGMP_DISCORD

///////////////////////////// NATIVES
//// Discord rich presence
native InitialiseDiscordRichPresence(const applicationID[]);
native UpdateDiscordRichPresence(const smallImageKey[], const smallImageText[], const largeImageKey[], const largeImageText[], const details[]);
native ShutdownDiscordRichPresence();