#include<bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}cout<<endl;
using namespace std;

// REMOVE DUPLICATE

//int removeDuplicate(int A[],int N)
//{
//    set<int> s;
//    for(int i=0;i<N;i++)
//        s.insert(A[i]);
//    for(auto it:s)
//        cout<<it<<" ";
//
//}
//int main()
//{
//    int a[]={2,1,1,1,1,2,2,2,2};
//    removeDuplicate(a,sizeof(a)/sizeof(a[0]));
//}

// ROTATE ARRAY

//int swap(int arr[],int n,int low,int high)
//{
//    int temp;
//    while(low<high)
//    {
//        temp=arr[low];
//        arr[low]=arr[high];
//        arr[high]=temp;
//        low++;
//        high--;
//    }
//}
//void rotateA(int arr[],int n,int d)
//{
//    swap(arr,n,0,d-1);
//    swap(arr,n,d,n-1);
//    swap(arr,n,0,n-1);
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5};
//    rotateA(arr,5,2);
//    for(int i=0;i<5;i++)
//        cout<<arr[i]<<" ";
//}

// TRANSITION POINT

//int transitionPoint(int arr[], int n) {
//     int it;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]==1)
//        {
//            it=i;
//            break;
//        }
//        else
//        {
//            it=-1;
//        }
//    }
//    return it;// code here
//}
//int main()
//{
//    int a[]={0,0,0,0};
//    for(auto i:a)
//        cout<<i<<" ";
//    cout<<endl;
//    tran(a,4);
//}

//  EQULIBRIUM POINT


//int equilibriumPoint(int a[], int n)
//{
//    long long sum=0,rSum=0,lSum=0,t;
//    if(n==1)
//    return 1;
//    for(int i=0;i<n;i++)
//        sum+=a[i];
//    lSum=sum;
//    cout<<"sum = "<<sum<<endl;
//    for(int i=0;i<n;i++)
//        cout<<sum-a[i]<<" ";
//     cout<<endl;
//    rSum+=a[0];
//    lSum-=a[0];
//    for(int i=1;i<n;i++)
//    {
//        cout<<"lSum = "<<lSum<<" "<<"rSum = "<<rSum<<endl;
//        t=a[i];
//        lSum-=a[i];
//        if(rSum==lSum)
//        {
//            cout<<"equilibrim at "<<i;
//            break;
//        }
//        else
//        {
//            lSum+=a[i];
//            rSum+=a[i];
//            lSum-=a[i];
//        }
//    }
//    cout<<-1;
//
//
//}
//int main()
//{
//    int a[] = {4,42,27,16,28,3,4,5,9,3,31,5,5,29,10,18,35,35,33,19,41,23,8,32,9,5,8,18,35,13,6,7,6,10,11,13,37,2,25,7,28,43};
//    for(auto i:a)
//        cout<<i<<" ";
//    cout<<endl;
//    equilibriumPoint(a,42);
//}

// LEADER IN AN ARRAY

//int leaders(int arr[], int n)
//{
//    int t=arr[n-1];
//    cout<<arr[n-1]<<" ";
//    for(int i=n-2;i>=0;i--)
//    {
//        if(arr[i]>=t)
//        {
//            cout<<arr[i]<<" ";
//            t=arr[i];
//        }
//    }
//}
//int main()
//{
//    int a[] = {16,17,4,3,5,2};
//    leaders(a,6);
//}
//

// WAVE ARRAY

//void swap(int a[],int i,int j)
//{
//    int t;
//    t=a[i];
//    a[i]=a[j];
//    a[j]=t;
//}
//void convertToWave(int *arr, int n)
//{
//    int t=arr[n-1];
//    for(int i=0;i<n;i+=2)
//    {
//        swap(arr,i,i+1);
//    }
//    if(n%2!=0)
//        arr[n-1]=t;
//}
//int main()
//{
//    int a[]={2,4,7,8,9,88};
//    for(auto i:a)
//        cout<<i<<" ";
//    cout<<endl;
//    convertToWave(a,6);
//    for(auto i:a)
//        cout<<i<<" ";
//}

