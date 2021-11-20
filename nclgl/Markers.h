#pragma once
#include "../nclgl/SceneNode.h"

class Mesh;

class Markers : public SceneNode {
public:
	Markers(Vector3	heightmapSize);
	~Markers() {};

	void Update(float dt) override;
	Vector3 GetCameraPos();

protected:
	SceneNode* camStart;
	SceneNode* camEnd;

	SceneNode* marker;
	SceneNode* marker1;
	SceneNode* marker2;
	SceneNode* marker3;
	SceneNode* marker4;

	Mesh* cube;

};