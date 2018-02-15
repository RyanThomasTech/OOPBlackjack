#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"
#include <cstdlib>
#include <vector>

class Deck{
	public:
		Deck();
		void Shuffle();
		int currentTopPos;
		Card* DrawTopCard();
	private:
		std::vector<Card*> cards;
};

#endif

