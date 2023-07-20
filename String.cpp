#include<bits/stdc++.h>
#define ll long long
#define nl cout<<"\n";
#define max(a,b) (a>b)?a:b;
#define print(x) cout<<(#x)<<" is "<<x<<endl
#define f(n) for(int i=0;i<n;i++)
#define coutA(a,n) f(n){cout<<a[i]<<" ";}
using namespace std;

//void solve(string s)
//{
//    cout<<s;nl
//    set<char> mp;
//    int res=0,count=0;
//    for(int i=0;i<s.length();i++)
//    {
//        cout<<"res="<<res<<" count="<<count<<" s[i]="<<s[i];nl
//        if(mp.find(s[i])!=mp.end())
//        {
//            mp.clear();
//            mp.insert(s[i]);
//            count=0;
//        }
//        else
//        {
//            mp.insert(s[i]);
//            count++;
//            res=max(res,count);
//        }
//    }
//    cout<<res;
//
//}
//int main()
//{
//    //solve("geeksforgeeks");
//    solve("abbcdb");
//    //solve("aab");
//}
//   ANAGRAM OR NOT
//bool ana(string a,string b)
//{
//    int ar[256]={0},t;
//    bool f=true;
//    for(auto it:a)
//    {
//       ar[int(it)]++;
//    }
//
//    for(int i=97;i<122;i++)
//    {
//        cout<<char(i)<<"-"<<ar[i]<<" ";
//    }end
//    for(auto it:b)
//    {
//       ar[int(it)]--;
//    }
//    for(int i=97;i<122;i++)
//    {
//        cout<<char(i)<<"-"<<ar[i]<<" ";
//    }end
//    for(int i=97;i<122;i++)
//    {
//        if(ar[i]!=0)
//            f=false;
//    }
//    cout<<"\n"<<f;
//    return f;
//}
//int main()
//{
//    string a="geeksforgeeks",b="forgeeksgeeks";
//    (ana(a,b))?(cout<<"ANAGRAM"):(cout<<"NOT ANAGRAM");
//}

//   Reverse words in a given string

//
//string reverseWords(string str)
//{
//    stack<char> s;
//    for(int i=str.length()-1;i>=0;i--)
//    {
//        if(str[i]!='.')
//        {
//            s.push(str[i]);
//        }
//        else if(str[i]=='.')
//        {
//            while(!s.empty())
//            {
//                cout<<s.top();
//                s.pop();
//            }
//                cout<<".";
//        }
//    }
//    while(!s.empty())
//            {
//                cout<<s.top();
//                s.pop();
//            }
//
//}
//int main()
//{
//   string s = "i.like.this.program.very.much";
//    //string s = "pqr.mno";
//    cout<<s;end
//    reverseWords(s);
//}


//  BINARY OR NOT

//bool isBinary(char *str)
//{
//    int n=sizeof(str)/sizeof(char);
//    bool f=true;
//    cout<<n;ne
//    for(int i=0;i<n-1;i++)
//    {
//        if(str[i]!='1' && str[i]!='0')
//            f=false;
//    }
//    return f;
//}
//int main()
//{
//    char str[]={'1','f','0','1'};
//    (isBinary(str))?(cout<<"YES"):(cout<<"NO");
//}

// CONVERT INTO ROMAN

//int roman(int n)
//{
//    string o[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
//    string m[] = {"", "M", "MM", "MMM"};
//    string c[] = {"", "C", "CC", "CCC", "CD", "D","DC", "DCC", "DCCC", "CM"};
//    string x[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
//    string ans;
//    string thousand = m[n/1000];
//    string hund = c[(n%1000)/100];
//    string tens = x[(n%100)/10];
//    string one = o[n%10];
//    ans=thousand+hund+tens+one;
//    cout<<ans;
//}
//int main()
//{
//    int n=2949;
//    roman(n);
//}

//  MISSING CHAR IN PANGRAM

