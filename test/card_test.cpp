#include "../src/card.hpp"
#include <gtest/gtest.h>

TEST(Card, get_rank_suit) {
    Card card(SPADES, TWO);
    ASSERT_EQ(card.get_rank(), TWO);
    ASSERT_EQ(card.get_suit(), SPADES);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}