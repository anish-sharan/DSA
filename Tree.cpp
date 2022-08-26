#include<bits/stdc++.h>
#define coutA(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
#define nl cout<<endl;
using namespace std;


class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int k)
    {
        data=k;
        left=right=NULL;
    }
};
void print(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}



//level order traversal

//void level(node *root)
//{
//    queue<node*> q;
//    q.push(root);
//    if(root==NULL)
//    {
//        return;
//    }
//    while(!q.empty())
//    {
//        node *curr=q.front();
//        q.pop();
//        cout<<curr->data<<" ";
//        if(curr->left!=NULL)
//        {
//            q.push(curr->left);
//        }
//        if(curr->right!=NULL)
//        {
//            q.push(curr->right);
//        }
//    }
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(20);
//    root->right=new node(30);
//    root->left->left=new node(40);
//    root->left->right=new node(50);
//    print(root);
//    cout<<endl;
//    level(root);
//}

// Reverse Level Order Traversal

//void level(node *root)
//{
//    if(root==NULL)
//    {
//        return;
//    }
//    queue<node*> q;
//    int count=0;
//    q.push(root);
//    q.push(NULL);
//    vector<int> v,ans;
//    while(q.size()>1)
//    {
//        node *curr=q.front();
//        q.pop();
//        if(curr==NULL)
//        {
//            q.push(NULL);
//            v.push_back(-1);
//            continue;
//        }
//        cout<<curr->data<<" ";
//        v.push_back(curr->data);
//        if(curr->left!=NULL)
//        {
//            q.push(curr->left);
//        }
//        if(curr->right!=NULL)
//        {
//            q.push(curr->right);
//        }
//    }
//    cout<<endl;
//    coutA(v,v.size());
//    stack<int> st;
//    for(int i=v.size()-1;i>=0;i--)
//    {
//        if(v[i]==-1)
//        {
//            while(!st.empty())
//            {
//                ans.push_back(st.top());
//                st.pop();
//            }
//            continue;
//        }
//        st.push(v[i]);
//    }
//    while(!st.empty())
//    {
//        ans.push_back(st.top());
//        st.pop();
//    }
//    coutA(ans,ans.size());
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(20);
//    root->right=new node(30);
//    root->left->left=new node(40);
//    root->left->right=new node(60);
//    print(root);
//    cout<<endl;
//    level(root);
//}

// height of tree

//void height(node *root)
//{
//    queue<node*> q;
//    q.push(root);
//    q.push(NULL);
//    vector<int> v;
//    int count=0;q
//    while(q.size()>1)
//    {
//        node *curr=q.front();
//        q.pop();
//        if(curr==NULL)
//        {
//            q.push(NULL);
//            v.push_back(-1);
//            continue;
//        }
//        cout<<curr->data<<" ";
//        v.push_back(curr->data);
//        if(curr->left!=NULL)
//        {
//            q.push(curr->left);
//        }
//        if(curr->right!=NULL)
//        {
//            q.push(curr->right);
//        }
//    }
//    cout<<endl;
//    for(int i=0;i<v.size();i++)
//    {
//        if(v[i]==-1)
//            count++;
//    }
//    coutA(v,v.size());
//}
//int main()
//{
//    node *root=new node(2);
//    root->right=new node(1);
//    root->right->left=new node(3);
//    height(root);
//}



//Odd even level difference

//void level(node *root)
//{
//    queue<node*> q;
//    q.push(root);
//    q.push(NULL);
//    vector<int> v;
//    int count=0,even=0,odd=0;
//    if(root==NULL)
//    {
//        return;
//    }
//    while(q.size()>1)
//    {
//        node *curr=q.front();
//        q.pop();
//        if(curr==NULL)
//        {
//            q.push(NULL);
//            v.push_back(-1);
//            continue;
//        }
//        cout<<curr->data<<" ";
//        v.push_back(curr->data);
//        if(curr->left!=NULL)
//        {
//            q.push(curr->left);
//        }
//        if(curr->right!=NULL)
//        {
//            q.push(curr->right);
//        }
//    }
//    cout<<endl;
//    coutA(v,v.size());
//    for(int i=0;i<v.size();i++)
//    {
//        if(v[i]==-1)
//        {
//            count++;
//            continue;
//        }
//        if(count%2==0)
//        {
//            even+=v[i];
//        }
//        else if(count%2!=0)
//        {
//            odd+=v[i];
//        }
//    }
//    cout<<odd<<" "<<even;
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(20);
//    root->right=new node(30);
//    root->left->left=new node(40);
//    root->left->right=new node(60);
//    print(root);
//    cout<<endl;
//    level(root);
//}