//string missingPanagram(string str)
//{
//    int data[256]={0};
//    transform(str.begin(),str.end(),str.begin(),::tolower);
//    for(int i=0;i<str.length();i++)
//    {
//        data[str[i]]++;
//    }
//    for(int i=0;i<256;i++)
//    {
//        cout<<char(i)<<"-"<<data[i]<<" ";
//    }
//    for(int i=97;i<123;i++)
//    {
//        if(data[i]==0)
//            cout<<char(i);
//    }
//
//}
//int main()
//{
//    string str="Abcdefghijklmnopqrstuvwxy";
//    missingPanagram(str);
//}

// REMAINDER WITH 7

//int remainderWith7(string n)
//{
//    int res=0;
//    for(int i=0;i<n.length();i++)
//    {
//        res=res*10+(n[i]-'0');
//        res=res%7;
//    }
//    return res;
//}
//int main()
//{
//    string s="123";
//    remainderWith7(s);
//}

//  MAXIMUM OCCURING CHAR

//char getMaxOccuringChar(char* str)
//{
//    int data[256]={0},max=0;
//    for(int i=0;str[i]!='\0';i++)
//    {
//        data[str[i]]++;
//    }
//    for(int i=0;i<256;i++)
//    {
//        cout<<char(i)<<"-"<<data[i]<<" ";
//        if(data[i]>max)
//            max=data[i];
//    }
//    for(int i=0;i<256;i++)
//    {
//        if(data[i]==max)
//        {
//            ne
//            cout<<"got it - "<<char(i);
//            break;
//        }
//
//    }
//}
//int main()
//{
//    //char str[]={'t','e','s','t','s','a','m','p','l','e'};
//    //char str[]={"output"};
//    char str[20];
//    scanf("%s",str);
//    getMaxOccuringChar(str);
//}

// FIND PATTERN

//int strstr(string s, string x)
//{
//     int n=s.find(x);
//     cout<<n;
//}
//int main()
//{
//    string s="GeeksForGeeks",x="z";
//    strstr(s,x);
//}


//Check if strings are rotations of each other or not


//void solve(string s1,string s2)
//{
//    if(s1.length()!=s2.length())
//        cout<<"not found";
//    cout<<s1<<endl<<s2<<endl;nl;
//    string t;
//    t=s1+s1;
//    cout<<t;nl;
//    cout<<t.find(s2);nl;
//    if(t.find(s2)>=0 && t.find(s2)<=s1.length())
//    {
//        cout<<"found";
//    }
//    else
//    {
//        cout<<"not found";
//    }
//}
//int main()
//{
//    string s1="dylsebxjwlmpamjneoehhlgayxtgs",s2="lsebxjwlmpamjneoehhlgayxfgsdy";
////    string s1="geeksforgeeks",s2="forgeeksgeeks";
//    solve(s1,s2);
//}

// ATOI

//int extractNum(string str)
//{
//    int num=0,t;
//    char ch;
//    for(int i=0;i<str.length();i++)
//    {
//        ch=str[i];
//        t=int(ch);
//        if(t>=48 && t<=57)
//        {
//            t-=48;
//            num+=t;
//            num*=10;
//        }
//    }
//    return num/10;
//}
//int atoi(string str)
//{
//    cout<<str;nl;
//    for(int i=0;i<str.length();i++)
//    {
//        char
//        ch=str[i];
//        int t=int(ch);
//        if(str[0]=='-')
//            break;
//        if(t<48 || t>57)
//        {
//            return -1;
//        }
//    }
//    if(str[0]=='-')
//    {
//        return extractNum(str)*-1;
//    }
//    else
//    {
//        return extractNum(str);
//    }
//
//}
//int main()
//{
//    string a="197";
////    string a="493aaa";
//    cout<<atoi(a);
//}

// FIRST  NON REPEATING CHAR
//char solve(string S)
//{
//    cout<<S;nl;
//    map<char,int> mp;
//    for(int i=0;i<S.length();i++)
//    {
//        mp[S[i]]++;
//    }
//    for(int i=0;i<S.length();i++)
//    {
//        if(mp[S[i]]==1)
//        {
//            return S[i];
//        }
//    }
//    return '$';
//}
//int main()
//{
//    string s="aabb";
//    cout<<solve(s);
//}


// MATCH SPECIFIC PATTERN (ONE ON ONE MAPPING)