// REVERSE IN ARRAY
//void get(stack<int> &s,vector<int> &v)
//{
//    while(!s.empty())
//    {
//        v.push_back(s.top());
//        s.pop();
//    }
//}
//void reverseInGroups(int a[], int n, int k)
//{
//    stack<int> s;
//    vector<int> v;
//    for(int i=0;i<n;i+=k)
//    {
//        for(int j=i;j<k+i&&j<n;j++)
//        {
//            s.push(a[j]);
//        }
//        get(s,v);
////        s.clear();
//    }
//     for(auto i:v)
//        cout<<i<<" ";
//}
//int main()
//{
//    int  a[]={1,2,3,4,5,6};
//    int n=6,k=3;
//    for(auto i:a)
//        cout<<i<<" ";
//    cout<<endl;
//    reverseInGroups(a,n,k);
//}

// MAJORITY IN ARRAY
//int min(int a,int b)
//{
//    return (a>b)?b:a;
//}
//int major(int a[],int n,int x,int y)
//{
//    int countX=0,countY=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==x)
//            countX++;
//        else if(a[i]==y)
//            countY++;
//    }
//    cout<<countX<<" "<<countY;if(countX==0 && countY>0)
//    return y;
//    else if(countY==0 && countX>0)
//    return x;
//    else if(countX==countY)
//    {
//        return min(x,y);
//    }
//    else if(countX>countY)
//        return x;
//    else if(countY>countX)
//        return y;
//}
//int main()
//{
//    //int  ar[]={1,1,2,2,3,3,4,4,4,4,5};
//    //int n=11,a=4,b=5;
//    for(int i=0;i<n;i++)
//        cout<<ar[i]<<" ";
//    cout<<endl;
//    major(ar,n,a,b);
//}


// IMMEDIATE IN ARRAY
//int immediate(int a[],int n,int x)
//{
//    int res=-1;
//    sort(a,a+n);
//    for(int i=n-1;i>=0;i--)
//    {
//        cout<<a[i]<<" ";
//        if(a[i]<x)
//        {
//            res=a[i];break;
//        }
//    }
//    cout<<endl<<res;
//}
//int main()
//{
//    //int  ar[]={4, 67 ,13, 12 ,15};
//    //int n=5,x=16;
//    int ar[]={1,2,3,4,5};
//    int n=5,x=1;
//    for(int i=0;i<n;i++)
//        cout<<ar[i]<<" ";
//    cout<<endl;
//    immediate(ar,n,x);
//}
//

// RAIN TRAPPING

//int min(int a,int b)
//{
//    return (a>b)?b:a;
//}
//int trappingWater(int arr[], int n)
//{
//      int l_max[n],r_max[n],t1=arr[0],t2=arr[n-1],sum[n],sumA=0;
//      l_max[0]=arr[0];
//      r_max[n-1]=t2;
//      for(int i=1;i<n;i++)
//      {
//          if(t1>arr[i])
//          {
//              l_max[i]=t1;
//          }
//          else if(t1<arr[i])
//          {
//              t1=arr[i];
//              l_max[i]=t1;
//          }
//          else if(t1==arr[i])
//          {
//              l_max[i]=t1;
//          }
//      }
//      for(int i=n-2;i>=0;i--)
//      {
//          if(t2>arr[i])
//          {
//              r_max[i]=t2;
//          }
//          else if(t2<arr[i])
//          {
//              t2=arr[i];
//              r_max[i]=t2;
//          }
//          else if(t2==arr[i])
//          {
//              r_max[i]=t2;
//          }
//      }
//      for(int i=0;i<n;i++)
//      {
//          int temp=min(l_max[i],r_max[i]);
//          sum[i]=temp-arr[i];
//          sumA+=sum[i];
//      }
//      coutA(l_max,n);ne
//      coutA(r_max,n);ne
//      coutA(sum,n);ne
//      cout<<sumA;
//}
//int main()
//{
//    //int arr[] = {7,4,0,9},n=4;
//    int arr[]={8, 8, 2, 4 ,5 ,5, 1},n=7;
//    coutA(arr,n);ne
//    trappingWater(arr,n);
//}

