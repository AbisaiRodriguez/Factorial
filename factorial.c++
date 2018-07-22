//Author: Abisai Rodriguez
//Purpose: Enter a number to get its factorial

#include <iostream>
using namespace std;

//Function: The "num" variable is passed to the function "factorial" to
//be used as the count max of the loop to gain the factorial of the "num".  
int factorial( int num)
{
  int factorial = 1;
  for(int i = 1; i <=num; ++i)
    {
      factorial *= i;
    }
  return factorial;
}

//Body
int main()
{
  int input = 0;
  string ans = "";
  int result;


  do{
    
      cout << "Please enter a number to find its factorial: ";
      cin >> input;

      //Checks input whether it is a number or not
      //Won't exit loop until input is a number
      while(cin.fail())
	{
	  cout << "Error: Invalid Input" << endl;
	  cin.clear();
	  cin.ignore(256,'\n');
	  cout << "Please enter a number to find its factorial: ";
	  cin >> input;
	}

      if( input >= 0 )
	{
	  //"result" gets the factorial from the factorial function
	  result = factorial(input);
	}

           
      cout <<"Factorial: "  << result << endl;
    
      cout << "Try another factorial? (Yes or No)" << endl;
      cin >> ans;
  }
  while(ans == "yes" || ans == "Yes" || ans == "YES");

  return 0;
}
