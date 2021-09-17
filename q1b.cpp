#include<iostream>
#include<iomanip>

int main() {
	std::setprecision(2);
	double radius = 0.0;
	std::cout << "Enter the radius of a circle: ";
	std::cin >> radius;
	double perimeter = 3.14159 * 2 * radius;
	double area = 3.14159 * radius * radius;
	std::cout << "The perimeter is " << perimeter << ".\nThe area is " << area << ".";
	return 0;
}
