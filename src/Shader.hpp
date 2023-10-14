#ifndef SHADER_HPP
#define SHADER_HPP

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
    //Constructor reads and builds the shader
    Shader(const char* vertexPath, const char* fragmentPath);

    //Activate the shader
    void use();

    //Utility uniform functions
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;

private:
    //The program ID
    unsigned int ID;
};

#endif //SHADER_HPP
