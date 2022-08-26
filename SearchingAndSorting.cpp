#include<bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
#define print(x) cout<<(#x)<<" is "<<x<<endl
using namespace std;

// SORT 0 1 2

//void sort012(int a[], int n)
//{
//    vector<int> v;
//    int z=0,o=0,t=0,i;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==0)
//            z++;
//        else if(a[i]==1)
//            o++;
//        else if(a[i]==2)
//            t++;
//    }
//    for(int i=0;i<z;i++)
//        v.push_back(0);
//    for(int j=0;j<o;j++)
//         v.push_back(1);
//    for(int j=0;j<t;j++)
//         v.push_back(2);
//    for(int i=0;i<n;i++)
//        cout<<v[i]<<" ";
//    cout<<endl;
//    for(int i=0;i<n;i++)
//        a[i]=v[i];
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<" ";
//    cout<<endl;
//}
//int main()
//{
//    int a[]={0 ,2 ,1 ,2 ,0},n=5;
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<" ";
//    cout<<endl;
//    sort012(a,n);
//}


// Binary search

//int binarysearch(int arr[], int n, int k){
//        int l=0,h=n-1;
//        while(l<=h)
//        {
//            int mid=(l+h)/2;
//            if(arr[mid]==k)
//                return mid;
//            else if(arr[mid]<k)
//                l=mid+1;
//            else
//                h=mid-1;
//        }
//        return -1;
//}




// SQUARE ROOT

//int sqrt(int x)
//{
//    int l=1,ans,h=x;
//    if(x==0 || x==1)
//        return x;
//    while(l<=h)
//    {
//        int mid=(l+h)/2;
//        cout<<"l="<<l<<" h="<<h<<" mid="<<mid<<" ans="<<ans<<endl;
//        if(mid*mid==x)
//            return mid;
//        if(mid*mid<x)
//        {
//            l=mid+1;
//            ans=mid;
//        }
//        else
//        {
//            h=mid-1;
//        }
//    }
//    return ans;
//}
//int main()
//{
//    int i=16;
//    cout<<i<<" "<<sqrt(i)<<endl;
//}

// PEAK ELEMENT

//int peakEle(int arr[],int n)
//{
//    int mid,l=0,h=n-1;
//       if(n==1)
//       return 0;
//        while(l<=h)
//        {
//            int mid=(l+h)/2;
//            if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
//                return mid;
//            else if(arr[mid]<arr[mid+1])
//            {
//                l=mid+1;
//            }
//            else
//            {
//                h=mid-1;
//            }
//        }
//}
//int main()
//{
////    int a[]={10, 20, 15, 2, 23, 90, 67},n=7;
//    int a[]={14 ,14 ,10 ,4, 13 ,8, 17},n=7;
//    cout<<"answer="<<peakEle(a,n);
//}



// INTERSECTION OF TWO ARRAY

//int intersection(int arr1[],int arr2[],int N,int M)
//{
////    coutA(arr1,N);nl;coutA(arr2,M);nl;
//    set<int> s,ss;
//    vector<int> v;
//    for(int i=0;i<N;i++)
//        s.insert(arr1[i]);
//    for(int i=0;i<M;i++)
//    {
//        if(s.find(arr2[i])!=s.end())
//           ss.insert(arr2[i]);
//    }
//    for(auto i=ss.begin();i!=ss.end();i++)
//        v.push_back(*i);
//    for(auto i:v)
//        cout<<i<<" ";
//
//}
//int main()
//{
//    int N = 5, arr1[] = {1, 2, 2, 3, 4},M = 6, arr2[] = {2, 2, 4, 6, 7, 8};
//    intersection(arr1,arr2,N,M);
//}

// INSERTION SORT

//void insertion(int a[],int n)
//{
//    coutA(a,n);nl
//    for(int i=1;i<n;i++)
//    {
//        int key=a[i];
//        int j=i-1;
//        cout<<"key="<<key<<" j="<<j<<" i="<<i;nl;
//        while(j>=0 && a[j]>key)
//        {
//            a[j+1]=a[j];
//            cout<<a[j]<<"="<<a[j];nl;
//            j--;
//        }
//        a[j+1]=key;
//        cout<<a[j+1]<<"="<<key;nl;
//        coutA(a,n);nl;
//    }
//    nl;
//    coutA(a,n);
//}
//int main()
//{
//    int a[]={5,3,7,15,9,10};
//    insertion(a,6);
//}


