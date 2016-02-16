#pragma once

#include "BaseApplication.h"

// only needed for the camera picking
#include "glm/vec3.hpp"

#include <memory>

class Camera;
class VertexColoredGrid;
class TexturedQuad;
class SpriteSheetQuad;
class FBXMesh;
class ParticleEmitter;

class TestApplication : public BaseApplication {
public:

	TestApplication();
	virtual ~TestApplication();

	virtual bool startup();
	virtual void shutdown();

	virtual bool update(float deltaTime) override;
	virtual void draw();

private:

	Camera*		m_camera;

	// this is an example position for camera picking
	glm::vec3	m_pickPosition;

	std::shared_ptr<VertexColoredGrid> m_pVertexColoredGrid;
	std::shared_ptr<SpriteSheetQuad> m_pSpriteSheetQuad;
	std::shared_ptr<FBXMesh> m_pFBXMesh;
	std::shared_ptr<ParticleEmitter> m_pParticleEmitter;

};