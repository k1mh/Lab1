#include <iostream>
int main(){


    int num;
    std::cout<<"Enter  a  number :";
    std::cin>>num;
    for(int i=2;i<=num/2;i++){
    if(num % i!=0){
        std::cout<<"It's not prime  number.";
    }else{
        std::cout<<"It's prime number.";
    }}
    return 0;
}