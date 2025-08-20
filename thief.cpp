#include "thief.h"
#include <iostream>



void Thief::attack()
{
	cout << "Thief Attack!" << endl;
}

void Thief::attack(Monster* monster)
{
	int damage = 0;
	int totalDamage = 0;
	int monHP = 0;

	monHP = monster->getHP();
	damage = getPower() - monster->getDefence();
	damage = damage / 5;
	if (damage <= 0) {
		damage = 1;
	}
	for (int i = 0; i < 5; i++) {
		cout << monster->getName() << "에게 단도로 " << damage << "의 피해를 입혔다." << endl;
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
