#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int maxProfit = 0, bestBuy = prices[0];
    
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > bestBuy){ // Only consider selling if it yields a profit
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]); // Update bestBuy to the lowest price seen so far
    }
    return maxProfit; 
}

int main(){
    vector<int> stockPrices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << maxProfit(stockPrices) << endl;
    return 0;
}