//string convert(string s)
//{
//    int num=47;
//    string conv="";
//    for(int i=0;i<s.length();i++)
//    {
//        if(s[i]!=s[i-1])
//        {
//            num++;
//        }
//        conv+=char(num);
//    }
//    return conv;
//}
//vector<string> solve(vector<string> dict,string pattern)
//{
//    vector<string> v;
//    coutA(dict,dict.size());nl;
//    cout<<pattern;nl;
//    string pat=convert(pattern);
//    for(auto it:dict)
//    {
//        if(pat==convert(it))
//        {
//            v.push_back(it);
//        }
//    }
//    return v;
//}
//int main()
//{
//    vector<string> res,v={"abb","abc","xyz","xyy"};
//    string pat="foo";
//    res=solve(v,pat);
//    coutA(res,res.size());
//}

// FIRST LETTER OF STRING

//void solve(string S)
//{
//    cout<<S;nl;
//    string res;
//    res+=S[0];
//    for(int i=0;i<S.length();i++)
//    {
//        if(S[i]==' ')
//            res+=S[i+1];
//    }
//    cout<<res;
//}
//int main()
//{
//    string s="geeks for geeks";
//    solve(s);
//}

// Remove Duplicates

//void solve(string S)
//{
//    cout<<S;nl;
//    string res;
//    for(int i=0;i<S.length();i++)
//    {
//        if(res.find(S[i])>=0 && res.find(S[i])<=S.length())
//        {
//            continue;
//        }
//        res+=S[i];
//    }
//    cout<<res;
//}
//int main()
//{
//    string S="gfg";
//    solve(S);
//}

//Remove all duplicates from a given string

//void solve(string str)
//{
//    cout<<str<<endl;
//    set<char> s;
//    s.insert(str[0]);
//    cout<<str[0]<<" ";
//    for(int i=1;i<str.length();i++)
//    {
//        if(s.find(str[i])==s.end())
//        {
//            cout<<str[i]<<" ";
//            s.insert(str[i]);
//        }
//        else
//        {
//            continue;
//        }
//    }
//}
//int main()
//{
//    string str="HappyNewYear";
//    solve(str);
//}

//Min Number of Flips

//void solve(string str)
//{
//    cout<<str<<endl;
//    int zFlip=0,oFlip=0,t=0,t1=1;
//    string zStr,oStr;
//    for(int i=0;i<str.length();i++)
//    {
//        if(i%2==0)
//        {
//            zStr+='0';
//            oStr+='1';
//        }
//        else
//        {
//            zStr+='1';
//            oStr+='0';
//        }
//    }
//    for(int i=0;i<str.length();i++)
//    {
//        if(str[i]!=zStr[i])
//        {
//            zFlip++;
//        }
//        else if(str[i]!=oStr[i])
//        {
//            oFlip++;
//        }
//    }
//    cout<<zStr<<endl<<oStr<<endl<<zFlip<<" "<<oFlip;
    // minimum of zFlip & oFlip
//}
//int main()
//{
//    string str="0001010111";
//    solve(str);
//}


//Convert a Sentence into its equivalent mobile numeric keypad sequence.

//void solve(string str)
//{
//    cout<<str<<endl;
//    string ans;
//    vector<string> v={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
//    for(int i=0;i<str.length();i++)
//    {
//        if(str[i]==' ')
//        {
//            ans+="0";
//            continue;
//        }
//        ans+=v[int(str[i])-'A'];
//    }
//    cout<<ans;
//}
//int main()
//{
//    string str="HEY U";
//    solve(str);
//}


//Permutations of a given string

//void solve(string str)
//{
//    cout<<str<<endl;
//    sort(str.begin(),str.end());
//    do
//    {
//        cout<<str<<" ";
//    }while(next_permutation(str.begin(),str.end()));
//}
//int main()
//{
//    string str="ljr";
//    solve(str);
//}

//Check if string is rotated by two places

