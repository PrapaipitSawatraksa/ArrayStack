#ifndef _ARRAYLIST_H_
#define _ARRAYLIST_H_
#define DEFAULT_MAX_SIZE 5
class ArrayList
{
protected :
    int *L ;
    int curSize;
    int maxSize;
public : 
    ArrayList(int maxSize = DEFAULT_MAX_SIZE);
    ~ArrayList();

    //int get_maxSize();
    int size();
    int indexOf(int e);
    int get(int i);
    int remove(int i);
    void set(int i , int e);
    void add(int i , int e);
    void display();
    int clear();
    int min();
    int max();
    bool isempty();
    void AutoInert(int maxSize);

};

#endif 
