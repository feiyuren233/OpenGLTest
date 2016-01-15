/*
 * GameObjComponents.h
 *
 *  Created on: Jan 4, 2016
 *      Author: feiyu
 */

#ifndef GAME_GAMEOBJCOMPONENTS_H_
#define GAME_GAMEOBJCOMPONENTS_H_



class GameObjComponents{
public:
	enum ComponentType{meshRenderer, Transform, Rotation, Collider, PhysicsAttr, Sprite};

private:
	ComponentType type;

protected:
	GameObjComponents();
	GameObjComponents(ComponentType type);
public:
	virtual ~GameObjComponents();

	ComponentType getType() const {
		return type;
	}
};




#endif /* GAME_GAMEOBJCOMPONENTS_H_ */
