#include<bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// CHECK IF TWO ARRAY IS EQUAL OR NOT

//bool check(int arr[], int  brr[], int n)
//{
//    sort(arr,arr+n);
//    sort(brr,brr+n);
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]!=brr[i])
//            return false;
//    }
//    return true;
//}
//int main()
//{
//    int a[]={1,2,5,4,0},b[]={2,4,5,0,1};
//    (check(a,b,5))?(cout<<"same"):(cout<<"not same");
//}

// PRINT NON-REPEATING ELEMENT

//vector<int> printNonRepeated(int arr[],int n)
//{
//    map<int,int> mp;
//    vector<int> v;
//    for(int i=0;i<n;i++)
//        mp[arr[i]]++;
//    for(auto it:mp)
//        cout<<it.first<<" "<<it.second<<endl;
//    ne
//    for(int i=0;i<n;i++)
//    {
//        if(mp[arr[i]]==1)
//            v.push_back(arr[i]);
//    }
//    for(auto it:v)
//        cout<<it<<" ";
//}
//int main()
//{
//    int a[]={0 ,9 ,2 ,3 ,4 ,8 ,7},n=10;
//    printNonRepeated(a,n);
//}


// TWO SUM

//bool solve(int A[],int N,int X)
//{
//    set<int> s;
//    coutA(A,N);nl;
//    for(int i=0;i<N;i++)
//    {
//        if(s.find(X-A[i])!=s.end())
//            return true;
//        s.insert(A[i]);
//    }
//    return false;
//}
//int main()
//{
//    int N = 6, X = 16,A[] = {1 ,4, 45, 6, 10, 8};
//    (solve(A,N,X))?(cout<<"YES"):(cout<<"NO");
//}

// Intersection of two arrays

//void solve(int a[],int b[],int n,int m)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<m;i++)
//    {
//        cout<<b[i]<<" ";
//    }
//    cout<<endl;
//    set<int> s;
//    int count=0;
//    for(int i=0;i<n;i++)
//    {
//        s.insert(a[i]);
//    }
//    for(int i=0;i<m;i++)
//    {
//        if(s.find(b[i])!=s.end())
//        {
//            count++;
//            s.erase(b[i]);
//        }
//    }
//    cout<<count;
//}
//int main()
//{
//    int n = 5, m = 4,a[] = {89, 24, 75, 11, 23},b[] = {89,89, 2, 4};
//    solve(a,b,n,m);
//}

//Nuts & bolts

//void solve(char nuts[],char bolts[],int n)
//{
//    char order[]={'!' ,'#' ,'$', '%', '&', '*', '@' ,'^' ,'~'};
//    set<int> nutsSet,boltsSet;
//    cout<<"order -> ";
//    for(int i=0;i<9;i++)
//        cout<<order[i]<<" ";
//    cout<<endl;
//    for(int i=0;i<n;i++)
//    {
//       nutsSet.insert(nuts[i]);
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++)
//    {
//        boltsSet.insert(bolts[i]);
//    }
//    cout<<endl;
//    for(int i=0;i<9;i++)
//    {
//        if(nutsSet.find(order[i])!=nutsSet.end() && boltsSet.find(order[i])!=boltsSet.end())
//        {
//            cout<<order[i]<<" ";
//        }
//    }
//
//}
//int main()
//{
//    char nuts[]={'^', '&', '%', '@', '#', '*', '$', '~', '!'},bolts[]={'~', '#', '@', '%', '&', '*', '$','^', '!'};
//    solve(nuts,bolts,9);
//}


//Sort an array according to the other

//void solve(int A1[],int A2[],int N,int M)
//{
//    for(int i=0;i<N;i++)
//    {
//        cout<<A1[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<M;i++)
//    {
//        cout<<A2[i]<<" ";
//    }
//    cout<<endl;
//    map<int,int> mp;
//    for(int i=0;i<N;i++)
//    {
//        mp[A1[i]]++;
//    }
//    for(auto it:mp)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }
//    cout<<endl;
//    for(int i=0;i<M;i++)
//    {
//        int freq=mp[A2[i]];
//        while(freq--)
//        {
//            mp[A2[i]]--;
//            cout<<A2[i]<<" ";
//        }
//        mp[A2[i]]=0;
//    }
//    for(auto it:mp)
//    {
//        if(it.second>0)
//        {
//            while(it.second--)
//            {
//                cout<<it.first<<" ";
//            }
//        }
//    }
//}
//int main()
//{
////    int N = 11 ,M = 4,A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8},A2[] = {2, 1, 8, 3};
//    int N = 11 ,M = 4,A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8},A2[] = {99, 22, 444, 56};
//    solve(A1,A2,N,M);
//}




//Frequencies of Limited Range Array Elements

//void solve(int arr[],int N,int P)
//{
//    for(int i=0;i<N;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    map<int,int> mp;
//    for(int i=0;i<N;i++)
//    {
//        mp[arr[i]]++;
//    }
////    for(auto it:mp)
////    {
////        cout<<it.first<<" "<<it.second<<endl;
////    }
//    for(int i=0;i<N;i++)
//    {
//        if(i<=P)
//        {
//            arr[i]=mp[i+1];
//        }
//        else
//        {
//            arr[i]=0;
//        }
//    }
//}
//int main()
//{
//    int N = 5,arr[] = {2, 3, 2, 3, 5},P = 5;
//    solve(arr,N,P);
//}



























