#include "proxy.hpp"
using std::cout;
void MyArray::setNums(int num){
    changed = false;
    _arr -> setNums(num);
}

void MyArray::setElement(int index,int num){
    changed = true;
    _arr -> setElement(index, num);
}

void MyArray::printAllUnique(){
    if(!changed){
        return;
    }
    _arr -> printAllUnique();
}


void MyArray::time(){
    _arr -> time();
}