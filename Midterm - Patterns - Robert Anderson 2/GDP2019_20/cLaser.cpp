#include "cLaser.h"



cLaser::cLaser(iObject* weapon, glm::vec3 robotPosition)
{
	this->weaponType = "Laser";
	this->setPositionXYZ(glm::vec3(robotPosition.x, robotPosition.y + 0.5f, robotPosition.z));
	this->setRotationXYZ(glm::vec3(0.0f, 0.0f, 0.0f));
	this->setScale(1.0f);
	this->setObjectColourRGBA(glm::vec4(1.0f, 0.0f, 0.0f, 1.0f));
	this->setVelocity(glm::vec3(0.0f, 0.0f, 0.0f));
	this->setAccel(glm::vec3(0.0f, 0.0f, 0.0f));
	this->setInverseMass(0.0f);
	this->setIsVisible(true);
	this->setIsWireframe(false);
}
cLaser::~cLaser()
{

}

std::string cLaser::getWeaponType()
{
	return this->weaponType;
}

void cLaser::Shoot()
{

}
void cLaser::Reload()
{

}

void cLaser::setHealth(int newHealth)
{
	this->health = newHealth;
}
int cLaser::getHealth()
{
	return this->health;
}

std::string cLaser::getMeshName()
{
	return this->_meshName;
}
unsigned int cLaser::getFriendlyIDNumber()
{
	return this->_friendlyIDNumber;
}
std::string cLaser::getFriendlyName()
{
	return this->_friendlyName;
}
glm::vec3 cLaser::getPositionXYZ()
{
	return this->_positionXYZ;
}
glm::vec3 cLaser::getRotationXYZ()
{
	return this->_rotationXYZ;
}
float cLaser::getScale()
{
	return this->_scale;
}
glm::mat4 cLaser::getMatWorld()
{
	return this->_matWorld;
}
glm::vec4 cLaser::getObjectColourRGBA()
{
	return this->_objectColourRGBA;
}
glm::vec4 cLaser::getDiffuseColour()
{
	return this->_diffuseColour;
}
glm::vec4 cLaser::getSpecularColour()
{
	return this->_specularColour;
}
glm::vec3 cLaser::getVelocity()
{
	return this->_velocity;
}
float cLaser::getVelocityX()
{
	return this->_velocityX;
}
float cLaser::getVelocityY()
{
	return this->_velocityY;
}
float cLaser::getVelocityZ()
{
	return this->_velocityZ;
}
glm::vec3 cLaser::getAccel()
{
	return this->_accel;
}
float cLaser::getInverseMass()
{
	return this->_inverseMass;
}
std::string cLaser::getPhysicsShapeType()
{
	return this->_physicsShapeType;
}
bool cLaser::getIsWireframe()
{
	return this->_isWireframe;
}
glm::vec4 cLaser::getDebugColour()
{
	return this->_debugColour;
}
float cLaser::get_SPHERE_radius()
{
	return this->_SPHERE_radius;
}
bool cLaser::getIsVisible()
{
	return this->_isVisible;
}
bool cLaser::getDisableDepthBufferTest()
{
	return this->_disableDepthBufferTest;
}
bool cLaser::getDisableDepthBufferWrite()
{
	return this->_disableDepthBufferWrite;
}
//setters
void cLaser::setMeshName(std::string name)
{
	this->_meshName = name;
}
void cLaser::setFriendlyIDNumber(unsigned int IDNumber)
{
	this->_friendlyIDNumber = IDNumber;
}
void cLaser::setFriendlyName(std::string friendlyName)
{
	this->_friendlyName = friendlyName;
}
void cLaser::setPositionXYZ(glm::vec3 positionXYZ)
{
	this->_positionXYZ = positionXYZ;
}
void cLaser::setRotationXYZ(glm::vec3 rotationXYZ)
{
	this->_rotationXYZ = rotationXYZ;
}
void cLaser::setScale(float scale)
{
	this->_scale = scale;
}
void cLaser::setMatWorld(glm::mat4 matWorld)
{
	this->_matWorld = matWorld;
}
void cLaser::setObjectColourRGBA(glm::vec4 colourRGBA)
{
	this->_objectColourRGBA = colourRGBA;
}
void cLaser::setDiffuseColour(glm::vec4 diffuseColourRGBA)
{
	this->_diffuseColour = diffuseColourRGBA;
}
void cLaser::setSpecularColour(glm::vec4 specularColourRGBA)
{
	this->_specularColour = specularColourRGBA;
}
void cLaser::setVelocity(glm::vec3 velocityXYZ)
{
	this->_velocity = velocityXYZ;
}
void cLaser::setVelocityX(float velocityX)
{
	this->_velocityX = velocityX;
}
void cLaser::setVelocityY(float velocityY)
{
	this->_velocityY = velocityY;
}
void cLaser::setVelocityZ(float velocityZ)
{
	this->_velocityZ = velocityZ;
}
void cLaser::setAccel(glm::vec3 accelXYZ)
{
	this->_accel = accelXYZ;
}
void cLaser::setInverseMass(float inverseMass)
{
	this->_inverseMass = inverseMass;
}
void cLaser::setPhysicsShapeType(std::string physicsShapeType)
{
	this->_physicsShapeType = physicsShapeType;
}
void cLaser::setIsWireframe(bool isWireFrame)
{
	this->_isWireframe = isWireFrame;
}
void cLaser::setDebugColour(glm::vec4 debugColourRGBA)
{
	this->_debugColour = debugColourRGBA;
}
void cLaser::set_SPHERE_radius(float radius)
{
	this->_SPHERE_radius = radius;
}
void cLaser::setIsVisible(bool isVisible)
{
	this->_isVisible = isVisible;
}
void cLaser::setDisableDepthBufferTest(bool disableDepthBufferTest)
{
	this->_disableDepthBufferTest = disableDepthBufferTest;
}
void cLaser::setDisableDepthBufferWrite(bool disableDepthBufferWrite)
{
	this->_disableDepthBufferWrite = disableDepthBufferWrite;
}

iObject* cLaser::getWeapon()
{
	return this;
}

unsigned int cLaser::getUniqueID(void)
{
	return this->_m_uniqueID;
}

// this variable is static, so common to all objects.
// When the object is created, the unique ID is set, and 
//	the next unique ID is incremented
//static 
unsigned int cLaser::next_uniqueID = 1000;	// Starting at 1000, just because