#include<iostream>
using namespace std;
int main(){
int arr[3][3]={{4,3,6},{2,7,9},{2,7,8}};
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j )
                arr[i][j] = 0;
        }
    }
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
 
        cout << endl;
    }

}