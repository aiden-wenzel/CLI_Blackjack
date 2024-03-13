#include <vector>
#include <fstream>
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
    // index of the card in relation to the top of the deck (top is 0th index)
    // @returns
    // Returns the card at the ith index in relation to the top of the deck
    Card get_card(int index);

    // @returns
    // the size of the deck in number of cards
    int get_num_cards();
};