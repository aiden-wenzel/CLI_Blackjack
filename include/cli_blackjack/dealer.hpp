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

    void deal(Dealer* dealer, Deck* deck);

    void add_card(const Card& card);

    int get_card_sum();

    int get_hand_size();
};