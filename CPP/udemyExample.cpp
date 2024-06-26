#include <iostream>
using namespace std;

int find_area (int side_length);
double find_area (double length, double width);

int main() {
    
    int side_length;
    double length;
    double width;
    int square_area = 0;
    double rectangle_area = 0;

    cout << "Enter the side length: " << endl;
    cin >> side_length;
    cout << "Enter the length: " << endl;
    cin >> length;
    cout << "Enter the width: " << endl;
    cin >> width;
    
    square_area = find_area(side_length);
    rectangle_area = find_area(length,width);
    
    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
    return 0;
}


int find_area (int side_length)
{
    int output = side_length * side_length;
    return output;
}

double find_area (double length, double width)
{
    double output = length * width;
    return output;
}







