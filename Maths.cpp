#include<bits/stdc++.h>
#define ll long long
#define ne cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
using namespace std;

// PRIME NUMBER

//bool prime(int N)
//{
//    if(N<=0)
//        return false;
//    if(N==2 || N==3)
//        return true;
//    if(N%2==0 || N%3==0)
//        return false;
//    for(int i=5;i*i<=N;i++)
//        if(N%i==0 || N%(i+2)==0)
//            return false;
//    return true;
//}
//int main()
//{
//    (prime(4))?(cout<<"prime"):(cout<<"not prime");
//}
//

// GP TERM

//double GP(int A,int B,int N)
//{
//    double r,res;
//    r=double(B)/double(A);
//    cout<<"r = "<<r<<endl;
//    res=A*pow(r,N-1);
//    cout<<"r^n-1 =  "<<pow(r,N-1)<<endl<<"res = "<<res<<endl;
//    return res;
//}
//int main()
//{
//    cout<<GP(84,87,3);
//}


// DIGIT IN FACTORIAL

//int digitsInFactorial(int N)
//{
//    double res=0;
//    for(int i=1;i<=N;i++)
//    {
//        cout<<res<<endl;
//        res+=log10(i);
//    }
//    return res+1;
//}
//int main()
//{
//    cout<<digitsInFactorial(19);
//}

// SUM UNDERMODULO

//int sum(long long a,long long b)
//{
//    int M=1000000007;
//    cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<a+b<<endl;
//    a%=M;
//    b%=M;
//    cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<a+b;
//    return (a+b)%M;
//}
//int main()
//{
//    //sum(8279685334796349382 ,3890369874501826197);
//    sum(9223372036854775807,9223372036854775807);
//}

//  SMALLEST DIVISION NUMBER

//long long getSmallest(long long n)
//{
//    long long res=1;
//    for(long long i=1;i<=n;i++)
//    {
//        cout<<"res = "<<res<<" "<<"i = "<<i<<"\n";
//        res=(res*i)/(__gcd(res,i));
//        cout<<"(res*i) = "<<(res*i)<<"\n(__gcd(res,i) = "<<(__gcd(res,i))<<"\n(res*i)/(__gcd(res,i))"<<(res*i)/(__gcd(res,i))<<"\n";
//    }
//    cout<<res<<"\n";
//}
//int main()
//{
//    long long a[]={3,6};
//    getSmallest(a[0]);
//    //getSmallest(a[1]);
//}

// QUDRATIC EQUATION

//class Solution
//{
//  public:
//    vector<int> quadraticRoots(int a, int b, int c)
//    {
//        vector<int> v;
//        float D,t,RD;
//        int r1,r2,tr1,tr2;
//        D=(b*b)-(4*a*c);
//        RD=sqrt(D);
//        if(D==0)
//        {
//            t=b/(2*a);
//            t*=-1;
//            v.push_back(t);
//            v.push_back(t);
//        }
//        else if(D<0)
//        {
//            v.push_back(-1);
//        }
//        else if(D>0)
//        {
//            r1=floor((-b+RD)/(2*a));
//            r2=floor((-b-RD)/(2*a));
//            if(r1>r2)
//            {
//                tr1=r1;
//                tr2=r2;
//            }
//            else
//            {
//                tr2=r1;
//                tr1=r2;
//            }
//            v.push_back(tr1);
//            v.push_back(tr2);
//        }
//        return v;
//    }
//};
//int main()
//{
////    int a=1,b=-7,c=12;
////    int a=1,b=-2,c=1;
//    int a=752,b=904,c=164;
//    Solution ob;
//    vector<int> roots=ob.quadraticRoots(a,b,c);
//    for(auto it:roots)
//        cout<<it<<" ";
//}


//bool isPrime(int n)
//{
//    if(n<=1)
//        return false;
//    if(n==2 || n==3)
//        return true;
//    if(n%2==0 || n%3==0)
//        return false;
//    for(int i=5;i*i<=n;i+=6)
//    {
//        if(n%i==0 || n%(i+2)==0)
//            return false;
//    }
//    return true;
//}
//bool isPerfectSquare(int n)
//{
//    long double sq=sqrt(n);
//    return (sq-floor(sq)==0);
//}
//int exactly3Divisors(int N)
//{
//    vector<int> eligible,res;
//    int siz;
//    for(int i=1;i<=N;i++)
//    {
//        if(isPerfectSquare(i))
//            eligible.push_back(sqrt(i));
//    }
//    coutA(eligible,eligible.size());
//    ne
//    for(int i=0;i<eligible.size();i++)
//    {
//        if(isPrime(eligible[i]))
//            res.push_back(eligible[i]);
//    }
//    coutA(res,res.size());
//    ne
//    cout<<res.size();
//}
//int main()
//{
//    int n=10;
//    exactly3Divisors(n);
//}
//
//



// The Lazy Caterer's Problem
//

//void solve(int n)
//{
//    cout<<n<<"->"<<((n*n)/2)+(n-(n/2))+1<<" ";nl;
//}
//int main()
//{
//    int n[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//    for(int i=0;i<17;i++)
//    {
//        solve(n[i]);
//    }
//}
