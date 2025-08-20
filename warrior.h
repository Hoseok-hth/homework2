#include "player.h"

class Warrior :public Player {
public:
	Warrior(string nickname):Player(nickname){}
	void attack();
	void attack(Monster* monster);
};