//void solve(string a,string b)
//{
//    cout<<a<<" "<<b<<endl;
//    string ideal,ideal2;
//    ideal+=a.substr(2,a.length());
//    ideal+=a[0];
//    ideal+=a[1];
//    ideal2+=a[a.length()-2];
//    ideal2+=a[a.length()-1];
//    ideal2+=a.substr(0,a.length()-2);
//    if(b==ideal || b==ideal2)
//    {
//        cout<<"Rotated by 2"<<endl;
//    }
//    else
//    {
//        cout<<"Not Rotated by 2"<<endl;
//    }
//}
//int main()
//{
//    string a="fsbcnuvqhffbsaqxwp",b="wpfsbcnuvqhffbsaqx";
//    solve(a,b);
//}

//Second most repeated string in a sequence

//void solve(string arr[],int n)
//{
//    map<string,int> mp;
//    for(int i=0;i<n;i++)
//    {
//        mp[arr[i]]++;
//    }
//    for(auto it:mp)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }
//    vector<pair<int,string>> vp;
//    for(auto it:mp)
//    {
//        vp.push_back(make_pair(it.second,it.first));
//    }
//    sort(vp.rbegin(),vp.rend());
//    for(auto it:vp)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }
//    cout<<vp[1].second;
//}
//int main()
//{
//    int N = 6;
//    string arr[] = {"aaa", "bbb", "ccc", "bbb", "aaa", "aaa"};
//    solve(arr,N);
//}

//Longest common prefix

//void solve(string str1,string str2)
//{
//    cout<<str1<<" "<<str2<<endl;
//    string t;
//    for(int i=str1.length();i>=0;i--)
//    {
//        t=str1.substr(0,i);
//        if(i<=0)
//        {
//            ans.push_back(-1);
//            break;
//        }
//        if(str2.find(t)!=string::npos)
//        {
//           cout<<0<<" "<<i-1<<endl;
//            break;
//        }
//    }
//}
//int main()
//{
//    string str1 = "geeks",str2 = "dgeek";
//    string str1 = "practicegeeks",str2 = "coderpractice";
//    solve(str1,str2);
//}


//isomorphic

//bool areIsomorphic(string str1, string str2)
//{
//    int mp[256]={0},mp2[256]={0};
//    int num=0,num2=0;
//    if(str1.length()!=str2.length())
//        return false;
//    for(int i=0;i<str1.length();i++)
//    {
//        mp[str1[i]]=num++;
//    }
//    for(int i=0;i<str2.length();i++)
//    {
//        mp2[str2[i]]=num2++;
//    }
//    for(int i=0;i<str1.length();i++)
//    {
//        cout<<mp[str1[i]]<<" "<<mp2[str2[i]]<<endl;
//    }
//    for(int i=0;i<str1.length();i++)
//    {
//        if(mp[str1[i]]!=mp2[str2[i]])
//        {
//            return false;
//        }
//    }
//    return true;
//}
//int main()
//{
//    (areIsomorphic("aab","xxy"))?(cout<<"Isomorphic"):(cout<<"Not isomorphic");
//}




//Minimum indexed character

//int minIndexChar(string str, string patt)
//{
//    set<char> s;
//    for(int i=0;i<patt.length();i++)
//    {
//        s.insert(patt[i]);
//    }
//    for(int i=0;i<str.length();i++)
//    {
//        if(s.find(str[i])!=s.end())
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int ans=minIndexChar("geeksforgeeks","set");
//    cout<<ans;
//}


//Reverse each word in a given string

//void solve(string s)
//{
//    cout<<s<<endl<<endl;
//    stack<char> st;
//    string ans="";
//    for(int i=0;i<s.length();i++)
//    {
////        cout<<s[i];
//        if(s[i]=='.')
//        {
//            while(!st.empty())
//            {
//                ans+=st.top();
//                st.pop();
//            }
//            ans+='.';
//            continue;
//        }
//        st.push(s[i]);
//    }
//    while(!st.empty())
//    {
//        ans+=st.top();
//        st.pop();
//    }
//    cout<<"Ans : "<<ans;
//}
//int main()
//{
////    string s="i.like.this.program.very.much";
//    string s="my.name.is";
//    solve(s);
//}


//Search Pattern (Z-algorithm)

