//#include "Table.hpp"
#include "Dealer.hpp"
#include "User.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

void Hit(Dealer* dealer, Player* player);
void DealOpeningHands(Dealer* dealer, Player* player);
void PrintHand(Player* player);

int main(){
	Dealer* dealer = new Dealer(0);
	User* user = new User(0);
	std::cout<<"Welcome to Blackjack."<<std::endl;
	DealOpeningHands(dealer, user);
	PrintHand(user);
	int usrOption = -1;
	do{
		std::cout<<"Enter 1 to hit, enter 2 to stand, 0 to exit."<<std::endl;
		std::cin>>usrOption;
		if (usrOption==1){
			Hit(dealer, user);
			PrintHand(user);
			if (user->shownTotal > 21){
				std::cout<<"Bust!"<<std::endl;
				break;
			}
		} else if (usrOption==2){
			std::cout<<"Dealer plays:"<<std::endl;
			int dealerTotal = dealer->PlayTurn();
			PrintHand(dealer);
			if (dealerTotal == -1) {
				std::cout<<"Dealer busts!"<<std::endl;
			}else {
				std::cout<<"Dealer gets... "<<dealerTotal<<std::endl;
			}
			if (dealerTotal > user->shownTotal){
				std::cout<<"Dealer wins!"<<std::endl;
			} else if (dealerTotal == user->shownTotal){
				std::cout<<"Tie!"<<std::endl;
			} else {
				std::cout<<"Player wins!"<<std::endl;
			}
			break;
		} else {
		}
	} while (usrOption != 0);		
}

void Hit(Dealer* dealer, Player* player){
	player->hand.push_back(dealer->Deal());
	player->UpdateTotal();
}

void DealOpeningHands(Dealer* dealer, Player* player){
	player->hand.push_back(dealer->Deal());
	player->hand.push_back(dealer->Deal());
	dealer->hand.push_back(dealer->Deal());
	dealer->hand.push_back(dealer->Deal());
	player->UpdateTotal();
	dealer->UpdateTotal();
}

void PrintHand(Player* player){
	for (Card* card: player->hand){
		int suitNum = card->GetSuit();
		std::string suitName = "broken";
		if (suitNum==0){
			suitName="Hearts";
		} else if (suitNum==1){
			suitName="Clubs";
		} else if (suitNum==2){
			suitName="Diamonds";
		} else {
			suitName="Spades";
		}

		int rankNum = card->GetRank();
		std::string rankName = "rank";
		if (rankNum==11){
			rankName="J";
		} else if (rankNum==12){
			rankName="Q";
		} else if (rankNum==13){
			rankName="K";
		} else if (rankNum==14){
			rankName="A";
		} else {
			rankName=std::to_string(rankNum);
		}
		std::cout<<rankName<<suitName<<" ";
	}
	std::cout<<std::endl;
}


	
