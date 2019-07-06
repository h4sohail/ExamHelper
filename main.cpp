#include "student.h"
#include "includes.h" 

// Prototypes
void dataInput(std::vector<Student>&, std::string); //Reads data from files and constructs two Student vectors
void dataOutput(const std::vector<Student>&); // Outputs data from the Student vectors
void compareData(const std::vector<Student>&, const std::vector<Student>&); // Compares the data in the two Student vectors

int main() {

	std::string fileName1 = "marks1.txt";
	std::string fileName2 = "marks2.txt";
	std::vector<Student> dataFile1;
	std::vector<Student> dataFile2;

	std::string seperator = "---------------------------- \n";
	
	std::cout << seperator;
	std::cout << " File 1 " << std::endl;
	std::cout << seperator;
	
	dataInput(dataFile1, fileName1);
	dataOutput(dataFile1);
	
	std::cout << seperator;
	std::cout << " File 2 " << std::endl;
	std::cout << seperator;
	
	dataInput(dataFile2, fileName2);
	dataOutput(dataFile2);
	
	std::cout << seperator;
	std::cout << " Common Students " << std::endl;
	std::cout << seperator;
	
	compareData(dataFile1, dataFile2);

	system("pause"); //Exit
	return 0;
}