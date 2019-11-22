#include "cBullets.h"

cBullets::cBullets()
{

}
cBullets::~cBullets()
{

}

void cBullets::Shoot()
{

}
void cBullets::Reload()
{

}

std::string cBullets::getWeaponType()
{
	return "Bullets";
}

void cBullets::setHealth(int newHealth)
{
	this->health = newHealth;
}
int cBullets::getHealth()
{
	return this->health;
}

std::string cBullets::getMeshName()
{
	return this->_meshName;
}
unsigned int cBullets::getFriendlyIDNumber()
{
	return this->_friendlyIDNumber;
}
std::string cBullets::getFriendlyName()
{
	return this->_friendlyName;
}
glm::vec3 cBullets::getPositionXYZ()
{
	return this->_positionXYZ;
}
glm::vec3 cBullets::getRotationXYZ()
{
	return this->_rotationXYZ;
}
float cBullets::getScale()
{
	return this->_scale;
}
glm::mat4 cBullets::getMatWorld()
{
	return this->_matWorld;
}
glm::vec4 cBullets::getObjectColourRGBA()
{
	return this->_objectColourRGBA;
}
glm::vec4 cBullets::getDiffuseColour()
{
	return this->_diffuseColour;
}
glm::vec4 cBullets::getSpecularColour()
{
	return this->_specularColour;
}
glm::vec3 cBullets::getVelocity()
{
	return this->_velocity;
}
float cBullets::getVelocityX()
{
	return this->_velocityX;
}
float cBullets::getVelocityY()
{
	return this->_velocityY;
}
float cBullets::getVelocityZ()
{
	return this->_velocityZ;
}
glm::vec3 cBullets::getAccel()
{
	return this->_accel;
}
float cBullets::getInverseMass()
{
	return this->_inverseMass;
}
std::string cBullets::getPhysicsShapeType()
{
	return this->_physicsShapeType;
}
bool cBullets::getIsWireframe()
{
	return this->_isWireframe;
}
glm::vec4 cBullets::getDebugColour()
{
	return this->_debugColour;
}
float cBullets::get_SPHERE_radius()
{
	return this->_SPHERE_radius;
}
bool cBullets::getIsVisible()
{
	return this->_isVisible;
}
bool cBullets::getDisableDepthBufferTest()
{
	return this->_disableDepthBufferTest;
}
bool cBullets::getDisableDepthBufferWrite()
{
	return this->_disableDepthBufferWrite;
}
//setters
void cBullets::setMeshName(std::string name)
{
	this->_meshName = name;
}
void cBullets::setFriendlyIDNumber(unsigned int IDNumber)
{
	this->_friendlyIDNumber = IDNumber;
}
void cBullets::setFriendlyName(std::string friendlyName)
{
	this->_friendlyName = friendlyName;
}
void cBullets::setPositionXYZ(glm::vec3 positionXYZ)
{
	this->_positionXYZ = positionXYZ;
}
void cBullets::setRotationXYZ(glm::vec3 rotationXYZ)
{
	this->_rotationXYZ = rotationXYZ;
}
void cBullets::setScale(float scale)
{
	this->_scale = scale;
}
void cBullets::setMatWorld(glm::mat4 matWorld)
{
	this->_matWorld = matWorld;
}
void cBullets::setObjectColourRGBA(glm::vec4 colourRGBA)
{
	this->_objectColourRGBA = colourRGBA;
}
void cBullets::setDiffuseColour(glm::vec4 diffuseColourRGBA)
{
	this->_diffuseColour = diffuseColourRGBA;
}
void cBullets::setSpecularColour(glm::vec4 specularColourRGBA)
{
	this->_specularColour = specularColourRGBA;
}
void cBullets::setVelocity(glm::vec3 velocityXYZ)
{
	this->_velocity = velocityXYZ;
}
void cBullets::setVelocityX(float velocityX)
{
	this->_velocityX = velocityX;
}
void cBullets::setVelocityY(float velocityY)
{
	this->_velocityY = velocityY;
}
void cBullets::setVelocityZ(float velocityZ)
{
	this->_velocityZ = velocityZ;
}
void cBullets::setAccel(glm::vec3 accelXYZ)
{
	this->_accel = accelXYZ;
}
void cBullets::setInverseMass(float inverseMass)
{
	this->_inverseMass = inverseMass;
}
void cBullets::setPhysicsShapeType(std::string physicsShapeType)
{
	this->_physicsShapeType = physicsShapeType;
}
void cBullets::setIsWireframe(bool isWireFrame)
{
	this->_isWireframe = isWireFrame;
}
void cBullets::setDebugColour(glm::vec4 debugColourRGBA)
{
	this->_debugColour = debugColourRGBA;
}
void cBullets::set_SPHERE_radius(float radius)
{
	this->_SPHERE_radius = radius;
}
void cBullets::setIsVisible(bool isVisible)
{
	this->_isVisible = isVisible;
}
void cBullets::setDisableDepthBufferTest(bool disableDepthBufferTest)
{
	this->_disableDepthBufferTest = disableDepthBufferTest;
}
void cBullets::setDisableDepthBufferWrite(bool disableDepthBufferWrite)
{
	this->_disableDepthBufferWrite = disableDepthBufferWrite;
}

iObject* cBullets::getWeapon()
{
	return this;
}

unsigned int cBullets::getUniqueID(void)
{
	return this->_m_uniqueID;
}

// this variable is static, so common to all objects.
// When the object is created, the unique ID is set, and 
//	the next unique ID is incremented
//static 
unsigned int cBullets::next_uniqueID = 1000;	// Starting at 1000, just because