#include "BattleGame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

// Potential things to add ====
// Growth system - level system and so on
struct Enemy {
    std::string name;
    int minDamage;
    int maxDamage;
    int health;
};

void BattleGame::start() {
    srand(static_cast<unsigned>(time(0)));

    char playAgain;
    int playerHp = 30;
    const int playerMaxHp = 30;

    do {
        std::vector<Enemy> enemies = {
            {"Slime", 2, 4, 15},
            {"Goblin", 3, 5, 25},
            {"Wolf", 4, 6, 30},
            {"Skeleton", 5, 7, 35},
            {"Boss", 6, 9, 60}
        };

        int index = rand() % enemies.size();
        Enemy enemy = enemies[index];
        int enemyHp = enemy.health;
        const int enemyMaxHp = enemy.health;

        std::cout << "\n You've encountered a wild " << enemy.name << "!\n";

        // Battle loop
        while (playerHp > 0 && enemyHp > 0) {
            std::string action;
            std::cout << "\nYour HP: " << playerHp << "  |  " << enemy.name << " HP: " << enemyHp << "\n";
            std::cout << "Choose an action: [attack] [heal]\n";
            std::cin >> action;

            if (action == "attack") {
                int damage = 4 + rand() % 6;
                enemyHp -= damage;
                std::cout << "You damaged the " << enemy.name << " for " << damage << "!\n";
            }
            else if (action == "heal") {
                int heal = 4 + rand() % 4;
                playerHp += heal;
                if (playerHp > playerMaxHp) playerHp = playerMaxHp;
                std::cout << "You healed for " << heal << " HP!\n";
            }
            else {
                std::cout << "Invalid action\n";
                continue;
            }

            if (enemyHp > 0) {
                int move = rand() % 2;
                if (move == 0) {
                    int damage = enemy.minDamage + rand() % (enemy.maxDamage - enemy.minDamage + 1);
                    playerHp -= damage;
                    std::cout << "The " << enemy.name << " attacked you for " << damage << "!\n";
                }
                else {
                    int heal = 3 + rand() % 4;
                    enemyHp += heal;
                    if (enemyHp > enemyMaxHp) enemyHp = enemyMaxHp;
                    std::cout << "The " << enemy.name << " healed for " << heal << " HP!\n";
                }
            }
        }

        // Result
        if (playerHp <= 0 && enemyHp <= 0)
            std::cout << "\nIt's a draw! You both fell.\n";
        else if (playerHp <= 0)
            std::cout << "\nYou were defeated by the " << enemy.name << ".\n";
        else
            std::cout << "\nYou defeated the " << enemy.name << "!\n";

        // Prompt to continue
        if (playerHp > 0) {

            std::cout << "\nDo you want to fight another enemy? (y/n): ";
            std::cin >> playAgain;
        }
        else {
            playAgain = 'n'; // auto-exit if dead
        }

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "\nGame Over! Thanks for playing.\n";
}