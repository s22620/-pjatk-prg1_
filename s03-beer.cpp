#include <iostream>

using namespace std;

int main()
{
    int x = 99;
    while (x--)
    {
        if (x > 0 )
        {
            cout << x << " bottles of beer on the wall, " << x << " bottles of beer. "
                << "Take one down and pass it around - " << x << " bottles of beer on the wall.\n";
        }
        
        else if (x == 0 )
        {
            cout << x << " no more bottles of beer on the wall, no more bottles of beer " 
            << x << " go to the store and buy some more, 99 bottles of beer on the wall....\n"; 
        }
    }    
    
        return 0;
}
