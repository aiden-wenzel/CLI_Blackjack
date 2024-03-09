#include <string>

enum Rank {
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK = 10,
    QUEEN = 10,
    KING = 10,
    ACE,
};

enum Suit {
    HEARTS,
    DIAMONDS,
    SPADES,
    CLUBS
};

class Card {
private:
    Suit suit;
    Rank rank;
public:
    Card(Suit suit_in, Rank rank_in);
    Suit get_suit();
    Rank get_rank();
};