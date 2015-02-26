#include <iostream>
#include "Stack.h"

using namespace std;

void printStack(Stack);

int main(){

	int stackSize = 0;

	cout << "Enter the size you want your awesome stack to be!" << " ";
	cin >> stackSize;
	
	Stack myAwesomeStack(stackSize);

	myAwesomeStack.push(5);
	myAwesomeStack.push(7);
	myAwesomeStack.push(12);
	myAwesomeStack.push(15);

	printStack(myAwesomeStack);

	system("pause>0");
}

void printStack(Stack s){
	while(!s.isEmpty()){
		cout << s.pop() << endl;
	}
}