//void solve(string txt,string pat)
//{
//    cout<<txt<<" "<<pat<<endl;
//    int ind=0,ans;
//    set<int> s;
//    vector<int> ansa;
//    for(int i=0;i<txt.length();i++)
//    {
//        ans=txt.find(pat,i);
//        if(ans!=-1)
//        {
//            s.insert(ans+1);
//        }
//    }
//    for(auto it:s)
//    {
//        ansa.push_back(it);
//    }
//    return ansa;
//}
//int main()
//{
//    string s="batmanandrobinarebat",pat="bat";
//    solve(s,pat);
//}


//Longest Common Prefix in an Array

//int mini(string a[],int n)
//{
//    int count=INT_MAX,ind;
//    for(int i=0;i<n;i++)
//    {
//        if(count>a[i].length())
//        {
//            count=a[i].length();
//            ind=i;
//        }
//    }
//    return ind;
//}
//void solve(int N,string arr[])
//{
//    for(int i=0;i<N;i++)
//    {
//        cout<<arr[i]<<"\n";
//    }
//    int sortInd=mini(arr,N),sortLen=arr[sortInd].length(),ans=0;
//    string sortString=arr[sortInd];
//    bool flag=true;
//    // cout<<sortString<<" "<<sortInd<<" "<<sortLen<<endl;
//    for(int i=0;i<sortLen;i++)
//    {
//        char ch=arr[0][i];
//        // cout<<"'"<<ch<<"'->";
//        for(int j=0;j<N;j++)
//        {
//            if(arr[j][i]!=ch)
//            {
//                flag=false;
//                // cout<<endl<<arr[j][i]<<"!="<<ch<<" ans="<<ans<<endl;
//                break;
//            }
//            // cout<<arr[j][i]<<" ";
//        }
//        if(flag==false)
//        {
//            break;
//        }
//        ans++;
//        // cout<<endl;
//    }
//    if(ans==0)
//    {
//        return "-1";
//    }
//    if(ans==1)
//    {
//        return sortString;
//    }
//    cout<<sortString.substr(0,ans);
//
//}
//int main()
//{
//    int N = 4;
////    string arr[]={"geeksforgeeks", "geeks", "geek","geezer"};
//    string arr[]={"neykgrybpitzfunlefmtmbikgpxkqingmmsudqysarrilgtrnhka","tmrklbbtojfadcftaxwtqegyxymeioodcfonirhxaozdsfyseulxysvxsjdazsgbzupilyfnmgqflqzsllplfmjzwobvghzibos","mzbaftfrkhjxuaibmtakibiqjhamvsbjrcjxwrqgybfsbntpjtatwilfrmsmgtvyxextxpbvqgntwiihbkcyunflbzxku","ksbjnyypuqxjjtstcvgevaubmxclhxgtpjcchatdsrpdmhzpefvafpdtpffyenstwuydxrjrkyvxhuonzjpgbsaqa","oesgaodytcretccoblkrzjaosdjstjxkprsphvpazj","tljjovufwfhkxltpeeoowfhnoedpemwzzhipeeuakdljogzvnpljxuwlzzcfnygogodkvxnhdyqrgpmtfycesb","tcsaqsgeaxknsjazmapeghsaoseslfjgibhaupgu","qhgajhojzsq","lswdyoqexzobiovxwrknbspkaduzymhledqctjisiwtqmqpjkbylunxws","vqdcdjhuoadwsntofheuqqwobsdzoysjoynujuoxwtuogpenwjhpbdfdxjelhyuxyjridhfzabqiquvp","dehilmgw","tdqodpxwzdegegiupapmpwpvdajpifhblarorrmquqw","xgvohmayiswouffekphvpzlgsywoquonbjdkxgiiygwuldyysfthghpyfnmvibllmqvmw","uwmsszvqxoytxgcnfhctekwrxlisxgarfolxngqnwqiwwkld","nzzyvrvgbqfjqyoejmtqegouqkqaxwvlvvlsoibrygaqfrwofsgjaxdrhvrfrnsoidhylipmopevidknvswvpb","zzggsvyhfdqdqyseojjksowflqeigfvfgdlzylidoyiewajml","ydkwlvnpdvwaaffne","amiokquisfwebvjntuiglobkodpusvzshkitafbvmzzowibqfmysaacqftmyoosxydqaitvutukpfmfmaeeagj","nefntvgqtljttcppxlansoueoaloguiwypjtkrmdcvxxxonvzpksdeyrfjhndplefvxpojvrg","qgidbjundxtcqanxqrpbxwwwnliieoeuuoaxyukduehkgvkwobylxwhkjpvngbkaqmyoiktcqbp","wztkcrvzqelzwinc","zcalcqvnjydkpcgqwqspnrfuefqnuuxvwzibpdoadtl","wtksmcjzvrtaylpufopenxfecte","orakllexnoyjfulffaznoordnwhprnvffysqjwnyklhrfuwnuvakltnyr","oiklpplhfue","tqhckpzgc","eegpxtqqseacrptfzyzfuuvbzfsyowtsazjzvzpnfrrzhkeikfneakhbsczgyuazujarlseqjxpshvarbpxdaggsifahba","xlkoycuporggaejtfyqkyzqshxsqyuawilkgphvdyemzivsptlzumpmvo","mmbokjzxqrenuctgdbdy","xlrtxihswoglqxvbwstnwjkbcsggw","yvrqoqyvlxmtieqdfpwbcskovmhcsfitaajqsjndgzxodnulcqmhkwxgkgkflsy","ujdnstsbuppyfjljbxsovqwhwgokaoxxxdkswetqwiqbub","xaflxvhftptdqkbnhgzzcdsubdnezqryrwkottvmjrqbbtoizpkduezwjoakfrjypvoiomxzdpcekqolhyocd","aogaznukljfbuvntxqizwuslfzjvdokdfqeedaoqjvufqhypaipwchhjgtekjppohtunvi","hfzmyjnnjxchcjrl","kqevhtkopebkphruigurviasmkwybiqnywifruvgzztqimm","uhiprkkdugbxqtmqrxx","rvrsukiczvuteclvpvaldejwxxmrumamhrebepfd","zwqehlteleippgpnughgivnzcqfrvidxftboeutradhqjyfdgokokzpmqvfndikkdnzhj","akvjcghjjpxvdhxvvpqacvipglchuozvywecconndkljsienxwqbtyqzmvgijhdjfknjaaxfkkoes","urqkukknlwkuhtdkejwtsytrefb","mvpiohsjrewfdgbkbeuhntait","zxcbsoyjwnqqwkvupycqiduemkzmsthtsjukattygmpewkylkcbufxyrjafbtovlzryz","tyufpybbymlap","hpfayfhcyvzmvskwfdwzjlakoazzdqgmfmpgrwissjepbqngtkiexkrmmqnriueqgtwz","gtlpzaspozlajpxtgjhyxzjtdzbyvcrdwduvfm","tlyvwntrwezwdyfwde","dbaugyzavfniaygwxwrouvnqbnyxqexvizqozppuwcdxcltzjmodhdwitwilahhiizxhqobnqgksufudrkjanflgbv"};
//    solve(N,arr);
//}

