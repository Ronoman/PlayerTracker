#pragma once
#pragma comment(lib, "BakkesMod.lib")

#include "plugin/bakkesmodplugin.h"
#include "wrappers/gamewrapper.h"
#include "wrappers/cvarwrapper.h"

class PlayerTracker : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	PlayerTracker();
	~PlayerTracker();

	virtual void onLoad();
	virtual void onUnload();
};

