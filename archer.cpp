#include "archer.h"
#include <iostream>


void Archer::attack()
{
	cout << "Archer Attack!" << endl;
}

void Archer::attack(Monster* monster)
{
	int damage = 0;
	int totalDamage = 0;
	int monHP = 0;

	monHP = monster->getHP();
	damage = getPower() - monster->getDefence();
	damage = damage / 3;
	if (damage <= 0) {
		damage = 1;
	}
	for (int i = 0; i < 3; i++) {
		cout << monster->getName() << "에게 화살로 " << damage << "의 피해를 입혔다." << endl;
		totalDamage += damage;
	}
	monHP = monHP - totalDamage;
	if (monster->setHP(monHP)) {
		cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
	}
	else {
		cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
		cout << getNickname() << "가 승리했다." << endl;
	}

}
