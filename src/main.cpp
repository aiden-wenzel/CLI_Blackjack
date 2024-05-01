#include <stdlib.h>
#include <iostream>
#include "deck.hpp"
#include "card.hpp"
#include "player.hpp"
#include "dealer.hpp"

using namespace std;

// Welcomes the player and prompts them for the money they will be using and their name.
// @returns A player pointer to a player on the heap
Player* welcome();

// Initializes a deck on the heap
// @returns A deck pointer to a deck on the heap
Deck* initialize_deck();

// prints a 3 line gap to std::cout
void print_gap();

// clears the console;
void clear_console();

int main() {
	clear_console();
	// initialize objects
	Player* main_player = welcome();
	Deck* deck = initialize_deck();
	Dealer* dealer = new Dealer;

	print_gap();
	int pot = main_player->place_bet(std::cout, std::cin);

	// shuffle deck
	deck->shuffle_deck(1000);

	// first dealing round
	dealer->deal(main_player, deck);
	dealer->deal(dealer, deck);
	dealer->deal(main_player, deck);
	dealer->deal(dealer, deck);

	// print hand
	dealer->print_hand(std::cout);
	main_player->print_hand(std::cout);

	// hit or stand
	bool hit = true;
	while (hit && main_player->get_card_sum() <= 21) {
		hit = main_player->hit(std::cout, std::cin);
		if (hit) {
			dealer->deal(main_player, deck);
			print_gap();
			main_player->print_hand(std::cout);
		}
	}

	delete dealer;
	delete deck;
	delete main_player;
	return 0;
}

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

void print_gap() {
	for (int i = 0; i < 3; i++) {
		std::cout << "\n";
	}
}

void clear_console() {
	#if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}