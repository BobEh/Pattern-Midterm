#include "cRocket.h"

cRocket::cRocket()
{

}
cRocket::~cRocket()
{

}

void cRocket::Shoot()
{

}
void cRocket::Reload()
{

}

std::string cRocket::getWeaponType()
{
	return "Rocket";
}
void cRocket::setHealth(int newHealth)
{
	this->health = newHealth;
}
int cRocket::getHealth()
{
	return this->health;
}
std::string cRocket::getMeshName()
{
	return this->_meshName;
}
unsigned int cRocket::getFriendlyIDNumber()
{
	return this->_friendlyIDNumber;
}
std::string cRocket::getFriendlyName()
{
	return this->_friendlyName;
}
glm::vec3 cRocket::getPositionXYZ()
{
	return this->_positionXYZ;
}
glm::vec3 cRocket::getRotationXYZ()
{
	return this->_rotationXYZ;
}
float cRocket::getScale()
{
	return this->_scale;
}
glm::mat4 cRocket::getMatWorld()
{
	return this->_matWorld;
}
glm::vec4 cRocket::getObjectColourRGBA()
{
	return this->_objectColourRGBA;
}
glm::vec4 cRocket::getDiffuseColour()
{
	return this->_diffuseColour;
}
glm::vec4 cRocket::getSpecularColour()
{
	return this->_specularColour;
}
glm::vec3 cRocket::getVelocity()
{
	return this->_velocity;
}
float cRocket::getVelocityX()
{
	return this->_velocityX;
}
float cRocket::getVelocityY()
{
	return this->_velocityY;
}
float cRocket::getVelocityZ()
{
	return this->_velocityZ;
}
glm::vec3 cRocket::getAccel()
{
	return this->_accel;
}
float cRocket::getInverseMass()
{
	return this->_inverseMass;
}
std::string cRocket::getPhysicsShapeType()
{
	return this->_physicsShapeType;
}
bool cRocket::getIsWireframe()
{
	return this->_isWireframe;
}
glm::vec4 cRocket::getDebugColour()
{
	return this->_debugColour;
}
float cRocket::get_SPHERE_radius()
{
	return this->_SPHERE_radius;
}
bool cRocket::getIsVisible()
{
	return this->_isVisible;
}
bool cRocket::getDisableDepthBufferTest()
{
	return this->_disableDepthBufferTest;
}
bool cRocket::getDisableDepthBufferWrite()
{
	return this->_disableDepthBufferWrite;
}
//setters
void cRocket::setMeshName(std::string name)
{
	this->_meshName = name;
}
void cRocket::setFriendlyIDNumber(unsigned int IDNumber)
{
	this->_friendlyIDNumber = IDNumber;
}
void cRocket::setFriendlyName(std::string friendlyName)
{
	this->_friendlyName = friendlyName;
}
void cRocket::setPositionXYZ(glm::vec3 positionXYZ)
{
	this->_positionXYZ = positionXYZ;
}
void cRocket::setRotationXYZ(glm::vec3 rotationXYZ)
{
	this->_rotationXYZ = rotationXYZ;
}
void cRocket::setScale(float scale)
{
	this->_scale = scale;
}
void cRocket::setMatWorld(glm::mat4 matWorld)
{
	this->_matWorld = matWorld;
}
void cRocket::setObjectColourRGBA(glm::vec4 colourRGBA)
{
	this->_objectColourRGBA = colourRGBA;
}
void cRocket::setDiffuseColour(glm::vec4 diffuseColourRGBA)
{
	this->_diffuseColour = diffuseColourRGBA;
}
void cRocket::setSpecularColour(glm::vec4 specularColourRGBA)
{
	this->_specularColour = specularColourRGBA;
}
void cRocket::setVelocity(glm::vec3 velocityXYZ)
{
	this->_velocity = velocityXYZ;
}
void cRocket::setVelocityX(float velocityX)
{
	this->_velocityX = velocityX;
}
void cRocket::setVelocityY(float velocityY)
{
	this->_velocityY = velocityY;
}
void cRocket::setVelocityZ(float velocityZ)
{
	this->_velocityZ = velocityZ;
}
void cRocket::setAccel(glm::vec3 accelXYZ)
{
	this->_accel = accelXYZ;
}
void cRocket::setInverseMass(float inverseMass)
{
	this->_inverseMass = inverseMass;
}
void cRocket::setPhysicsShapeType(std::string physicsShapeType)
{
	this->_physicsShapeType = physicsShapeType;
}
void cRocket::setIsWireframe(bool isWireFrame)
{
	this->_isWireframe = isWireFrame;
}
void cRocket::setDebugColour(glm::vec4 debugColourRGBA)
{
	this->_debugColour = debugColourRGBA;
}
void cRocket::set_SPHERE_radius(float radius)
{
	this->_SPHERE_radius = radius;
}
void cRocket::setIsVisible(bool isVisible)
{
	this->_isVisible = isVisible;
}
void cRocket::setDisableDepthBufferTest(bool disableDepthBufferTest)
{
	this->_disableDepthBufferTest = disableDepthBufferTest;
}
void cRocket::setDisableDepthBufferWrite(bool disableDepthBufferWrite)
{
	this->_disableDepthBufferWrite = disableDepthBufferWrite;
}

iObject* cRocket::getWeapon()
{
	return this;
}

unsigned int cRocket::getUniqueID(void)
{
	return this->_m_uniqueID;
}

// this variable is static, so common to all objects.
// When the object is created, the unique ID is set, and 
//	the next unique ID is incremented
//static 
unsigned int cRocket::next_uniqueID = 1000;	// Starting at 1000, just because