#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string password;
    int attempts = 1;
    
    cout << "Podaj haslo: ";
    getline(cin, password, '\n');
    
    while ( password != "student" && attempts )
    {
        cout << "Podaj ponownie haslo: ";
        getline(cin, password, '\n');
        attempts++;
    }
    
    if ( password == "student" )
    {
        cout << "ok!";
    }
   
    
}
