#include "../ArrayList/ArrayList.h"
#include "ArrayStack.h"
#include <iostream>

using namespace std;

ArrayStack::ArrayStack(int maxSize) : ArrayList(maxSize) // เรียก cons ของ mom -> L ,cS = 0 ,mS=5
{                                                        // no maxSize (5) -> contructor ArrayList (5)
    this->maxSize = maxSize;                             // ArrayStack ->mS = 5
}

int ArrayStack::get_maxSize()
{
    return maxSize;
}


void ArrayStack::push(int e)
{
    add(size(), e);
}

int ArrayStack::pop()
{
    return remove(size() - 1);
}

int ArrayStack::top()
{
    if (curSize == 0)
    {
        cerr << "Error !! Is empty." << endl;
    }
    return get(size()-1);
}

bool ArrayStack::isEmpty()
{
    if (curSize == 0)
    {
        cout << "Is Empty" << endl;
        return true;
    }
    else
    {
        cout << "Is not Empty" << endl;
        return false;
    }
}
bool ArrayStack::isFull()
{
    if (maxSize == size())
    {
        cout<<"Current Size of Array : "<<size()<<" / "<<maxSize<<endl;

    }
    return maxSize == size();
}


void ArrayStack::Swap()
{
    int A = pop(); 
    int B = pop();
    push(A);
    push(B);


}

