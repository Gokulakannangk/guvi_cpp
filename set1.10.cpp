#include<iostream>
using namespace std;

int main() 
{
    
    int num, count = 0;
    
    cout << "enter a number \n";
    cin  >> num;
    while (num > 0)
    {
          num = num / 10;
          count++;
    }
     cout << "number of digits in a number is " << count;
    
    return 0;
}
