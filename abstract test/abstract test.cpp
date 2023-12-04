#include "Enemy.h"
#include "Goblin.h"
#include <iostream>
using namespace std;

int main() {
    Goblin goblin(50);
    Enemy& enemy = goblin;

    for (int i = 0; i < 3; ++i) {
        goblin.play(enemy); // ゴブリンのターン開始
        cout << "ゴブリンのHP: " << goblin.getHP() << endl;
    }

  
}
