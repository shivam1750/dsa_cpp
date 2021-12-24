#include <iostream>
using namespace std;

void test (int x){

    try
    {
        
  if (x == 0)
    throw 'x';
  else if (x == 1)
    throw x;
  else if (x == -1)
    throw 1.0;
  cout << "\n  end of function block";
    }
 catch (char c)
  {
    cout << "\n caught a character";
  }

  catch (int m)
  {
    cout << "\n caught an integer";
  }

  catch (double d)
  {
    cout << "caught an double";
  }

  cout << "\n end of try catch block";

}
int main ()
{
 
    cout << "\ntesting throw restriction";
    cout << "\n x==0";
    test (0);
    cout << "\n x==1";
    test (1);
    cout << "\n x==-1";
    test (-1);
    cout << "\n x==2";
    test (2);

  return 0;
}