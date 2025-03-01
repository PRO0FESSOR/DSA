
// stack in stl

#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    
    // Push elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);

    // Print and remove elements from stack
    while (!s.empty()) {
        std::cout << s.top() << " ";  // Access the top element
        s.pop();  // Remove the top element
    }
    std::cout << std::endl;

    return 0;
}

