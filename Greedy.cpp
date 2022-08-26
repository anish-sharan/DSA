#include<bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define pt(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


//Activity Selection

//void solve(int start[],int enda[],int n)
//{
//    vector<pair<int,int>> vp;
//    pair<int,int> p;
//    for(int i=0;i<n;i++)
//    {
//        vp.push_back(make_pair(end[i],start[i]));
//    }
//    sort(vp.begin(),vp.end());
//    int i=0,res=1;
//    for(int j=1;j<n;j++)
//    {
//        if(vp[j].second>vp[i].first)
//        {
//            res++;
//            i=j;
//        }
//    }
//    return res;
//    cout<<"ans :- "<<res;
//}
//int main()
//{
//    int N = 4,start[] = {1, 3, 2, 5},enda[] = {2, 4, 3, 6};
//    solve(start,enda,N);
//}

//Maximize Toys

//void solve(int arr[],int N,int K)
//{
//    coutA(arr,N);
//    sort(arr,arr+N);
//    cout<<endl;
//    coutA(arr,N);
//    int res=0,rem=K;
//    for(int i=0;i<N;i++)
//    {
//        if(rem>=arr[i])
//        {
//            res++;
//            rem-=arr[i];
//        }
//    }
//    cout<<endl<<"Ans : "<<res;
//}
//int main()
//{
//    int N = 7 ,K = 50,arr[] = {1, 12, 5, 111, 200, 1000, 10};
//    solve(arr,N,K);
//}

//Largest number with given sum

//string solve(int n,int sum)
//{
//    string str;
//    int maxi=n*9,diff=maxi-sum;
//    int ans[n]={0};
//    fill_n(ans,n,9);
//    if(n*9<sum)
//    {
//        return "-1";
//    }
//    if(sum==0)
//    {
//        for(int i=0;i<n;i++)
//        {
//            str+='0';
//        }
//        return str;
//    }
//    for(int i=n-1;i>=0;i--)
//    {
//        if(diff>=ans[i])
//        {
//            diff-=ans[i];
//            ans[i]=0;
//        }
//        else if(diff>=0 && diff<=9)
//        {
//            ans[i]-=diff;
//            diff=0;
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        str+=to_string(ans[i]);
//    }
//    return str;
//
//}
//int main()
//{
//    string ans=solve(1,1);
//    cout<<ans;
//}

//N meetings in one room

//void solve(int start[],int en[],int n)
//{
//    vector<pair<int,int>> vp;
//    for(int i=0;i<n;i++)
//    {
//        vp.push_back(make_pair(en[i],start[i]));
//    }
//    sort(vp.begin(),vp.end());
//    for(auto it:vp)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }
//    int ans=1,t=vp[0].first;
//    for(int i=1;i<n;i++)
//    {
//        if(t<vp[i].second)
//        {
//            ans++;
//            t=vp[i].first;
//        }
//    }
//    cout<<ans;
//}
//int main()
//{
//    int N = 6,start[] = {1,3,0,5,8,5},enda[] =  {2,4,6,7,9,9};
//    solve(start,enda,N);
//}



//Smallest number

//void solve(int S,int D)
//{
//    int arr[D],maxi=D*9;
//    int diff=maxi-S;
//    string str;
//    fill_n(arr,D,9);
//    if(S>(9*D))
//    {
//        return "-1";
//    }
//    for(int i=0;i<D;i++)
//    {
//        if(diff>=arr[i])
//        {
//            diff-=arr[i];
//            arr[i]=0;
//            if(i==0)
//            {
//                arr[i]=1;
//                diff++;
//            }
//        }
//        else if(diff>=0 && diff<=9)
//        {
//            arr[i]-=diff;
//            diff=0;
//        }
//    }
//    for(int i=0;i<D;i++)
//    {
//        str+=to_string(arr[i]);
//    }
//    coutA(arr,D);
//    cout<<str;
//}
//int main()
//{
//    solve(9,2);
//}

//Chocolate Distribution Problem

//void solve(int a[],int n,int m)
//{
//    coutA(a,n);cout<<endl;
//    sort(a,a+n);
//    coutA(a,n);cout<<endl;
//    int diff,mini=INT_MAX;
//    for(int i=0;i<n-m+1;i++)
//    {
//        cout<<a[i]<<" "<<a[i+m-1]<<" "<<a[i]-a[i+m-1]<<endl;
//        diff=a[i+m-1]-a[i];
//        mini=min(mini,diff);
//    }
//    cout<<"Ans : "<<mini;
//}
//int main()
//{
//    int N = 8, M = 5,A[] = {3, 4, 1, 9, 56, 7, 9, 12};
//    solve(A,N,M);
//}

//Fractional Knapsack

//void solve(int values[],int weight[],int W,int n)
//{
//    vector<pair<double,int>> vp;
//    for(int i=0;i<n;i++)
//    {
//        vp.push_back(make_pair(double(value[i])/double(weight[i]),arr[i].weight));
//    }
//    sort(vp.rbegin(),vp.rend());
//    double res=0.00;
//    int rem_weg=W;
//    for(int i=0;i<n;i++)
//    {
//        if(vp[i].second<=rem_weg)
//        {
//            res+=vp[i].first*vp[i].second;
//            rem_weg-=vp[i].second;
//        }
//        else if(vp[i].second>rem_weg)
//        {
//            res+=rem_weg*((vp[i].first*vp[i].second)/vp[i].second);
//            break;
//        }
//    }
//    cout<<res;
//}
//int main()
//{
//    int N = 3, W = 50,values[] = {60,100,120},weight[] = {10,20,30};
//    solve(values,weight,W,N);
//}



//Shop in Candy Store

//void solve(int candies[],int N,int K)
//{
//    sort(candies,candies+N);
//    coutA(candies,N);cout<<endl<<"N="<<N<<" K="<<K;
//    int mini=0,maxi=0,step=0,last=N-1;
//    for(int i=0;i<N;i++)
//    {
//        if(N>0)
//        {
//        {
//            mini+=candies[i];
//            N-=K;
//            step++;
//        }
//        else if(N<=0)
//        {
//            break;
//        }
//    }
//    while(step--)
//    {
//        maxi+=candies[last];
//        last--;
//    }
//    cout<<endl<<mini<<" "<<maxi;
//}
//int main()
//{
////    int N = 4,K = 2,candies[] = {3, 2, 1, 4};
//    int N = 5,K = 4,candies[] = {3, 2 ,1 ,4 ,5};
//    solve(candies,N,K);
//}

// Theft at World Bank

//bool perfectSquare(long double n)
//{
//    if(n>0)
//    {
//        long long sq=sqrt(n);
//        if(n==(sq*sq))
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//}
//long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
//vector<pair<long double,long double>> pr;
//for(int i=0;i<N;i++)
//{
//    if(perfectSquare(w[i]))
//    {
//        continue;
//    }
//    pr.push_back(make_pair(double(p[i])/double(w[i]),double(w[i])));
//}
//sort(pr.rbegin(),pr.rend());
//double res=0.00;
//int rem_weg=C;
//for(int i=0;i<N;i++)
//{
//    if(pr[i].second<=rem_weg)
//    {
//        res+=pr[i].first*pr[i].second;
//        rem_weg-=pr[i].second;
//    }
//    else if(pr[i].second>rem_weg)
//    {
//        res+=rem_weg*((pr[i].first*pr[i].second)/pr[i].second);
//        break;
//    }
//}
//return res;
//}
