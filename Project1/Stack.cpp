#include "Stack.h"


Stack::Stack(){
	stackArray = new int(10);
	top = -1;
	maxSize = 9;
}

Stack::Stack(int size){
	stackArray = new int(size);
	top = -1;
	maxSize = size-1;
}

int Stack::pop(){
	int temp=0;
	if (!isEmpty()){
		temp = stackArray[top];
		top--;
		
	}
	return temp;
}

void Stack::push(int number){

	if (!isFull()){
		top++;
		stackArray[top] = number;
	}
}

bool Stack::isEmpty(){

	bool empty;
	
	top == -1 ? empty = true : empty = false;
	
	return empty;
}

bool Stack::isFull(){

	bool full;
	
	top == maxSize ? full = true : full = false;
	
	return full;
}

Stack::~Stack()
{
}
