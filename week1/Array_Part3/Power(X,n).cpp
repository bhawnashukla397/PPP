#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int ans = 1;
    
    while(n>0){
        if(n&1){    //odd no. => extra x multiply
            ans = (1LL * ans * (x)%m);    //2^even * x =>    here, otherwise do normal power like a ^ (b/2)^2
        }    //we can also do ans = (1LL * ans * (x)%m)%m => %m at last coz excessive mod Ms will not change result
        //for even no. & odd - one no. upwards multiply
    x = ( 1LL * (x)%m * (x)%m);            // x = x*x;
        //    //we can also do x = ( 1LL * (x)%m * (x)%m)%m => %m at last coz excessive mod Ms will not change result
    n = n>>1;                         // n=n/2;
    }
    return ans;
}
