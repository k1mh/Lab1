#include <iostream>
int main(){

    int num;
    bool prime=true;
    std::cout<<"Enter  a  number :";
    std::cin>>num;
    if(num<=1){
        prime=false;
    }else{
        
    for(int i=2;i<=num/2;i++){
    if(num % i==0){
       prime=false;
       break;}
    }
    }
    
if(prime){
     std::cout<<"It's prime  number.";
}else{
    std::cout<<"It's  not prime  number.";
}
    return 0;
}
