#ifndef CARD_HPP
#define CARD_HPP

class Card {
	public:
		Card(int suit, int gameValue, int rank);
		int GetVal();
		int GetSuit();
		int GetRank();
		void SetAceVal(int val);
	private:
		int suit;
		int gameValue;
		int rank;
		
};
#endif
