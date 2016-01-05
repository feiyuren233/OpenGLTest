/*
 * Transform.cpp
 *
 *  Created on: Jan 4, 2016
 *      Author: feiyu
 */
#include "Transform.h"

GameObjComp::Transform::Transform() :
		GameObjComponents(GameObjComponents::Transform) {
	pos = Vector3f(0, 0, 0);
}

GameObjComp::Transform::Transform(Vector3f pos) :
		GameObjComponents(GameObjComponents::Transform) {
	Transform::pos = pos;

}
void GameObjComp::Transform::setPosition(Vector3f pos) {
	Transform::pos = pos;

}
