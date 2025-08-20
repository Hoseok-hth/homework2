#include "player.h"

class Magician :public Player {
public:
	Magician(string nickname):Player(nickname){}
	void attack();
	void attack(Monster* monster);
};