// UC_Discrete_HW_3.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <sstream>
#include <vector>

#include <algorithm> //for std::copy


using namespace std;



void write_vector(vector<int>& vect)
{
	cout << "The numbers in the vector are: ";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
}

int main()
{
	cout << "********************************************************" << endl;
	cout << "Hierholzer's algorithm for computing an Eulerian circuit" << endl;
	int numVertices;
	cout << "Enter number of vertices: ";
	cin >> numVertices;

	string line = "";
	int number;
	std::vector<int> numbers;
	//stringstream check1(line);

	cout << "Enter numbers separated by spaces: \n";
	
	getline(cin >> line, line);

	stringstream stream(line);
	while (stream >> number)
		numbers.push_back(number);

	cout << numbers.size() << endl;
	write_vector(numbers);

	cout << endl;
	system("pause");

	return 0;
}

