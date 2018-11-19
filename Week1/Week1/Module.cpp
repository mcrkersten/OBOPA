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

void Module::expelStudent() {
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		if ((*it)->getName() == "John") {
			std::cout << "Geschorst: " << (*it)->getName() << std::endl;
			delete *it;
			it = studenten.erase(it);
		}
		else {
			it++;
		}
	}
}

Module::~Module() {
	std::vector<Student*>::iterator it1 = studenten.begin();
	while (it1 != studenten.end()) {
		delete *it1;
		it1++;
	}
	std::vector<Docent*>::iterator it2 = docenten.begin();
	while (it2 != docenten.end()) {
		delete *it2;
		it2++;
	}
}