//Level order traversal Line by Line

//vector<vector<int>> levelOrder(Node* node)
//{
//    queue<Node*> q;
//    q.push(node);
//    q.push(NULL);
//    vector<int> t;
//    vector<vector<int>> ans;
//    while(q.size()>1)
//    {
//        Node *curr=q.front();
//        q.pop();
//        if(curr==NULL)
//        {
//            q.push(NULL);
//            ans.push_back(t);
//            t.clear();
//            continue;
//        }
//        t.push_back(curr->data);
//        if(curr->left!=NULL)
//        {
//            q.push(curr->left);
//        }
//        if(curr->right!=NULL)
//        {
//            q.push(curr->right);
//        }
//    }
//    if(t.size()>0)
//        ans.push_back(t);
//        return ans;
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(20);
//    root->right=new node(30);
//    root->left->left=new node(40);
//    root->left->right=new node(60);
//    print(root);
//    cout<<endl;
//    vector<vector<int>> ans=levelOrder(root);
//    for(int i=0;i<ans.size();i++)
//    {
//        for(int j=0;j<ans[i].size();i++)
//        {
//            cout<<ans[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//}


// left view

//void left(node *root)
//{
//    queue<node*> q;
//    vector<int> v;
//    q.push(root);
//    while(q.empty()==false)
//    {
//        int count=q.size();
//        for(int i=0;i<count;i++)
//        {
//            node *curr=q.front();
//            q.pop();
//            cout<<curr->data<<" ";
//            if(i==0)
//            {
//                v.push_back(curr->data);
//            }
//            if(curr->left!=NULL)
//            {
//                q.push(curr->left);
//                cout<<endl;
//            }
//            if(curr->right!=NULL)
//            {
//                q.push(curr->right);
//                cout<<endl;
//            }
//        }
//                v.push_back(-1);
//        cout<<endl;
//    }
//    coutA(v,v.size());
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(20);
//    root->right=new node(30);
//    root->left->left=new node(40);
//    root->left->right=new node(60);
//    print(root);
//    cout<<endl;
//    left(root);
//}

//right view

//void right(node *root)
//{
//    queue<node*> q;
//    vector<int> v;
//    q.push(root);
//    if(root==NULL)
//    {
//        return;
//    }
//    while(q.empty()==false)
//    {
//        int count=q.size();
//        for(int i=0;i<count;i++)
//        {
//            node *curr=q.front();
//            q.pop();
//            if(i==count-1)
//            {
//                cout<<curr->data<<" ";
//            }
//            if(curr->left!=NULL)
//            {
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL)
//            {
//                q.push(curr->right);
//            }
//        }
//    }
//    coutA(v,v.size());
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(20);
//    root->right=new node(30);
//    root->left->left=new node(40);
//    root->left->right=new node(60);
//    print(root);
//    cout<<endl;
//    right(root);
//}


//zigzag tree traversal

//void zigzag(node *root)
//{
//    queue<node*> q;
//    vector<int> even,odd;
//    int level=0;
//    q.push(root);
//    if(root==NULL)
//    {
//        return;
//    }
//    while(q.empty()==false)
//    {
//        int count=q.size();
//        for(int i=0;i<count;i++)
//        {
//            node *curr=q.front();
//            q.pop();
////            cout<<curr->data<<" ";
//            if(level%2==0)
//            {
//                even.push_back(curr->data);
//            }
//            if(level%2!=0)
//            {
//                odd.push_back(curr->data);
//            }
//            if(curr->left!=NULL)
//            {
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL)
//            {
//                q.push(curr->right);
//            }
//            if(i==count-1)
//            {
//                level++;
//                if(odd.size()>0)
//                {
//                    reverse(odd.begin(),odd.end());
//                    even.insert(even.end(),odd.begin(),odd.end());
//                    odd.clear();
//                }
//            }
//        }
//    }
//    cout<<endl;
//    coutA(even,even.size());
//}
//int main()
//{
//    node *root=new node(7);
//    root->left=new node(9);
//    root->right=new node(7);
//    root->left->left=new node(8);
//    root->left->right=new node(8);
//    root->right->left=new node(6);
//    root->left->left->left=new node(10);
//    root->left->left->right=new node(9);
//    print(root);
//    cout<<endl;
//    top(root);
//}


//Level order traversal in spiral form

