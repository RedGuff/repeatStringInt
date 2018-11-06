#include <iostream>

using namespace std;

string repeatStringInt ( string pattern = "", int n = 0 ) // As the name says: string first, int after.
{
    if ( n < 0 )
        {
        cerr << "Error: repeat(" << pattern << ", " << n << " < 0)" << endl;
        return "-1";
        }
    else if ( n == 0 )
        {
        return "";
        }
    else
        {
        return pattern + repeatStringInt ( pattern, n - 1 );
        }
}


int main()
{
    cout << repeatStringInt ( "foo", 3 ) << endl;
    return 0;
}
