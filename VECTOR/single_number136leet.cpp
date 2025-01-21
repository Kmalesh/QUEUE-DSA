#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>num={2,2,1};
int ans=0;
for(int value:num)
{
    ans=ans^value;
}
cout<<"single number:"<<ans;
return 0;
}