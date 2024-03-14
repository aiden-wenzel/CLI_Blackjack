#pragma once

#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"

class Dealer {
private:
    std::vector<Card> hand;
    int card_sum;
public:
    Dealer();

    void deal(Player* player, Deck* deck);

    int get_card_sum();

    int get_hand_size();
};