#pragma once

#include "iObject.h"
#include <string>
#include <vector>

class cObjectFactory
{
public:
	iObject* CreateObject(std::string objectType, int robotType, iObject* weapon, glm::vec3 objectPosition);

private:
	// The builder method
	void BuildObject(iObject* pObject, std::string objectType);
};