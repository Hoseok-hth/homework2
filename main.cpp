#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
using namespace std;

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    int turn = 0;
    string nickname;

    Player* player = nullptr;
    

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    //player->attack();
    player->printPlayerStatus();
    Monster* monster = new Monster("슬라임");

    while(true) {
        cout << "공격권을 선택하세요 1." << player->getNickname() << " 2. " << monster->getName() << endl;
        cin >> turn;
        if (turn == 1) {
            player->attack(monster);
        }
        else if (turn == 2) {
            monster->attack(player);
        }
        else {
            cout << "1 또는 2 를 골라주세요" << endl;
            continue;
        }
        if (player->getHP() == 0 || monster->getHP() == 0) {
            break;
        }
    }

   
    

    delete player;


    return 0;
}