#include<iostream>

using namespace std;

void enterNumber();
void  displayDayOfTheWeek(int num);

int main(){
    //create a c++ program that asks the user to enter a number
    //determine the day of the week

    enterNumber();
    // displayDayOfTheWeek(num);
    
    return 0;
}

void enterNumber(){
    int num = 0;

    cout<<"Enter a number: ";
    cin>>num;

    displayDayOfTheWeek(num);
}


//PROCESS AND OUTPUT
void  displayDayOfTheWeek(int num){
    if (num == 1){
        cout<<"Sunday";
    }else if(num == 2){
        cout<<"Monday";
    }else if (num == 3){
        cout<<"Tuesday";
    }else if (num == 4){
        cout<<"Wednesday";
    }else if (num == 5){
        cout<<"Thursday";
    }else if(num == 6){
        cout<<"Friday";
    }else if(num == 7){
        cout<<"Saturday";
    }else{
        cout<<"Invalid number";
    }
}