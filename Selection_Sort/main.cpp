#include <iostream>
using namespace std;
int main()
{
   int size;
   cout<<"\nGive me the array size: ";
   cin>>size;
   int arr[size];
   cout<<endl;
    for(int i=0;i<size;i++){
        cout<<"Give me the value of index ["<<i<<"]:";
            cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
            int small=i;
       for(int j=i+1;j<size;j++){
        if(arr[j]<arr[small]){
            small=j;
        }
        swap(arr[i],arr[small]);
    }
    }
    cout<<"Sorted"<<endl;
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
}
