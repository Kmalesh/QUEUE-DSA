#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a;
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=10;
    free(p);
    p=(int*)malloc(20*sizeof(int));
    
}