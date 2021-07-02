#include <iostream>
#include <string>
using namespace std;
 
int main()
{ 
    int i=0, count=0;     
    string s;    
    cout << "String:\n";
    getline(cin, s);    
    
    while(s[i])
    {
        if (s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='/') count++;
        i++;
    }
    
    cout << "count=" << count << "\n";
 
system("pause");
return 0;
}
