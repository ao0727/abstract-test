#include "Goblin.h"
#include <iostream>
using namespace std;

#include "Goblin.h"

void Goblin::attack(Enemy& enemy) {
    cout << "ゴブリンの攻撃！" << endl;
    enemy.takeDamage(10); // ダメージを与える
}

void Goblin::takeDamage(int damage) {
    _hp -= damage;
    cout << "ゴブリンが" << damage << "のダメージを受けた！" << endl;
}

void Goblin::play(Enemy& enemy) {
    Enemy::play(enemy);
}
