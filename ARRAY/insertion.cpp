#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,6};
    for(int i=6;i>=2;i--){
        arr[i+1] =arr[i];
    }
        arr[2] = 10;

        for(int i=0; i<=6;i++){
            cout<<arr[i]<<endl;
        }

    return 0;
}