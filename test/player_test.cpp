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

TEST(player_test, player_place_bet) {
    Player aiden("Aiden", 20);
    ASSERT_EQ(aiden.get_money(), 20);

    std::stringstream expected_output;
    expected_output << "Enter the amount of money you would like to bet:\n";

    std::stringstream actual_output;

    std::string input_string = "20";
    std::istringstream input(input_string);
    
    ASSERT_EQ(aiden.place_bet(actual_output, input), 20);
    ASSERT_EQ(actual_output.str(), expected_output.str());
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}