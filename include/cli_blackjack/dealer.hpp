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

    // deals a card to the player and updates the players card_sum
    void deal(Player* player, Deck* deck);

    // deals a card to the dealer and updates the dealers card_sum
    void deal(Dealer* dealer, Deck* deck);

    // adds a card to the dealers hand
    void add_card(const Card& card);

    int get_card_sum();

    int get_hand_size();

    void print_hand(std::ostream& output);
};