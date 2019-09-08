#ifndef GAMEMODELS_HPP
#define GAMEMODELS_HPP

#include <vector>
#include <string>
#include <map>

#include "../libs/glew/glew.h"
#include "../libs/freeglut/freeglut.h"
#include "glm/glm.hpp"

#include "VertexFormat.hpp"

namespace Models
{
	struct Model
	{
		unsigned int vao;
		std::vector<unsigned int> vbos;

		Model() {}
	};

	class GameModels
	{
	public:
		GameModels();
		~GameModels();
		void CreateTriangleModel(const std::string& gameModelName);
		void DeleteModel(const std::string& gameModelName);
		unsigned int GetModel(const std::string& gameModelName);
	private:
		std::map<std::string, Model> GameModelsList;
	};
}

#endif