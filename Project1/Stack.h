#pragma once
class Stack
{
private:
	int *stackArray;
	int top;
	int maxSize;
public:
	Stack();
	Stack(int);
	int pop();
	void push(int);
	bool isEmpty();
	bool isFull();
	~Stack();
};

