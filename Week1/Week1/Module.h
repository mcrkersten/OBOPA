#pragma once
#include <vector>
#include "Docent.h"
#include "Student.h"

class Module {
	public:
		//constructor
		Module(std::string naam, int ec);
		//destructor
		virtual ~Module();

		//assign student en docent
		void addDocent(Docent* d);
		void addStudent(Student* d);

		//return of set naam of hoeveelheid EC van module
		std::string getName();
		int getEC();
		void setEC(int ec);

		//Haal totaal EC van student op
		bool getStudentName(Student* d);

		//genereer een lijst
		void list();

		//verwijder student
		void expelStudent(Student* s);

	private:
		std::string naam;
		int ec;
		std::vector<Student*> studenten;
		std::vector<Docent*> docenten;
};

