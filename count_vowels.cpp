#include <iostream>
using namespace std;

int main()
{
    char line[150];
    int vowels;

    vowels =0;

    cout << "Enter a string: ";
    cin>>line;
    for(int i = 0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        
        
    }

    cout << "Vowels: " << vowels << endl;
    
    return 0;
}
