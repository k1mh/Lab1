#include <iostream>

using namespace std;
int main(){
    //ask user to input age 
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if ( age >=0 && age <=12){
        cout << "Child";
    }else if ( age>=13 && age<=19){
        cout <<"Teen";
    }else if ( age >20){
        cout <<"Adult";
    }
    return 0;
}