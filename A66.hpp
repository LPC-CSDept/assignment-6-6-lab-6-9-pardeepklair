//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )

int getinput(int &, int &, int &);
int maxmin(int, int, int, int &, int&);

int main() { 
    int num1, num2, num3;
    int max, min;
    getinput(num1, num2, num3); // use the same function used in 6-7
    maxmin(num1, num2, num3, max, min);
    cout << " The gap between " << max << " and " << min << "the number of iterations to find the max and min" << max-min << endl;

}

int getinput(int &num1, int &num2, int &num3) {
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
}

int maxmin(int num1, int num2, int num3, int &max, int &min) {
    if((num1 < num2 && num1 > num3))
        num1 = min;
    else if (num2 < num3)
        num2 = min;
    else
        num3 = min;
    return min;

    if((num1 > num2 && num1 > num3))
        num1 = max;
    else if (num2 > num3)
        num2 = max;
    else
        num3 = max;
    return max;
}