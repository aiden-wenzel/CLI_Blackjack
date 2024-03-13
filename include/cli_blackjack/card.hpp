#pragma once

#include <string>

class Card {
private:
    std::string rank;
    std::string suit;
    int value;

public:
    Card(std::string rank_in, std::string suit_in);
    std::string get_rank();
    void set_rank(std::string rank_in);
    std::string get_suit();
    void set_suit(std::string suit_in);
    int get_value();
};