#include <gtest.h>
#include <fstream>

#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"
#include "dealer.hpp"

TEST(dealer, dealer_constructor) {
    Dealer dealer;

    ASSERT_EQ(dealer.get_card_sum(), 0);
    ASSERT_EQ(dealer.get_hand_size(), 0);
}

TEST(dealer, dealer_deal) {
    std::ifstream suits_in("../black_jack/suits.in");
    std::ifstream ranks_in("../black_jack/ranks.in");
    Deck deck(suits_in, ranks_in);
    Player player("Aiden", 0);
    Dealer dealer;

    Player* ptr_aiden = &player;
    Deck* ptr_deck = &deck;
    
    dealer.deal(ptr_aiden, ptr_deck);

    ASSERT_EQ(ptr_aiden->get_card_at(0), Card("two", "spades"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}