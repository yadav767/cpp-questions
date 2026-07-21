#include <iostream>
#include <map>
using namespace std;

void two_sum(int arr[], int size, int target)
{
    map<int, int> mp;

    for (int i = 0; i < size; i++)
    {
        int remaining = target - arr[i];
        if(mp.count(remaining)){
            cout << "Indices " << mp[remaining] << ", " << i << endl;
            return;
        }else {
            mp[arr[i]]=i;
        }
    }
    cout << "No pair found !";
}

int main()
{

    int arr[4] = {2, 7, 11, 15};
    int target = 18;

    two_sum(arr,4,target);

    return 0;
}