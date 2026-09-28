#include <iostream>
using namespace std;


void build_array(int arr[], int n){

    cout<<"Enter the elements of array: "<<endl;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

}

void print_array(int arr[], int n){

    cout<<"The elements of array are: "<<endl;
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    cout<<endl;
}

void largest_in_array(int arr[], int n){

    int largest=arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<"The largest element in the array is: "<<largest<<endl;

}



int main(){

    cout<<"Enter the size of array: " <<endl;
    int n;
    cin>>n;
    int arr[n];

    build_array(arr, n);
    print_array(arr, n);
    largest_in_array(arr, n);
    

    
    
    return 0;
}