/*
 * Transform.h
 *
 *  Created on: Jan 4, 2016
 *      Author: feiyu
 */

#ifndef GAME_TRANSFORM_H_
#define GAME_TRANSFORM_H_
#include "GameObjComponents.h"
#include "Utility/mMathTools.h"

namespace GameObjComp{

class Transform : public GameObjComponents{
private:
	Vector3f pos;
protected:
public:
	Transform();
	Transform(Vector3f pos);

	void setPosition(Vector3f pos);

};






}




#endif /* GAME_TRANSFORM_H_ */
