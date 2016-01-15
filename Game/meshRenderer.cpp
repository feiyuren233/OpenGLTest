/*
 * meshRenderer.cpp
 *
 *  Created on: Jan 9, 2016
 *      Author: feiyu
 */
#include <stdlib.h>
#include "meshRenderer.h"

meshRenderer::meshRenderer(Mesh *mesh) : GameObjComponents(GameObjComponents::meshRenderer){
	// TODO Auto-generated constructor stub
	meshRenderer::mesh = mesh;

}

void meshRenderer::Render() {
	mesh->Render();
}

meshRenderer::~meshRenderer() {
	delete mesh;
}

