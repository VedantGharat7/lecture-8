#include <iostream>
#include <climits>
using namespace std;

int main(){
int i,n,max;

int size =5;
int nums [] = {15,1,24,14,29};
int smallest = INT_MAX;
for (int i = 0; i < size; i++)
{
    // if (nums[i]< smallest) Method 1
    // {smallest = nums[i];
       smallest = min(nums[i],smallest);
    }
    
cout << "smallest value = " << smallest;






    return 0;
}