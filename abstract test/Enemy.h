#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {
public:
    virtual void attack(Enemy& enemy) = 0; // �������z�֐�
    virtual void takeDamage(int damage) = 0; // �������z�֐�
    virtual void play(Enemy& enemy); // ���z�֐�

    int getHP() const { return _hp; }

protected:
    int _hp;

public:
    Enemy(int hp) : _hp(hp) {}
};

#endif // ENEMY_H
