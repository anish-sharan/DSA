#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define nl cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void printQ(queue<int> t)
{
    while(!t.empty())
    {
        cout<<t.front()<<" ";
        t.pop();
    }
    cout<<endl;
}




// Reverse First K elements of Queue

//void printS(stack<int> t)
//{
//    while(!t.empty())
//    {
//        cout<<t.top()<<" ";
//        t.pop();
//    }
//    cout<<endl;
//}
//void solve(queue<int> q,int k)
//{
//    queue<int> t=q,ans;
//    printQ(t);
//    stack<int> st;
//    while(k--)
//    {
//        st.push(t.front());
//        t.pop();
//    }
//    printQ(t);
//    printS(st);
//    while(!st.empty())
//    {
//        ans.push(st.top());
//        st.pop();
//    }
//    while(!t.empty())
//    {
//        ans.push(t.front());
//        t.pop();
//    }
//    printQ(ans);
//}
//int main()
//{
//    queue<int> q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    q.push(4);
//    q.push(5);
//    solve(q,3);
//}

// Queue using two Stacks

//void StackQueue :: push(int x)
//{
//    s1.push(x);
//}
//int StackQueue :: pop()
//{
//    int ans;
//        while(!s1.empty())
//        {
//            s2.push(s1.top());
//            s1.pop();
//        }
//        if(s2.empty())
//        {
//            return -1;
//        }
//        ans=s2.top();
//        s2.pop();
//        while(!s2.empty())
//        {
//            s1.push(s2.top());
//            s2.pop();
//        }
//        return ans;
//}
