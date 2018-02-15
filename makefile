all: blackjack

blackjack: Card.cpp Deck.cpp Player.cpp Dealer.cpp User.cpp Main.cpp
	g++ Card.cpp Deck.cpp Player.cpp Dealer.cpp User.cpp Main.cpp -std=c++11 -o Blackjack
