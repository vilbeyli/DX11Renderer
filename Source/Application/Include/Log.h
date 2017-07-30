#pragma once

#include <string>
#include <fstream>

enum ERROR_LOG
{
	CANT_OPEN_FILE,
	CANT_CREATE_RESOURCE,
	CANT_CRERATE_RENDER_STATE,

	ERR_LOG_COUNT
};

class Log
{
public:
	Log();
	~Log();

	static void Info(const std::string& s);
	static void Error(ERROR_LOG errMode, const std::string& s);
	static void Error(const std::string& s);
	static void Error(const char* format, ...);

private:
	std::ofstream m_outFile;
};
