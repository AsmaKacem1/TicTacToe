#include <iostream>
#include <string>


char space[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int row, colum;
char token = 'x';
bool test = false;
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


};

void functionTwo() {
	int digit;
	if (token == 'x') {
		std::cout << n1 << " please enter";
		std::cin >> digit;
	}

	if (token == '0') {
		std::cout << n2 << " please enter";
		std::cin >> digit;
	}

	else if (digit == 1) {
		row = 0;
		colum = 0;
	}

	else if (digit == 2) {
		row = 0;
		colum = 1;
	}

	else if (digit == 3) {
		row = 0;
		colum = 2;
	}

	else if (digit == 4) {
		row = 1;
		colum = 0;
	}

	else if (digit == 5) {
		row = 1;
		colum = 1;
	}

	else if (digit == 6) {
		row = 1;
		colum = 2;
	}

	else if (digit == 7) {
		row = 2;
		colum = 0;
	}

	else if (digit == 8) {
		row = 2;
		colum = 1;
	}

	else if (digit == 9) {
		row = 2;
		colum = 2;
	}
	else std::cout << " Invalid!!!" << std::endl;

	if (token == 'x' && space[row][colum] != 'x' && space[row][colum] != '0') {
		space[row][colum] = 'x';
		token = '0';
	}

	else if (token == '0' && space[row][colum] != 'x' && space[row][colum] != '0') {
		 space[row][colum] = '0';
		 token = 'x';
	}
	else {
		std::cout << "There is no empty space! " << std::endl;
		functionTwo();
	}

};

bool functionThree() 
{
	for (int i = 0; i < 3; i++) {
		if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i]) return true;
	}
	if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0]) return true;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (space[i][j] != 'x' && space[i][j] != '0') return false;
		}
	}
	test = true;
	return false;

};

int main() {
	std::cout << "Enter Player's one name: \n";
	getline(std::cin, n1);
	std::cout << "Enter Player's two name: \n";
	std::getline(std::cin, n2);
	std::cout << n1 << " is player 1 who will play now \n";
	std::cout << n2 << " is player 2 who will play now \n";
	functionOne();
};