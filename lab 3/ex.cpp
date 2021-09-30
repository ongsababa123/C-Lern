#include<iostream>
using namespace std;
int main()
{
    float s1, s2, s3, s4, s5;
   
  cout << "Enter Grad THAI "; 
    cin >> s1;
  cout << "Enter Grad MATH "; 
    cin >> s2; 
  cout << "Enter Grad ENGLISH "; 
    cin >> s3;
  cout << "Enter Grad SCIENCE "; 
    cin >> s4;
  cout << "Enter Grad SPORT "; 
    cin >> s5;
  
  cout << "THAI " << s1 << endl;
  cout << "MATH " << s2 << endl;
  cout << "ENGLISH " << s3 << endl;
  cout << "SCIENCE " << s4 << endl;
  cout << "SPORT " << s5 << endl;
  
  cout << (s1+s2+s3+s4+s5)/5 << endl;
    return 0;
}