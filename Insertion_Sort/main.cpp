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
    for(int i=1;i<size;i++){
        int v=arr[i];
        int j=i-1;
        while(j>-1 && arr[j]>v){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=v;
        }

    cout<<"Sorted"<<endl;
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
}
