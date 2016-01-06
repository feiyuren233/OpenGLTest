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

class GameObj{
private:
	GameObjComp::Transform *tranSlot;
	GameObjComp::Rotation *rotSlot;
	std::vector<GameObjComponents> gameobjs;
protected:
public:
	GameObj();
	virtual ~GameObj();
	virtual void onUpdate();

	void addObj(GameObjComponents *component);

};




#endif /* GAME_GAMEOBJ_H_ */
