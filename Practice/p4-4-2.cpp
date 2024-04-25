#include<iostream>
#include<string.h>
using namespace std;

string max(const string &a, const string &b, const string &c)
{
    if (a > b)
    {
		if(a>c){
        return a;
		}
		else{
			return c;
		}
    }
    else if (b>c)
{
        return b;
	}
	    else{	
        return c;
    }
}

int main()
{
    string x, y, z;
    cout << "Enter three names:" << endl;
    cin >> x >> y >> z;
    cout << "Max name is: " << max(x, y, z) << endl;
    return 0;
}

