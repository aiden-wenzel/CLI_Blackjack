
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