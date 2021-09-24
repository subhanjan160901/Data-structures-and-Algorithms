/* Given an input string S and two characters c1 and c2, you need to recursively replace every 
occurence of c1 with c2 in the given string */

#include<iostream>
#include<string.h>
using namespace std;

void replaceCharacter(char input[], char c1, char c2)
{
    if (strlen(input)==0)
        return;
    
    if (input[0]== c1)
        input[0]= c2;
    
    replaceCharacter(input+1, c1, c2);
}

int main()
{
    char c1, c2;
    cin>>c1>>c2;
    
    char input[100];
    cin>>input;
    
    replaceCharacter(input, c1, c2);
    cout<<input;
}
