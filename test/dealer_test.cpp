#include <gtest.h>

#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"
#include "dealer.hpp"

TEST(dealer, dealer_constructor) {
    Dealer dealer;

    ASSERT_EQ(dealer.get_card_sum(), 0);
    ASSERT_EQ(dealer.get_hand_size(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}