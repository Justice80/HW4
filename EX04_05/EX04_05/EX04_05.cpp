#include <iostream>
#include "Course.h"

using namespace std;

int main() {

	Course course1("Data Structures", 10);
	Course course2("Database Systems", 15);
	course1.addStudent("Peter Jones");
	course1.addStudent("Brain Smith");
	course1.addStudent("Anne Kennedy");
	course1.dropStudent("Peter Jones");
	course1.doubleCap();

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	cout << "The number of student in course1: " << course1.getNumberOfStudents() << endl;
	string * students1 = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudents(); i++) {
		cout << students1[i]<< ", " ;
	}

	cout << "\nNumber of students in course2: " << course2.getNumberOfStudents() << endl;
	string * students2 = course2.getStudents();
	for (int i = 0; i < course2.getNumberOfStudents(); i++) {
		cout << students2[i] << ", ";
	}
	cout << endl;

	Course course3(course1);
	course1.clear();

	return 0;
}