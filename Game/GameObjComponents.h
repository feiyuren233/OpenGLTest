/*
 * GameObjComponents.h
 *
 *  Created on: Jan 4, 2016
 *      Author: feiyu
 */

#ifndef GAME_GAMEOBJCOMPONENTS_H_
#define GAME_GAMEOBJCOMPONENTS_H_



class GameObjComponents{
protected:
	enum ComponentType{meshRenderer, Transform, Rotation, Collider, PhysicsAttr};
private:
	ComponentType type;

protected:
	GameObjComponents();
	GameObjComponents(ComponentType type);
public:
	virtual ~GameObjComponents();
};




#endif /* GAME_GAMEOBJCOMPONENTS_H_ */
