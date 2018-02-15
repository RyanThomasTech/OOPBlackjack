#include "Card.hpp"

Card::Card(int suit, int gameValue, int rank){
	this->suit = suit;
	this->gameValue = gameValue;
	this->rank = rank;
}

int Card::GetVal(){
	return gameValue;
}

int Card::GetSuit(){
	return suit;
}

int Card::GetRank(){
	return rank;
}

void Card::SetAceVal(int val){
	gameValue=val;
}
