/*
 * meshRenderer.cpp
 *
 *  Created on: Jan 9, 2016
 *      Author: feiyu
 */
#include <stdlib.h>
#include "meshRenderer.h"

meshRenderer::meshRenderer() : mesh(NULL), GameObjComponents(GameObjComponents::meshRenderer){
	// TODO Auto-generated constructor stub

}

meshRenderer::~meshRenderer() {
	delete mesh;
}

