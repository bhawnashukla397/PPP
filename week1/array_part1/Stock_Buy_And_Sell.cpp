#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){


 /* Naive Approach....
   int max=0;
    for(int e=prices.size()-1;e>=1;e--){
        for(int s=0;s<=e;s++){
            if(prices[e]-prices[s]>max)
                max=prices[e]-prices[s];
        }
    }
    return max;
*/

  //Optimised Approach....
    int min=prices[0],max_profit=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<min)
            min=prices[i];
        if(prices[i]-min>max_profit)
            max_profit=prices[i]-min;
    }
    return max_profit;
}
