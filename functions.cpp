#pragma once
#include "student.h"
#include "includes.h"

//Global Variables
std::string firstName;
std::string lastName;
int studentId;

void dataInput(std::vector<Student>& dataFileObj, std::string filename) {
	
	std::ifstream inputFileStream(filename);
	
	if (!inputFileStream.is_open()) {
		std::cout << "Failed to open the file";
		return;	
	}
	
	std::string inputString;
	std::string line;
	std::string studentIdStr;
	
	while (std::getline(inputFileStream, line)) {
		
		std::stringstream ss(line);
		std::getline(ss, studentIdStr, ',');
		studentId = std::stoi(studentIdStr);
		std::getline(ss, firstName, ',');
		std::getline(ss, lastName, ',');
	
		Student NewStudent(studentId, firstName, lastName);
		dataFileObj.push_back(NewStudent);
	}

	inputFileStream.close();
}

void dataOutput(const std::vector<Student>& dataFileObj) {

	for (int i = 0; i < dataFileObj.size(); i++) {

		std::cout << "First Name: " << dataFileObj[i].getFirstName() << std::endl;
		std::cout << "Last Name: " << dataFileObj[i].getLastName() << std::endl;
		std::cout << "Student ID:  " << dataFileObj[i].getStudentId() << std::endl;
		std::cout << "=============================" << std::endl;
	}
}

void compareData(const std::vector<Student>& dataFileObj1, const std::vector<Student>& dataFileObj2) {

	for (int i = 0; i < std::min(dataFileObj1.size(), dataFileObj2.size()); i++)
	{
		for (int j = 0; j < std::max(dataFileObj1.size(), dataFileObj2.size()); j++)
		{
			if (dataFileObj1[i].getStudentId() == dataFileObj2[j].getStudentId())
			{
				std::cout << "First Name: " << dataFileObj1[i].getFirstName() << std::endl;
				std::cout << "Last Name: " << dataFileObj1[i].getLastName() << std::endl;
				std::cout << "Student ID:  " << dataFileObj1[i].getStudentId() << std::endl;
				std::cout << "=============================" << std::endl;
			}
		}		
	}
}
