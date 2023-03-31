//basic stack algorithm | 

#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // This prints the top  value/ element which is 30(the last element pushed to the stack)
    cout << "Top element: " << myStack.top() << endl;

    // Pop an element from the stack
    //this removes whatever is in the last item/element in the stack wich is 30
    myStack.pop();

    // Print the top element again(will print 20)
    cout << "Top element after pop: " << myStack.top() << endl;


}

