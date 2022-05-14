// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x=7;
    
//     for(int i=2;i<sqrt(7);i++){
//         if(x%i==0){
//             cout<<"not";
//             break;
//         }
//         else{
//             cout<<"yes";
//             break;
//         }
//     }
//     return 0;
// }

// seive of erotosthenes

#include<bits/stdc++.h>
using namespace std;

int soe(int n){
    int count=0;
    
     
    vector<bool> prime(n+1,true);
    
    // 0 and 1 ko non prime mark krdo
    prime[0]=prime[1]=false;

    // table wise non-prime mark krdo
    for(int i=2;i<n;i++){
        if(prime[i])
            count++;

        // table wise marking
        for(int j=2*i;j<n;j+=i){
            prime[j]=0;
        }    
    }

    return count;
}

int main(){
    
int n=30;
cout<<"count is "<<soe(n)<<endl;

    return 0;
}