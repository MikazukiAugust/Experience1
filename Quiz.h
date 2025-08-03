#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
#include <ctime>

struct Question {
    std::string topic;
    std::string text;
    std::vector<std::string> choices;
    char correctAnswer;
};

void runCppMasteryQuiz();
