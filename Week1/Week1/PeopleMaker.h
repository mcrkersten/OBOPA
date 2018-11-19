#pragma once
#include <vector>
#include "Docent.h"
#include "Student.h"

class PeopleMaker {
	public:
		PeopleMaker();
		void addDocent(Docent* d);
		void addStudent(Student* d);

		Student* returnPointerStudent(std::string naam);
		Docent* returnPointerDocent(std::string naam);
	private:
		std::vector<Student*> studenten;
		std::vector<Docent*> docenten;
};

