#include "ArrayStack/ArrayStack.h"
#include "ArrayList/ArrayList.h"
#include <iostream>
using namespace std;
int main()
{
    int maxSize, choice, element, e, i, Maxsize, value;
    char ans, read;
    
    cout << "----------Array Stack---------" << endl;
    cout << "66003065 Prapaipit Sawatraksa" << endl;
    cout << "Enter maxSize of Stack : ";
    cin >> maxSize;
    ArrayStack Stack(maxSize); // constructor
    do
    {
        cout << "----- current status -----" << endl;
        Stack.display();
        cout << endl;
        cout << "---------- menu ----------" << endl;
        cout << "1. | push elemaent | " << endl;
        cout << "2. | pop elemaent  |" << endl;
        cout << "3. | top elemaent  |" << endl;
        cout << "4. | Isempty Stack |" << endl;
        cout << "5. | IsFull Stack  |" << endl;
        cout << "6. | Clear Stack   |" << endl;
        cout << "7. | Auto Stack    |" << endl;
        cout << "8. | Sawp Stack    |" << endl;
        cout << "0. | Exit  Program ! " << endl;
        cout << "Select your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << " Enter Element : ";
            cin >> element;
            if (element < 0)
            {
                element = -element;
                cout << "Absolute Element : " << element << endl;
            }
            else if (element == 0)
            {
                cout << "Elemnt cannot be nagative. Please Enter a positive value :  ";
                cin >> element;
                element = -element;
                cout << "Absolute Element : " << element << endl;
            }
            Stack.push(element);
            break;
        case 2:
            element = Stack.pop();
            cout << "Enter Element : " << element << endl;
            break;
        case 3:
            element = Stack.top();
            cout << "Enter Element : " << element << endl;
            break;
        case 4:
            cout << " Is the ArrayAtack Empty : " << Stack.isempty() << endl;
            break;
        case 5:
            cout << " Is the ArraySatck IsFull : " << Stack.isFull() << endl;
            break;
        case 6:
            cout << "ArrayStack Cleared . " << Stack.clear() << endl;
            break;
        case 7:
            Stack.AutoInert(maxSize);
            cout << " AutoInsert Genarate Success!" << endl;
            break;
        case 8:
            cout << " After Swapping, The Stack : " << endl;
            Stack.Swap();
            Stack.display();
            break;
        case 0:
            cout << " Exit Program. " << endl;
        efault:
            cout << "Wrong choice ,try again..." << endl;
            break;
        }
    } while (choice != 0);

    cout << "----------ArrayList---------" << endl;
    cout << "66003065 Prapaipit Sawatraksa" << endl;
    cout << "Enter maxSize of List :  ";
    cin >> Maxsize;
    ArrayList list(Maxsize);
    do
    {
        list.display();
        cout << endl;
        cout << "Current size of list :  " << list.size() << " / " << Maxsize << endl;
        cout << "----- current status -----" << endl;
        cout << endl;
        cout << "---------- menu ----------" << endl;
        cout << "1. | Size ( ) " << endl;
        cout << "2. | IndexOf ( int e )" << endl;
        cout << "3. | Get ( int i )" << endl;
        cout << "4. | Remove ( int i )" << endl;
        cout << "5. | Set ( int i , int e )" << endl;
        cout << "6. | Add ( int i , int e )" << endl;
        cout << "7. | Min ( )" << endl;
        cout << "8. | Max ( )" << endl;
        cout << "9. | Display ( )" << endl;
        cout << "10.| Clear ( )" << endl;
        cout << "11.| IsEmpty ( )" << endl;
        cout << "12.| AutoInert ( ) " << endl;
        cout << "0. | Exit  Program !! " << endl;
        cout << "Select your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << " Current list Size is : " << list.size() << endl;
            break;
        case 2:
            cout << "Enter Element : ";
            cin >> e;
            list.indexOf(e);
            break;
        case 3:
            cout << "Enter Index : ";
            cin >> i;
            e = list.get(i);
            cout << "Element is : " << e << endl;
            break;
        case 4:
            cout << "Enter Index : ";
            cin >> i;
            e = list.remove(i);
            cout << "Element is : " << e << endl;
            break;
        case 5:
            cout << "Enter Index : ";
            cin >> i;
            cout << "Enter Element : ";
            cin >> e;
            list.set(i, e);
            break;
        case 6:
            cout << "Input Add Index : ";
            cin >> i;
            cout << "Input Add Element : ";
            cin >> e;
            list.add(i, e);
            break;
        case 7:
            e = list.min();
            cout << "Minimum Element is " << e << endl;
            break;
        case 8:
            e = list.max();
            cout << "Maximum Element is " << e << endl;
            break;
        case 9:
            list.display();
            // cout << "Current size of list :  " << list.size() << " / " << list.get_maxSize() << endl;
            break;
        case 10:
            cout << "ArrayList Cleared . " << list.clear() << endl;
            break;
        case 11:
            cout << " Is the ArrayList Empty : " << list.isempty() << endl;
            break;
        case 12:
            list.AutoInert(maxSize);
            cout << " AutoInsert Genarate Success!" << endl;
            break;
        case 0:
            cout << " Exit Program. " << endl;
        efult:
            cout << "Wrong choice ,try again..." << endl;
            break;
        }
    } while (choice != 0);
   
    return 0;
    
}