// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
#include<iostream>
using namespace std;
int main()
{
    // // int l1=(2,4,3);
    // //  int l2=(5,6,4);
    
    int arr1[3]={2,4,3};
    int arr2[3]={5,6,4};
    int result[4]={0,0,0,0};
    for(int i=2;i>=0;i--)
    {
         
        for(int j=2;j>=0;j--)
        {
            int s=arr1[i]+arr2[j];
            int rem=s%10;
            
            
                for(int k=3;k>=0;k--)
                {
                    if(k==3)
                    {
                        rem=0;
                    }
                    if(s>=10)
                    result[k]=rem+s/10;
                    else
                    result[k]=s;
            
                }
           
        }
    }
    for(int i=3;i>=0;i--)
    {
        cout<<result[i]<<" ";
    }
return 0;
}
