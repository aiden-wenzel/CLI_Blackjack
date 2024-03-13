#include <vector>
#include <fstream>
#include "card.hpp"

class Deck {
private:
    const static int size = 52;
    std::vector<Card> cards;
public:
    // @param suits_input
    // input file stream to where the suit names are stored
    // @param ranks_input
    // input file stream where the the rank names are stored
    Deck(std::ifstream &suits_input, std::ifstream &ranks_input);
    
    // @return cards in the deck
    std::vector<Card> get_cards();
};