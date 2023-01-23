#include<bits/stdc++.h>
using namespace std;
///Author - Md Asif Ikbal Mehedi///
#define po long long pod = a[0] & 1;
#define pe long long pev = a[1] & 1;
#define ll long long
#define mop unordered_map<ll , ll>
#define ld long double
#define priority_pair priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>
#define map_pair map<pair<char,char>,int>
#define ffor(i,s,e) for(int i=s;i<e;i++)
#define forrv(i,s,e) for(int i=e;i>s;i--)
#define make_uppercase string s;cin>>s; transform(s.begin(), s.end(), s.begin(), ::toupper);
#define make_lowercase string s;cin>>s; transform(s.begin(), s.end(), s.begin(), ::tolower);
#define first_one_upper_case string s;cin>>s; s[0]=toupper(s[0]);cout<<s<<endl;
#define pb push_back
#define p_vec_g priority_queue<ll,vector<ll>,greater<ll>>
#define pob pop_back
#define PI acos(-1)
#define has   map<pair<ll int ,ll int>,ll>hash;
#define mpnt map<string,int>
#define pair_char pair<char,char>
#define max(x,y) (x>y?x:y)
#define v_l vector<ll>
#define string_sort sort(str.begin(),str.end());
#define reverse_string reverse(string.begin(),string.end());
#define min(x,y) (x<y?x:y)
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define nl cout<<endl;
#define cn cin>>
#define ct cout<<
#define s_ sort
#define MOD  998244353
#define i_m int main()
#define bye return 0;
#define lol long long uff; cin>>uff;while(uff--)
#define pii pair<int,int>
#define arr_in long long n;cin>>n; long long arr[n];for(long long i=0;i<n;i++){cin>>arr[i];}
int main()
{
    ll arr[5];
    ffor(i,0,5)
    cn arr[i];
    ll arr1[5];
    ffor(i,0,5)
    cn arr1[i];
    pair<ll,ll>p[5];
    ffor(i,0,5)
    {
        p[i]={arr[i],arr1[i]};
    }
    ffor(i,0,5)
    ct p[i].first<<" "<<p[i].second<<endl;

}


