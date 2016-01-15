/*
 * GameObj.cpp
 *
 *  Created on: Jan 4, 2016
 *      Author: feiyu
 */
#include "GameObj.h"

GameObj::GameObj() : tranSlot(NULL), rotSlot(NULL), spriteSlot(NULL){



}

void GameObj::onUpdate(){


}

GameObj::~GameObj() {
}

void GameObj::addObj(GameObjComponents* component) {
	if(component->getType()==(GameObjComponents::meshRenderer))
		mesh.push_back(dynamic_cast<meshRenderer*>(component));
}
