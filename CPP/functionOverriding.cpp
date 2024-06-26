/* Function Overriding */

#include <iostream>
#define VALUE_FLOAT 10.001
#define VALUE_INT 10

using namespace std;

//func name with int return type and int argument 
int func(int num)
{
    cout << "int value is: " << num << endl;
    return num;
}

//same function with float return and float argument 
float func(float num)
{
    cout << "float value is: "<< num << endl;
    return num;
}

//same function with void return and two int argument 
void func(int num2, int num3)
{
    cout << "value is: " << num2 << endl;
    cout << "value is: " << num3 << endl;
}

int main()
{
    int num = VALUE_INT;
    float num1 = VALUE_FLOAT;
    int num2 = 11;
    int num3 = 12;
    
    string s {"bhaumik\n"};
    cout << "" << s;
    
    func(num);
    func(num1);
    func(num2,num3);

    return 0;
}
