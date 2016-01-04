/*
 * Transform.h
 *
 *  Created on: Jan 4, 2016
 *      Author: feiyu
 */

#ifndef GAME_TRANSFORM_H_
#define GAME_TRANSFORM_H_
#include "GameObjComponents.h"

namespace GameObjComp{

class Transform : public GameObjComponents{
private:
	double x, y, z;
protected:
public:
	Transform();
	Transform(double x, double y, double z);

	void setPosition(double x, double y, double z);

};






}




#endif /* GAME_TRANSFORM_H_ */
