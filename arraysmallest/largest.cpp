#include <iostream>
#include <climits>
using namespace std;

int main(){
int i,n;

int size =5;
int nums [] = {15,1,24,14,29};
int smallest = INT_MAX;
int largest = INT_MIN;
for (int i = 0; i < size; i++)
{
    // if (nums[i]< smallest) Method 1
    // {smallest = nums[i];
       smallest = min(nums[i],smallest);
       largest = max(nums[i],largest);
    }
    
cout << "smallest value = " << smallest << endl;
cout << "Largest value = " << largest;






    return 0;
}