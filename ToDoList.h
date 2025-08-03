#pragma once
#include <vector>
#include "string"

class ToDoList
{
public:
	static void runToDoList();
	static void loadTasks();
	static void saveTasks();

private:
	static std::vector<std::string> tasks;
};

