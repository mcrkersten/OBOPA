#include "PeopleManager.h"
#include <iostream>

//Constructor maakt meteen alle docenten en studenten aan
PeopleManager::PeopleManager() {
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

void PeopleManager::addStudent(Student* d) {
	studenten.push_back(d);
}

void PeopleManager::addDocent(Docent* d) {
	docenten.push_back(d);
}

//Returned een pointer naar een object uit de Vector Student van deze class
Student* PeopleManager::returnPointerStudent(std::string naam) {
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		if ((*it)->getName() == naam) {
			return *it;
		}
		else {
			it++;
		}
	}
	return NULL;
}

//Returned een pointer naar een object uit de Vector Docent van deze class
Docent* PeopleManager::returnPointerDocent(std::string naam) {
	std::vector<Docent*>::iterator it = docenten.begin();
	while (it != docenten.end()) {
		if ((*it)->getName() == naam) {
			return *it;
		}
		else {
			it++;
		}
	}
	return NULL;
}

//Loop door alle studenten en loop in alle studenten ook door de 3 modules. Kijk of student in een van de Modules zit en tel de EC op score en print.
void PeopleManager::printStudentPoints(std::vector<Module*> m) 
{
	int score = 0;
	std::vector<Student*>::iterator it1 = studenten.begin();
	while (it1 != studenten.end())
	{
		std::vector<Module*>::iterator it2 = m.begin();
		while (it2 != m.end())
		{			
			if ((*it2)->getStudentName(*it1) == true)
			{
				//count score here
				score += (*it2)->getEC();
				it2++;
			}
			else
			{
				it2++;
			}
		}
		std::cout << (*it1)->getName() << " Has " << score << " EC" << std::endl;
		score = 0;
		it1++;
	}
}

//Destructor
PeopleManager::~PeopleManager() {
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

