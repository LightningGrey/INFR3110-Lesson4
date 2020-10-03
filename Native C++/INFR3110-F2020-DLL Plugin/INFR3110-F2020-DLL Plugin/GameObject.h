#pragma once
#ifndef ___GAME_OBJECT___
#define ___GAME_OBJECT___

#include "PluginSettings.h"
#include "Vector3D.h"

class PLUGIN_API GameObject
{
public:
	//constructor
	GameObject();
	
	int getID() const;
	void setID(int id = 0);

	Vector3D getPosition() const;
	void setPosition(const float x = 0.0f, const float y = 0.0f, const float z = 0.0f);

private:
	int m_id;
	Vector3D m_position;
};

#endif
