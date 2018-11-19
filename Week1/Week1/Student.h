#pragma once
#include <string>
class Student 
{
	public:
		Student(std::string naam);
		std::string getName();
	private:
		std::string naam;
};