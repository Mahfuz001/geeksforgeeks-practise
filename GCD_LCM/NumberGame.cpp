#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
#define fori(n) for(int i=0;i<n;i++)
#define ll unsigned long long int
ll getGCD(ll a,ll b){
    ll n1,n2,rem;
    n1 = max(a,b);
    n2 = min(a,b);

    while(n2 !=0){
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}

ll getLCM(int n){
    vector<int> vec(n);
    iota(vec.begin(),vec.end(),1);
    ll lcm = vec[0];

    fori(vec.size()){
        lcm = (vec[i] * lcm) / getGCD(vec[i],lcm);
    }

    return lcm;
}


int main(){
    #if 0
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << getLCM(x) << endl;
    }

    return 0;
}
