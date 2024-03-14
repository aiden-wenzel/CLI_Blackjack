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
    
    // @param index
    // index of the card in relation to the top of the deck (top is 0th index, 2nd to top is 1th index, ...)
    // @returns the card at the ith index in relation to the top of the deck
    Card get_card(int index);

    // @returns
    // the number of cards in the deck
    int get_num_cards();

    // @param num_swaps
    // defines the number of times 2 random cards will be swapped to shuffle the deck
    void shuffle_deck(int num_swaps);
};