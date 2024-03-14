#pragma once

#include <vector>
#include <fstream>
#include <algorithm>
#include "card.hpp"

class Deck {
private:
    int num_cards;
    std::vector<Card> cards;
public:
    // @param suits_input
    // input file stream to where the suit names are stored
    // @param ranks_input
    // input file stream where the the rank names are stored
    Deck(std::ifstream &suits_input, std::ifstream &ranks_input);
    
    // @returns the card at the top of the deck while also removing it from the deck
    Card remove_top_card();

    // @returns
    // the number of cards in the deck
    int get_num_cards() const;

    // @param num_swaps
    // defines the number of times 2 random cards will be swapped to shuffle the deck
    void shuffle_deck(int num_swaps);
};