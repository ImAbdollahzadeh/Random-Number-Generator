#include "RandomGenerator.h"
#include <iostream>

int main() {
	double nums[50];
  
	for (size_t i = 0; i < 50; i++)
		nums[i] = RandomGen(0, 1);	

	for (size_t i = 0; i < 50; i++)
		std::cout << nums[i] << std::endl;
}
