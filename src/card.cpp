#include <string>
#include "card.hpp"

Card::Card(Suit suit_in, Rank rank_in) {
    this->suit = suit_in;
    this->rank = rank_in;
}

Rank Card::get_rank() {
    return this->rank;
}
Suit Card::get_suit() {
    return this->suit;
}