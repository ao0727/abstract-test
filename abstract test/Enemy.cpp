#include "Enemy.h"

using namespace std;
void Enemy::play(Enemy& enemy) {
    std::cout << "======ターン開始======" << std::endl;
    attack(enemy);
    std::cout << "======ターン終了======" << std::endl;
}
