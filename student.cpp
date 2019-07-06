#include "student.h"

Student::Student(int arg1, std::string arg2, std::string arg3) {
	
	studentId = arg1;
	firstName = arg2;
	lastName = arg3;
}

Student::~Student() {

}

std::string Student::getFirstName() const {
	return firstName;
}

std::string Student::getLastName() const {
	return lastName;
}

int Student::getStudentId() const {
	return studentId;
}