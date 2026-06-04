#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator{
    protected:
        float a,b;
    public:
        void setdata(int x,int y){
            a=x;
            b=y;
        }
        double operation(int);
        void display1(int n1){
            if (n1<=4)
            {
                cout<<"Result is - "<<operation(n1)<<endl;
            }
            else{
                cout<<"No such operation can be performed in simple calculator"<<endl;
            }
            cout<<endl;
        }
    };
    double simpleCalculator::operation(int n1){
        if (n1==1)
        {
            return a*b;
        }
        if (n1==2)
        {
            return a/b;
        }
        if (n1==3)
        {
        return a+b;
    }
    if (n1==4)
    {
        return a-b;
    }
    
}

class scientificCalculator:public simpleCalculator{
    public:
    double ComplexOperation(int);
    void display2(int n1){
        if (n1>4)
        {
            cout<<"Result is - "<<ComplexOperation(n1)<<endl;
        }
        else{
            display1(n1);
        }
        cout<<endl;
    }
};

int factorial(int x){
    if(x<=1){
        return 1;
    }
    return x*factorial(x-1);
}
double scientificCalculator::ComplexOperation(int n1){
    if (n1==5)
    {
        //Powers
        return pow(a,b);
    }
    if (n1==6)
    {
        //Root
        return pow(a,1.0/b);
    }
    if (n1==7)
    {
        //Combinations
        return factorial(a)/(factorial(b)*factorial(a-b));
        
    }
    if (n1==8)
    {
        //Permutation
        return factorial(a)/(factorial(a-b));
    }
    
}
//Q!- multi level inheritance
//Q2-public mode of inheritamce
class hybridCalculator:public scientificCalculator{
    protected:
    public:
    void display(int n1){
        if(n1<=4){
        cout<<"the result from simple calculator is ";
        display1(n1);
    cout<<endl;}
        else{
            display1(n1);
            cout<<endl;
        }
        cout<<"the result from scintific calculator is ";
        display2(n1);
        cout<<endl;
    }
};

int main(){
    int x,y,user_choice;
    int CalculatorChoice;
    while(true){
    cout<<"WELCOME TO THE CALCULATOR HUB!!"<<endl;
    cout<<"which type of calculator of which you wanna continue with?"<<endl;
    cout<<"1.simple calculator(+,-,*,/)"<<endl;
    cout<<"2.scientific calculator(simple + complex operations)"<<endl;
    cout<<"3.hybrid calculator(simple + scientific calculator)"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"enter your choice - ";
    cin>>CalculatorChoice;
    

    if (CalculatorChoice==1)
    {
        
        simpleCalculator user1;
        cout<<"WELCOME TO THE SIMPLE CALCULATOR!!"<<endl;
        cout<<"Enter your number - ";
        cin>>x;
        cout<<"Enter your number - ";
        cin>>y;
        user1.setdata(x,y);
        cout<<"which operation you are performing?"<<endl;
        cout<<"1. multiplication(*)"<<endl;
        cout<<"2. division(/)"<<endl;
        cout<<"3. addition(+)"<<endl;
        cout<<"4. subtraction(-)"<<endl;
        cout<<"enter your choice(1-4)-";
        cin>>user_choice;
        user1.display1(user_choice);
    }
    else if (CalculatorChoice==2)
    {
        
        scientificCalculator user;
        cout<<"WELCOME TO THE SCIENTIFIC CALCULATOR!!"<<endl;
        cout<<"Enter your number - ";
        cin>>x;
        cout<<"Enter your number - ";
        cin>>y;
        user.setdata(x,y);
        cout<<"which operation you are performing?"<<endl;
        cout<<"1. multiplication(*)"<<endl;
        cout<<"2. division(/)"<<endl;
        cout<<"3. addition(+)"<<endl;
        cout<<"4. subtraction(-)"<<endl;
        cout<<"5. power(a^b)"<<endl;
        cout<<"6. root(a^(1/b))"<<endl;
        cout<<"7. combination(aCb)"<<endl;
        cout<<"8. permutation(aPb)"<<endl;
        cout<<"enter your choice(1-8)-";
        cin>>user_choice;
        user.display2(user_choice);
    }
    else if (CalculatorChoice==3)
    {
        
        hybridCalculator user2;
        cout<<"WELCOME TO THE HYBRID CALCULATOR!!"<<endl;
        cout<<"Enter your number - ";
        cin>>x;
        cout<<"Enter your number - ";
        cin>>y;
        user2.setdata(x,y);
        cout<<"which operation you are performing?"<<endl;
        cout<<"1. multiplication(*)"<<endl;
        cout<<"2. division(/)"<<endl;
        cout<<"3. addition(+)"<<endl;
        cout<<"4. subtraction(-)"<<endl;
        cout<<"5. power(a^b)"<<endl;
        cout<<"6. root(a^(1/b))"<<endl;
        cout<<"7. combination(aCb)"<<endl;
        cout<<"8. permutation(aPb)"<<endl;
        cout<<"enter your choice(1-8)-";
        cin>>user_choice;
        user2.display(user_choice);
    }
    else if (CalculatorChoice==4)
    {
        exit(0);
    }
    else{
        cout<<"enter a valid choice!!"<<endl;
        cout<<"\n";
    }
        
}}