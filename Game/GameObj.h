/*
 * GameObj.h
 *
 *  Created on: Jan 3, 2016
 *      Author: feiyu
 */

#ifndef GAME_GAMEOBJ_H_
#define GAME_GAMEOBJ_H_

#include <vector>

#include "GameObjComponents.h"
#include "Transform.h"
#include "Rotation.h"
#include "Sprite.h"
#include "meshRenderer.h"

class GameObj {
private:
	GameObjComp::Transform *tranSlot;
	GameObjComp::Rotation *rotSlot;
	Sprite *spriteSlot;
	std::vector<meshRenderer*> mesh;
protected:
public:
	GameObj();

	const GameObjComp::Rotation* getRotSlot() {
		return rotSlot;
	}

	const GameObjComp::Transform* getTranSlot() {
		return tranSlot;
	}

	virtual ~GameObj();
	virtual void onUpdate();

	void addObj(GameObjComponents *component);

};

#endif /* GAME_GAMEOBJ_H_ */
