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

Deck* initialize_deck() {
	std::ifstream suits_in("../black_jack/suits.in");
	std::ifstream ranks_in("../black_jack/ranks.in");
	
	if (!suits_in.is_open() || !ranks_in.is_open()) {
		std::cout << "error in opening file streams\n";
		return nullptr;
	}

	return new Deck(suits_in, ranks_in);
}

int main() {
	Player* main_player = welcome();
	Deck* deck = initialize_deck();
	Dealer* dealer = new Dealer;







	delete deck;
	delete main_player;
	return 0;
}
