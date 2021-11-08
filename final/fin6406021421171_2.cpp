#include <iostream>

using namespace std;

void insertnum(int number[],int num ,int x);

int main()
{
    int num, x;
    

    cout << "How Many numbers is array A: ";
    cin >> num;

    cout << endl;

    int number[num+1];
    cout << "Enter " << num << " Integer for array A: ";
    for (int i = 0; i < num; i++)
    {
        cin >> number[i];
    }
    cout << endl;

    cout << "Enter X: ";
    cin >> x;
    cout << endl;

    insertnum(number,num,x);

    cout << "The Final array A: ";
    for (int i = 0; i < num + 1; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl;
    return 0;
}

void insertnum(int number[],int num ,int x)
{
   int tmp;
   number[num] = x;

  for (int i = 0; i < num; i++)
  {
      if (number[i]>=number[i+1])
      {
          tmp = number[i];
          number[i] = number[i+1];
          number[i+1] = tmp;
          i = 0;
      }
      
  }
  
  
    
}
