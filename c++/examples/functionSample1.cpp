#include<iostream>

using namespace std;

//function declaration - only needed if functions are written below the main program
void myFunction();
void hello();


int main(){
    myFunction(); //function call
    myFunction();
    myFunction();

    //hello();  -> will be called 1 time therefore only 1 ouput of the word "Hi"
    return 0;
}

void myFunction(){
    // this is a user-defined function
    // created by the progr
    cout<<"Hello World!"<<endl;

    hello(); //function call
}

void hello(){
    cout<<"Hi"<<endl;
}
