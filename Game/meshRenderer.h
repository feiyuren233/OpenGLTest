/*
 * meshRenderer.h
 *
 *  Created on: Jan 9, 2016
 *      Author: feiyu
 */

#ifndef GAME_MESHRENDERER_H_
#define GAME_MESHRENDERER_H_

#include "GameObjComponents.h"
#include "../Utility/Headers/mesh.h"

class meshRenderer: public GameObjComponents {
private:
	Mesh *mesh;
protected:

public:
	meshRenderer();
	void Render();
	virtual ~meshRenderer();
};

#endif /* GAME_MESHRENDERER_H_ */
