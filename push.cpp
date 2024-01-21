#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,10,15,20,25};
    int len = sizeof(arr) / sizeof(arr[0]);

   

    if(len == 0){
        cout<<"the stack is empty.\n";
  }
  cout<<endl;
    arr[len] = 70;
    for(int i = 0;i<=len;i++)
    {
        cout << arr[i] <<"\t";
    }
}