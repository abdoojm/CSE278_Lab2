#include<iostream>
#include<cstring>

int main(){
	std::string username = "";
	std::string password = "";
	std::cout << "Username: ";
	std::cin >> username;
	std::cout << "Password: ";
	std::cin >> password;
	if (strcasecmp(username.c_str(), "21_CSE_c++_Fall") == 0 && strcasecmp(password.c_str(), "278A&B") == 0) {
		std::cout << "Login success";
	} else {
		std::cout << "Login failed";
	}
	return 0;
}
