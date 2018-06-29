#include<iostream>
using namespace std;
void Swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
int Partitioning(int *arr,int start,int last){
    int pivot=arr[last];
    int partitionIndex=start;  // partitionIndex set as start index
    for(int i=0;i<last;i++){
        if(arr[i]<=pivot){
            Swap(arr[i],arr[partitionIndex]);
            partitionIndex +=1;
        }
    }
    Swap(arr[partitionIndex],arr[last]);//swap piviot with element at partition index
    return partitionIndex;
}
void QuickSort(int *arr,int start,int last){
    if(start<last){
        int partitionIndex=Partitioning(arr,start,last);
        QuickSort(arr,start,partitionIndex-1);
        QuickSort(arr,partitionIndex+1,last);
    }
}
int main(){
    int arr[]={3,2,5,1,6,7,4,8};
    QuickSort(arr,0,7);
    for (int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
