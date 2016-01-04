/*
 * GameObj.h
 *
 *  Created on: Jan 3, 2016
 *      Author: feiyu
 */

#ifndef GAME_GAMEOBJ_H_
#define GAME_GAMEOBJ_H_

#include "GameObjComponents.h"
class GameObj{
private:
protected:
public:
	GameObj();
	virtual ~GameObj();
	virtual void onUpdate();

	void addObj(GameObjComponents *component);

};




#endif /* GAME_GAMEOBJ_H_ */
