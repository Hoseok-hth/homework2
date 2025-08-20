#include"player.h"
#include"monster.h"
#include<iostream>
#define _MON_DEF_HP_ 10
#define _MON_DEF_ATK_ 30
#define _MON_DEF_DEF_ 10
#define _MON_DEF_SPD_ 10

Monster::Monster(string name) {
	setName(name);
	setHP(_MON_DEF_HP_);
	setPower(_MON_DEF_ATK_);
	setDefence(_MON_DEF_DEF_);
	setSpeed(_MON_DEF_SPD_);
}

void Monster::attack(Player* player) {
	int damage = 0;
	int HP = 0;
	
	HP = player->getHP();
	damage = getPower() - player->getDefence();

	if (damage < 1) {
		damage = 1;
	}
	cout << getName() << "가 " << player->getNickname() << "에게 " << damage << "만큼 피해를 주었다." << endl;
	HP = HP - damage;

	

	if (!(player->setHP(HP))) {
		cout << "현재 남은 HP: " << player->getHP() << endl;
		cout << getName() << "가 승리했습니다." << endl;
	}
	else {
		cout << "현재 남은 HP: " << player->getHP() << endl;
	}
}

string Monster:: getName() {
	return name;
}

int Monster::getHP() {
	return HP;
}

int Monster::getPower() {
	return power;
}

int Monster::getDefence() {
	return defence;
}

int Monster::getSpeed() {
	return speed;
}

void Monster::setName(string name) {
	this->name = name;
}

bool Monster::setHP(int HP) {
	if (HP > 0) {
		this->HP = HP;
		return true;
	}
	else {
		this->HP = 0;
		return false;
	}

}

void Monster::setPower(int power) {
	this->power = power;
}

void Monster::setDefence(int defence) {
	this->defence = defence;
}

void Monster::setSpeed(int speed) {
	this->speed = speed;
}