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
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted"<<endl;
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
}
