#include "Goblin.h"
#include <iostream>
using namespace std;

#include "Goblin.h"

void Goblin::attack(Enemy& enemy) {
    cout << "�S�u�����̍U���I" << endl;
    enemy.takeDamage(10); // �_���[�W��^����
}

void Goblin::takeDamage(int damage) {
    _hp -= damage;
    cout << "�S�u������" << damage << "�̃_���[�W���󂯂��I" << endl;
}

void Goblin::play(Enemy& enemy) {
    Enemy::play(enemy);
}
