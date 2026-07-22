#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[9]={-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int sum=0;
    int max_sum=INT_MIN;
    for (int i=0 ;i<9 ;i++){
        sum+=arr[i];
        if(sum>max_sum){
            max_sum=sum;
        }

        if(sum<0){
            sum=0;
        }
    }


    cout << "Maximun subarray sum will be: " << max_sum << endl;


    return 0;
}