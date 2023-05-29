#include "array.h"
#include "sort.h"
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
    // test_array();
    std::vector<int> vec={9,7,8,6,5,7,4,5,3,4,5,6,1,2,4};
    // quick_sort(vec,0,vec.size()-1);
    // inster_sort(vec);
    // Selection_Sort(vec);
    heapSort(vec);
    print_array(vec);
    return 0;
}