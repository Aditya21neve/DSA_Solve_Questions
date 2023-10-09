#include <iostream>
using namespace std;

int binarysearch(int arr[],int n, int key){
    int left = 0;
    int right = n-1;
    int mid = left + (right - left)/2;
    while(left <= right){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            left = mid+1;
            
        }else{
            right = mid-1;
        }
        mid = left + (right - left)/2;

    }
    return -1;
}

int main (){

    int arr[10]= {1,2,4,6,8,11,22,33,43,46};
    int key  = 46;
    int index = binarysearch(arr,10,key);
    cout<<index;
}