
#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double grade;
	int i;
	i = 1;
		while (i <= 10){
		cout << "Insert grade of student " << i << ":" << endl;
		cin >> grade;
			if(grade>=0 & grade <=10){
				grade = round(grade);
				cout << "This grade is valid and will be inserted as " << grade << endl;
				i = i +1;
			}else{
				cout << "This grade is invalid.Accepted grades are between 0 and 10."<< endl << "Retry!" << endl;
				
			}
    	}
    return 0;
}
