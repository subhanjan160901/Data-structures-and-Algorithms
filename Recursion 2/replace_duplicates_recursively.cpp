/* Given an input string S , you have to replace all the duplicate characters in the given string
recursively
Example - INPUT : aaabcccdttffff
          OUTPUT : abcdtf */


#include<iostream>
#include<string.h>
using namespace std;

void removeConsecutiveDuplicates(char *input)
{
    if (strlen(input)==1)
        return;

    removeConsecutiveDuplicates(input+1);
    
    if (input[0]== input[1])
    {
        int i=1;
        for(int k=i; k< strlen(input); k++)
            input[k] = input[k+1];
    }

}

int main() 
{
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}