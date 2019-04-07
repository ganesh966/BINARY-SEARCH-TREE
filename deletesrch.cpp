#include "structhead.h"
using namespace std;

node* deletenode(node* root, int key) 
{
    if (root == NULL) return root; 
    if (key < root->data) 
        root->left = deletenode(root->left, key); 
  
    else if (key > root->data) 
        root->right = deletenode(root->right, key); 
  
    else
    { 
        if (root->left == NULL) 
        { 
            node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            node *temp = root->left; 
            free(root); 
            return temp; 
        } 
  
        
        node* temp=root->right;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }  
        root->data = temp->data; 
        root->right = deletenode(root->right, temp->data); 
    } 
    return root; 
} 