// MERGE SORT

//void merge(int arr[],int l,int m,int r)
//{
//    int n1=m-l+1,n2=r-m;
//    int left[n1],right[n2];
//    for(int i=0;i<n1;i++)
//        left[i]=arr[i+l];
//    for(int j=0;j<n2;j++)
//        right[j]=arr[m+1+j];
//    int i=0,j=0,k=l;
//    while(i<n1 && j<n2)
//    {
//        if(left[i]<=right[j])
//        {
//            arr[k++]=left[i++];
//        }
//        else
//        {
//            arr[k++]=right[j++];
//        }
//    }
//    while(i<n1)
//    {
//        arr[k++]=left[i++];
//    }
//    while(j<n2)
//    {
//        arr[k++]=right[j++];
//    }
//}
//void mergeSort(int arr[],int l,int r)
//{
//    if(r>l)
//    {
//        int mid=(l+r)/2;
//        mergeSort(arr,l,mid);
//        mergeSort(arr,mid+1,r);
//        merge(arr,l,mid,r);
//    }
//}
//
//int main()
//{
//    int a[]={3,2,4,5,1,7,2,3,4},n=9;
//    coutA(a,9);nl;
//    mergeSort(a,0,n-1);
//    coutA(a,n);
//
//}

// QUICK SORT

// Lamuto partition
//int partitiona(int a[],int l,int h)
//{
//    int pivot=a[h],i=(l-1);
//    cout<<"pivot="<<pivot<<" i="<<i;nl;
//    for(int j=l;j<=h-1;j++)
//    {
//        if(a[j]<pivot)
//        {
//            i++;
//            swap(a[i],a[j]);
//        }
//    }
//    swap(a[i+1],a[h]);
//    coutA(a,6);nl;
//    return i+1;
//}
//
//void quickSort(int a[],int l,int h)
//{
//    cout<<"l="<<l<<" h="<<h;nl;
//    if(l<h)
//    {
//        int p=partitiona(a,l,h);
//        cout<<"Pivot element="<<p;nl;
//        quickSort(a,l,p-1);
//        quickSort(a,p+1,h);
//    }
//}
//int main()
//{
//    int a[]={10, 9 ,8, 7, 100, 5 ,4 ,3, 2, 1};
//    for(int h=0;h<10;h++)
//        cout<<a[h]<<" ";
//
//    cout<<endl;
//    quickSort(a,0,10);
//    for(int h=0;h<10;h++)
//        cout<<a[h]<<" ";
//}


// Minimum Sort To Sort

//void swap(vector<int> &v,int i,int j)
//{
//    int t=v[i];
//    v[i]=v[j];
//    v[j]=t;
//}
//int solve(vector<int> nums)
//{
//    vector<int> t;
//    map<int,int> mp;
//    t=nums;
//    int res=0;
//    coutA(t,t.size());nl;
//    sort(t.begin(),t.end());
//    coutA(t,t.size());nl;
//    coutA(nums,nums.size());nl;
//    for(int i=0;i<nums.size();i++)
//    {
//        mp[nums[i]]=i;
//    }
//    for(auto it:mp)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }
//    for(int i=0;i<nums.size();i++)
//    {
//        if(nums[i]!=t[i])
//        {
//            res++;
//            int intit=nums[i];
//            swap(nums,i,mp[t[i]]);
//            mp[intit]=mp[t[i]];
//            mp[t[i]]=i;
//        }
//    }
//    cout<<res;
//}
//int main()
//{
//    vector<int> v={10, 19, 6, 3, 5};
//    solve(v);
//}


//    Doubling the value

//void solve(int n,int b,int a[])
//{
//    coutA(a,n);nl;
//    int t=b;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==t)
//        {
//            t*=2;
//        }
//        cout<<t<<" ";
//    }
//}
//int main()
//{
//    //int N=5,B=3,arr[]={1, 2, 3, 4, 8};
//    int N = 5, B = 2,arr[] = {1, 2 ,3 ,4 ,8};
//    solve(N,B,arr);
//}

// Majority Element

//void solve(int a[],int n)
//{
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<" ";
//    cout<<endl;
//    map<int,int> mp;
//    for(int i=0;i<n;i++)
//    {
//        mp[a[i]]++;
//    }
//    for(auto it:mp)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//        if(it.second>n/2)
//        {
//            cout<<it.first;
//        }
//    }
//}
//int main()
//{
//    int N = 5 ,A[] = {3,1,3,3,2} ;
//    solve(A,N);
//}

