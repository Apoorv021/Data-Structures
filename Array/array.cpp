#include<iostream>
using namespace std;
typedef struct Array
{
    int *A;
    int size;
    int length;
}array;

void display(array arr){
    cout<<"The elements of the array are"<<endl;
    for(int i=0;i<arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
}

int main(){
    array arr;
    int n;
    cout<<"Enter size of the array";
    cin>>arr.size;

    arr.A=new int[arr.size];
    arr.length=0;

    cout<<"Enter the no. of elements";
    cin>>n;
    
    cout<<"Enter the elements";
    for(int i=0; i<n; i++){
        cin>>arr.A[i];
    }
    arr.length=n;

    display(arr);

    return 0;
}
