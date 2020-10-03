#include "Wrapper.h"
#include "GameObject.h"

GameObject gameObject;

PLUGIN_API int getID()
{
    return gameObject.getID();
}

PLUGIN_API void setID(const int id)
{
    gameObject.setID(id);
}

PLUGIN_API Vector3D getPosition()
{
    return gameObject.getPosition();
}

PLUGIN_API void setPosition(const float x, const float y, const float z)
{
    gameObject.setPosition(x, y, z);
}
