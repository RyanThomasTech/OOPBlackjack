#ifndef USER_HPP
#define USER_HPP

#include "Player.hpp"

class User:public Player{
	public:
		User(int shownTotal);
		void UpdateTotal();
};

#endif