//vector<int> findSpiral(Node *root)
//{
//    queue<Node*> q;
//    vector<int> even,odd;
//    int level=0;
//    q.push(root);
//    if(root==NULL)
//    {
//        return even;
//    }
//    while(q.empty()==false)
//    {
//        int count=q.size();
//        for(int i=0;i<count;i++)
//        {
//            Node *curr=q.front();
//            q.pop();
////            cout<<curr->data<<" ";
//            if(level%2!=0)
//            {
//                even.push_back(curr->data);
//            }
//            if(level%2==0)
//            {
//                odd.push_back(curr->data);
//            }
//            if(curr->left!=NULL)
//            {
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL)
//            {
//                q.push(curr->right);
//            }
//            if(i==count-1)
//            {
//                level++;
//                if(odd.size()>0)
//                {
//                    reverse(odd.begin(),odd.end());
//                    even.insert(even.end(),odd.begin(),odd.end());
//                    odd.clear();
//                }
//            }
//        }
//    }
//    return e ven;
//}
//int main()
//{
//    node *root=new node(10);
////    root->left=new node(20);
////    root->right=new node(30);
////    root->left->left=new node(40);
////    root->left->right=new node(60);

//    print(root);
//    cout<<endl;
//    level(root);
//}



//Determine if Two Trees are Identical


//vector<int> is(Node *root)
//{
//    queue<Node*> q;
//    int count=0;
//    q.push(root);
//    q.push(NULL);
//    vector<int> v,ans;
//    if(root==NULL)
//    {
//        return v;
//    }
//    while(q.size()>1)
//    {
//        Node *curr=q.front();
//        q.pop();
//        if(curr==NULL)
//        {
//            q.push(NULL);
//            v.push_back(-1);
//            continue;
//        }
//        v.push_back(curr->data);
//        if(curr->left!=NULL)
//        {
//            q.push(curr->left);
//        }
//        if(curr->right!=NULL)
//        {
//            q.push(curr->right);
//        }
//    }
//    return v;
//}
//bool isIdentical(Node *r1, Node *r2)
//{
//    //Your Code here
//    vector<int> l1=is(r1),l2=is(r2);
//    if(l1.size()!=l2.size())
//    {
//        return false;
//    }
//    for(int i=0;i<l1.size();i++)
//    {
//        if(l1[i]!=l2[i])
//        {
//            return false;
//        }
//    }
//    return true;
//
//}


//maximum width of tree

//void width(node *root)
//{
//    queue<node*> q;
//    q.push(root);
//    int width=0,ans;
//    while(q.empty()==false)
//    {
//        int count=q.size();
//        for(int i=0;i<count;i++)
//        {
//            node *curr=q.front();
//            q.pop();
//            cout<<curr->data<<" ";
//            width++;
//            if(curr->left!=NULL)
//            {
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL)
//            {
//                q.push(curr->right);
//            }
//        }
//        cout<<" "<<width<<" "<<endl;
//        ans=max(width,ans);
//        width=0;
//    }
//}
//int main()
//{
//    node *root=new node(1);
//    root->left=new node(2);
//    root->right=new node(3);
//    root->left->left=new node(4);
//    root->left->right=new node(5);
//    root->left->left->right=new node(8);
//    root->right->left=new node(6);
//    root->right->right=new node(7);
//    print(root);
//    nl
//    width(root);
//}

//Connect Nodes at Same Level

//struct Node
//{
//  int data;
//  Node *left,  *right;
//  Node *nextRight;
//};
//void connect(Node *root)
//{
//   queue<Node*> q;
//   vector<Node*> t;
//   q.push(root);
//   while(q.empty()==false)
//   {
//       int count=q.size();
//       for(int i=0;i<count;i++)
//       {
//           Node *curr=q.front();
//           q.pop();
//           t.push_back(curr);
//           if(curr->left!=NULL)
//           {
//               q.push(curr->left);
//           }
//           if(curr->right!=NULL)
//           {
//               q.push(curr->right);
//           }
//       }
//       for(int i=0;i<t.size()-1;i++)
//       {
//           t[i]->nextRight=t[i+1];
//       }
//       t[t.size()-1]->nextRight=NULL;
//       t.clear();
//   }
//}


//Count Leaves in Binary Tree

