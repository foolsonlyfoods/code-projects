#include<iostream>

using namespace std;

int firstInput();
int secondInput();
void displayNumber(int start, int end);

int main(){
    //ask the user to enter 2 numbers
    //display the numbers from start (input) to end(input)
    int start = 0, end = 0;

    start = firstInput();
    //num1 = firstInput();

    end = secondInput();
    //num2 = secondInput();

    displayNumber(start, end);
    return 0;
}

int firstInput(){
    int num1 = 0;

    cout<<"Enter first number: ";
    cin>>num1;

    return num1;
}

int secondInput(){
    int num2 = 0;

    cout<<"Enter second number: ";
    cin>>num2;

    return num2;
}

void displayNumber(int start, int end){
    int ctr = 0; 

    if (start < end){
         //initialization;condition;updating
        for(ctr = start; ctr <= end; ctr++){
         cout<<ctr<<" ";
        }
    }else{
        for(ctr = start; ctr >= end; ctr--){
            cout<<ctr<<" ";
        }
    }
}