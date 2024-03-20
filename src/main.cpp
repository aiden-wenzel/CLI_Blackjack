#include <iostream>
#include "deck.hpp"
#include "card.hpp"
#include "player.hpp"
#include "dealer.hpp"

using namespace std;

Player* welcome() {
	std::cout << "Welcome to command line blackjack!\n";
	std::cout << "You will be the only player at the table\n";

	std::string name_in;
	std::cout << "Please enter you name: ";
	std::cin >> name_in;

	double money_in;
	std::cout << "Please enter the amount of money you're bringing to the table: ";
	std::cin >> money_in;

	std::cout << "You're all set. Enjoy the game!\n";
	
	return new Player(name_in, money_in);
}		

int main() {
	Player* main_player = welcome();

	delete main_player;
	return 0;
}
