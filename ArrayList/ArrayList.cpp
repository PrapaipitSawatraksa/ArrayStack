#include "ArrayList.h"
#include<iostream>

using namespace std;

ArrayList::ArrayList(int maxSize)
{
    //cout<< " Constructor "<<endl;
    this -> maxSize = maxSize;

    curSize = 0;

    L = new int [ this -> maxSize];  
}

ArrayList::~ArrayList()
{
    delete [ ] L ;
}

// int ArrayList::get_maxSize()
// {
//     return maxSize;
// }

int ArrayList::size()
{
    return this -> curSize;
}

int ArrayList::indexOf(int e)
{
    for(int i = 0 ; i < curSize ; i++)
    {
        if ( e == L[i])
        {
            cout << " Position [ "<< i << " ] : "<<e<<endl;
        }
    }
    return 0;
}

int ArrayList::get(int i)
{
    if( i > this-> curSize)
    {
        cerr << " Error !! Data is empty. "<< endl;
    }
    if(i < 0)
    {
        cerr << " Warning : Lower bound index."<< i << endl;
    }
    return L[i];
}

int ArrayList::remove(int i)
{
    // if(this-> curSize == 0)
    // {
    //     cerr << " Error !! Data is empty. "<< endl;
    // }
    // if(i> this-> curSize)
    // {
    //     cerr << " Warning : Upper bound index."<< endl;
    // }
    // if(i < 0 )
    // {
    //     cerr << " Warning : Lower bound index."<< i << endl;
    //     cerr << "Mesage : index "<< i <<" Change to 0" << endl;
    // } 
    // int tmp = L[i];
    // for(int j = i ; j < curSize;j++)
    // {
    //     L[j]=L[j+1];
    // }  
    // curSize --;
    // return tmp;
    return 0;
}

void ArrayList::set(int i, int e)
{
    if(i> this-> curSize)
    {
        cerr << " Warning : Upper bound index."<< endl;
    }
    if(i < 0 )
    {
        cerr << " Warning : Lower bound index."<< i << endl;
        cerr << "Mesage : index "<< i <<" Change to 0" << endl;
    } 
    L[i]=e;
}

void ArrayList::add(int i, int e)
{
    if(curSize >= maxSize)
    {
        cerr<<" Error !! Data if full."<<endl;
        return ;
    }
    
    if (i < 0)
    {
        cerr << "Warning : lower bound index" << endl;
        cout << "Message : " << i << "Change to 0 " << endl;
        i = 0;
    }
    else if (i > curSize)
    {
        cerr << "Warning : lower bound index" << endl;
        cout << "Message : " << i << "Change to  " << curSize << endl;
        i = curSize;
    }
    for( int j = curSize -1 ; j>= i ; j--)
    {
        L[j+1]=L[j];

    }
    L[i]=e;
    curSize++;

}

void ArrayList::display()
{
    cout<< " Data [ ";
    for (int i = 0 ; i < curSize ; i++ )
    {
        cout<< L [i];
        if ( i < curSize-1)
            cout<<" , ";
        else
            cout<<" ] "<<endl;
    }
}

int ArrayList::clear()
{
    curSize=0;
    return curSize;
}

int ArrayList::min()
{
    if(curSize == 0)
    {
        cout<< " Error Empty List ."<<endl;
        return 0;
    }
    
    int minValue = L[0];
    for (int i =1 ; i< curSize ; i++)
    {
        if(L[i] < minValue)
        {
            minValue = L[i];
        } 
    }
    return minValue;
}

int ArrayList::max()
{
    if(curSize == 0)
    {
        cout<< " Error Empty List ."<<endl;
        return 0;
    }
    
    int maxValue = L[0];
    for (int i =1 ; i< curSize ; i++)
    {
        if(L[i] > maxValue)
        {
            maxValue = L[i];
        } 
    }
    return maxValue;
}

bool ArrayList::isempty()
{
    // if (curSize <= 0)
    // {
    //     cout << "Is Empty with size: " << curSize << endl;
    //     return true;
    // }
    // else
    // {
    //     cout << "Is not Empty with size: " << curSize << endl;
    //     return false;
    // }
    return size() == 0;
}

void ArrayList::AutoInert(int maxSize)
{
    srand(time(0));
    //int random = rand()%10+1;
    for(int i=0;i<maxSize;i++)
   add(0, rand()%10+1);
}
