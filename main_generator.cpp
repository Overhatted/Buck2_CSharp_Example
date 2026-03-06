#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <filesystem>
 
int main(int argc, char *argv[])
{
	std::string outputFile = argv[1];
	std::filesystem::create_directory(outputFile);

	outputFile += "/generated_header.h";
	// Create and open a text file
	std::ofstream MyFile(outputFile);

	// Write to the file
	MyFile << "using test_type = int;";

	// Close the file
	MyFile.close();
	return 0;
}
