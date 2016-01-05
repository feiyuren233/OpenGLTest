/*
 * Rotation.h
 *
 *  Created on: Jan 4, 2016
 *      Author: feiyu
 */

#ifndef GAME_ROTATION_H_
#define GAME_ROTATION_H_
#include "../Utility/Headers/mMathTools.h"
#include "GameObjComponents.h"

namespace GameObjComp{

class Rotation : public GameObjComponents{
private:
	double x, y, z;
	Matrix44f mat;
	Vector3f pivot;

	float calcPivot();
protected:
public:
	Rotation();
	Rotation(double x, double y, double z);

	void setRotation(double x, double y, double z);
	void setPivot(Vector3f pivot);
};






}





#endif /* GAME_ROTATION_H_ */
