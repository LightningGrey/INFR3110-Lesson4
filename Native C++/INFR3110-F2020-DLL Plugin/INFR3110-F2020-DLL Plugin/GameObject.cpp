#include "GameObject.h"

GameObject::GameObject()
{
    setID();
    setPosition();
}

int GameObject::getID() const
{
    return m_id;
}

void GameObject::setID(const int id)
{
    m_id = id;
}

Vector3D GameObject::getPosition() const
{
    return m_position;
}

void GameObject::setPosition(const float x, const float y, const float z)
{
    m_position.x = x;
    m_position.y = y;
    m_position.z = z;
}
