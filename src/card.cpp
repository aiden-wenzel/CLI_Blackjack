#include <iostream>
#include <string>
#include "../include/cli_blackjack/card.hpp"

Card::Card(std::string rank_in, std::string suit_in) {
    this->rank = rank_in;
    this->suit = suit_in;
    
    if (rank == "one") {this->value = 1;}
    else if(rank == "two") {this->value = 2;}
    else if (rank == "three") {this->value = 3;}
    else if (rank == "four") {this->value = 4;}
    else if (rank == "five") {this->value = 5;}
    else if (rank == "six") {this->value = 6;}
    else if (rank == "seven") {this->value = 7;}
    else if (rank == "eight") {this->value = 8;}
    else if (rank == "nine") {this->value = 9;}
    else if (rank == "ten") {this->value = 10;}
    else if (rank == "jack") {this->value = 10;}
    else if (rank == "queen") {this->value = 10;}
    else if (rank == "king") {this->value = 10;}
    else if (rank == "ace") {this->value = 11;}
    else {std::cout << "error in constructing card\n";}
}

std::string Card::get_rank() const {
    return this->rank;
}

void Card::set_rank(std::string rank_in) {
    this->rank = rank_in;
}

std::string Card::get_suit() const {
    return this->suit;
}

void Card::set_suit(std::string suit_in) {
    this->suit = suit_in;
}

int Card::get_value() {
    return this->value;
}

bool operator==(const Card& lhs, const Card& rhs) {
    return (lhs.get_rank() == rhs.get_rank()) &&
    (lhs.get_suit() == rhs.get_suit());
}

std::ostream& operator<<(std::ostream& os, const Card& card) {
    os << card.get_rank() << " of " << card.get_suit();
    return os;
}
