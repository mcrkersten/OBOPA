#include "PeopleMaker.h"
#include <iostream>


PeopleMaker::PeopleMaker() {
	addDocent(new Docent("Jos Thi"));
	addDocent(new Docent("Alco Liest"));
	addDocent(new Docent("Hans Schoen"));

	addStudent(new Student("Charrel Kip"));
	addStudent(new Student("Beau ter Ham"));
	addStudent(new Student("Ray Gunn"));
	addStudent(new Student("Justin Case"));
	addStudent(new Student("Dick Sac"));
	addStudent(new Student("Connie Moeleker"));
	addStudent(new Student("Peter Selie"));
	addStudent(new Student("Dies Groot"));
	addStudent(new Student("Constant Lam"));
	addStudent(new Student("Conny Plassen"));
	addStudent(new Student("Wil Krikke"));
}

void PeopleMaker::addStudent(Student* d) {
	studenten.push_back(d);
}

void PeopleMaker::addDocent(Docent* d) {
	docenten.push_back(d);
}

Student* PeopleMaker::returnPointerStudent(std::string naam) {
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		if ((*it)->getName() == naam) {
			return *it;
		}
		else {
			it++;
		}
	}
}

Docent* PeopleMaker::returnPointerDocent(std::string naam) {
	std::vector<Docent*>::iterator it = docenten.begin();
	while (it != docenten.end()) {
		if ((*it)->getName() == naam) {
			return *it;
		}
		else {
			it++;
		}
	}
}
