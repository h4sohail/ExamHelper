#ifndef STUDENTS_H;
#include "includes.h"

class Student {
private:
	std::string firstName;
	std::string lastName;
	int studentId;

public:
	Student(int, std::string, std::string);
	~Student();

public:
	int getStudentId() const;
	std::string getFirstName() const;
	std::string getLastName() const;
};
#endif STUDENTS_H;