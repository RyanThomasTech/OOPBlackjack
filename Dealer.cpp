#include "Dealer.hpp"

Dealer::Dealer (int shownTotal) : Player(shownTotal){
	deck = new Deck();
	deck->Shuffle();
}

Card* Dealer::Deal(){
	return deck->DrawTopCard();
}

int Dealer::PlayTurn(){
	while(true){
		if (hiddenTotal==11 && acePresent){
			return 21;
		} else if (hiddenTotal > 16 && hiddenTotal < 22){
			return hiddenTotal;
		} else if (hiddenTotal > 21){
			return -1;
		}
		else{
			hand.push_back(Deal());
			UpdateTotal();
		}
	}
}


void Dealer::UpdateTotal(){
	shownTotal = hand[0]->GetVal();
	int sum = 0;
	for (Card* card: hand){
		if (card->GetRank()==14){
			sum += 1;
			acePresent=true;
		} else {	
			sum += card->GetVal();
		}
	}
	hiddenTotal = sum;
}
