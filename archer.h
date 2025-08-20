#include "player.h"

class Archer :public Player {
public:
	Archer(string nickname):Player(nickname){}
	void attack();
	void attack(Monster* monster);
};