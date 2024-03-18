#ifndef _ARRAYSTACK_H
#define _ARRAYSTACK_H
#define DEFAULT_STACK_SIZE 5
#include "../ArrayList/ArrayList.h"
#include <string>
using namespace std;

class ArrayStack : public ArrayList 
{
private : //data
    int maxSize;// cannot access maxsize of list mom
public : //methods ( add ,remove , get ,set ,indexOf ,size)
    ArrayStack(int maxSize = DEFAULT_STACK_SIZE); //constructor
    //~ArrayStack(); //constructor 
    int get_maxSize();

    void push(int e); 
    int pop(); 
    int top();
    int peek(){return top();} // ตัวเดียวกันกับ top
    bool isEmpty(); 
    bool isFull(); 
    void Swap();

};

#endif // _ARRAYSTACK_H 
