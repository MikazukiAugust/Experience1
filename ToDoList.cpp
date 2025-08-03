#include "ToDoList.h"
#include "iostream"
#include "string"
#include <vector>
#include <fstream>

std::vector<std::string> ToDoList::tasks;

// Save and Load options
void ToDoList::loadTasks() {
	std::ifstream file("tasks.txt");
	std::string task;
	while (std::getline(file, task)) {
		tasks.push_back(task);
	}
}
void ToDoList::saveTasks() {
	std::ofstream file("tasks.txt");
	for (const std::string& task : tasks) {
		file << task << "\n";
	}
}

void ToDoList::runToDoList() {

	int choice;

	char again;
	{
		std::cout << "\n ====To Do-List Menu==== \n";
		std::cout << "1. View Tasks\n";
		std::cout << "2. Add Task\n";
		std::cout << "3. Mark Task as Done\n";
		std::cout << "4. Exit\n";
		std::cout << "Choose an option (1-4): ";
		std::cin >> choice;

		switch (choice) {
			// Task menu
		case 1:
			std::cout << "Tasks to be done\n";
			if (tasks.empty()) {
				std::cout << "No Tasks to do";
			}
			else {
				for (size_t i = 0; i < tasks.size(); ++i) {
					std::cout << i + 1 << ". " << tasks[i] << "\n";
				}
			}
			break;
			// Add new task
		case 2:
			std::cout << "Add a new task\n";
			std::cin.ignore();
			{
				std::string newTask;
				std::getline(std::cin, newTask);
				tasks.push_back(newTask);
				std::cout << "New task added\n";
			}
			break;
			// Mark as done
		case 3:
			if (tasks.empty()) {
				std::cout << "No tasks to Remove\n";
			}
			else {
				std::cout << "Enter the number if the task you want to mark as done\n";
				int doneIndex;
				std::cin >> doneIndex;
				if (doneIndex > 0 && doneIndex <= tasks.size()) {
					tasks.erase(tasks.begin() + (doneIndex - 1));
					std::cout << "Task removed\n";
				}
				else {
					std::cout << "Invalid task number\n";
				}
			}
			break;
		default:
			std::cout << "Invalid option, Try again\n";
		}
	};
}