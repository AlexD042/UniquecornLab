#include "Unicorn.hpp"

#include <iostream>

std::vector<std::string> Unicorn::takenNames = { };

Unicorn::Unicorn(std::string inputName) {
	bool taken = false;
	if (!takenNames.empty()) {
		for (std::string& n : takenNames) {
			if (inputName == n) {
				std::cout << "This name is already taken! A unicorn can not have the same name as another unicorn!\n";
				taken = true;
				break;
			}
		}
		if (!taken) {
			std::cout << "Unicorn created!\n";
			name = inputName;
			takenNames.push_back(inputName);
		}
	}
	else {
		std::cout << "Unicorn created!\n";
		name = inputName;
		takenNames.push_back(inputName);
	}
}

Unicorn::~Unicorn() {
	int index = 0;
	for (std::string& n : takenNames) {
		if (name == n) {
			takenNames.erase(takenNames.begin() + index);
			std::cout << "Unicorn deleted.\n";
			break;
		}
		index++;
	}
}

void Unicorn::printTakenNames() {
	for (std::string& n : takenNames) {
		std::cout << n << ' ';
	}
	std::cout << '\n';
}