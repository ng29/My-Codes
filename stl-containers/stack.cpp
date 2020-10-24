/*
Stack is very specific container, it allows to store multiple values
But only one that is on top is accessible (via std::stack.top() function)
You can of course pop value from the top of the stack
*/

#include <stack>
#include <iostream>

template <typename T>
void prints(std::stack<T> s) {
    // We have to copy our stack instead of referencing it,
    // because we will need to pop values in order to print all of them
    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
}

int main() {
    // Stack initializatoin
    std::stack<int> stack;
    // Inserting values into the stack
    stack.push(10); // stack.push() pushes values on the top of the stack
    stack.push(20);
    stack.push(30);
    stack.push(2137);

    // Getting size of the stack
    std::cout << stack.size() << std::endl;
    
    // Accessing value from the top of the stack
    std::cout << stack.top() << std::endl;

    // Popping value from the stack
    stack.pop(); // This will remove 2137 as it's the value on top

    // Printing whole stack
    prints(stack);
}