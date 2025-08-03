#include <iostream>
#include "Show.h"
#include "Admin.h"
#include "ToDoList.h"
#include "BattleGame.h"
#include "Quiz.h"


std::string name;

int main()
{
    ToDoList::loadTasks();
    std::cout << "Welcome to my Learning Experience\n";
    std::cout << "Please enter your name before we proceed\n";
    std::cin >> name;
    std::cout << "Welcome " << name << " to my journey through coding\n";

    if (name == "admin") {
        Admin::runAdminMode();
        return 0;
    }

    char again;
    do {
        std::cout << "\nWhat would you like to see " << name << "?\n";
        std::cout << "1. My Goals\n";
        std::cout << "2. What I've made so far\n";
        std::cout << "3. A Code Demo\n";
        std::cout << "4. To Do-List\n";
        std::cout << "5. Battle the slime\n";
        std::cout << "6. Quiz\n";
        std::cout << "======== Simply type 1, 2, 3, 4 or 5 as your choice ========\n";

        int choice;
        std::cin >> choice;
        switch (choice) {
        case 1:
            Show::showGoals();
            break;
        case 2:
            Show::showProgress();
            break;
        case 3:
            Show::showDemo();
            break;
        case 4:
            ToDoList::runToDoList();
            break;
        case 5:
            BattleGame::start();
            break;
        case 6:
            runCppMasteryQuiz();
            break;
        default:
            std::cout << "Invalid option, please choose one of the provided options.\n";
        }

        std::cout << "\nWould you like to choose a different option? (Y/N): ";
        std::cin >> again;
    } while (again == 'y' || again == 'Y');
    ToDoList::saveTasks();
    std::cout << "\nThank you for checking out my progress so far, " << name << "!\n";
    return 0;
}
