/*
 * MeshRenderer.h
 *
 *  Created on: Jan 5, 2016
 *      Author: feiyu
 */

#ifndef GAME_MESHRENDERER_H_
#define GAME_MESHRENDERER_H_
#include <vector>
#include <Importer.hpp>      // C++ importer interface
#include <scene.h>       // Output data structure
#include <postprocess.h> // Post processing flags


namespace GameObjComp {
class Mesh {
public:
	Mesh();

	~Mesh();

	bool LoadMesh(const std::string& Filename);

	void Render();

private:
	bool InitFromScene(const aiScene* pScene, const std::string& Filename);
	void InitMesh(unsigned int Index, const aiMesh* paiMesh);
	bool InitMaterials(const aiScene* pScene, const std::string& Filename);
	void Clear();

#define INVALID_MATERIAL 0xFFFFFFFF

	struct MeshEntry {
		MeshEntry();

		~MeshEntry();

		void Init(const std::vector<Vector3f>& Vertices, const std::vector<unsigned int>& Indices);

		GLuint VB;
		GLuint IB;
		unsigned int NumIndices;
		unsigned int MaterialIndex;
	};

	std::vector<MeshEntry> m_Entries;
	//std::vector<Texture*> m_Textures;
};

}

#endif /* GAME_MESHRENDERER_H_ */
