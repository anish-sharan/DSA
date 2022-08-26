#include<bits/stdc++.h>
#define ll long long
#define ne cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// ADDITION OF MATRIX

//class Solution
//{
//public:
//    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
//    {
//        vector<vector<int>> res;
//        vector<int> t;
//        int y;
//        if(A[0].size()!=B[0].size() || A.size()!=B.size())
//        return res;
//        for(int i=0;i<A.size();i++)
//        {
//            for(int j=0;j<A[i].size();j++)
//            {
//                y=A[i][j]+B[i][j];
//                t.push_back(y);
//            }
//            res.push_back(t);
//            t.clear();
//        }
//        return res;
//        for(int i=0;i<A.size();i++)
//        {
//            for(int j=0;j<A[i].size();j++)
//            {
//                cout<<A[i][j]<<" ";
//            }
//            ne
//        }
//        ne
//        ne
//        for(int i=0;i<B.size();i++)
//        {
//            for(int j=0;j<B[i].size();j++)
//            {
//                cout<<B[i][j]<<" ";
//            }
//            ne
//        }
//    }
//};
//int main()
//{
//    int n1 = 2, m1 = 3,n2 = 2, m2 = 3;
//    vector<vector<int>> A{{1, 2, 3},{4, 5, 6}},B{{1, 3, 3},{2, 3, 3}};
//    cout<<A[1].size();
//    Solution ob;
//    vector<vector<int>> res=ob.sumMatrix(A,B);
//    for(int i=0;i<A.size();i++)
//    {
//        for(int j=0;j<A[i].size();j++)
//        {
//            cout<<res[i][j]<<" ";
//        }
//        ne
//    }
//
//}
//

// TRANSPOSE OF MATRIX

//class Solution
//{
//public:
//    void transpose(vector<vector<int> >& matrix, int n)
//    {
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<n;j++)
//                cout<<matrix[i][j]<<" ";
//            ne
//        }
//        ne
//        ne
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<i;j++)
//            {
//                if(i==j)
//                    continue;
//                else
//                {
//                    int t;
//                    t=matrix[i][j];             //v[i][j]=1  v[j][i]=2   t=1
//                    matrix[i][j]=matrix[j][i];        //v[i][j]=2
//                    matrix[j][i]=t;
//                }
//            }
//        }
//
//    }
//};
//int main()
//{
//    int n=4;
//    vector<vector<int>> que{{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
//    Solution ob;
//    ob.transpose(que,n);
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<que[i][j]<<" ";
//        }
//        ne
//    }
//
//}


//bool search(vector<vector<int> > matrix, int n, int m, int x)
//{
//    int i=0,j=m-1;
//    while(i<n && j>=0)
//    {
//        if(matrix[i][j]==x)
//        {
//            return true;
//        }
//        else if(matrix[i][j]>x)
//        {
//             j--;
//        }
//        else
//        {
//            i++;
//        }
//    }
//    return false;
//}
//int main()
//{
//    int n=3,m=3,x=62;
//    vector<vector<int>> matrix{{ 3, 30, 38},{36, 43, 60},{40, 51, 69}};
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<matrix[i][j]<<" ";
//        }
//        ne
//    }ne
//    (search(matrix,n,m,x))?(cout<<"YES"):(cout<<"NO");
//
//}

// ROTATE BY 90 DEGREE

//class Solution
//{
//public:
//    void rotateby90(vector<vector<int> >& matrix, int n)
//    {
//        for(int i=0;i<n;i++)
//       {
//            for(int j=0;j<i;j++)
//            {
//                if(i==j)
//                    continue;
//                else
//                {
//                    int t;
//                    t=matrix[i][j];             //v[i][j]=1  v[j][i]=2   t=1
//                    matrix[i][j]=matrix[j][i];        //v[i][j]=2
//                    matrix[j][i]=t;
//                }
//            }
//        }
//        for(int i=0;i<n;i++)
//        {
//            int low=0,high=n-1;
//            while(low<high)
//            {
//                int t;
//                t=matrix[low][i];             //v[i][j]=1  v[j][i]=2   t=1
//                matrix[low][i]=matrix[high][i];        //v[i][j]=2
//                matrix[high][i]=t;
//                low++;
//                high--;
//            }
//        }
//    }
//};
//int main()
//{
//    int n=3;
//    vector<vector<int>> matrix{{1, 2, 3},{4, 5, 6},{7, 8, 9}};
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<matrix[i][j]<<" ";
//        }
//        ne
//    }
//    Solution ob;
//    ob.rotateby90(matrix,n);
//    ne
//    ne
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<matrix[i][j]<<" ";
//        }
//        ne
//    }
//}


