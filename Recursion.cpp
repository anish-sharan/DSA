#include<bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define print(x) cout<<(#x)<<" is "<<x<<endl
using namespace std;


// STIRNG PERMUTATION

//void permutation(string s)
//{
//    sort(s.begin(),s.end());
//    while(next_permutation(s.begin(),s.end()))
//    {
//        cout<<s<<" ";
//        nl;
//    }
//}
//int main()
//{
//    string s="SABHD";
//    permutation(s);
//}


//


// JOSEPHUS
/*
int josephus(int n,int k)
{
    if(n==0)
        return 0;
    else
        return ((josephus(n-1,k))+k)%n;
}
*/

// TOWER OF HANOI
/*
void toh2(int N, int from, int to, int aux, long long &moves)
{
    if(N == 1)
    {
        cout << "move disk 1 from rod "<< from << " to rod " << to << endl;
        moves++;
        return;
    }
    toh2(N-1, from, aux, to, moves);
    moves++;
    cout << "move disk "<< N << " from rod "<< from << " to rod " << to << endl;
    toh2(N-1, aux, to, from, moves);
}
long long toh(int N, int from, int to, int aux) {
    long long moves=0;
    toh2(N,from,to,aux,moves);
    return moves;
    // Your code here
}
int main()
{
    long long moves=0;
    cout<<toh(3,1,3,2);
    //cout<<moves;
}*/
// SUM OF DIGITS
//int solve(int n)
//{
//    if(n<9)
//        return n;
//    return n%10+solve(n/10);
//}
//int main()
//{
//    cout<<solve(99999);
//}
