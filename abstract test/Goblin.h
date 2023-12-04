#ifndef GOBLIN_H
#define GOBLIN_H

#include "Enemy.h"

class Goblin : public Enemy {
public:
    Goblin(int hp) : Enemy(hp) {}

    void attack(Enemy& enemy) override;
    void takeDamage(int damage) override;
    void play(Enemy& enemy) override;
};

#endif // GOBLIN_H
