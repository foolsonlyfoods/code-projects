#include<iostream>

using namespace std;

int enterNumber();
void  displayDayOfTheWeek(int num);

int main(){
    int day = 0;

    day = enterNumber();
    displayDayOfTheWeek(day);
}

int enterNumber(){
    int num = 0;

    cout<<"Enter a number: ";
    cin>>num;

    return num;
}

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