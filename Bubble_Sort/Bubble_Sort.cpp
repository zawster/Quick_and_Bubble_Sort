#include<iostream>
using namespace std;
void Swap(int *a,int *b){
    int *temp=a;
    a=b;
    b=temp;
}
void Bubble_sort(int *A,int x){
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            if(A[i]>A[j]){
                //Swap(&A[j],&A[j+1]);
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

}
int main(){
    int A[]={3,2,4,6,5,10,1,8,7};
    int x=9;
    Bubble_sort(A,x);
    for(int i=0;i<x;i++)
        cout<<A[i]<<" ";

}