//Search in a matrix

//void solve(int mat[][3],int n,int m,int X)
//{
//    int i=0,j=m-1;
//    bool flag=false;
//    while(i<n && j>=0)
//    {
//        if(mat[i][j]==X)
//        {
//            flag=true;
//            break;
//        }
//        if(mat[i][j]>X)
//        {
//            j--;
//        }
//        else if(mat[i][j]<X)
//        {
//            i++;
//        }
//    }
//    cout<<flag;
//}
//int main()
//{
//    int a[][3] = {{3,30,38},{44,52,54},{57,60,69}};
//    solve(a,3,3,30);
//}

//Row with max 1s

//void solve(int arr[][9],int n,int m)
//{
//    vector<int> zeros;
//    int ans=0,mx=0;
//    bool flag=false;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            if(arr[i][j]==1)
//            {
//                flag=true;
//                break;
//            }
//            if(flag==true)
//            {
//                break;
//            }
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        int count=0;
//        for(int j=0;j<m;j++)
//        {
//            if(arr[i][j]==0)
//            {
//                count++;
//            }
//        }
//        zeros.push_back(m-count);
//    }
//    for(int i=0;i<zeros.size();i++)
//    {
//        if(zeros[i]>mx)
//        {
//            mx=zeros[i];
//            ans=i;
//            if(mx==m)
//            {
//                break;
//            }
//        }
//    }
//    if(flag==false)
//    {
//        return -1;
//    }
//    return ans;
//}
//int main()
//{
//    int arr[][9]={{0 ,0 ,0, 1, 1, 1, 1, 1, 1 },{0, 1, 0 ,0 ,1 ,1 ,1 ,1 ,1 },{0, 0, 0 ,0 ,1 ,1 ,1, 1, 1}},n=3,m=9;
//    solve(arr,n,m);
//}


// Kth element in Matrix

//int kthSmallest(int mat[MAX][MAX], int n, int k)
//{
//  vector<int> v;
//  for(int i=0;i<n;i++)
//  {
//      for(int j=0;j<n;j++)
//      {
//          v.push_back(mat[i][j]);
//      }
//  }
//  sort(v.begin(),v.end());
//    return v[k-1];
//}
//int main()
//{
//    int N = 4,mat[][4] =     {{16, 28, 60, 64},{22, 41, 63, 91},{27, 50, 87, 93},{36, 78, 87, 94 }};
//    kthSmallest(mat,N,3)
//}

//Sorted matrix

//void solve(int Mat[][4],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<Mat[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    vector<int> v;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            v.push_back(Mat[i][j]);
//        }
//        cout<<endl;
//    }
//    sort(v.begin(),v.end());
//    int o=0,l=0,k=0,ans[n][n];
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            ans[i][j]=v[o];
//            o++;
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<ans[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//}
//int main()
//{
//    int N=4,Mat[][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
//    solve(Mat,N);
//}

// Maximum no of 1's row

//int maxOnes (vector <vector <int>> &Mat, int N, int M)
//{
//        vector<pair<int,int>> ones;
//        vector<int> sameCond;
//        for(int i=0;i<Mat.size();i++)
//        {
//            int count=0;
//            for(int j=0;j<Mat[i].size();j++)
//            {
//                if(Mat[i][j]==0)
//                {
//                    count++;
//                }
//            }
//            ones.push_back({Mat[i].size()-count,i});
//            }
//            sort(ones.begin(),ones.end());
//            if(ones[ones.size()-1].first==ones[ones.size()-2].first)
//            {
//                int n=ones.size()-1,check=ones[n].first;
//                while(ones[n].first==check)
//                {
//                    sameCond.push_back(ones[n].second);
//                    n--;
//                }
//                sort(sameCond.begin(),sameCond.end());
//                return sameCond[0];
//            }
//            return ones[ones.size()-1].second;
//}
