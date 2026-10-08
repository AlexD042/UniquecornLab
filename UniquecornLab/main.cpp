#include "Unicorn.hpp"

#include <iostream>

int main() {
	Unicorn uc1 = Unicorn("Twilight");
	Unicorn::printTakenNames();
	Unicorn uc2 = Unicorn("Sparkle");
	Unicorn::printTakenNames();
	Unicorn uc3 = Unicorn("Rarity");
	Unicorn::printTakenNames();
	Unicorn uc4 = Unicorn("Starlight");
	Unicorn::printTakenNames();
	Unicorn uc5 = Unicorn("Glimmer");
	Unicorn::printTakenNames();
	Unicorn uc6 = Unicorn("Shimmer");
	Unicorn::printTakenNames();

	std::cout << "\nDuplicate Unicorn\n";
	Unicorn uc7 = Unicorn("Sparkle");

	Unicorn::printTakenNames();


	return 0;
}