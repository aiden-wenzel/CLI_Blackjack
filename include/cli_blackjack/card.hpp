#pragma once

#include <string>

class Card {
private:
    std::string rank;
    std::string suit;
    int value;

public:
    // @param rank_in
    // the rank of the card as a string all lowercase (ex: two, ten, jack, ace)
    // @param suit_in
    // the suit of the card as a string all lowercase (spades, clubs, hearts, diamonds)
    Card(std::string rank_in, std::string suit_in);

    // @returns the rank of the card
    std::string get_rank();

    // @param rank_in
    // rank of the card to set
    void set_rank(std::string rank_in);

    // @returns the suit of the card
    std::string get_suit();

    // @param suit_in
    // suit of the card to be set
    void set_suit(std::string suit_in);

    // @returns the combined value of the card as an int (ex: queen of spades would return 10)
    int get_value();
};