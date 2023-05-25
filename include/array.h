#include<iostream>
#include <cstring>
#include "stl_alloc.h"
//当前需要实现一个array类，并且调用stl_alloc分配内存，使用stl_construct作为构造函数
template<class T,class Alloc=alloc>
class array
{
private:
    /* data */ 
    //定义一个指针
    T *Pdata;
    size_t lenght;
public:
   
    typedef simple_alloc<T,Alloc> data_alloctor;
    array(){
        this->Pdata=data_alloctor::allocate();
    };
    array(size_t n){
        this->Pdata=data_alloctor::allocate(n);
        this->lenght=n;
    };
    void printf(){
        std::cout<<"array:"<<std::endl;
        for(int i=0;i<this->lenght;i++){
            std::cout<<*(this->Pdata+i)<<" ";
        }
        std::cout<<std::endl; 
    };
    T& operator[](int index) {  //重载[]运算符
        if(index<0 || index>lenght){
            std::cout<<"Error: Index out of range." << std::endl;
            exit(0); //退出程序
        }
        return *(Pdata+index);
    };
    size_t size(){ //返回整个大小
        return lenght;
    };
    T& at(int index){
        if(index<0 || index>=lenght){
            std::cout<<"Error: Index out of range." << std::endl;
            exit(0); //退出程序
        }
        return *(Pdata+index);
    };
    T&  front(){
        return *(Pdata);
    };
    T&  back(){
        return *(Pdata+lenght-1);
    };
    T* data(){
        return Pdata;
    };
    void fill(T val){
        for(int i=0;i<lenght;i++){
            *(Pdata+i)=val;
        }
    };
    void swap(array<T>& arr){
        if(arr.size()!=size()){
            std::cout<<"Error: two arr size is not equal  " << std::endl;
            exit(0); //退出程序
        }
        // 直接使用内存拷贝
        memcpy(Pdata,arr.data(),lenght*sizeof(T));
    };
    ~array(){
        data_alloctor::deallocate(Pdata,lenght);
    };
};
