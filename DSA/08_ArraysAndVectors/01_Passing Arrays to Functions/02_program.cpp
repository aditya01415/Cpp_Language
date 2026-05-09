
#include<iostream>
using namespace std;
int main(){
    int arr[]={12,34,12,33,21};   //arr=12 34 12 33 21
                                        // 0   1  2 3 4 
                                        // a5 a9 af a2 a6
    int* ptr=arr;  //ptr=a5
        cout<<*ptr<<endl;  //ptr[0] => 
    *ptr++;
    *ptr++;
    *ptr++;
    cout<<*ptr<<endl;  //ptr[0] => 
    cout<<ptr[2]<<endl;  //ptr[0] => 
    cout<<ptr[3]<<endl;  //ptr[0] => 
    cout<<ptr[4]<<endl;  //ptr[0] => 
    cout<<&arr[0]<<endl;

    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";//ptr[0]
    }
}