#pragma once

#include "GameObject.h"
#include <vector>
#include <memory>

class MorphGameObject : public GameObject
{

	int m_pCurrentKeyframe;
	int m_pNextKeyframe;
	float m_pLocalMorphTime; // the 't' value used for lerp between [0, 1]

public:
	MorphGameObject();

	std::vector<std::shared_ptr<TTK::MeshBase>> m_pMorphTargets;

	virtual void update(float dt) override;

	void addMorphTarget(std::string filePath);

	void setSpeedMultiplier(std::shared_ptr<TTK::MeshBase> CurrentKey, std::shared_ptr<TTK::MeshBase> NextKey, float Multiplier);
};