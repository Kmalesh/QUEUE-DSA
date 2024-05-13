// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the sizeof memory :";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int step=1;
//     while(step<n)
//     {
//         for(int i=0;i<n-step;i++)
//         {
//             if(arr[i]==0)
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         step++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;


// }
#include <iostream>
#include <cmath>

using namespace std;

void printCircle(int radius) {
    int diameter = 2 * radius;

    for (int i = 0; i <= diameter; ++i) {
        for (int j = 0; j <= diameter; ++j) {
            int distance = sqrt(pow(i - radius, 2) + pow(j - radius, 2));
            if (distance > radius - 0.5 && distance < radius + 0.5)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    printCircle(radius);

    return 0;
}

