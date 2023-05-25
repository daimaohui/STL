#include<new>
template <int inst>
class __malloc_alloc_template{
    public:
        static void * allocate(size_t n){ //这里不考虑分配不了的情况
            void *result=malloc(n);
            return result;
        }
        static void deallocate(void *p,size_t n){
            free(p);
        }
        static void deallocate(void *p){
            free(p);
        }
};
typedef __malloc_alloc_template<0> malloc_alloc;
typedef malloc_alloc alloc; 
//对上面的malloc_alloc进行封装，让暴露出来的alloc函数更加符合STL规范
 template<class T,class Alloc=alloc>
 class simple_alloc
 {
    public:
        static T *allocate(size_t n){
            return 0==n?0:(T*)Alloc::allocate(n*sizeof(T));
        }
        static T *allocate(void){
            return (T*)Alloc::allocate(sizeof(T));
        }
        static void deallocate(T *p,size_t n){
            if(0!=n){
                Alloc::deallocate(p,n*sizeof(T));
            }
        }
        static void deallocate(T *p){
            Alloc::deallocate(p);
        }
 };
  
 