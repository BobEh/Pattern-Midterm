#include "cObjectFactory.h"
#include "cGameObject.h"
#include "cSphereObject.h"
#include "cMeshObject.h"


iObject* cObjectFactory::CreateObject(std::string objectType, int robotType, iObject* weapon, glm::vec3 objectPosition)
{
	iObject* pTheObject = NULL;		// 0

	if (objectType == "unknown")
	{
		pTheObject = new cGameObject();
	}
	else if (objectType == "sphere")
	{
		pTheObject = new cSphereObject(robotType, weapon, objectPosition);
	}
	else if (objectType == "mesh")
	{
		pTheObject = new cMeshObject();
	}

	return pTheObject;
}