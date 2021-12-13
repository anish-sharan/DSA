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



































