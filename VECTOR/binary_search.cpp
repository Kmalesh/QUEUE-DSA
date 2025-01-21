#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr, int tar){
    int n=arr.size();
    int st=0, end=n-1;
    while(st < end){
        int mid = (st + mid)/2;
        if(arr[mid] > tar){
            st =mid+1;
        }
        else if(arr[mid] < tar){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,10};
     int tar1=10;
     cout<<binarySearch(arr1,tar1)<<endl;
return 0;
}