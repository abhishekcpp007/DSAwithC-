#include<iostream>
using namespace std;

/*
int f(int n){
    // base case

if(n<=9 && n>=0) return n;
return f(n/10) + (n%10);
}
int main(){
    int n ;
    cout<<"enter the integer";
    cin>>n;
    int res = f(n);
    cout<<res;
    return 0;
} */

/*#include<iostream>
using namespace std;
int f(int p, int q){
    if(q==0) return 1;
    return p * f(p,q-1);
}
// more optimize way in o(logq)


int f(int p, int q){
    if(q==0) return 1;
    if(q%2==0){
        int res =f(p,q/2);
        return res*res;

    }
    else{
        return p*f(p,q-1);
}
}

int main(){
    int p,q;
    cout<<"enter the value of p and q";
    cin>>p>>q;
    int res = f(p,q);
    cout<<res;
    return 0;
} 

****print using recurrsion in array *******


void f(int *arr , int idx, int n){
    if(idx == n)
    return ;
    
    // self work
    cout<<arr[idx];

    // assumption 
    f(arr , idx+1,n);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    f(arr , 0,n);
    return 0;
}

*/

int sumUsingRecurrsion(int *arr , int idx, int n){
    if(idx == n)
    return 0;
    return arr[idx] + sumUsingRecurrsion(arr , idx+1,n);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int res = sumUsingRecurrsion(arr , 0,n);
    cout<<res;
    return 0;
}



