#include <string>
#include <fstream>
#include <vector>
#include "deck.hpp"

Deck::Deck(std::ifstream &suits_input, std::ifstream &ranks_input) {
    std::vector<std::string> suits;
    std::vector<std::string> ranks;

    // load in suits
    std::string suit_temp;
    while (suits_input >> suit_temp) {
        suits.push_back(suit_temp);
    }

    // load in ranks
    std::string rank_temp;
    while (ranks_input >> rank_temp) {
        ranks.push_back(rank_temp);
    }

    for (int i = 0; i < suits.size(); i++) {
        for (int j = 0; j < ranks.size(); j++) {
            Card card_temp(ranks[j], suits[i]);
            this->cards.push_back(card_temp);
        }
    }
}