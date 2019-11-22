#include "cBomb.h"

cBomb::cBomb()
{

}
cBomb::~cBomb()
{

}

void cBomb::Shoot()
{

}
void cBomb::Reload()
{

}

std::string cBomb::getWeaponType()
{
	return "Bomb";
}
void cBomb::setHealth(int newHealth)
{
	this->health = newHealth;
}
int cBomb::getHealth()
{
	return this->health;
}
std::string cBomb::getMeshName()
{
	return this->_meshName;
}
unsigned int cBomb::getFriendlyIDNumber()
{
	return this->_friendlyIDNumber;
}
std::string cBomb::getFriendlyName()
{
	return this->_friendlyName;
}
glm::vec3 cBomb::getPositionXYZ()
{
	return this->_positionXYZ;
}
glm::vec3 cBomb::getRotationXYZ()
{
	return this->_rotationXYZ;
}
float cBomb::getScale()
{
	return this->_scale;
}
glm::mat4 cBomb::getMatWorld()
{
	return this->_matWorld;
}
glm::vec4 cBomb::getObjectColourRGBA()
{
	return this->_objectColourRGBA;
}
glm::vec4 cBomb::getDiffuseColour()
{
	return this->_diffuseColour;
}
glm::vec4 cBomb::getSpecularColour()
{
	return this->_specularColour;
}
glm::vec3 cBomb::getVelocity()
{
	return this->_velocity;
}
float cBomb::getVelocityX()
{
	return this->_velocityX;
}
float cBomb::getVelocityY()
{
	return this->_velocityY;
}
float cBomb::getVelocityZ()
{
	return this->_velocityZ;
}
glm::vec3 cBomb::getAccel()
{
	return this->_accel;
}
float cBomb::getInverseMass()
{
	return this->_inverseMass;
}
std::string cBomb::getPhysicsShapeType()
{
	return this->_physicsShapeType;
}
bool cBomb::getIsWireframe()
{
	return this->_isWireframe;
}
glm::vec4 cBomb::getDebugColour()
{
	return this->_debugColour;
}
float cBomb::get_SPHERE_radius()
{
	return this->_SPHERE_radius;
}
bool cBomb::getIsVisible()
{
	return this->_isVisible;
}
bool cBomb::getDisableDepthBufferTest()
{
	return this->_disableDepthBufferTest;
}
bool cBomb::getDisableDepthBufferWrite()
{
	return this->_disableDepthBufferWrite;
}
//setters
void cBomb::setMeshName(std::string name)
{
	this->_meshName = name;
}
void cBomb::setFriendlyIDNumber(unsigned int IDNumber)
{
	this->_friendlyIDNumber = IDNumber;
}
void cBomb::setFriendlyName(std::string friendlyName)
{
	this->_friendlyName = friendlyName;
}
void cBomb::setPositionXYZ(glm::vec3 positionXYZ)
{
	this->_positionXYZ = positionXYZ;
}
void cBomb::setRotationXYZ(glm::vec3 rotationXYZ)
{
	this->_rotationXYZ = rotationXYZ;
}
void cBomb::setScale(float scale)
{
	this->_scale = scale;
}
void cBomb::setMatWorld(glm::mat4 matWorld)
{
	this->_matWorld = matWorld;
}
void cBomb::setObjectColourRGBA(glm::vec4 colourRGBA)
{
	this->_objectColourRGBA = colourRGBA;
}
void cBomb::setDiffuseColour(glm::vec4 diffuseColourRGBA)
{
	this->_diffuseColour = diffuseColourRGBA;
}
void cBomb::setSpecularColour(glm::vec4 specularColourRGBA)
{
	this->_specularColour = specularColourRGBA;
}
void cBomb::setVelocity(glm::vec3 velocityXYZ)
{
	this->_velocity = velocityXYZ;
}
void cBomb::setVelocityX(float velocityX)
{
	this->_velocityX = velocityX;
}
void cBomb::setVelocityY(float velocityY)
{
	this->_velocityY = velocityY;
}
void cBomb::setVelocityZ(float velocityZ)
{
	this->_velocityZ = velocityZ;
}
void cBomb::setAccel(glm::vec3 accelXYZ)
{
	this->_accel = accelXYZ;
}
void cBomb::setInverseMass(float inverseMass)
{
	this->_inverseMass = inverseMass;
}
void cBomb::setPhysicsShapeType(std::string physicsShapeType)
{
	this->_physicsShapeType = physicsShapeType;
}
void cBomb::setIsWireframe(bool isWireFrame)
{
	this->_isWireframe = isWireFrame;
}
void cBomb::setDebugColour(glm::vec4 debugColourRGBA)
{
	this->_debugColour = debugColourRGBA;
}
void cBomb::set_SPHERE_radius(float radius)
{
	this->_SPHERE_radius = radius;
}
void cBomb::setIsVisible(bool isVisible)
{
	this->_isVisible = isVisible;
}
void cBomb::setDisableDepthBufferTest(bool disableDepthBufferTest)
{
	this->_disableDepthBufferTest = disableDepthBufferTest;
}
void cBomb::setDisableDepthBufferWrite(bool disableDepthBufferWrite)
{
	this->_disableDepthBufferWrite = disableDepthBufferWrite;
}

iObject* cBomb::getWeapon()
{
	return this;
}

unsigned int cBomb::getUniqueID(void)
{
	return this->_m_uniqueID;
}

// this variable is static, so common to all objects.
// When the object is created, the unique ID is set, and 
//	the next unique ID is incremented
//static 
unsigned int cBomb::next_uniqueID = 1000;	// Starting at 1000, just because