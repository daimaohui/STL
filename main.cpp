#include "array.h"
#include <new>
void test_array(){
    array<int> arr=array<int>(10);
    arr[0]=100;
    arr.printf();
    std::cout<<arr.front()<<std::endl;
    std::cout<<arr.back()<<std::endl;
    std::cout<<arr.at(1)<<std::endl;
    array<int> arr2=array<int>(10);
    arr2.swap(arr);
    arr2.printf();
    array<float> arr3=array<float>(10);
    arr3[0]=10.12;
    arr3.printf();
}
int main(){
    test_array();
    return 0;
}