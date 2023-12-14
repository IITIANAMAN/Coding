#include<iostream>
using namespace std;
int Binary(int arr[], int size , int target){
    
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
            if(target>arr[mid]){
                start = mid+1;
            }
            else if(target<arr[mid]){
                end=mid-1;
            }
            else if(target==arr[mid]){
                return mid;
            }
            else return -1;
        mid = start + (end-start)/2;
    }

}
int main(){
    int Test[7]={23,45,50,66,78,99,100};
    cout<<"Index is "<<Binary(Test,7,66)<<endl;
    
}