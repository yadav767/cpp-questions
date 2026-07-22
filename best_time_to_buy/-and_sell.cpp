#include <iostream>
using namespace std;
int main(){

    int arr[6]={7, 1, 5, 3, 6, 4};

    int minimun = arr[0];
    int profit = 0;

    for(int i=1; i<6 ;i++){
        int cost = arr[i]-minimun;

        profit=max(profit,cost);

        minimun=min(minimun,arr[i]);

    }

    cout << "Best time to buy and sell stock to get maximum profit is: "<< profit << endl;

    return 0;
}