#include<bits/stdc++.h>
#define coutA(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

//Check BST

//void checkBST(node *root)
//{
//    stack<node*> st;
//    node *curr=root;
//    vector<int> ans,ans2;
//    bool flag=true;
//    while(curr!=NULL || st.empty()==false)
//    {
//        while(curr!=NULL)
//        {
//            st.push(curr);
//            curr=curr->left;
//        }
//        curr=st.top();
//        cout<<curr->data<<" ";
//        ans.push_back(curr->data);
//        st.pop();
//        curr=curr->right;
//    }
//    ans2.insert(ans2.end(),ans.begin(),ans.end());
//    sort(ans2.begin(),ans2.end());
//    for(int i=0;i<ans.size();i++)
//    {
//        if(ans[i]!=ans2[i] || count(ans.begin(),ans.end(),ans[i])>1)
//        {
//            flag=false;
//            break;
//        }
//    }
//    (flag)?(cout<<"BST"):(cout<<"Not BST");
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(9);
//    root->right=new node(11);
//    checkBST(root);
//}

// Kth largest

//void kThLargest(node *root)
//{
//    vector<int> ans;
//    stack<node*> st;
//    node *curr=root;
//    int k=2;
//    while(curr!=NULL || st.empty()==false)
//    {
//        while(curr!=NULL)
//        {
//            st.push(curr);
//            curr=curr->left;
//        }
//        curr=st.top();
//        st.pop();
//        cout<<curr->data<<" ";
//        ans.push_back(curr->data);
//        curr=curr->right;
//    }
//    reverse(ans.begin())
//    cout<<ans[k-1];
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(9);
//    root->right=new node(11);
//    kThLargest(root);
//}


// kth smallest

//int KthSmallestElement(Node *root, int K)
//{
//    vector<int> ans;
//    stack<Node*> st;
//    Node *curr=root;
//    while(curr!=NULL || st.empty()==false)
//    {
//        while(curr!=NULL)
//        {
//            st.push(curr);
//            curr=curr->left;
//        }
//        curr=st.top();
//        st.pop();
//        ans.push_back(curr->data);
//        curr=curr->right;
//    }
//    if(K>ans.size())
//    {
//        return -1;
//    }
//    return ans[K-1];
//    }
//}


//Brothers From Different Roots  (Count pairs from 2 BST whose sum is equal to given value "X")

//void preOrder(node *root,vector<int> &v)
//{
//    if(root==NULL)
//        return;
//    v.push_back(root->data);
//    preOrder(root->left,v);
//    preOrder(root->right,v);
//}
//void broDiffRoot(node *root1,node *root2,int x)
//{
//    vector<int> v1,v2;
//    set<int> s;
//    int count=0;
//    preOrder(root1,v1);
//    preOrder(root2,v2);
//    coutA(v1,v1.size());
//    coutA(v2,v2.size());
//    for(int i=0;i<v2.size();i++)
//    {
//        s.insert(v2[i]);
//    }
//    for(int i=0;i<v1.size();i++)
//    {
//        if(s.find(x-v1[i])!=s.end())
//        {
//            count++;
//        }
//    }
//    cout<<"count : "<<count;
//}
//int main()
//{
//    node *root=new node(5);
//    root->left=new node(3);
//    root->right=new node(7);
//    root->left->left=new node(2);
//    root->left->right=new node(4);
//    root->right->left=new node(6);
//    root->right->right=new node(8);
//
//    node *root2=new node(10);
//    root2->left=new node(6);
//    root2->right=new node(15);
//    root2->left->left=new node(3);
//    root2->left->right=new node(8);
//    root2->right->left=new node(11);
//    root2->right->right=new node(18);
//
//    broDiffRoot(root,root2,16);
//}


//Find min and max value in a BST

//void preOrder(node *curr,vector<int> &v)
//{
//    if(curr==NULL)
//        return;
//    preOrder(curr->left,v);
//    v.push_back(curr->data);
//    preOrder(curr->right,v);
//}
//void mini(node *root)
//{
//    vector<int> v;
//    preOrder(root,v);
//    coutA(v,v.size());
//    cout<<"minimum item : "<<v[0]<<endl;
//    cout<<"maximum item : "<<v[v.size()-1];
//}
//int main()
//{
//    node *root=new node(5);
//    root->left=new node(4);
//    root->left->left=new node(3);
//    root->left->left=new node(1);
//    root->right=new node(6);
//    root->right->right=new node(7);
//
//    mini(root);
//}

//Count BST nodes that lie in a given range

//void pre(node *root,vector<int> &v)
//{
//    if(root==NULL)
//        return;
//    pre(root->left,v);
//    v.push_back(root->data);
//    pre(root->right,v);
//}
//void getCount(node *root, int l, int h)
//{
//    vector<int> v;
//    int count=0;
//    pre(root,v);
//    coutA(v,v.size());
//    for(int i=0;i<v.size();i++)
//    {
//        if(v[i]>=l && v[i]<=h)
//        {
//            count++;
//        }
//    }
//    cout<<"count : "<<count;
//}
//int main()
//{
//    node *root=new node(5);
//    root->left=new node(4);
//    root->right=new node(6);
//    root->left->left=new node(3);
//    root->right->right=new node(7);
//
//    getCount(root,2,8);
//}
