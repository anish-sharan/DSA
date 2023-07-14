#include<bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
//
void printStack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
//void solve(stack<int> s)
//{
//    map<int,int> mp;
//    while(!s.empty())
//    {
//        cout<<s.top()<<" ";
//        mp[s.top()]++;
//        s.pop();
//    }
//    cout<<endl;
//    for(auto it:mp)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//        while(it.second--)
//            s.push(it.first);
//    }
//    printStack(s);
//
//}
//int main()
//{
//    stack<int> s;
//    s.push(11);s.push(2);s.push(32);s.push(3);s.push(41);s.push(41);
//    solve(s);
//
//}

// Parenthesis Checker

//bool matching(char a,char b)
//{
//    if((a=='{' && b=='}') || (a=='[' && b==']') || (a=='(' && b==')'))
//       return true;
//    else
//        return false;
//}
//bool ispar(string x)
//{
//    stack<char> s;
//    for(int i=0;i<x[i];i++)
//    {
//        if(x[i]=='[' || x[i]=='(' || x[i]=='{')
//        {
//            s.push(x[i]);
//        }
//        else
//        {
//            if(s.empty())
//                return false;
//            else if(!matching(s.top(),x[i]))
//            {
//                return false;
//            }
//            else
//            {
//                s.pop();
//            }
//        }
//    }// Your code here
//        return (s.empty());
//}
//int main()
//{
//    string s="{([])}";
//    (ispar(s))?(cout<<"Balanced"):(cout<<"Not Balanced");
//
//}


//Delete middle element of a stack

//void solve(stack<int> st,int sizeOfStack)
//{
//    stack<int> t=st;
//    int middle=ceil(sizeOfStack/2),middle2;
//    cout<<sizeOfStack<<" "<<middle<<endl;
//    printStack(t);
//    vector<int> v;
//    cout<<endl;
//    while(!t.empty())
//    {
//        v.push_back(t.top());
//        t.pop();
//    }
//    for(auto it:v)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    if(sizeOfStack%2!=0)
//    {
//        cout<<v[middle];
//    }
//    else
//    {
//        cout<<v[middle]<<" "<<v[middle-1];
//    }
//    cout<<endl;
//    while(!s.empty())
//    {
//        s.pop();
//    }
//    if(sizeOfStack%2!=0)
//    {
//        for(int i=v.size()-1;i>=0;i--)
//        {
//            if(i==middle)
//            {
//                continue;
//            }
//            s.push(v[i]);
//        }
//    }
//    else
//    {
//        for(int i=v.size()-1;i>=0;i--)
//        {
//            if(i==middle)
//            {
//                continue;
//            }
//            s.push(v[i]);
//        }
//    }
//}
//int main()
//{
//    stack<int> st;
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    st.push(4);
////    st.push(5);
//    solve(st,st.size());
//}

// Get minimum element from stack

//int getMin()
//{
//   stack<int> copy=s;
//   if(s.empty()==true)
//   {
//       return -1;
//   }
//   vector<int> v;
//   while(!copy.empty())
//   {
//       v.push_back(copy.top());
//       copy.pop();
//   }
//   sort(v.begin(),v.end());
//   return v[0];
//}
//int pop()
//{
//   if(s.empty()==true)
//   {
//       return -1;
//   }
//   int ans=s.top();
//   s.pop();
//   return ans;
//}
//void push(int x)
//{
//   s.push(x);
//}

// Reverse a Stack

//vector<int> Reverse(stack<int> St)
//{
//    vector<int> ans;
//    while(!St.empty())
//    {
//        ans.push_back(St.top());
//        St.pop();
//    }
//    return ans;
//}

// Evaluation of Postfix Expression

//int evaluatePostfix(string S)
//{
//    stack<int> st;
//    for(int i=0;i<S.length();i++)
//    {
//        if(S[i]>='0' && S[i]<='9')
//        {
//            st.push(int(S[i]-48));
//        }
//        else if(S[i]=='+' || S[i]=='-' || S[i]=='/' || S[i]=='*')
//        {
//            int a,b;
//            b=st.top();
//            st.pop();
//            a=st.top();
//            st.pop();
//            if(S[i]=='+')
//            {
//                st.push(a+b);
//            }
//            else if(S[i]=='-')
//            {
//                st.push(a-b);
//            }
//            else if(S[i]=='*')
//            {
//                st.push(a*b);
//            }
//            else if(S[i]=='/')
//            {
//                st.push(a/b);
//            }
//        }
//    }
//    return st.top();
//}

// Delete middle element of a stack
// void deleteMid(stack<int>&s, int sizeOfStack)
// {
//     int mid = sizeOfStack/2;
//     vector<int> v;
//     while(!s.empty())
//     {
//         v.push_back(s.top());
//         s.pop();
        
        
//         if(mid == 1)
//         {
//             s.pop();
//             break;
//         }
//         mid--;
//     }
//     reverse(v.begin(),v.end());
//     for(auto it:v)
//     {
//         s.push(it);
//     }
// }
