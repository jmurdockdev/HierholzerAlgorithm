// UC_Discrete_HW_3.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm> //for std::copy


using namespace std;





int main()
{
	cout << "********************************************************" << endl;
	cout << "Hierholzer's algorithm for computing an Eulerian circuit" << endl;
	cout << "********************************************************" << endl;

	std::string source;
	std::vector<int> numbers;

	cout << "Enter numbers separated by spaces.\n"
		<< "The first number is the size of the graph, \n"
		<< "followed by pairs representing the edge set: ";
	std::getline(std::cin, source);

	for (int i = 0; i < source.length(); i++) {

		char c = source[i];
		int num = (int) c - 48;
		if (isdigit(num)) {
			cout << num << endl;
			numbers.push_back(num);
		}

	}
	
	

	
	

	cout << endl;
	system("pause");

	return 0;
}

