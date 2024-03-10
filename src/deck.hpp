#include <vector>
#include "card.hpp"

class Deck {
private:
    std::vector<Card> cards;
public:
    /*
    @return cards in the deck as a vector
    */
    std::vector<Card> get_cards();
};