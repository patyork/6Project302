#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	//char str[50];
	string str;
	getline(cin,str);
  	char * pch;
  	//printf ("Splitting string \"%s\" into tokens:\n",str);
  	pch = strtok (str," ,.-");
  	while (pch != NULL)
  	{
    		printf ("%s\n",pch);
    		pch = strtok (NULL, " ,.-");
  	}
  	return 0;
}