//void solve(node *root)
//{
//    queue<node*> q;
//    q.push(root);
//    int leafCount=0;
//    while(q.empty()==false)
//    {
//        int count=q.size();
//        for(int i=0;i<count;i++)
//        {
//            node *curr=q.front();
//            q.pop();
//            if(curr->left==NULL && curr->right==NULL)
//            {
//                leafCount++;
//            }
//            if(curr->left!=NULL)
//            {
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL)
//            {
//                q.push(curr->right);
//            }
//        }
//    }
//    cout<<leafCount;
//}
//int main()
//{
//    node *root=new node(1);
//    root->left=new node(10);
//    root->left=new node(39);
//    root->left->left=new node(5);
//    print(root);
//    nl
//    leaf(root);
//}


//Minimum Depth of a Binary Tree

//void depth(node *root)
//{
//    queue<node*> q;
//    q.push(root);
//    vector<int> d;
//    int level=1;
//    while(q.empty()==false)
//    {
//        int count=q.size();
//        for(int i=0;i<count;i++)
//        {
//            node *curr=q.front();
//            q.pop();
//            if(curr->left==NULL && curr->right==NULL)
//            {
//                d.push_back(level);
//            }
//            if(curr->left!=NULL)
//            {
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL)
//            {
//                q.push(curr->right);
//            }
//        }
//        level++;
//    }
//    sort(d.begin(),d.end());
//    cout<<d[0];
//}
//int main()
//{
//    node *root=new node(1);
//    root->left=new node(2);
//    root->right=new node(3);
//    root->left->left=new node(4);
//    print(root);
//    nl
//    depth(root);
//}

//Leaf at same level

//void same(node *root)
//{
//    queue<node*> q;
//    q.push(root);
//    int level=0;
//    set<int> lev;
//    while(q.empty()==false)
//    {
//        int count=q.size();
//        for(int i=0;i<count;i++)
//        {
//            node *curr=q.front();
//            q.pop();
//            if(curr->left==NULL && curr->right==NULL)
//            {
//                lev.insert(level);
//            }
//            if(curr->left!=NULL)
//            {
//                q.push(curr->left);
//            }
//            if(curr->right!=NULL)
//            {
//                q.push(curr->right);
//            }
//        }
//        level++;
//    }
//    for(auto it:lev)
//    {
//        cout<<it<<" ";
//    }
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(20);
//    root->right=new node(30);
//    root->left->left=new node (10);
//    root->left->right=new node (15);
//    print(root);
//    cout<<endl;
//    same(root);
//}

// Inorder Traversal (Iterative)

//void inorderIter(node *root)
//{
//    stack<node*> st;
//    node *curr=root;
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
//        curr=curr->right;
//    }
//}
//int main()
//{
//    node *root=new node(1);
//    root->left=new node(2);
//    root->right=new node(3);
//    root->left->left=new node(4);
//    root->left->right=new node(5);
//    print(root);
//    nl
//    inorderIter(root);
//}

// PreOrder Traversal Iterative

//void preOrderIter(node *root)
//{
//    stack<node*> st;
//    node *curr=root;
//    while(curr!=NULL || st.empty()==false)
//    {
//        while(curr!=NULL)
//        {
//            cout<<curr->data<<" ";
//            st.push(curr);
//            curr=curr->left;
//        }
//        curr=st.top();
//        st.pop();
//        curr=curr->right;
//    }
//}
//int main()
//{
//    node *root=new node(1);
//    root->left=new node(2);
//    root->right=new node(3);
//    root->left->left=new node(4);
//    root->left->right=new node(5);
//    print(root);
//    nl
//    preOrderIter(root);
//}


//two mirror tree

//int areMirror(Node* a, Node* b)
//{
//    if(a == NULL && b==NULL) return 1;
//    if(a== NULL || b== NULL || a->data != b->data) return 0;
//    return areMirror(a->left , b->right) && areMirror(a->right , b->left);
//}

//Lowest Common Ancestor in a Binary Tree

//node* lca(node* root ,int n1 ,int n2 )
//{
//    if(root==NULL)
//        return NULL;
//    if(root->data==n1 || root->data==n2)
//        return root;
//    node *l1=lca(root->left,n1,n2);
//    node *l2=lca(root->right,n1,n2);
//    if(l1!=NULL && l2!=NULL)
//        return root;
//    if(l1!=NULL)
//        return l1;
//    else
//        return l2;
//}
//int main()
//{
//    node *root=new node(10);
//    root->left=new node(20);
//    root->right=new node(30);
//    root->left->left=new node(40);
//    root->left->right=new node(60);
//    print(root);
//    nl
//    node *t=lca(root);
//    if(node!=NULL)
//    {
//        cout<<node->data;
//    }
//    else
//    {
//        cout<<-1;
//    }
//}

