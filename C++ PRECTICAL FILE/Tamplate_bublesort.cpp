// #include<iostream>
// using namespace std;
//  template <class T> void sort(T a[]);
//  int main()
//  {
    
//  }
//  template <class T> void sort(T a[])
//  {
//  T i,j;

//      a[]={33,4,5,65,6,1,66,14,-1};
//     T n=sizeof(a)/sizeof(T);
     
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-1;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 T temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//  }
#include <iostream>
using namespace std;
template <class T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
template <class T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;
}
int main() {
    int Arr[] = {5, 1, 4, 2, 8};  
    int intSize = sizeof(Arr) / sizeof(Arr[0]);
    bubbleSort(Arr, intSize);
    cout << "Sorted integer array: ";
    printArray(Arr, intSize);
    return 0;
}
  