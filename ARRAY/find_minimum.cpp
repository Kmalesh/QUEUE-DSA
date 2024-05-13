// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;

//     int arr[]={20,30,50,84,-1};
//     int n=sizeof(arr)/sizeof(int);

//     int min=arr[0];
//     for(i=0;i<n;i++)
//     {
//          if(arr[i]<min)
//         {
//             min=arr[i];
//         }
//     }
//     cout<<"minimum value is:"<<min;

    
       
// }
#include <bits/stdc++.h>  
using namespace std; 
   
struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 
   
// A utility function to create a new BST node 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key) 
{ 
    struct node *newNode(int );
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    /* return the (unchanged) node pointer */
    return node; 
} 
/* Given a non-empty binary search tree,  
return the minimum data value found in that  
tree. Note that the entire tree does not need  
to be searched. */
int minValue(struct node* node)  
{  
    struct node* current = node;  
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)  
    {  
        current = current->left;  
    }  
    return(current->key);  
}  
/* Given a non-empty binary search tree,  
return the maximum data value found in that  
tree. Note that the entire tree does not need  
to be searched. */
int maxValue(struct node* node)  
{  
    struct node* current = node;  
    /* loop down to find the leftmost leaf */
    while (current->right != NULL)  
    {  
        current = current->right;  
    }  
    return(current->key);  
}  
// Driver Program to test above functions 
int main() 
{ 
    int maxValue(struct node* );
    struct node* insert(struct node* , int );
    int minValue(struct node* ); 
    struct node *root = NULL; 
    root = insert(root, 8); 
    insert(root, 3); 
    insert(root, 10); 
    insert(root, 1); 
    insert(root, 6); 
    insert(root, 4); 
    insert(root, 7); 
    insert(root, 5);
    insert(root, 10);
    insert(root, 9);
    insert(root, 13);
    insert(root, 11);
    insert(root, 14);
    insert(root, 12);
    insert(root, 2);
    
    cout << "\n Minimum value in BST is " << minValue(root)<<endl;  
    cout << "\n Maximum value in BST is " << maxValue(root);  
    return 0; 
} 