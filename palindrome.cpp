#include <iostream>
#include <cstring> 

using namespace std;
int main() 
{
  int z = 0; 
  char input[80];  

  cout << "This is a palindrome checker, please enter a plaindrome. " << endl;
  cin.get(input, 80); 
  cin.get();
  for (int i = 0; i <= strlen(input) + 1 ; i++)
      {
	if (isalnum(input[i]))
	  {  
	    z++;
	  }
      }
  char newInput[z];
  for (int i = 0; i < z + 1; i ++) 
    {
    if (isalnum(input[i]))
      {
	if (input[i] >= 65 && input[i] <= 90)
	  {
	    input[i] += 32; 
	  }
      newInput[i] = input[i];
      cout << newInput[i] << endl;
 
      }
    }
  
  char revInput[a]; 
  for (int i = 0; i <= strlen(newInput); i--)
    {
      for (int a = 0; a > strlen(newInput); a++)
	{
	  newInput[i] = revInput[a]; 
	} 
    } 

  return 0; 
}
