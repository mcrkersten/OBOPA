#pragma once
#include <vector>
#include "Docent.h"
#include "Student.h"
#include "Module.h"

class PeopleManager {
	public:
		PeopleManager();
		~PeopleManager();
		void addDocent(Docent* d);
		void addStudent(Student* d);

		Student* returnPointerStudent(std::string naam);
		Docent* returnPointerDocent(std::string naam);

		void printStudentPoints(std::vector<Module*> module);
	private:
		std::vector<Student*> studenten;
		std::vector<Docent*> docenten;
};

