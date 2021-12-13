#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define nl cout<<"\n";
#define c(t) cout<<t<<"\n";
#define f(n) for(int i=0;i<n;i++)
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
class node
{
public:
    int data;
    struct node* next;
    node(int n)
    {
        data=n;
        next=NULL;
    }
};
node *insertEnd(node * head,int k)
{
    if(head==NULL)
        return new node(k);
    node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=new node(k);
    return head;
}
node *insert(node* head,int k)
{
    node *temp=new node(k);
    temp->next=head;
    return temp;
}
void printCLL(node *head,int k)
{
    node *t=head;
    for(int i=0;i<k;i++)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}
void printLL(node *head)
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}
void printLLA(node *head)
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t<<" ";
        t=t->next;
    }
}
int count(node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
    }
    return count;
}

//Check if Linked List is Palindrome

//void solve(node *head)
//{
//    stack<int> st;
//    bool flag=true;
//    node *curr=head,*t=head;
//    while(curr!=NULL)
//    {
//        st.push(curr->data);
//        cout<<curr->data<<" ";
//        curr=curr->next;
//    }
//    cout<<endl;
//    while(t!=NULL)
//    {
//        if(st.top()!=t->data)
//        {
//            flag=false;
//        }
//        cout<<st.top()<<" "<<t->data<<endl;
//        st.pop();
//        t=t->next;
//    }
//    cout<<flag;
//}
//int main()
//{
//    node *head=NULL;
//    head=insertEnd(head,1);head=insertEnd(head,2);head=insertEnd(head,1);//head=insertEnd(head,2);head=insertEnd(head,1);
//    solve(head);
//}

//Rotate a Linked List

//void solve(node *head,int k)
//{
//    node *temp=head,*start=head,*mid1=head,*mid2=head,*last=head;
//    int count=0;
//    while(temp!=NULL)
//    {
//        count++;
//        temp=temp->next;
//    }
//    if(count==k)
//    {
//        return head;
//    }
//    while(last->next!=NULL)
//    {
//        last=last->next;
//    }
//    for(int i=0;i<k-1;i++)
//    {
//        mid1=mid1->next;
//        mid2=mid2->next;
//    }
//    mid2=mid2->next;
//    last->next=start;
//    mid1->next=NULL;
//    //cout<<start->data<<" "<<mid1->data<<" "<<mid2->data<<" "<<last->data<<endl;
//    return mid2;
//
//}
//int main()
//{
//    node *head=NULL;
////    head=insertEnd(head,2);head=insertEnd(head,4);head=insertEnd(head,7);head=insertEnd(head,8);head=insertEnd(head,9);
//    head=insertEnd(head,1);head=insertEnd(head,2);head=insertEnd(head,3);head=insertEnd(head,4);head=insertEnd(head,5);
//    head=insertEnd(head,6);head=insertEnd(head,7);head=insertEnd(head,8);
//    solve(head,4);
//
//}

// REVERSE A LINKED LIST


//node* reverseList(node * head)
//{
////    cout<<"head -> ";printLL(head);cout<<endl;
//    if(head==NULL || head->next==NULL)
//    return head;
//    node *rest=reverseList(head->next);
//    head->next->next=head;
//    head->next=NULL;
////    cout<<"rest -> ";printLL(rest);cout<<endl;
//    return rest;
//}
//int main()
//{
//    node *head=NULL,*u=NULL;
//    head=insert(head,1);head=insert(head,2);
//    head=insert(head,3);head=insert(head,4);
//    head=insert(head,5);head=insert(head,6);
//    u=reverseList(head);
//    printLL(u);
//}

// Occurence of an integer in a Linked List

//void searchO(node *head,int search_for)
//{
//    int count=0;
//    node *t=head;
//    while(t!=NULL)
//    {
//        if(t->data==search_for)
//            count++;
//        t=t->next;
//    }
//}
//int main()
//{
//    node *head=NULL,*t;
//    for(int i=6;i>0;i--)
//        head=insert(head,i);
//    printLL(head);
//}


// DETECT LOOP IN LINKED LIST

//bool loop(node *head)
//{
//    node *slow=head,*fast=head;
//    while(fast!=NULL && fast->next!=NULL)
//    {
//        slow=slow->next;
//        fast=fast->next->next;
//        if(slow==fast)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//int main()
//{
//    node *head=NULL,*t,*l;
//    for(int i=6;i>0;i--)
//    {
//        head=insert(head,i);
//    }
//    printLL(head);nl;
//    l=head;
//    l=l->next;l=l->next;l=l->next;l=l->next;l=l->next;
//    t=head;
//    t=t->next;t=t->next;t=t->next;
//    l->next=t;
//    (loop(head))?(cout<<"Loop detected"):(cout<<"Loop not detected");
//}



// DELETE MIDDLE OF LINKED LIST

