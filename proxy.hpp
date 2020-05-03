// This is the proxy for BigArray
// It makes some functions not have to 
// run a somewhat intensive operation under
// certain conditions.

#ifndef PROXY
#define PROXY
#include "bigarray.hpp"

class MyArray {
protected:
    BigArray *_arr;
    bool changed = false;
    int allNum;
    int _size;
    int *_largeArr;
public:
    ~MyArray(){
        free(_arr);
    }
    explicit MyArray(int size = 0, int initialNumber = 0)
    {
        _size = size;
        _arr = new BigArray(size, initialNumber);
    }
    void setNums(int num);
    void setElement(int index,int num);
    void printAllUnique(); //The proxy does lazy operation on this function
    void time();
};

#endif // PROXY
