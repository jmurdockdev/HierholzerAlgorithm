#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <stack>
#include <list>

using namespace std;

void PrintEulerianPath(vector< vector<int> > graph)
{
	//count of edges
	unordered_map<int, int> count;

	for (int i = 0; i<graph.size(); i++)
	{
	
		count[i] = graph[i].size();
	}

	if (!graph.size())
		return; 
 
	stack<int> currentPath;
	vector<int> circuit;

	currentPath.push(0);
	int currentVertex = 0;  

	while (!currentPath.empty())
	{
		
		if (count[currentVertex])
		{

			currentPath.push(currentVertex);
		
			int next_v = graph[currentVertex].back();

			count[currentVertex]--;
			graph[currentVertex].pop_back();
			
			currentVertex = next_v;
		}

		
		else
		{
			circuit.push_back(currentVertex);

			
			currentVertex = currentPath.top();
			currentPath.pop();
		}
	}

	
	for (int i = circuit.size() - 1; i >= 0; i--)
	{
		cout << circuit[i];
		if (i)
			cout << " ";
	}
}




int main()
{
	while (1) {

	cout << "********************************************************" << endl;
	cout << "Hierholzer's algorithm for computing an Eulerian circuit" << endl;
	cout << "********************************************************" << endl;

	std::string source;
	vector<int> numbers;

	cout << "Enter numbers separated by spaces \n"
		<< "The first number is the size of the graph, \n"
		<< "followed by pairs representing the edge set: ";
	std::getline(std::cin, source);

	for (int i = 0; i < source.length(); i++) {
		char c = source[i];
		if (isdigit(c)) {
			int num = (int) c - 48;
			
			numbers.push_back(num);
		}
	}
	
	vector<vector<int>> graph;

	int size = numbers[0];
	graph.resize(size);
	

	numbers.erase(numbers.begin());

	for (int i = 0; i < numbers.size(); i += 2)
	{
		int v1 = numbers[i];
		int v2 = numbers[i + 1];

		graph[v1].push_back(v2);
	}


	PrintEulerianPath(graph);
	cout << endl;

	system("pause");
	}

	return 0;
}

