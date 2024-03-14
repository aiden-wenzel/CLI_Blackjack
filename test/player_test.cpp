#include <gtest.h>
#include <string>
#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"

TEST(player_test, player_constructor) {
    double initial_money = 45.04;
    Player player("Aiden", initial_money);

    player.set_card_sum(21);
    ASSERT_EQ(player.get_card_sum(), 21);
    ASSERT_EQ(player.get_name(), "Aiden");
    ASSERT_EQ(player.get_money(), 45.04);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}