//int countLL(node *head)
//{
//    int count=0;
//    node *t=head;
//    while(t!=NULL)
//    {
//        count++;
//        t=t->next;
//    }
//    return count;
//}
//void solve(node* head)
//{
//    printLL(head);nl;
//    node *t=head;
//    int length=countLL(head);
//    cout<<length;nl;
//    if(length%2!=0)
//    {
//        int half=length/2;
//        for(int i=0;i<half-1;i++)
//        {
//            t=t->next;
//        }
//        t->next=t->next->next;
//    }
//    else
//    {
//        int half=length/2;
//        for(int i=0;i<half-1;i++)
//        {
//            t=t->next;
//        }
//        t->next=t->next->next;
//    }
//    printLL(head);
//}
//int main()
//{
//    node *a=NULL;
//    for(int i=5;i>0;i--)
//    {
//        a=insert(a,i);
//    }
//    solve(a);
//}




// Delete without head pointer

//void solve(node *del)
//{
//    node *t=del;
//    t=t->next;
//    del->data=t->data;
//    del->next=del->next->next;
//}
//int main()
//{
//    node* head=NULL;
//    for(int i=5;i>0;i--)
//    {
//        head=insert(head,i);
//    }
//    node *h=head;
//    h=h->next->next;
//    printLL(head);nl;
//    solve(h);
//    printLL(head);nl;
//}

//  Split a Circular Linked List into two halves


//int countCircularLL(node *head)
//{
//    int count=0;
//    node *first=head,*t=head;
//    t=t->next;
//    while(t!=NULL)
//    {
//        if(t==first)
//        {
//            break;
//        }
//        t=t->next;
//        count++;
//    }
//    return count+1;
//}
//void solve(node *head)
//{
//    int count=countCircularLL(head),half=count/2;
//    node *t=head,*head1_ref=NULL,*head2_ref=NULL,*a=head,*b=head,*c=head,*d=head;
//    for(int i=0;i<5;i++)
//    {
//        cout<<t->data<<" ";
//        t=t->next;
//    }nl;
//    cout<<count<<" "<<half;nl;
//    if(count%2==0)
//    {
//        for(int i=0;i<half-1;i++)
//        {
//            b=b->next;
//            c=c->next;
//        }
//        c=c->next;
//        for(int i=0;i<count-1;i++)
//        {
//            d=d->next;
//        }
//    //    cout<<a->data<<" "<<b->data<<" "<<c->data<<" "<<d->data<<" ";
//        b->next=a;
//        d->next=c;
//    }
//    else
//    {
//        for(int i=0;i<half;i++)
//        {
//            b=b->next;
//            c=c->next;
//        }
//        c=c->next;
//        for(int i=0;i<count-1;i++)
//        {
//            d=d->next;
//        }
//    //    cout<<a->data<<" "<<b->data<<" "<<c->data<<" "<<d->data<<" ";
//        b->next=a;
//        d->next=c;
//    }
//    head1_ref=a;
//    head2_ref=c;
//    //printLL(head1_ref);
//    printLL(head2_ref);//
//
//}
//int main()
//{
//    node *head=NULL,*t=NULL;
//    vector<int> v={5,1,6,2,9};
//    for(auto it:v)
//        head=insert(head,it);
//    t=head;
//    t=t->next;t=t->next;t=t->next;t=t->next;
//    t->next=head;
//    solve(head);
//}



// Intersection Point in Y Shapped Linked Lists

//int countLL(node *head)
//{
//    int count=0;
//    while(head!=NULL)
//    {
//        count++;
//        head=head->next;
//    }
//    return count;
//}
//void solve(node *head1,node *head2)
//{
//    printLLA(head1);nl;
//    printLLA(head2);nl;
//    int c1=countLL(head1),c2=countLL(head2);
//    node *small=NULL,*lrg=NULL;
//    cout<<c1<<" "<<c2;nl;
//    if(c1>c2)
//    {
//        lrg=head1;
//        small=head2;
//    }
//    else
//    {
//        lrg=head2;
//        small=head1;
//    }
//    node *t=lrg;
//    for(int i=0;i<abs(c1-c2);i++)
//    {
//        t=t->next;
//    }
//    while(small!=NULL && t!=NULL)
//    {
//        if(small==t)
//        {
//            cout<<small->data<<"->"<<small<<endl<<t->data<<"->"<<t;nl;
//        }
//        small=small->next;
//        t=t->next;
//    }
//    printLL(small);nl;
//    printLL(lrg);nl;
//    printLL(t);nl;
//}
//int main()
//{
//    node *head1=NULL,*t;
//    vector<int> v1={30,15,9,6,3};
//    for(auto it:v1)
//        head1=insert(head1,it);
//    node *head2=new node(10);
//    t=head1;
//    t=t->next;t=t->next;t=t->next;
//    head2->next=t;
//    solve(head1,head2);
//}







