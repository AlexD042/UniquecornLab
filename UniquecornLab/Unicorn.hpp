#pragma once

#include <string>
#include <vector>

class Unicorn {
private:
	std::string name;
	static std::vector<std::string> takenNames;
public:
	Unicorn(std::string inputName);
	~Unicorn();
	static void printTakenNames();
};