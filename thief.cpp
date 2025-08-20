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
		cout << monster->getName() << "���� �ܵ��� " << damage << "�� ���ظ� ������." << endl;
		totalDamage += damage;
	}
	monHP = monHP - totalDamage;
	if (monster->setHP(monHP)) {
		cout << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
	}
	else {
		cout << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
		cout << getNickname() << "�� �¸��ߴ�." << endl;
	}
}
