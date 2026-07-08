#include <iostream>
using namespace std;


void reverse(int arr[],int sz){
int start =0; int end =sz -1;

while (start <end)
{
    swap(arr[start],arr[end]);
    start++; end--;
}
}
int main(){
    int arr[] ={4,5,8,11,22,54,15};
    int sz = 7;

reverse(arr ,sz);

for (int i = 0; i < sz; i++)
{
    /* code */
    cout << arr[i] << " ";
}
return 0;






}