//Cyclically rotate an array by one

//void solve(int arr[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }cout<<endl;
//    int t=arr[n-1];
//    for(int i=n-1;i>=0;i--)
//    {
//        arr[i]=arr[i-1];
//    }arr[0]=t;
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }cout<<endl;
//}
//int main()
//{
//    int arr[]={9, 8, 7, 6, 4, 2, 1, 3},n=8;
//    solve(arr,n);
//}




// Kth Smallest

//int kthSmallest(int arr[], int l, int r, int k)
//{
//    vector<int> v;
//    for(int i=l;i<=r;i++)
//    v.push_back(arr[i]);
//    sort(v.begin(),v.end());
//    return v[k-1];
//}
//int main()
//{
//    int N = 6,arr[] = 7 10 4 3 20 15,K = 3;
//    cout<<solve(arr,0,N,k);
//}


//Longest consecutive subsequence

//int max(int a,int b)
//{
//    return (a>b)?a:b;
//}
//void solve(int arr[],int N)
//{
//    if(N==1)
//    {
//        return 1;
//    }
//    int mn=INT_MAX,mx=0,tCount=1,count=0;
//    set<int> s;
//    for(int i=0;i<N;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    for(int i=0;i<N;i++)
//    {
//        if(arr[i]>mx)
//        {
//            mx=arr[i];
//        }
//        if(arr[i]<mn)
//        {
//            mn=arr[i];
//        }
//        s.insert(arr[i]);
//    }
//    cout<<endl<<mn<<" "<<mx<<endl;
//    for(auto it:s)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    for(int i=mn;i<=mx;i++)
//    {
//        if(s.find(i+1)!=s.end())
//        {
//            tCount++;
//            cout<<i<<" "<<i+1<<endl;
//        }
//        else if(s.find(i+1)==s.end())
//        {
//            tCount=0;
//        }
//        count=max(count,tCount);
//    }
//    cout<<count<<endl<<tCount;
//}
//int main()
//{
//    int N = 7,a[] = {1,9,3,10,4,20,2};
//    solve(a,N);
//}


//Find duplicates in an array

//void solve(int a[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    vector<int> v;
//    int freq[n]={0};
//    for(int i=0;i<n;i++)
//    {
//        freq[a[i]]++;
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(freq[i]>1)
//        {
//            v.push_back(i);
//        }
//    }
//    if(v.size()==0)
//    {
//        v.push_back(-1);
//    }
//    for(auto it:v)
//    {
//        cout<<it;
//    }
//}
//int main()
//{
//    int n = 5,a[] = {2,3,1,2,3};
//    solve(a,n);
//}

//Three way partitioning

//void solve(int arr[],int n,int a,int b)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    vector<int> lessThan,equalTo,greaterThan;
//    int k=0;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]<a)
//            lessThan.push_back(arr[i]);
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]>=a && arr[i]<=b)
//            equalTo.push_back(arr[i]);
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]>b)
//            greaterThan.push_back(arr[i]);
//    }
//    for(int i=0;i<lessThan.size();i++)
//    {
//        arr[k]=lessThan[i];
//        k++;
//    }
//    for(int i=0;i<equalTo.size();i++)
//    {
//        arr[k]=equalTo[i];
//        k++;
//    }
//    for(int i=0;i<greaterThan.size();i++)
//    {
//        arr[k]=greaterThan[i];
//        k++;
//    }
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//}
//int main()
//{
//    int n = 5,arr[] = {1, 2, 3, 3, 4},a=1,b=2;
//    solve(arr,n,a,b);
//}


// Alternate positive and negative numbers

