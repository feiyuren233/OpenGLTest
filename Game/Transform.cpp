/*
 * Transform.cpp
 *
 *  Created on: Jan 4, 2016
 *      Author: feiyu
 */
#include "Transform.h"

GameObjComp::Transform::Transform() : GameObjComponents(GameObjComponents::Transform){
	x = y = z = 0;
}

GameObjComp::Transform::Transform(double x, double y, double z) : GameObjComponents(GameObjComponents::Transform){
	Transform::x = x;
	Transform::y = y;
	Transform::z = z;

}
void GameObjComp::Transform::setPosition(double x, double y, double z) {
	Transform::x = x;
	Transform::y = y;
	Transform::z = z;
}
