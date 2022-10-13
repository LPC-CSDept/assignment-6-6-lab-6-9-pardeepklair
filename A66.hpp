//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )

int maxmin(int, int, int, int &, int &);
void getinput(int &, int &, int &);

void getinput(int &num1, int &num2, int &num3) {
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
}

int maxmin(int num1, int num2, int num3, int &max, int &min) {
    if((num1 < num2 && num1 < num3))
        min = num1;
    else if ((num2 < num1 && num2 < num3))
        min = num2;
    else if ((num3 < num1 && num3 < num2))
        min = num3;

    if((num1 > num2 && num1 > num3))
        max = num1;
    else if ((num2 > num1 && num2 > num3))
        max = num2;
    else if ((num3 > num2 && num3 > num1))
        max = num3;

    return max, min;
  
}