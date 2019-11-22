#pragma once

#include <glm/glm.hpp>
#include <glm/vec3.hpp>
#include <string>
#include "iObject.h"

class cMeshObject : public iObject
{
public:
	cMeshObject();

	unsigned int getUniqueID(void);

	void Shoot();

	iObject* weapon;

	int health;

	bool Update(iObject* closestRobot);

	iObject* getWeapon();
	
	std::string getMeshName();
	int getHealth();
	void setHealth(int newHealth);
	std::string getWeaponType();
	unsigned int getFriendlyIDNumber();
	std::string getFriendlyName();
	glm::vec3 getPositionXYZ();
	glm::vec3 getRotationXYZ();
	float getScale();
	glm::mat4 getMatWorld();
	glm::vec4 getObjectColourRGBA();
	glm::vec4 getDiffuseColour();
	glm::vec4 getSpecularColour();
	glm::vec3 getVelocity();
	float getVelocityX();
	float getVelocityY();
	float getVelocityZ();
	glm::vec3 getAccel();
	float getInverseMass();
	std::string getPhysicsShapeType();
	bool getIsWireframe();
	glm::vec4 getDebugColour();
	float get_SPHERE_radius();
	bool getIsVisible();
	bool getDisableDepthBufferTest();
	bool getDisableDepthBufferWrite();
	//setters
	void setMeshName(std::string name);
	void setFriendlyIDNumber(unsigned int IDNumber);
	void setFriendlyName(std::string friendlyName);
	void setPositionXYZ(glm::vec3 positionXYZ);
	void setRotationXYZ(glm::vec3 rotationXYZ);
	void setScale(float scale);
	void setMatWorld(glm::mat4 matWorld);
	void setObjectColourRGBA(glm::vec4 colourRGBA);
	void setDiffuseColour(glm::vec4 diffuseColourRGBA);
	void setSpecularColour(glm::vec4 specularColourRGBA);
	void setVelocity(glm::vec3 velocityXYZ);
	void setVelocityX(float velocityX);
	void setVelocityY(float velocityY);
	void setVelocityZ(float velocityZ);
	void setAccel(glm::vec3 accelXYZ);
	void setInverseMass(float inverseMass);
	void setPhysicsShapeType(std::string physicsShapeType);
	void setIsWireframe(bool isWireFrame);
	void setDebugColour(glm::vec4 debugColourRGBA);
	void set_SPHERE_radius(float radius);
	void setIsVisible(bool isVisible);
	void setDisableDepthBufferTest(bool disableDepthBufferTest);
	void setDisableDepthBufferWrite(bool disableDwpthBufferWrite);

private:
	static unsigned int next_uniqueID;
	unsigned int _m_uniqueID;
	std::string _meshName;
	unsigned int _friendlyIDNumber;
	std::string _friendlyName;
	glm::vec3  _positionXYZ;
	glm::vec3  _rotationXYZ;
	float _scale;
	glm::mat4 _matWorld;
	glm::vec4  _objectColourRGBA;
	glm::vec4 _diffuseColour;
	glm::vec4 _specularColour;
	float _inverseMass;
	std::string _physicsShapeType;
	bool _isWireframe;
	glm::vec4 _debugColour;
	bool _isVisible;
	bool _disableDepthBufferTest;
	bool _disableDepthBufferWrite;
};