//void solve(int arr[],int n)
//{
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<" ";
//    cout<<endl;
//    vector<int> pos,neg;
//    int k=0,p=0,ne=0;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]>=0)
//            pos.push_back(arr[i]);
//        else if(arr[i]<0)
//            neg.push_back((arr[i]));
//    }
//    for(auto it:pos)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    for(auto it:neg)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++)
//    {
//        if(i%2==0 && p<pos.size())
//        {
//            arr[k]=pos[p];
//            p++;
//            k++;
//        }
//        else if(i%2!=0 && ne<neg.size())
//        {
//            arr[k]=neg[ne];
//            ne++;
//            k++;
//        }
//    }
//    if(p<pos.size())
//    {
//        for(int i=p;i<pos.size();i++)
//        {
//            arr[k]=pos[p];
//            p++;k++;
//        }
//    }
//    else if(ne<neg.size())
//    {
//        for(int i=ne;i<neg.size();i++)
//        {
//            arr[k]=neg[ne];
//            ne++;k++;
//        }
//    }
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<" ";
//
//}
//int main()
//{
//    int n = 10,arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
//    solve(arr,n);
//}


//All Unique Permutations of an array

//void solve(int arr[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    sort(arr,arr+n);
//    do
//    {
//        for(int i=0;i<n;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//    }while(next_permutation(arr,arr+n));
//}
//int main()
//{
//    int n = 3,arr[] = {1, 2, 1};
//    solve(arr,n);
//}

//Maximize sum(arr[i]*i) of an Array

//void solve(int a[],int n)
//{
//    sort(a,a+n);
//    long long ans=0;
//    int mod=1000000007;
//    for(long long i=0;i<n;i++)
//    {
//        ans+=a[i]*i;
//    }
//    cout<<ans%mod;
//}
//int main()
//{
//    int arr[] = {5, 3, 2, 4, 1},n=5;
//    solve(arr,n);
//}



// help classmate

//void solve(int arr[],int n)
//{
//    coutA(arr,n);
//    vector<int> ans;
//    int t=-1;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//            if(arr[i]>arr[j])
//            {
//                t=arr[j];
//                break;
//            }
//        }
//        ans.push_back(t);
//        t=-1;
//        cout<<endl;
//    }
//    coutA(ans,ans.size());
//}
//int main()
//{
//    int N = 5, arr[] = {3, 8, 5, 2, 25};
//    solve(arr,N);
//}

// Sum of Middle Elements of two sorted arrays

//int findMidSum(int ar1[], int ar2[], int n)
//{
//    vector<int> che;
//    for(int i=0;i<n;i++)
//        che.push_back(ar1[i]);
//    for(int i=0;i<n;i++)
//        che.push_back(ar2[i]);
//    sort(che.begin(),che.end());
//    int total=2*n,sum=0;
//    sum=che[total/2];
//    sum+=che[(total/2)-1];
//    return sum;
//}

//First element to occur k times

//int firstElementKTime(int a[], int n, int k)
//{
//    map<int,int> mp;
//for(int i=0;i<n;i++)
//{
//    mp[a[i]]++;
//    if(mp[a[i]]==k)
//    {
//        return a[i];
//    }
//}
//return -1;
//}

// Find all pairs with a given sum

//vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
//{
//    vector<pair<int,int>> ans;
//    set<int> s;
//    for(int i=0;i<M;i++)
//    {
//        s.insert(B[i]);
//    }
//    for(int i=0;i<N;i++)
//    {
//        if(s.find(X-A[i])!=s.end())
//        {
//            ans.push_back(make_pair(A[i],X-A[i]));
//        }
//    }
//    sort(ans.begin(),ans.end());
//    return ans;
//}

// Minimize the sum of product

//long long int minValue(int a[], int b[], int n)
//{
//    long long int ans=0;
//    sort(a,a+n);
//    sort(b,b+n,greater<int>());
//    for(int i=0;i<n;i++)
//    {
//        ans+=(a[i]*b[i]);
//    }
//    return ans;
//}

//Find the element that appears once in sorted array

//int findOnce(int arr[], int n)
//{
//    map<int,int> mp;
//    for(int i=0;i<n;i++)
//    {
//        mp[arr[i]]++;
//    }
//    for(auto it:mp)
//    {
//        if(it.second==1)
//        {
//            return it.first;
//        }
//    }
//}


