#include "magician.h"
#include <iostream>



void Magician::attack()
{
	cout << "Magician Attack!" << endl;
}
void Magician::attack(Monster* monster)
{
	int damage = 0;
	int totalDamage = 0;
	int monHP = 0;

	monHP = monster->getHP();
	damage = getPower() - monster->getDefence();
	if (damage <= 0) {
		damage = 1;
	}
	for (int i = 0; i < 1; i++) {
		cout << monster->getName() << "���� �������� " << damage << "�� ���ظ� ������." << endl;
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
