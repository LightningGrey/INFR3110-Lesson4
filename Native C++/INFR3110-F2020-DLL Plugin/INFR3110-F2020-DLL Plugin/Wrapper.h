#pragma once
#ifndef ___WRAPPER___
#define ___WRAPPER___

#include "PluginSettings.h"
#include "Vector3D.h"

#ifdef __cplusplus
extern "C"
{
#endif

	PLUGIN_API int getID();

	PLUGIN_API void setID(int id);

	PLUGIN_API Vector3D getPosition();

	PLUGIN_API void setPosition(float x, float y, float z);

#ifdef __cplusplus
}
#endif

#endif