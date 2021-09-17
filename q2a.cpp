#include<iostream>

int main() {
	std::string username = "";
	std::string password = "";
	std::cout << "Username: ";
	std::cin >> username;
	std::cout << "Password: ";
	std::cin >> password;
	if (username.compare("21_CSE_c++_Fall") == 0 && password.compare("278A&B") == 0) {
		std::cout << "Login success";
	} else {
		std::cout << "Login failed";
	}
	return 0;
}
