#include<iostream>
#include<vector>
#include<cstring>
#include<new>
template<class T>
void swap(T& a,T& b){  //交换函数
    T temp=a;
    a=b;
    b=temp;
}
template<class T>
int partition(std::vector<T> &arr,int low,int high){  //快速排序的选择index
    T p=arr[low];
    while(low<high){
        while(low<high&&arr[high]>p){
            high--;
        }
        if(low<high){
            arr[low]=arr[high];
            low++;
        }
        while(low<high&&arr[low]<p){
            low++;
        }
        if(low<high){
            arr[high]=arr[low];
            high--;
        }
    }
    arr[low]=p;
    return low;
}
template<class T>
void quick_sort(std::vector<T> &arr,int low,int high){ //快排
    if(low<high){
        int index=partition(arr,low,high);
        quick_sort(arr,low,index-1);
        quick_sort(arr,index+1,high);
    }
}
template<class T>
void quick_sort(std::vector<T> &arr){ //快排实现，通过类型
    quick_sort(arr,0,arr.size()-1);
}
template<class T>
void inster_sort(std::vector<T> &arr){ //插入排序
    for(int i=1;i<arr.size();i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
template<class T>
void Bubble_Sort(std::vector<T> &arr){ //冒泡排序
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
template<class T>
void Selection_Sort(std::vector<T> &arr){ //选择排序
    for(int i=0;i<arr.size();i++){
        int minIndex = i;

        // 在未排序部分找到最小的元素索引
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // 将最小元素放到已排序部分的末尾
        swap(arr[i], arr[minIndex]);
    }
}
template<class T>
void merge(std::vector<T> &arr,int left,int mid,int right){
    int leftsize=mid-left+1;
    int rightsize=right-mid;
    T* arrleft=new T[leftsize];
    T* arrright=new T[rightsize];
    // memcpy(arrleft,arr,sizeof(T)*(leftsize));
    // memcpy(arrright,arr+(leftsize),sizeof(T)*(rightsize));
    for(int i=0;i<leftsize;i++){
        arrleft[i]=arr[left+i];
    }
    for(int i=0;i<rightsize;i++){
        arrright[i]=arr[mid+i+1];
    }
    //归并
    int leftindex=0,rightindex=0;
    int arrindex=left;
    while(leftindex<leftsize||rightindex<rightsize){
        if(leftindex<leftsize&&rightindex<rightsize){
            
            if(*(arrleft+leftindex)<*(arrright+rightindex)){
                arr[arrindex]=*(arrleft+leftindex);
                leftindex++;
            }else{
                arr[arrindex]=*(arrright+rightindex);
                rightindex++;
            }
        }
        else if(rightindex<rightsize){
            arr[arrindex]=*(arrright+rightindex);
            rightindex++;
        }else{
            arr[arrindex]=*(arrleft+leftindex);
            leftindex++;
        }
        arrindex++;
    }
    delete[] arrleft; //回收内存
    delete[] arrright; //回收内存
}
template<class T>
void mergeSort(std::vector<T> &arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
template<class T>
void mergeSort(std::vector<T> &arr) {  //归并排序
     mergeSort(arr, 0, arr.size()-1);
}
template<class T>
void heapify(std::vector<T> &arr,int size,int root){
    int largest = root; 
    int left=largest*2;
    int right=largest*2+1;
    if(left<size&&arr[largest]<arr[left]){
        largest=left;
    }
    if(right<size&&arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=root){
        swap(arr[largest],arr[root]);
        heapify(arr,size,largest);
    }
}
template<class T>
void heapSort(std::vector<T> &arr){ //堆排序
    for(int i=arr.size()/2-1;i>=0;i--){
        heapify(arr,arr.size(),i);
    }
    for(int i=arr.size()-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
template<class T>
void print_array(std::vector<T> &arr){
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

