#pragma once
#include <string>
class Docent
{
public:
	Docent(std::string naam);
	std::string getName();
private:
	std::string naam;
};
