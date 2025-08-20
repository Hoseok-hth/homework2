#include <iostream>
#include "player.h"


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}


string Player::getJobName() {
    return job_name;
}

string Player::getNickname() {
    return nickname;
}

int Player::getLevel() {
    return level;
}

int Player::getHP() {
    return HP;
}

int Player::getMP() {
    return MP;
}

int Player::getPower() {
    return power;
}

int Player::getDefence() {
    return defence;
}

int Player::getAccuracy() {
    return accuracy;
}

int Player::getSpeed() {
    return speed;
}

void Player::setNickname(string nickname) {
    this->nickname = nickname;
}

bool Player::setHP(int HP) {
    if (HP > 0) {
        this->HP = HP;
        return true;
    }
    else {
        this->HP = 0;
        return false;
    }
}

bool Player::setMP(int MP) {
    this->MP = MP;
    return true;
}

void Player::setPower(int power) {
    this->power = power;
}

void Player::setDefence(int defence) {
    this->defence = defence;
}

void Player::setAccuracy(int accuracy) {
    this->accuracy = accuracy;
}

void Player::setSpeed(int speed) {
    this->speed = speed;
}


Player::Player(string nickname) {
    setNickname(nickname);
    setHP(DEFAULT_HP);
    setMP(DEFAULT_MP);
    setPower(DEFAULT_POWER);
    setDefence(DEFAULT_DEFENCE);
    setAccuracy(DEFAULT_ACCURACY);
    setSpeed(DEFAULT_SPEED);
    level = 0;
}