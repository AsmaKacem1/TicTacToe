#include <iostream>
#include <string>


char space[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int row, colum;
char token = 'x';
bool tie = false;
std::string n1 = "";
std::string n2 = "";


void functionOne() {
	std::cout << "   |     |    \n";
	std::cout << " " << space[0][0] << " | " << space[0][1] << "   | " << space[0][2] << " \n";
	std::cout << "___|_____|____\n";
	std::cout << "   |     |    \n";
	std::cout << " " << space[1][0] << " | " << space[1][1] << "   | " << space[1][2] << " \n";
	std::cout << "___|_____|____\n";
	std::cout << "   |     |    \n";
	std::cout << " " << space[2][0] << " | " << space[2][1] << "   | " << space[2][2] << " \n";
	std::cout << "   |     |    \n";


}

int main() {
	std::cout << "Enter Player's one name: \n";
	getline(std::cin, n1);
	std::cout << "Enter Player's two name: \n";
	std::getline(std::cin, n2);
	std::cout << n1 << " is player 1 who will play now \n";
	std::cout << n2 << " is player 2 who will play now \n";
	functionOne();
};