#include <iostream>
using namespace std;
int n;

int arr[100];

void insertion(int pos , int value){
    if(pos > n){
        cout<<"Enter the proper position to insert"<<endl;
    }
    else{

    
    for(int i = n;i>pos;i--){
        arr[i] = arr[i-1];

    }arr[pos] = value;
    n++;
    cout<<value<<" Inserted SucessFully at "<<pos<<endl;
}
}
void deletion(int pos){
    for(int i = pos;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"Deleted sucessFully"<<endl;
}
void display(){
    cout<<"Elements of the array: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
void searching(int value){
    bool flag;
    for(int i = 0; i < n;i++){
        if(arr[i] == value){
            cout<<arr[i]<<" Found sucessFully at "<<i<<endl;
            flag = true;
            break;
        }
        else{
            flag = false;
        }
    }if(flag == false){
        cout<<value<<" Not Found"<<endl;
    }
}

int main() 
{ 
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter thee elements of the array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
   

    insertion(2,67);
    display();
    deletion(0);
    searching(2);
    display();
     
}
