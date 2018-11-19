#include <iostream>
#include <vector>
#include "Module.h"
#include "PeopleMaker.h"


int main() {

	PeopleMaker people;
	
	Module module1("Engels", 2);
	module1.addDocent(people.returnPointerDocent("Hans Schoen"));
	module1.addStudent(people.returnPointerStudent("Charrel Kip"));
	module1.addStudent(people.returnPointerStudent("Peter Selie"));
	module1.addStudent(people.returnPointerStudent("Dies Groot"));
	module1.addStudent(people.returnPointerStudent("Beau ter Ham"));
	module1.addStudent(people.returnPointerStudent("Conny Plassen"));
	module1.list();

	Module module2("Wiskunde", 2);
	module2.addDocent(people.returnPointerDocent("Jos Thi"));
	module2.addStudent(people.returnPointerStudent("Beau ter Ham"));
	module2.addStudent(people.returnPointerStudent("Ray Gunn"));
	module2.addStudent(people.returnPointerStudent("Wil Krikke"));
	module2.addStudent(people.returnPointerStudent("Justin Case"));
	module2.addStudent(people.returnPointerStudent("Conny Plassen"));
	module2.list();

	Module module3("aerospace engineering", 70);
	module3.addDocent(people.returnPointerDocent("Alco Liest"));
	module3.addStudent(people.returnPointerStudent("Justin Case"));
	module3.addStudent(people.returnPointerStudent("Conny Plassen"));
	module3.addStudent(people.returnPointerStudent("Dick Sac"));
	module3.addStudent(people.returnPointerStudent("Charrel Kip"));
	module3.addStudent(people.returnPointerStudent("Peter Selie"));
	module3.addStudent(people.returnPointerStudent("Dies Groot"));
	module3.list();


	std::cin.get();
	return 0;
}