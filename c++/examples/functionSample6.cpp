#include<iostream>

using namespace std;

int firstNumber();
int secondNumber();
int computeSum(int num1, int num2);
int computeDifference(int num1, int num2);
int computeProduct(int num1, int num2);
int computeQuotient(int num1, int num2);
int computeModulo(int num1, int num2);
void displayResult(int num1, int num2, int sum, int diff, int prod, int quotient, int modulo);

int main(){

    //ask the user to enter 2 numbers.
    //compute for the following: sum, difference, product, quotient, modulo
    //display the result

    int num1 = 0, num2 = 0, sum = 0, diff = 0, prod = 0, quotient = 0, modulo = 0;

    num1 = firstNumber();
    num2 = secondNumber();

    sum = computeSum(num1, num2);
    diff = computeDifference(num1, num2);
    prod = computeProduct(num1, num2);
    quotient = computeQuotient(num1, num2);
    modulo = computeModulo(num1, num2);

    displayResult(num1, num2, sum, diff, prod, quotient, modulo);

    return 0;
}

int firstNumber(){
    int n1;

    cout<<"Enter first number: ";
    cin>> n1;

    return n1;
}

int secondNumber(){
    int n2;

    cout<<"Enter second number: ";
    cin>>n2;

    return n2;
}

int computeSum(int num1, int num2){
    int sum = 0;

    sum = num1 + num2;

    return sum;

    //return num1 + num2;
}

int computeDifference(int num1, int num2){
    int diff = 0;

    diff = num1 - num2;

    return diff;
}

int computeProduct(int num1, int num2){
    return num1 * num2;
}

int computeQuotient(int num1, int num2){
    return num1 / num2;
}

int computeModulo(int num1, int num2){
    return num1 % num2;
}

void displayResult(int num1, int num2, int sum, int diff, int prod, int quotient, int modulo){

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
    cout<<num1<<" - "<<num2<<" = "<<diff<<endl;
    cout<<num1<<" * "<<num2<<" = "<<prod<<endl;
    cout<<num1<<" / "<<num2<<" = "<<quotient<<endl;
    cout<<num1<<" % "<<num2<<" = "<<modulo<<endl;
}