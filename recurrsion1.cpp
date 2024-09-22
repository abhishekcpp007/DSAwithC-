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

*#include <iostream>
using namespace std; */

//





// Function to calculate the sum of the first n natural numbers
/*int sumFirstN(int n) {
    return n * (n + 1) / 2;
}

// Recursive function to calculate the m-th summation
int mthSummation(int n, int m) {
    if (m == 1) {
        return sumFirstN(n);  // Base case: m = 1
    } else {
        // Recursive case: SUM(n, m) = SUM(SUM(n, m-1), 1)
        return sumFirstN(mthSummation(n, m - 1));
    }
}

int main() {
    int n = 5, m = 2;
    cout << "The " << m << "-th summation of first " << n << " natural numbers is: " << mthSummation(n, m) << endl;
    return 0;
}





#include <iostream>
using namespace std;

// Function to calculate the sum of the first n natural numbers
int sumFirstN(int n) {
    return n * (n + 1) / 2;
}

// Recursive function to calculate the m-th summation
int mthSummation(int n, int m) {
    if (m == 1) {
        return sumFirstN(n);  // Base case: m = 1
    } else {
        // Recursive case: SUM(n, m) = SUM(SUM(n, m-1), 1)
        return sumFirstN(mthSummation(n, m - 1));
    }
}

int main() {
    int n = 5, m = 2;
    cout << "The " << m << "-th summation of first " << n << " natural numbers is: " << mthSummation(n, m) << endl;
    return 0;
}
*/

/*int gcd(int a, int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a=48;
    int b=40;
    int x=gcd(a,b);
    cout<<x<<" ";
}
*/


// Given an array of n integer value a target value x print weather x exist in the array or not soleve using recurrion

bool f(int *arr, int n, int i, int x){
    // base case
    if(i==n){
        return false;
    }
    else if(arr[i]==x || f(arr,n,i+1,x)) return true;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int x = 5;
    bool res = f(arr,n,0,x);
    cout<<res;
    return 0;
}