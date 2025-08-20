#include "player.h"

class Thief :public Player {
public:
	Thief(string nickname):Player(nickname){}
	void attack();
	void attack(Monster* monster);
};