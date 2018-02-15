#ifndef DEALER_HPP
#define DEALER_HPP

#include "Player.hpp"
#include "Deck.hpp"

class Dealer: public Player{
	public:
		Dealer(int shownTotal);
		Card* Deal();
		void UpdateTotal();
		int PlayTurn();
	private:
		Deck* deck;
		int hiddenTotal;
};

#endif
