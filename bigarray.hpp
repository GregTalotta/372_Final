// The point of the class is to make a 
// really big array then print it, or
// time how long it takes to acsess each element

#ifndef BIG_ARRAY
#define BIG_ARRAY
#include <chrono> 
#include <iostream>
#include <cstdlib>

class BigArray {
protected:
    int _numUnique = 1;
    int _size;
    int *_largeArr;
public:
    ~BigArray()
    {
        free(_largeArr);
    }
    explicit BigArray(int size = 500000, int initialNumber = 0)
    {
        _size = size;
        _largeArr = (int*) malloc (sizeof(int)*size);
        setNums(initialNumber);
    }
    void setNums(int num);
    void setElement(int index,int num);
    void printAllUnique();
    void time();
};

#endif // BIG_ARRAY
