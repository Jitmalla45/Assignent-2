#include <iostream>
using namespace std;

// Global variable to store call count
int globalCallCount = 0;

// Function that uses a global variable to count function calls
void countFuncGlobal() {
    globalCallCount++;
    cout << "Global: I have been called " << globalCallCount << " times" << endl;
}

// Function that uses a static local variable to count function calls
void countFuncStatic() {
    static int staticCallCount = 0;
    staticCallCount++;
    cout << "Static: I have been called " << staticCallCount << " times" << endl;
}

int main() {
    cout << "Calling Global Count Function" << endl;
    for (int i = 0; i < 10; i++) {
        countFuncGlobal();
    }

    cout << "\nCalling Static Count Function" << endl;
    for (int i = 0; i < 10; i++) {
        countFuncStatic();
    }

    return 0;
}

/* 
Using a local static variable is generally more appropriate because it limits the scope
of the variable to the function, preventing unintended side effects in other parts of the code.
It keeps the function self-contained and more modular.
*/

/* 
A regular local variable gets reinitialized every time the function is called. Hence, it cannot
retain the count between function calls, resetting to its initial value each time.
*/