//Remove Consecutive Characters

//void solve(string S)
//{
//    cout<<S<<endl;
//    string ans;
//    ans=S[0];
//    char ch=S[0];
//    for(int i=1;i<S.length();i++)
//    {
//        if(S[i]!=ch)
//        {
//            ch=S[i];
//            ans+=S[i];
//        }
//        else if(S[i]==ch)
//        {
//            continue;
//        }
//    }
//    cout<<ans;
//}
//int main()
//{
//    string S="aabb";
//    solve(S);
//}

// Rearrange a string

//string arrangeString(string str)
//{
//    int sum=0;
//    string s;
//   for(int i=0;i<str.length();i++)
//   {
//        if(str[i]>='1' && str[i]<='9')
//        {
//            sum+=str[i]-'0';
//
//        }
//        else if(str[i]=='0')
//        {
//            continue;
//        }
//        else
//        {
//            s+=str[i];
//        }
//   }
//   sort(s.begin(),s.end());
//   s+=to_string(sum);
//   return s;
//
//}

//Pangram Checking

//void solve(string str)
//{
//    set<char> s;
//    cout<<str<<endl;
//    for(int i=0;i<str.length();i++)
//    {
//        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
//        {
//            s.insert(str[i]);
//        }
//    }
//    for(auto it:s)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    if(s.size()==25)
//    {
//        cout<<"Panagram";
//    }
//    else
//    {
//        cout<<"Not Panagram";
//    }
//    cout<<s.size();
//}
//int main()
//{
////    string s="abcdefghijklmnopqrstuvwxyz";
//    string s="Bawds jog, flick quartz, vex nymph";
//    solve(s);
//}

