
#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    int n;
    float a,b,power,evalue;

    cout << "Insert number" << std::endl;
    cin >> a;
    cout << "Insert number for e value" << std::endl;
    cin >> evalue;
    if ( a >= -1 & a <= 1 & evalue <0.05 & evalue > 0){
        b = abs(a);
        n = 1;
        power = pow(b,n);
        while ( power >= evalue){
            n = n +1;
            power = pow(b,n);
        }
        cout << "The minimum power value for " << a << " which produces the result " << power << " and it's lower than " << evalue << " is " << n << endl;
    }else{
       cout << "Wrong number,the input number must be between (-1,1) & e value must be between (0,0.5)" << endl;
       return 0;
    }
    

    return 0;
}
