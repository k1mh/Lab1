#include <iostream>
int  main(){
    
    int  score;
    std::cout<<"Enter  your  score:";
    std::cin>>score ;
    if(score>=60){
        std::cout<<"You  pass  the  exam."<<std::endl;
    }else{
        std::cout<<"Sorry  you  faileed."<<std::endl;
    }
    return 0;}
    