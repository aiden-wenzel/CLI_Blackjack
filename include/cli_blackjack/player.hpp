#pragma once

#include <string>
#include "card.hpp"
#include "deck.hpp"

class Player {
private:
    int card_sum;
    double money;
    std::string name;
    
public:
    Player(const std::string &name_in, double money_in);
    
    int get_card_sum();
    void set_card_sum(int card_sum_in);

    double get_money();
    void set_money(double money_in);

    std::string get_name();

    void hit();
    
    void double_down();
};