#include <iostream>
#include <cstring> 

using namespace std;
int main() 
{
  int z = 0; 
  char input[80]; 
  char newInput[z]; 

  cout << "This is a palindrome checker, please enter a plaindrome. " << endl;
  cin.get(input, 80); 
  
    for (int i = 0; i <= 80; i++)
      {
	if (isalnum(input[i]))
	  {
	    newInput[z] =  input[i]; 
	    z++; 
	  }
      }
 
  cout << newInput << endl; 
  
  return 0; 
}
