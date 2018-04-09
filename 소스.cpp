#include <iostream>
#include <vector>
#include <algorithm>

int num;

void main() {
	std::vector<int> vec;

	while(std::cin >> num){
		vec.push_back(num);


	}
	std::sort(vec.rbegin(), vec.rend());

	for (auto i : vec) {
		std::cout << i << std::endl;
	}
	system("pause");
}