#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char *ptr;
    ptr = NULL;
    ptr= realloc(ptr, sizeof(char));
    if (ptr != NULL)
    {
        cout << "memory creat successful" << endl;
    }

}