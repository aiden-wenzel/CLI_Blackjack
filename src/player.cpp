#include <iostream>
#include "deck.hpp"
#include "card.hpp"
#include "player.hpp"

Player::Player(const std::string &name_in, double money_in) {
    this->name = name_in;
    this->money = money_in;
    this->card_sum = 0;
    this->hand = {};
}

int Player::get_card_sum() {
    return this->card_sum;
}

void Player::add_card(const Card& card) {
    this->hand.push_back(card);
}

void Player::set_card_sum(int card_sum_in) {
    this->card_sum = card_sum_in;
}

double Player::get_money() {
    return this->money;
}

void Player::set_money(double money_in) {
    this->money = money_in;
}

std::string Player::get_name() {
    return this->name;
}

Card Player::get_card_at(int index) {
    return this->hand[index];
}

double Player::place_bet(std::ostream& output, std::istream& input) {
// prompt the user to bet a certain amount of money
// make sure that the user bets a valid amount of money (maybe do that in a while loop)
// subtract the bet from the players money balance
// return the bet amount
    double bet_amount;
    while (true) {
        output << "Enter the amount of money you would like to bet:\n";
        input >> bet_amount;

        if (bet_amount > 0 && bet_amount <= this->money) {
            break;
        } 
        else {
            output << "You placed an invalid bet. Try again.\n";
        }
    }

    this->money -= bet_amount;
    return bet_amount;
}