#include <iostream>
#include <vector>
#include "Module.h"
#include "PeopleManager.h"


int main() {

	//Maakt 1 keer alle mens objecten aan.
	PeopleManager people;

	//Vector met modules om snel de punten van iedereen op te vragen
	std::vector<Module*> modules;

	modules.push_back(new Module("Engels", 2));
	modules[0]->addDocent(people.returnPointerDocent("Hans Schoen"));
	modules[0]->addStudent(people.returnPointerStudent("Charrel Kip"));
	modules[0]->addStudent(people.returnPointerStudent("Peter Selie"));
	modules[0]->addStudent(people.returnPointerStudent("Dies Groot"));
	modules[0]->addStudent(people.returnPointerStudent("Beau ter Ham"));
	modules[0]->addStudent(people.returnPointerStudent("Conny Plassen"));
	modules[0]->addStudent(people.returnPointerStudent("Connie Moeleker"));

	modules.push_back(new Module("Wiskunde", 1));	
	modules[1]->addDocent(people.returnPointerDocent("Jos Thi"));
	modules[1]->addStudent(people.returnPointerStudent("Beau ter Ham"));
	modules[1]->addStudent(people.returnPointerStudent("Ray Gunn"));
	modules[1]->addStudent(people.returnPointerStudent("Wil Krikke"));
	modules[1]->addStudent(people.returnPointerStudent("Justin Case"));
	modules[1]->addStudent(people.returnPointerStudent("Conny Plassen"));

	modules.push_back(new Module("Aerospace Engineering", 5));
	modules[2]->addDocent(people.returnPointerDocent("Alco Liest"));
	modules[2]->addStudent(people.returnPointerStudent("Justin Case"));
	modules[2]->addStudent(people.returnPointerStudent("Conny Plassen"));
	modules[2]->addStudent(people.returnPointerStudent("Dick Sac"));
	modules[2]->addStudent(people.returnPointerStudent("Charrel Kip"));
	modules[2]->addStudent(people.returnPointerStudent("Peter Selie"));
	modules[2]->addStudent(people.returnPointerStudent("Dies Groot"));
	modules[2]->addStudent(people.returnPointerStudent("Constant Lam"));

	modules[0]->list();
	modules[1]->list();
	modules[2]->list();

	std::cout << "Druk op enter voor opdracht 2" << std::endl;	
	std::cin.get();
	people.printStudentPoints(modules);
	std::cout << std::endl;

	std::cout << "Druk op enter voor opdracht 3" << std::endl;
	std::cin.get();
	modules[0]->setEC(10);
	people.printStudentPoints(modules);
	std::cout << std::endl;

	std::cout << "Druk op enter voor opdracht 4" << std::endl;
	std::cin.get();
	modules[0]->expelStudent(people.returnPointerStudent("Charrel Kip"));
	std::cout << std::endl;

	modules[0]->list();
	modules[1]->list();
	modules[2]->list();

	std::cout << std::endl;

	std::cout << "Einde, druk op enter om te sluiten" << std::endl;
	std::cin.get();

	return 0;
}