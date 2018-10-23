#include<iostream>
#include<vector>
#include<numeric>
#include<math.h>

using namespace std;
#define fori(n) for(int i=0;i<n;i++)
#define ll unsigned long long int
const unsigned int modulo=1000000007;

int getGCDOfTwoNumber(int a,int b){
    int n1,n2,rem;
    n1 = max(a,b);
    n2 = min(a,b);
    
    while(n2 !=0){
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}

int getGCDOfAnArray(int arr[],int size){
    int gcd;
    gcd = arr[0];

    fori(size){
        gcd = getGCDOfTwoNumber(arr[i],gcd);
    }
    return gcd;
}
ll productOfAnArray(int arr[],int size){
    ll product = 1;
    fori(size){
        product *= arr[i];
    }
    return product;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int arr[x];
        fori(x){
            cin >> arr[i];
        }
        ll ans = pow(productOfAnArray(arr,x), getGCDOfAnArray(arr,x));
        cout << ans % modulo << endl;
    }
    
    return 0;
}
