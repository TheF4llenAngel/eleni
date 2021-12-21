#include <iostream>
#include <cmath>

using namespace std;

int main()
{   double a;
    int num, i,j,k,l,m;
    int array1[12], array[4][3];

        cout << "Insert 12 numbers" << endl;
        for ( i=0 ; i < 12 ; i++){
            cin >> a;
            num = a;
            array1[i]= num;
        }
        k = 0;
        for( i=0 ; i <= 3 ; i++){
            for (j=0 ; j <= 2 ; j++){
                array[i][j] = array1[k];
                k = k +1;
            }
        }
            
    double search,count,count1,total;
    cout << "Insert number for search" << endl;
    cin >> search;
    i = 0;
    count = 0;
    count1 = 0;
    total = 0;
    while(i <=3){
        j = 0;
        while( j <=2){
            if(array[i][j] == search){
                count = count +1;
            }
            if(array[i][j] % 2 == 0){
                if(array[i][j] < 0){
                    total = total - array[i][j];
                }else{
                total = total + array[i][j];
                }
                count1 = count1+1;
            }
        j = j +1; 
        }
    i = i +1;
    }
    double even;
    even = total/count1;
    cout << "The number " << search << " appears " << count << " times." << endl;
    cout << "The average value of the even numbers is " << even;
    

    return 0;
}