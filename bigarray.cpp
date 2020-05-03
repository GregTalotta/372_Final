#include "bigarray.hpp"
using std::cout;

void BigArray::setNums(int num){
    for(long i = 0; i < _size; ++i)
    {
        _largeArr[i] = num;
    }
    _numUnique = 1;
}

void BigArray::setElement(int index,int num){
    if((index < _size)&&(index >= 0)){
        _largeArr[index] = num;
        ++_numUnique;
    }
}

void BigArray::printAllUnique(){
    for(long i = 0; i < _size; ++i)
    {
        cout << _largeArr[i] << "\n";
    }
}


void BigArray::time(){
    using namespace std::chrono;
    for(long i = 0; i < _size; ++i)
    {
        auto start = std::chrono::steady_clock::now();
        _largeArr[i] = 0;
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double, std::ratio<1, 1000000000>> diff = end - start;
        cout << diff.count() << " ns\n";
    }
}