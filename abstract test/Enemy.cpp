#include "Enemy.h"

using namespace std;
void Enemy::play(Enemy& enemy) {
    std::cout << "======�^�[���J�n======" << std::endl;
    attack(enemy);
    std::cout << "======�^�[���I��======" << std::endl;
}