// Arranging the array

//void Rearrange(int arr[], int n)
//{
//    vector<int> neg,pos;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]<0)
//        {
//            neg.push_back(arr[i]);
//        }
//        else
//        {
//            pos.push_back(arr[i]);
//        }
//    }
//    int ind=0;
//    for(int i=0;i<neg.size();i++)
//    {
//        arr[ind]=neg[i];
//        ind++;
//    }
//    for(int i=0;i<pos.size();i++)
//    {
//        arr[ind]=pos[i];
//        ind++;
//    }
//}

// Find Missing And Repeating

//int *findTwoElement(int *arr, int n)
//{
//    int freq[n]={0},missing,repeating;
//    int *ans=new int[2];
//    for(int i=0;i<n;i++)
//    {
//        freq[arr[i]-1]++;
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(freq[i]==0)
//        {
//            ans[1]=i+1;
//        }
//        else if(freq[i]==2)
//        {
//            ans[0]=i+1;
//        }
//    }
//    return ans;
//}

// Minimum Sum of Absolute Differences of Pairs

//long long findMinSum(vector<int> &A,vector<int> &B,int N)
//{
//    sort(A.begin(),A.end());
//    sort(B.begin(),B.end());
//    long long ans;
//    for(int i=0;i<N;i++)
//    {
//        ans+=abs(A[i]-B[i]);
//    }
//    return ans;
//}

// Merge Without Extra Space

//void merge(int arr1[], int arr2[], int n, int m)
//{
//    vector<int> ideal;
//    int ind=0;
//    for(int i=0;i<n;i++)
//    {
//        ideal.push_back(arr1[i]);
//    }
//    for(int i=0;i<m;i++)
//    {
//        ideal.push_back(arr2[i]);
//    }
//    sort(ideal.begin(),ideal.end());
//    for(int i=0;i<n;i++)
//    {
//        arr1[i]=ideal[ind];
//        ind++;
//    }
//    for(int i=0;i<m;i++)
//    {
//        arr2[i]=ideal[ind];
//        ind++;
//    }
//}

// Median of 2 Sorted Arrays of Different Sizes

//double MedianOfArrays(vector<int>& array1, vector<int>& array2)
//{
//    vector<int> v;
//    double ans;
//    int n=array1.size()+array2.size(),half=n/2;
//    for(int i=0;i<array1.size();i++)
//    {
//        v.push_back(array1[i]);
//    }
//    for(int i=0;i<array2.size();i++)
//    {
//        v.push_back(array2[i]);
//    }
//    sort(v.begin(),v.end());
//    if(v.size()%2!=0)
//    {
//        ans=v[half];
//    }
//    else
//    {
//        ans=v[half];
//        ans+=v[half-1];
//        ans/=2;
//    }
//    return ans;
//
//}

// Rearrange Array Alternately

//void rearrange(long long *arr, int n)
//{
//
//    vector<int> v1,v2;
//    int ind=0,ind1=0,ind2=0;
//    for(int i=0;i<n/2;i++)
//    {
//        v1.push_back(arr[i]);
//    }
//    for(int i=n/2;i<n;i++)
//    {
//        v2.push_back(arr[i]);
//    }
//    reverse(v2.begin(),v2.end());
//    for(int i=0;i<n;i++)
//    {
//        if(i%2==0)
//        {
//            arr[ind]=v2[ind2];
//            ind++;
//            ind2++;
//        }
//        else
//        {
//            arr[ind]=v1[ind1];
//            ind++;
//            ind1++;
//        }
//    }
//}


// Merge k Sorted Arrays

//vector<int> mergeKArrays(vector<vector<int>> arr, int K)
//{
//    vector<int> v;
//    for(int i=0;i<arr.size();i++)
//    {
//        for(int j=0;j<arr[i].size();j++)
//        {
//            v.push_back(arr[i][j]);
//        }
//    }
//    sort(v.begin(),v.end());
//    return v;
//}

// Find the median

