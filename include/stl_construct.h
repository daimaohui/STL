/**
 * @file stl_construct.h
 * @author daimaohui
 * @brief 
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<new> 

//当前只实现简单的构造函数和析构函数
template <class  T1,class T2>
inline void construct(T1* p,const T2& value){
    new (p) T1(value);
}

template <class T>
inline void destroy(T* pointer){
    pointer->~T();
}
