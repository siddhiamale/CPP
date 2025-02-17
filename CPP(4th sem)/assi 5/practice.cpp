#include<iostream>
using namespace std;
class calculation{
private:
    int num1,num2;
public:
    void initialise(int a,int b){
        num1 = a;
        num2 = b;
    }
    int add(){
        return num1+num2;
    }
    int sub(){
        return num1-num2;
    }
    int mult(){
        return num1*num2;
    }
    int div(){
        return num1/num2;
    }
};

int main(){
    calculation c;
    int a,b;
    cout << "enter 2 numbers :";
    cin >> a >> b;
    c.initialise(a,b);

    cout << "addition is :"<<c.add()<<endl;
    cout << "subtraction is :"<<c.sub()<<endl;
    cout << "multiplication is :"<<c.mult()<<endl;
    cout << "division is :"<<c.div()<<endl;
}