//K-th element of two sorted Arrays

//void solve(int arr1[],int arr2[],int n,int m,int k)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr1[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<m;i++)
//    {
//        cout<<arr2[i]<<" ";
//    }
//    cout<<endl;
//    vector<int> v;
//    for(int i=0;i<n;i++)
//    {
//        v.push_back(arr1[i]);
//    }
//    cout<<endl;
//    for(int i=0;i<m;i++)
//    {
//        v.push_back(arr2[i]);
//    }
//    sort(v.begin(),v.end());
//    for(auto it:v)
//    {
//        cout<<it<<" ";
//    }
//    cout<<v[k-1];
//}
//int main()
//{
//    int arr1[] = {2, 3, 6, 7, 9},arr2[] = {1, 4, 8, 10},k = 5,n=5,m=4;
//    solve(arr1,arr2,n,m,k);
//}

//Search in rotated array

//void solve(int A[],int n,int key)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<A[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++)
//    {
//        if(A[i]==key)
//        {
//            cout<<i;
//        }
//    }
//}
//int main()
//{
//    int N = 9,A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3},key = 10;
//    solve(A,N,key);
//}

//Find Pair Given Difference

//void solve(int arr[],int n,int k)
//{
//    set<int> s;
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//        s.insert(arr[i]);
//    }
//    cout<<endl;
//    for(auto it:s)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++)
//    {
//        if(s.find(k+arr[i])!=s.end())
//        {
//            cout<<"FOUND"<<endl;
//        }
//    }
//    cout<<"NOT FOUND";
//}
//int main()
//{
//    int n = 6, k = 99,arr[] = {5, 20, 3, 2, 5, 80};
//    solve(arr,n,k);
//}

//First and last occurrences of x

//void solve(int arr[],int x,int n)
//{
//    int first=-1,second=-1;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]==x)
//        {
//            first=i;
//            break;
//        }
//    }
//    for(int i=n;i>=0;i--)
//    {
//        if(arr[i]==x)
//        {
//            second=i;
//            break;
//        }
//    }
//    cout<<endl<<first<<" "<<second;
//}
//int main()
//{
//    int n=9, x=5,arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
//    solve(arr,x,n);
//}


//Searching in an array where adjacent differ by at most k

//int solve(int arr[], int n, int x, int k)
//{
//    int ans=-1;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]==x)
//        {
//            ans=i;
//            break;
//        }
//    }
//    return ans;
//}
//int main()
//{
//    int arr[ ] = {4, 5, 6, 7, 6}, K = 1 ,and X = 6;
//    int ans=solve(arr,5,X,K);
//    cout<<ans;
//}

// Missing number in array

//void MissingNumber(vector<int>& array, int n)
//{
//    bool freq[n]={false};
//    for(int i=0;i<n;i++)
//    {
//        cout<<i+1<<"-"<<freq[i]<<endl;
//    }
//    for(int i=0;i<n-1;i++)
//    {
//        freq[array[i]-1]=true;
//    }
//    for(int i=0;i<n;i++)
//    {
//        cout<<i+1<<"-"<<freq[i]<<endl;
//    }
//}
//int main()
//{
//    int N = 5;
//    vector<int> A = {1,2,3,5};
//    MissingNumber(A,N);
//}

// Bubble sort

//void swap(int *x,int *y)
//{
//    int t=*x;
//    *x=*y;
//    *y=t;
//}
//void bubbleSort(int arr[], int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//            if(arr[i]>arr[j])
//            {
//                swap(&arr[i],&arr[j]);
//            }
//        }
//    }
//}

//Killing Spree

//long long int killinSpree(long long int n)
//{
//    long long int count=0,rem=n,strength=1;
//    while(rem>0)
//    {
//        if(rem<=0 || rem<pow(strength,2))
//        {
//            break;
//        }
//        else
//        {
//            rem-=pow(strength,2);
//            count++;
//            strength++;
//        }
//    }
//    return count;
//}

// Minimum Number in a sorted rotated array

//int minNumber(int arr[], int low, int high)
//{
//    int mini=arr[high];
//    for(int i=high-1;i>=0;i--)
//    {
//        if(arr[i]>mini)
//        {
//            return arr[i+1];
//        }
//        else
//        {
//            mini=arr[i];
//        }
//    }
//}



