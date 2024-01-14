#include "Object.h"

Object::Object(const Object& obj)
{
	this->ability = obj.ability;
	this->action = obj.action;
	this->actionPoints = obj.actionPoints;
	this->objectName = obj.objectName;
}
