#ifndef SHADER_LOADER_H
#define SHADER_LOADER_H
#endif 

#include <iostream>

#include "../libs/glew/glew.h"
#include "../libs/freeglut/freeglut.h"

namespace Core
{

	class ShaderLoader
	{
	private:
		std::string ReadShader(char* filename);
		GLuint CreateShader(GLenum shaderType, std::string source, char* shaderName);

	public:
		ShaderLoader(void);
		~ShaderLoader(void);
		GLuint CreateProgram(char* VertexShaderFileName, char* FragmentShaderFileName);

	};

}