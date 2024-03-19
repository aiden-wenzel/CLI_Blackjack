#pragma once

#include <string>
#include "card.hpp"
#include "deck.hpp"

class Player {
private:
    int card_sum;
    double money;
    std::string name;
    std::vector<Card> hand;
    
public:

    // @param name_in
    // the name of the player as a string
    // @param money_in
    // the amount of starting money the player should have
    Player(const std::string &name_in, double money_in);
    
    // @returns the combined score of the cards the player is delt
    int get_card_sum();

    void add_card(const Card& card);
    // @param card_sum_in
    // the new card sum
    void set_card_sum(int card_sum_in);

    // @returns the total money that the player currently has
    double get_money();

    // @param money_in
    // the money that the player will have
    void set_money(double money_in);

    // @returns the name of the player
    std::string get_name();

    Card get_card_at(int index);

    double place_bet(std::ostream& output, std::istream& input);
};