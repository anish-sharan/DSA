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
void solve(stack<int> s)
{
    map<int,int> mp;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        mp[s.top()]++;
        s.pop();
    }
    cout<<endl;
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
        while(it.second--)
            s.push(it.first);
    }
    printStack(s);

}
int main()
{
    stack<int> s;
    s.push(11);s.push(2);s.push(32);s.push(3);s.push(41);s.push(41);
    solve(s);

}

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



