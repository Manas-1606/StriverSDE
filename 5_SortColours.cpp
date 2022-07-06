#include<bits/stdc++.h>
using namespace std;


    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low=0, mid=0, high=n-1;
        
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0:
                swap (nums[low++], nums[mid++]);
                break;

                case 1:
                mid++;
                break;

                case 2:
                swap(nums[mid], nums[high--]);
                break;
            }
        }
        
    }


int main()
{
    vector<int>arr = {1,0};
    sortColors(arr);
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
}