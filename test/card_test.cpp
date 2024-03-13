#include "card.hpp"
#include <gtest/gtest.h>

TEST(Card, get_rank_suit) {
    Card card("two", "spades");
    ASSERT_EQ(card.get_rank(), "two");
    ASSERT_EQ(card.get_suit(), "spades");
    ASSERT_EQ(card.get_value(), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}