//int find_median(vector<int> v)
//{
//    sort(v.begin(),v.end());
//    int size=v.size();
//    if(size%2!=0)
//    {
//        return v[size/2];
//    }
//    else
//    {
//        int a=v[size/2],b=v[size/2-1];
//        return (a+b)/2;
//    }
//}

// Even and Odd

//void reArrange(int arr[], int N)
//{
//    vector<int> odd,even;
//    int ind1=0,ind2=0;
//    for(int i=0;i<N;i++)
//    {
//        if(arr[i]%2==0)
//        {
//            even.push_back(arr[i]);
//        }
//        else
//        {
//            odd.push_back(arr[i]);
//        }
//    }
//    for(int i=0;i<N;i++)
//    {
//        if(i%2==0)
//        {
//            arr[i]=even[ind1];
//            ind1++;
//        }
//        else
//        {
//            arr[i]=odd[ind2];
//            ind2++;
//        }
//    }
//}

// Count pairs with given sum

//int getPairsCount(int arr[], int n, int k)
//{
//    map<int,int> mp;
//    int count=0;
//    for(int i=0;i<n;i++)
//    {
//        int t=k-arr[i];
//        if(mp[t])
//        {
//            count+=mp[t];
//        }
//        mp[arr[i]]++;
//    }
//    return count;
//}

// Palindromic Array

//bool check(int n)
//{
//    int t=n,rev=0;
//    while(n>0)
//    {
//        int a=n%10;
//        rev+=a;
//        n/=10;
//        rev*=10;
//    }
//    rev/=10;
//    if(t==rev)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//int PalinArray(int a[], int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        if(!check(a[i]))
//        {
//            return 0;
//        }
//    }
//    return 1;
//}

// Array Subset of another array

//string isSubset(int a1[], int a2[], int n, int m)
//{
//    set<int> s;
//    for(int i=0;i<n;i++)
//    {
//        s.insert(a1[i]);
//    }
//    for(int i=0;i<m;i++)
//    {
//        if(s.find(a2[i])!=s.end())
//        {
//            continue;
//        }
//        else
//        {
//            return "No";
//        }
//    }
//    return "Yes";
//}

//  Subarray with 0 sum

//bool subArrayExists(int arr[], int n)
//{
//    int sum=0;
//    map<int,int> mp;
//    for(int i=0;i<n;i++)
//    {
//        sum+=arr[i];
//        mp[sum]++;
//    }
//    if(mp.find(0)!=mp.end())
//    {
//        return true;
//    }
//    for(auto it:mp)
//    {
//        if(it.second>=2)
//        {
//            return true;
//        }
//    }
//    return false;
//}

// Minimum element in a sorted and rotated array

//int findMin(int arr[], int n)
//{
//for(int i=n-1;i>0;i--)
//{
//    // cout<<arr[i]<<" "<<arr[i-1]<<endl;
//    if(arr[i]<arr[i-1])
//    {
//        return arr[i];
//    }
//}
//return arr[0];
//}

// Key Pair

// bool hasArrayTwoCandidates(int arr[], int n, int x)
// {
// 	    set<int> s;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(s.find(x-arr[i])!=s.end())
// 	        {
// 	            return true;
// 	        }
// 	        s.insert(arr[i]);
// 	    }
// 	    return false;
// 	}

// Smalles positive missing number

// int missingNumber(int arr[], int n) 
// { 
//     bool isPresent[n] = {false};
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]>0 && arr[i]<=n)
//             {
//                 isPresent[arr[i]-1] = true;
                
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(!isPresent[i])
//             {
//                 return i+1;
//                 break;
//             }
            
//         }
//         return n+1;
// } 

// Leader in array

// vector<int> leaders(int a[], int n){
//     vector<int> result;
//     int maxTillIter = a[n-1];
    
//     for(int i=n-1;i>=0;i--)
//     {
//         if(a[i]>=maxTillIter)
//         {
//             result.push_back(a[i]);
//         }
//             maxTillIter = max(maxTillIter,a[i]);
        
//     }

    
//     reverse(result.begin(),result.end());
    
//     return result;
    
// }












