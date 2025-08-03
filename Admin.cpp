#include "Admin.h"
#include <vector>
#include <string>
#include <iostream>

void Admin::runAdminMode() {
	std::vector<std::string> adminGoals = {
	"Finish this Project\n"
	"Imporve my coding skills coding\n"
	"Develope a my dream game\n"
	"Learn Guitar\n"
	};

    char again;
	{
		std::cout << "\n==== Admin Menu ====\n";
		std::cout << "1. Personal goals\n";
		std::cout << "2. Finished goals\n";
		std::cout << "3. Add more goals\n";
		std::cout << "4. Exit\n";

		int choice;
		std::cin >> choice;
		switch (choice) {
		case 1:
            for (size_t i = 0; i < adminGoals.size(); ++i)
                std::cout << i + 1 << ". " << adminGoals[i] << "\n";
            break;

        case 2:
            int doneIndex;
            std::cout << "Enter goal number to mark as done: ";
            std::cin >> doneIndex;
            if (doneIndex > 0 && doneIndex <= adminGoals.size()) {
                adminGoals.erase(adminGoals.begin() + (doneIndex - 1));
                std::cout << "Goal removed.\n";
            }
            else {
                std::cout << "Invalid index.\n";
            }
            break;

        case 3:
            std::cout << "Enter new goal: ";
            std::cin.ignore(); // Clear newline
            {
                std::string newGoal;
                std::getline(std::cin, newGoal);
                adminGoals.push_back(newGoal);
                std::cout << "Goal added!\n";
            }
            break;

        case 4:
            std::cout << "Exiting Admin Mode.\n";
            return;

        default:
            std::cout << "Invalid choice.\n";
        }

        std::cout << "\nDo you want to do more in Admin Mode? (y/n): ";
        std::cin >> again;

    } while (again == 'y' || again == 'Y');
}