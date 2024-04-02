#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"
#include "dealer.hpp"


Dealer::Dealer() {
    this->hand = {};
    this->card_sum = 0;
}

void Dealer::deal(Player* player, Deck* deck) {
    Card deal_card = deck->remove_top_card();
    player->add_card(deal_card);
    deck->num_cards--;
}

void Dealer::deal(Dealer* dealer, Deck* deck) {
    Card deal_card = deck->remove_top_card();
    dealer->add_card(deal_card);
    deck->num_cards--;
}

void Dealer::add_card(const Card& card) {
    this->hand.push_back(card);
}
int Dealer::get_card_sum() {
    return this->card_sum;
}

int Dealer::get_hand_size() {
    return this->hand.size();
}