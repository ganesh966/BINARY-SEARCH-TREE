#include "structhead.h"
using namespace std;

node *root=NULL;

int main()
{
    l:
    cout<<"****************BINARY_SEARCH_TREE*******************"<<endl;
    cout<<"    PRESS 1.INSERT NODE"<<endl;
    cout<<"    PRESS 2.TRAVERSE NODE"<<endl;
    cout<<"    PRESS 3.MIN-MAX ELEMENT"<<endl;
    cout<<"    PRESS 4.DELETE"<<endl;
    cout<<"    PRESS 5.DIFFERENT VIEW"<<endl;
    cout<<"    PRESS 6.SUM OF INORDER PREDECESSOR AND SUCESSOR"<<endl;
    cout<<"    PRESS 7.PAIR WITH GIVEN SUM"<<endl;
    cout<<"    PRESS 8.K-TH MIN-MAX"<<endl;
    cout<<"    PRESS 9.FLOOR-CEIL OF NODE"<<endl;
    cout<<"    PRESS 10.BALANCE BST"<<endl;
    cout<<"    PRESS 11.SAME BST OR NOT"<<endl;
    cout<<"    PRESS 12.BINARY_TREE TO BST"<<endl;
    cout<<"    Any other key to exit.."<<endl;
    cout<<"Choose your option..."<<endl;
    int op;
    cin>>op;
    switch(op)
    {
        case 1:
        {
            root=insert(root);
            break;
        }
        case 2:
        {
            l2:
            cout<<"     1.PREORDER "<<endl;
            cout<<"     2.INORDER"<<endl;
            cout<<"     3.POSTORDER"<<endl;
            cout<<"     4.BFS"<<endl;
            cout<<"     5.VERTICAL ORDER"<<endl;
            cout<<"     6.SPIRAL ORDER"<<endl;
            cout<<"     7.DESCENDING ORDER"<<endl;
            cout<<"Choose your option..."<<endl;
            int op2;
            cin>>op2;
            switch(op2)
            {
                case 1:
                {
                    preorder(root);
                    cout<<endl;
                    break;
                }
                case 2:
                {
                    inorder(root);
                    cout<<endl;
                    break;
                }
                case 3:
                {
                    postorder(root);
                    cout<<endl;
                    break;
                }
                case 4:
                {
                    bfs(root);
                    cout<<endl;
                    break;
                }
                
                case 5:
                {
                    verticalordr(root);
                    break;
                }
                case 6:
                {
                    spiral(root);
                    break;
                }
                case 7:
                {
                    descending(root);
                    break;
                }

            }
            cout<<"press 0 to continue..."<<endl;
            int op;
            cin>>op;
            if(op==0)goto l2;
            goto l;
        }
        case 3:
        {
            int min=minm(root);
            int max=maxm(root);
            cout<<"min= "<<min<<endl;
            cout<<"Max= "<<max<<endl;
            break;
        }
        case 4:
        {
            cout<<"Enter node u want to delete"<<endl;
            int val;
            cin>>val;
            root=deletenode(root,val);
            cout<<"Data Sucessfully deleted"<<endl;
            break;
                    
        }
        case 5:
        {
            l3:
            cout<<"     1.TOP VIEW"<<endl;
            cout<<"     2.BOTTOM VIEW"<<endl;
            cout<<"     3.LEFT VIEW"<<endl;
            cout<<"     4.RIGHT VIEW"<<endl;
            cout<<"Choose your option..."<<endl;
            int op2;
            cin>>op2;
            switch(op2)
            {
                case 1:
                {
                    topview(root);
                    break;
                }
                case 2:
                {
                    bottomview(root);
                    break;
                }
                case 3:
                {
                    left_view(root);
                    break;
                }
                case 4:
                {
                    right_view(root);
                    break;
                }

            }
            cout<<"press 0 to continue..."<<endl;
            int op;
            cin>>op;
            if(op==0)goto l3;
            goto l;
        }
        case 6:
        {
            bfs1(root);
            break;  
        }
        case 7:
        {
            int sum;
            cout<<"Enter sum: "<<endl;
            cin>>sum;
            pairsum(root,sum)?cout<<"Pair with given sum is present"<<endl:cout<<"Not present"<<endl;
            break; 
        }
        case 8:
        {
            cout<<"Enter value of k.."<<endl;
            int k;
            cin>>k;
            kthmin_max(root,k);
            break;
        }
        case 9:
        {
            cout<<"Enter node.."<<endl;
            int k;
            cin>>k;
            int fl=floor(root,k);
            int cl=ceil(root,k);
            fl==INT_MAX?cout<<"Floor=NULL"<<endl:cout<<"Floor="<<fl<<endl;
            cl==-1?cout<<"Ceil =NULL"<<endl:cout<<"Ceil ="<<cl<<endl;
            break;
        }
        case 10:
        {
            root=Bbst(root);
            cout<<"Balanced Sucessfully"<<endl;
            break;
        }
        case 11:
        {
            sameornot()?cout<<"Same "<<endl:cout<<"Not same"<<endl;
            break;
        }
        case 12:
        {
            binarytoBst();
            break;
        }
        default:
        return 0;
    }
    goto l;

}