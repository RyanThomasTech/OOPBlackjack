#OOP Blackjack

Author: Ryan Thomas
Blackjack implementation

##Assignment Scope

Assignment called for basic implementation of Blackjack, emphasized an EXTREMELY SIMPLISTIC dealer AI. The focus of the project was to emphasize OOP fundamentals in C++.

##What I Got From It

* Refresher on C++ basics
* Abstract/Interface class difference via C++ (final implementation uses Abstract class, not Interface)
* Found out random_shuffle() was deprecated in favor of shuffle() 


###Functionality

Program currently implements basic 21 functionality. Complex rules of blackjack--splitting, surrendering, insurance, etc.--are not implemented. Dealer does not currently auto-detect blackjack, as it was not required in assignment specs... may change that later because it bothers me.

###Dealer Behavior

Dealer will stand any time it is at or above 17.Aces are treated as 1s by the dealer, unless the ace would make the score 21.

###Design Notes

I could have moved a couple of the functions currently in Main up the hierarchy if I spent more time on it. Especially the print function--that could be implemented on the Player level, most likely. Due to time constraints, I did not.

Hit could also have been moved up, but it would have required allowing the User object to see the Dealer object. On a first-pass I decided not to do this out of a habit of letting as few objects see each other as possible.



