#include<iostream>

using namespace std;

void enterNumbers();
void findSum(int num1, int num2);
void displaySum(int sum);

int main(){
   enterNumbers();

   return 0;
}

//INPUT FUNCTION
void enterNumbers(){
    //local declaration of variables
    int num1 = 0, num2 = 0;

    //INPUT
    cout<<"Enter num1: ";
    cin>>num1;

    cout<<"Enter num2: ";
    cin>>num2;

    findSum(num1, num2); //function call with parameters
}

//PROCESS FUNCTION
void findSum(int num1, int num2){
    int sum = 0;

    sum = num1 + num2;

    displaySum(sum);
}

//OUTPUT FUNCTION
void displaySum(int sum){
    cout<<"The sum is "<<sum;
}