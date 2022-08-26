#include<bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


// SWAP ALL EVEN AND ODDBITS

//unsigned int swapBits(unsigned int n)
//{
//    int e=n&0xAAAAAAAA;
//    int r=n&0x55555555;
//    e>>=1;
//    r<<=1;
//    return (e|r);
//    // Your code here
//}
//int main()
//{
//    swapBits(23);
//}

// BIT DIFFERENCE

//void countS(int n)
//{
//    int count=0;
//    while(n>0)
//    {
//        n=(n&(n-1));
//        count++;
//    }
//    cout<<count;
//}
//void solve(int a,int b)
//{
//    cout<<(a^b);nl
//    countS(a^b);
//}
//int main()
//{
//    //solve(10,20);
//    solve(34,7);
//}

// POWER OF TWO

//long long countSetBits(long long n)
//{
//    long long t,count=0;
//    while(n>0)
//    {
//        t=n&1;
//        if(t==1)
//        {
//            count++;
//        }
//        n>>=1;
//    }
//    return count;
//}

//// Function to check power of two

//bool isPowerofTwo(long long n){
//    if(n==1)
//    return true;
//    long long c;
//    c=countSetBits(n);
//    if(c==1)
//    return true;
//    else
//    return false;
//    // Your code here
//
//}
//int main()
//{
//    cout<<isPowerofTwo(4);
//}

// FIRST SET BIT

//int firstSet(int n)
//{
//    int bit,count=0;
//    while(n>0)
//    {
//        bit=n&1;
//        if(bit)
//        {
//            cout<<count+1;
//            break;
//        }
//        else
//        {
//            count++;
//        }
//        n>>=1;
////        cout<<n<<"\n";
//    }
//}
//int main()
//{
//    int b=12;
//    firstSet(b);
//}

//  CHECK KTH BIT IS SET OR NOT

//int checkKthBit(int n,int k)
//{
//    while(k--)
//        n>>=1;
//    if(n&1)
//    {
//        cout<<"True";
//    }
//    else
//    {
//        cout<<"False";
//    }
//}
//int main()
//{
//    //int n=4,k=0;
//    int n=4,k=2;
//    checkKthBit(n,k);
//}

// RIGHTMOST DIFFERENT BIT

//int posOfRightMostDiffBit(int m, int n)
//{
//    int count=0,a,b ;
//    while(m>0 || n>0)
//    {
//        a=m&1;
//        b=n&1;
//        if(a!=b)
//        {
//            cout<<count+1;
//            break;
//        }
//        else
//        {
//            count++;
//        }
//        m>>=1;n>>=1;
//    }
//}
//int main()
//{
//    int a=52,b=4;
//    posOfRightMostDiffBit(a,b);
//}


/*
bool checkSparse(int n)
{
    // n is not sparse if there is set
    // in AND of n and n/2
    if (n & (n>>1))
        return false;

    return true;
}

// Driver program
int main()
{
    cout << checkSparse(72) << endl;
    cout << checkSparse(12) << endl;
    cout << checkSparse(2) << endl;
    cout << checkSparse(3) << endl;
    return 0;
}
*/

// GREY CODE


//void solve(int n)
//{
//    cout<<(n^(n>>1));
//}
//int main()
//{
//    solve(10);
//}

// SPARSE NUMBER

//void solve(int n)
//{
//    cout<<(n&(n>>1));
//}
//int main()
//{
//    solve(10);
//}




// Exceptionally odd


//void solve(int arr[],int n)
//{
//    coutA(arr,n);nl;
//    int res=0;
//    for(int i=0;i<n;i++)
//    {
//        res=res^arr[i];
//    }
//    cout<<res;
//}
//int main()
//{
//    int n = 7,arr[] = {1, 2, 3, 2, 3, 1, 3};
//    solve(arr,n);
//}


//Power Set

//vector<string> AllPossibleStrings(string s)
//{
//    int n=s.length(),ex=0,tot=pow(2,n);
//    vector<string> ans;
//    string h,ttt;
//    h+=s[0];
//    ans.push_back(h);
//    for(int i=2;i<=tot;i++)
//    {
//    ex=i;
//    string t;
//    for(int j=0;j<n;j++)
//    {
//        if(ex&1==1)
//        {
//            t+=s[j];
//        }
//        ex>>=1;
//    }
//    ans.push_back(t);
//    }
//    sort(ans.begin(),ans.end());
//    ans.erase(ans.begin());
//    return ans;
//}
//int main()
//{
//    vector<string> ans=AllPossibleStrings("abc");
//    for(auto it:ans)
//    {
//        cout<<it<<" ";
//    }
//}

//Find position of set bi

//int findPosition(int N)
//{
//    int count=0,powerOf2;
//    powerOf2=(N&(N-1));
//    cout<<"Power of two "<<N<<endl;
//    if(powerOf2!=0 || N==0)
//    {
//        cout<<"NOT POWER OF TWO"<<endl;
//        return -1;
//    }
//    else if(N==1)
//    {
//        return 1;
//    }
//    else
//    {
//        return log2(N)+1;
//    }
//
//}
//int main()
//{
//    cout<<endl<<findPosition(643814);
//}


//Non Repeating Numbers

//vector<int> singleNumber(vector<int> nums)
//{
//    vector<int> ans;
//    map<int,int> mp;
//    for(int i=0;i<nums.size();i++)
//    {
//        mp[nums[i]]++;
//    }
//    for(auto it:mp)
//    {
//        if(it.second==1)
//        {
//            ans.push_back(it.first);
//        }
//    }
//    return ans;
//}
//int main()
//{
//    vector<int> nums={1, 2, 3, 2, 1, 4},ans=singleNumber(nums);
//    for(auto it:nums)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    for(auto it:ans)
//    {
//        cout<<it<<" ";
//    }
//}

//  Longest Consecutive 1's

//int max(int a,int b)
//{
//    if(a>b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}
//void solve(int N)
//{
//    cout<<N<<endl;
//    int bit,count,ans=0;
//    while(N>0)
//    {
//        if(N&1==1)
//        {
//            cout<<1;
//            bit=1;
//            count++;
//        }
//        else
//        {
//            cout<<0;
//            bit=0;
//            count=0;
//        }
//        N>>=1;
//        ans=max(count,ans);
//        cout<<" count : "<<count<<endl;
//    }
//    cout<<endl<<ans;
//}
//int main()
//{
//    solve(222);
//}

//Set kth bit

//int setKthBit(int N, int K)
//{
//    int num=pow(2,K);
//    return (N|num);
//}

//  Find the element that appears once

//int search(int A[], int N)
//{
//    int ans=0;
//    for(int i=0;i<N;i++)
//    {
//        ans^=A[i];
//    }
//    return ans;
//
//}

// Sort by Set Bit Count

//int count(int n)
//{
//    int c=0;
//    while(n>0)
//    {
//        n=(n&(n-1));
//        c++;
//    }
//    return c;
//}
//static bool cmp(pair<int,int>a,pair<int,int>b)
//{
//   return a.second > b.second;
//}
//void sortBySetBitCount(int arr[], int n)
//{
//    vector<pair<int,int>> pr;
//    int ind=0;
//    for(int i=0;i<n;i++)
//    {
//        pr.push_back(make_pair(arr[i],count(arr[i])));
//    }
//    stable_sort(pr.begin(),pr.end(),cmp);
//    for(int i = 0;i<n;i++)
//    {
//        arr[i] = pr[i].first;
//    }
//}

