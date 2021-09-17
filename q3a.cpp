#include<iostream>

int main() {
	int numbers[20];
	int i = 0;
	int val = 0;
	std::cout << "Enter an integer value: ";
	while (i < 20 && std::cin >> val) {
		numbers[i] = val;
		i++;
		if (i < 20) {
			std::cout << "Enter an integer value: ";
		}
	}
	std::cout << "Length of array: " << i << std::endl;
	int max = numbers[0];
	int min = numbers[0];
	for (int j = 1; j < i; j++) {
		if (numbers[j] > max) {
			max = numbers[j];
		}
		if (numbers[j] < min) {
			min = numbers[j];
		}
	}
	std::cout << "Minimum value: " << min << std::endl;
	std::cout << "Maximum value: " << max << std::endl;
	return 0;
}
