#include "Module.h"
#include <iostream>

Module::Module(std::string naam, int ec) : naam(naam), ec(ec) {
}

std::string Module::getName() {
	return naam;
}

int Module::getEC() {
	return ec;
}

void Module::setEC(int newEC) {
	ec = newEC;
}

void Module::list() {
	std::cout << "Module: " << naam << std::endl;

	//Print alle docenten
	std::cout << "Docent: ";
	std::vector<Docent*>::iterator it1 = docenten.begin();
	while (it1 != docenten.end()) {
		std::cout << (*it1)->getName() << std::endl;
		it1++;
	}
	//print alle deelnemende studenten
	std::cout << "Deelnemende Studenten:" << std::endl;
	std::vector<Student*>::iterator it2 = studenten.begin();
	while (it2 != studenten.end()) {
		std::cout << (*it2)->getName() << std::endl;
		it2++;
	}
	std::cout << "-----" << std::endl;
	std::cout << std::endl;
}

void Module::addStudent(Student* d) {
	studenten.push_back(d);
}

void Module::addDocent(Docent* d) {
	docenten.push_back(d);
}

//Kijk of deze student mee doet aan deze module door zijn naam te vergelijken.
bool Module::getStudentName(Student* d) {
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		if ((*it)->getName() == d->getName()) {
			return true;
		}
		else {
			it++;
		}
	}
	return false;
}

//Verwijderd een student uit een module. Loopt door alle namen en als er een gelijk is met "s", wissen uit de vector.
void Module::expelStudent(Student* s) {
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		if ((*it)->getName() == s->getName()) {
			std::cout << "Geschorst: " << (*it)->getName() << " | Module: " << getName() << std::endl;
			it = studenten.erase(it);
		}
		else {
			it++;
		}
	}
}

Module::~Module() {
	//The peoplemaker deletes the vector pointers
}
