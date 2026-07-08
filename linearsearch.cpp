#include <iostream>
using namespace std;
int linear(int arr[],int sz,int target){

for (int  i = 0; i < sz; i++)
{
    if (arr[i]==target)
    {
        return i; // found
    }
    
}
return -1; // not found


}
int main(){

int arr[] = {22,1,5,8,21,54,2};
 int sz = 7;
int target =54;


cout << linear(arr, sz, target);
    return 0;
}