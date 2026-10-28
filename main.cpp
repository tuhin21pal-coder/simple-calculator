#include<iostream>

int main(){
    double num1,num2,result;
    std::cout<<"---------CALCULATOR---------"<<'\n';
    int choice;
    std::cout<<"1.Addition."<<'\n';
    std::cout<<"2.Subtraction."<<'\n';
    std::cout<<"3.Multiplication."<<'\n';
    std::cout<<"4.Divisioon."<<'\n'<<'\n';
    std::cout<<"Enter your choice : ";
    std::cin>>choice;
    std::cout<<'\n'<<'\n';
    if(choice>=1 && choice<=4){
        std::cout<<"Enter number 1:";
        std::cin>>num1;
        std::cout<<"Enter number 2:";
        std::cin>>num2;
    }
    switch(choice){
        case 1:
            result = num1+num2;
            std::cout<<"Result : "<<result;
            break;
        case 2:
            result = num1-num2;
            std::cout<<"Result : "<<result;
            break;
        case 3:
            result = num1*num2;
            std::cout<<"Result : "<<result;
            break;
        case 4:
            if(num2 == 0){
                std::cout<<"Can not divide a number by 0";
            }
            else{
                result = num1/num2;
                std::cout<<"Result : "<<result;
            }
            break;
        default :
            std::cout<<"Invalid choice.";
    }
    return 0;
}