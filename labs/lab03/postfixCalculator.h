//Yujian Li(yl7kd) 02/08/16 postfixCalculator.h

#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <iostream>
#include "stack.h"

using namespace std;

class postfixCalculator {

public:
	//Constructor
	postfixCalculator();
	//adds the passed element to the top of the stack
	void pushNum(int e);
	//return the element on the top of the stack
	int getTopValue() const;
	//remove the element on the top of the stack
	int popTop();
	//determine if the stack is empty
	bool empty() const;
	//add two elements from the top of the stack
	void add();
	//multiply two elements from the top of the stack
	void mult();
	//substract two elements from the top of the stack
	void minu();
	//divide two elements from the top of the stack
	void div();
	//negate the top element of the stack
	void tilde();

	
private:
	stack _stack;
	
	friend class stackNode;
	
};

#endif
