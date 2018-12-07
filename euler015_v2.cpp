#include <iostream>

int main()
{
	int gridSize;
	std::cout << "Insert grid value: ";
	std::cin >> gridSize;
	long long paths = 1;
	
	if (gridSize < 21 && gridSize > 1)
		for (int i = 0; i < gridSize; ++i){
			paths *= (2 * gridSize) - i;
			std::cout << "1: " << paths << "\n";
			paths /= i + 1;
			std::cout << "2: " << paths << "\n";
		}
	else{
		printf("Please insert a value under 20 and above 1");
		return 0;
	}

	std::cout << "Value is: " << paths << std::endl;
	return 0;
}