//A Special Keyboard

//void solve(string S1,string S2)
//{
//    cout<<S1<<endl<<S2<<endl;
//    map<char,int> mp;
//    int curr,prev,ans=0;
//    for(int i=0;i<S1.length();i++)
//    {
//        mp[S1[i]]=i;
//    }
//    for(auto it:mp)
//    {
//        cout<<it.first<<"-"<<it.second<<" ";
//    }
//    ans+=mp[S2[0]];
//    for(int i=1;i<S2.length();i++)
//    {
//        cout<<"->"<<(mp[S2[i]]-mp[S2[i-1]]);
//        ans+=abs(mp[S2[i]]-mp[S2[i-1]]);
//    }
//    cout<<"ANS : "<<ans;
//}
//int main()
//{
////    string S1="zyxwvutsrqponmlkjihgfedcba",S2="a";
//    string S1="abcdefghijklmnopqrstuvwxyz",S2="cba";
//    solve(S1,S2);
//}

// Uncommon characters

//string UncommonChars(string A, string B)
//{
//    set<char> s1,s2,ansS;
//    string ans;
//    for(int i=0;i<A.length();i++)
//    {
//        s1.insert(A[i]);
//    }
//    for(int i=0;i<B.length();i++)
//    {
//        s2.insert(B[i]);
//    }
//    for(int i=0;i<A.length();i++)
//    {
//        if(s2.find(A[i])!=s2.end())
//        {
//            continue;
//        }
//        ansS.insert(A[i]);
//    }
//    for(int i=0;i<B.length();i++)
//    {
//        if(s1.find(B[i])!=s1.end())
//        {
//            continue;
//        }
//        ansS.insert(B[i]);
//    }
//    for(auto it:ansS)
//    {
//        ans+=it;
//    }
//    if(ans.length()==0)
//    {
//        return "-1";
//    }
//    return ans;
//
//}

// Look and Say Pattern

//string countAndSay(string n)
//{
//        // cout<<"check -> "<<n<<endl;
//        int count=1;
//        string ans;
//        char t=n[0];
//        for(int i=1;i<=n.length();i++)
//        {
//            if(n[i]!=t)
//            {
//                ans+=to_string(count);
//                ans+=t;
//    //            ans+=",";
//    //            cout<<t<<" "<<count<<endl;
//                count=1;
//                t=n[i];
//            }
//            else
//            {
//                count++;
//            }
//        }
//        return ans;
//    }
//string lookandsay(int n)
//{
//    vector<string> ans;
//    string str,res;
//    ans.push_back("1");
//    for(int i=1;i<n;i++)
//    {
//        str=countAndSay(ans[i-1]);
//        ans.push_back(str);
//    }
//    // res=ans[n-1];
//    return ans[n-1];
//}

// Search Pattern (Rabin-Karp Algorithm)

//vector <int> search(string pat, string txt)
//{
//    vector<int> ans;
//    string t;
//    for(int i=0;i<txt.length();i++)
//    {
//        t=txt.substr(i,pat.length());
//        if(t==pat)
//        {
//            ans.push_back(i+1);
//        }
//    }
//    if(ans.size()==0)
//    {
//        ans.push_back(-1);
//    }
//    return ans;
//}

// Non Repeating Character

// char nonrepeatingCharacter(string S)
// {
//     map<char,int> mp;
//     for(int i=0;i<S.length();i++)
//     {
//         mp[S[i]]++;
//     }
//     for(int i=0;i<S.length();i++)
//     {
//         if(mp[S[i]] == 1)
//         {
//             return S[i];
//         }
//     }
//     return '$';
// }
