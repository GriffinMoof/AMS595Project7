#include <iostream>

int main()
{
    //Problem 1 ------------------------------------------------------
    //n = input(’Enter a number: ’);
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    
    switch (n){
        //If -1 print negative one
        case -1:
        std::cout<< "negative one" << std::endl;
        break;
        //If 1 print positive one
        case 1:
        std::cout<< "positive one" << std::endl;
        break;
        //else other value
        default:
        std::cout<< "other value" << std::endl;
    }
    return 0;
}