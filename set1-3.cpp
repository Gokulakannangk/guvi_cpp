#include <iostream>
using namespace std;
  
int main()
{
    char c;
    cout << "enter the charecter\n";
     cin >> c;
    if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u' || c=='A'
          || c=='E' || c=='I' || c=='O' || c=='U')
        {
        cout << c <<" is a vowel\n";
        }
         else 
        {
        cout << c <<" is a consonant\n";
        }
 return 0;
}
