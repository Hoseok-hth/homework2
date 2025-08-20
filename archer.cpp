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
		cout << monster->getName() << "���� ȭ��� " << damage << "�� ���ظ� ������." << endl;
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
