#pragma once

#include <string>

#include <glm/glm.hpp>

#define printOpenGLError() printOglError(__FILE__, __LINE__)
int printOglError(const char *file, const int line);

void printTransformFeedbackValues(int nr_catch_particles);

extern double g_cursor_x;
extern double g_cursor_y; // get set by particle smasher

glm::vec4 CursorToWorldspace(float depth);

bool FileExists(const char* filename );
bool DirExists(const char*pathname);
void ChangeDir(const char* dir);
void LogCurrentDir();

class INIReader;
extern INIReader* g_settings;
std::string GetPsSetting_String(const char* var_name, std::string default_value);
int GetPsSetting_Int(const char* var_name, int default_value);
bool GetPsSetting_Bool(const char* var_name, bool default_value);
float GetPsSetting_Float(const char* var_name, float default_value);
