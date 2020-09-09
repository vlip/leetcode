#pragma once
#include <string>
#include <stdlib.h>

class DemoStringWithWstring {

public:
	static std::wstring String2WString(const std::string& s);
	static std::string Wstring2String(const std::wstring& ws);
};