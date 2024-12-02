#include <iostream>
#include <vector>
using namespace std;
vector<int> find(vector<int> nums) 
{
    int hs[20] = {0};
    vector<int> unnum;
    for (int i = 0;i<nums.size();i++)
    {
        if (!hs[nums[i]])
        { 
            hs[nums[i]] = 1;
            unnum.push_back(nums[i]);
        }
    }
    return unnum;
}
int main() 
{
    int arr[11];
    vector<int> nums;
    cout << "Enter ten numbers:";
    for (int i = 1; i <= 10; i++)
    {
        cin >> arr[i];
        nums.push_back(arr[i]);
    }
    vector<int> unnum = find(nums);
    cout << "The distinct numbers are: ";
    for (int i = 0;i<unnum.size();i++) 
    {
        cout << unnum[i] << " ";
    }
    cout << endl;
    return 0;
}
