#include "Quiz.h"

void runCppMasteryQuiz() {
    std::vector<Question> questions = {
        // ================== Loops ==================
        {"Loops", "Which loop runs at least once even if the condition is false?", {"A. for", "B. while", "C. do-while", "D. repeat"}, 'C'},
        {"Loops", "Which loop is ideal for definite iteration count?", {"A. while", "B. do-while", "C. for", "D. foreach"}, 'C'},
        {"Loops", "Which keyword exits a loop prematurely?", {"A. return", "B. break", "C. stop", "D. exit"}, 'B'},
        {"Loops", "Which loop structure is best for reading arrays?", {"A. for", "B. while", "C. foreach", "D. do-while"}, 'A'},
        {"Loops", "What does 'continue' do in a loop?", {"A. Ends the loop", "B. Skips to next iteration", "C. Breaks loop", "D. Ignores condition"}, 'B'},

        // ================== Strings ==================
        {"Strings", "How do you get the length of a string?", {"A. .size()", "B. .length()", "C. Both A and B", "D. strlen()"}, 'C'},
        {"Strings", "Which function joins two strings?", {"A. combine()", "B. +", "C. concat()", "D. join()"}, 'B'},
        {"Strings", "What header must you include for string?", {"A. <cstring>", "B. <string>", "C. <str>", "D. <text>"}, 'B'},
        {"Strings", "Which string method finds a character?", {"A. find()", "B. locate()", "C. index()", "D. search()"}, 'A'},
        {"Strings", "How do you compare two strings?", {"A. equals()", "B. .compare()", "C. == operator", "D. Both B and C"}, 'D'},

        // ================== Arrays & Vectors ==================
        {"Vectors", "How do you add an element to a vector?", {"A. add()", "B. insert()", "C. push_back()", "D. append()"}, 'C'},
        {"Vectors", "How do you remove the last item?", {"A. remove()", "B. erase()", "C. pop_back()", "D. delete()"}, 'C'},
        {"Arrays", "What is the index of the first element?", {"A. 1", "B. 0", "C. -1", "D. It varies"}, 'B'},
        {"Arrays", "Can arrays be resized in C++?", {"A. Yes", "B. No", "C. Only dynamic arrays", "D. Only 2D arrays"}, 'B'},
        {"Vectors", "What’s the best use-case for std::vector?", {"A. Fixed size", "B. Dynamic size", "C. Single values", "D. File I/O"}, 'B'},

        // ================== Functions ==================
        {"Functions", "What is a function that calls itself?", {"A. Recursive", "B. Repeating", "C. Callback", "D. Loop"}, 'A'},
        {"Functions", "What does 'return' do?", {"A. Ends loop", "B. Ends program", "C. Returns a value", "D. Declares variable"}, 'C'},
        {"Functions", "What does 'void' mean?", {"A. No return", "B. Private function", "C. Static function", "D. Public function"}, 'A'},
        {"Functions", "How are default values provided?", {"A. Inside body", "B. Parameter list", "C. Global scope", "D. None"}, 'B'},
        {"Functions", "Which keyword allows multiple functions with same name?", {"A. overload", "B. virtual", "C. override", "D. None"}, 'A'},

        // ================== Structs & Classes ==================
        {"Classes", "Which access modifier is default in a class?", {"A. public", "B. private", "C. protected", "D. static"}, 'B'},
        {"Structs", "Which access modifier is default in a struct?", {"A. public", "B. private", "C. protected", "D. static"}, 'A'},
        {"Classes", "What is a constructor?", {"A. Function with same name as class", "B. Destructor", "C. Friend function", "D. None"}, 'A'},
        {"Classes", "What is encapsulation?", {"A. Hiding data", "B. Data reuse", "C. Data duplication", "D. Data encryption"}, 'A'},
        {"Classes", "What does a virtual function do?", {"A. Makes abstract class", "B. Allows override", "C. Creates object", "D. Stops loop"}, 'B'},

        // ================== Nodes & Linked Lists ==================
        {"LinkedList", "What is the start node of a linked list called?", {"A. root", "B. start", "C. head", "D. init"}, 'C'},
        {"LinkedList", "What does a node typically contain?", {"A. Just data", "B. Just pointer", "C. Data and pointer", "D. None"}, 'C'},
        {"LinkedList", "What is the last node's pointer?", {"A. Head", "B. NULL", "C. Tail", "D. Loop"}, 'B'},
        {"LinkedList", "How do you traverse a list?", {"A. Recursion", "B. While loop", "C. Iteration", "D. All of the above"}, 'D'},
        {"LinkedList", "What does 'tail' refer to?", {"A. First node", "B. Last node", "C. Random node", "D. Root node"}, 'B'},

        // ================== Pointers ==================
        {"Pointers", "What does '&' operator do?", {"A. Dereference", "B. Address-of", "C. Multiply", "D. Bitwise AND"}, 'B'},
        {"Pointers", "What does '*' operator do to a pointer?", {"A. Nullify", "B. Multiply", "C. Dereference", "D. Nothing"}, 'C'},
        {"Pointers", "What is a null pointer?", {"A. 0 value", "B. NULL address", "C. No pointer", "D. Garbage"}, 'B'},
        {"Pointers", "Which keyword allocates memory?", {"A. alloc", "B. malloc", "C. new", "D. reserve"}, 'C'},
        {"Pointers", "What happens if you delete a pointer twice?", {"A. Safe", "B. Memory leak", "C. Undefined behavior", "D. Segfault"}, 'C'},

        // ================== Constructors ==================
        {"Constructors", "What is a copy constructor?", {"A. Makes pointer", "B. Copies object", "C. Deletes class", "D. Makes reference"}, 'B'},
        {"Constructors", "What is constructor overloading?", {"A. Inheritance", "B. Multiple constructors", "C. Virtual constructors", "D. Templates"}, 'B'},
        {"Constructors", "What is a default constructor?", {"A. No parameters", "B. One parameter", "C. With pointer", "D. None"}, 'A'},
        {"Constructors", "What is an initialization list?", {"A. Loop", "B. Special header", "C. Constructor syntax", "D. Template"}, 'C'},
        {"Constructors", "When is a constructor called?", {"A. On destruction", "B. On main()", "C. On object creation", "D. On include"}, 'C'},

        // ================== Inheritance & OOP ==================
        {"Inheritance", "What is inheritance?", {"A. Reusing classes", "B. Memory leak", "C. Looping structure", "D. Template"}, 'A'},
        {"Inheritance", "What is polymorphism?", {"A. Overriding behavior", "B. Copying code", "C. Using pointers", "D. OOP limitation"}, 'A'},
        {"Inheritance", "What is multilevel inheritance?", {"A. Multiple parents", "B. Parent -> Child -> Grandchild", "C. Single inheritance", "D. Static method"}, 'B'},
        {"Inheritance", "What is a pure virtual function?", {"A. Has no definition", "B. Static", "C. Constructor", "D. Pointer"}, 'A'},
        {"Inheritance", "What is abstraction?", {"A. Hiding internal logic", "B. Breaking classes", "C. Using macros", "D. Public fields"}, 'A'},

        // ================== Advanced Topics ==================
        {"Advanced", "What is a lambda function?", {"A. Anonymous function", "B. Constructor", "C. Template", "D. Pointer"}, 'A'},
        {"Advanced", "What does the preprocessor do?", {"A. Compile code", "B. Modify runtime", "C. Handle #define and #include", "D. Allocate memory"}, 'C'},
        {"Advanced", "Which header supports multithreading?", {"A. <thread>", "B. <concurrency>", "C. <mutex>", "D. <parallel>"}, 'A'},
        {"Advanced", "What does 'namespace' do?", {"A. Prevents name conflicts", "B. Speeds up code", "C. Manages memory", "D. Compresses data"}, 'A'},
        {"Advanced", "Which keyword defines a template?", {"A. typedef", "B. define", "C. template", "D. macro"}, 'C'},
    };

    std::random_shuffle(questions.begin(), questions.end());

    int score = 0;
    char userAnswer;
    std::cout << "🧠 Welcome to the C++ Mastery Quiz!\n";

    for (int i = 0; i < questions.size(); ++i) {
        const Question& q = questions[i];
        std::cout << "\n[" << q.topic << "] Question " << (i + 1) << ":\n";
        std::cout << q.text << "\n";
        for (const auto& choice : q.choices) {
            std::cout << choice << "\n";
        }
        std::cout << "Your answer: ";
        std::cin >> userAnswer;
        userAnswer = std::toupper(userAnswer);

        if (userAnswer == q.correctAnswer) {
            std::cout << "✅ Correct!\n";
            score++;
        }
        else {
            std::cout << "❌ Incorrect. Correct answer: " << q.correctAnswer << "\n";
        }
    }

    std::cout << "\n🎉 Quiz Complete!\n";
    std::cout << "Final Score: " << score << " / " << questions.size() << "\n";
    std::cout << ((score == questions.size()) ? "🏆 Perfect score!" :
        (score >= 35) ? "💪 Amazing work!" :
        (score >= 25) ? "👍 Good job!" :
        "📘 Keep practicing!") << "\n";

    std::cout << "\nWould you like to retake the quiz? (y/n): ";
    char retry;
    std::cin >> retry;
    if (retry == 'y' || retry == 'Y') {
        runCppMasteryQuiz();
    }
}