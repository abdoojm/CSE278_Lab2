#include<iostream>

int main() {
	int width = 0;
	int height = 0;
	std::cout << "Enter the width of the rectangle: ";
	std::cin >> width;
	std::cout << "Enter the height of the rectangle: ";
	std::cin >> height;
	std::cout << "The perimeter is " << 2 * width + 2 * height << ".\nThe area is " << width * height << ".";
}
