#ifndef VERTEXFORMAT_HPP
#define VERTEXFORMAT_HPP

#include "glm/glm.hpp"

struct VertexFormat 
{
	glm::vec3 position;
	glm::vec4 color;

	VertexFormat(const glm::vec3 &iPos, const glm::vec4 &iColor)
	{
		position = iPos;
		color = iColor;
	}
};

#endif // !VERTEXFORMAT_HPP