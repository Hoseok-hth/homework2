#pragma once
#include <string>
#define DEFAULT_HP 100
#define DEFAULT_MP 100
#define DEFAULT_POWER 10
#define DEFAULT_DEFENCE 10
#define DEFAULT_ACCURACY 5
#define DEFAULT_SPEED 5
using namespace std;
#include"monster.h"

class Player {
public:
    Player(string nickname);

    
    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();


    // getter 함수
    string getJobName();
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    // setter 함수
    void setNickname(string nickname);
    bool setHP(int HP);
    bool setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};

