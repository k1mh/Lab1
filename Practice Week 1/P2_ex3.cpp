#include <iostream>

using namespace std;

int main(){
    int sum=0, num;
    //ask user to input number 
    cout << "Enter numbers (0 to stop):" << endl;
    do{
        cin >> num;
        sum += num;
    }while (num !=0);
    cout << "Sum total is: "<< sum <<endl;
    return 0;
}