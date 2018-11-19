#include "Student.h"

Student::Student(std::string naam) : naam(naam){
}

std::string Student::getName() {
	return naam;
}
