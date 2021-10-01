#include<iostream>
using namespace std;
template<class T>
T printGrade1(T total);

template<class T1>
T1 printGrade2(T1 total);

template<class T2>
T2 printGrade3(T2 total);

int main() {
    int num_std = 0;
    cout << "Enter number of student : "; cin >> num_std;
    int classroom[num_std],homework[num_std],test[num_std],mid[num_std],final[num_std];
	int total;

    for(int i = 0;i <= num_std - 1;i++){
        cout << "Student " << i + 1 << endl;
        cout << "Enter classroom : "; cin >>  classroom[i];
		cout << "Enter homework : "; cin >>  homework[i];
		cout << "Enter test : "; cin >>  test[i];
		cout << "Enter mid turm : "; cin >>  mid[i];	
		cout << "Enter final turm : "; cin >>  final[i];
        total = classroom[i] + homework[i] + test[i] + mid[i] + final[i];
        cout << "Total :" << total << endl;
		printGrade1 <int>(total);
		printGrade2 <int>(total);
		printGrade3 <int>(total);
        cout << "-----------------------------------------" << endl;
    }
	return(0);

}

template<class T>
T printGrade1(T total){

        if(total >= 80){
		    cout << "Student Grade " << " = " << "A" << endl;
		}
		else if(total >= 75){
		    cout << "Student Grade " << " = " << "B+" << endl;
		}
		else if(total >= 70){
		    cout << "Student Grade " << " = " << "B" << endl;
		}
		else if(total >= 65){
		    cout << "Student Grade " << " = " << "c+" << endl;
		}
		else if(total >= 60){
		    cout << "Student Grade " << " = " << "C" << endl;
		}
		else if(total >= 55){
		    cout << "Student Grade " << " = " << "D+" << endl; 
		}
		else if(total >= 50){
		    cout << "Student Grade " << " = " << "D" << endl; 
		}
		else{
		    cout << "Student Grade " << " = " << "F" << endl;
		}
	return(total);
}


template<class T1>
T1 printGrade2(T1 total){

        if(total >= 80){
		    cout << "Student Grade " << " = " << "4" << endl;
		}
		else if(total >= 75){
		    cout << "Student Grade " << " = " << "3.5" << endl;
		}
		else if(total >= 70){
		    cout << "Student Grade " << " = " << "3" << endl;
		}
		else if(total >= 65){
		    cout << "Student Grade " << " = " << "2.5" << endl;
		}
		else if(total >= 60){
		    cout << "Student Grade " << " = " << "2" << endl;
		}
		else if(total >= 55){
		    cout << "Student Grade " << " = " << "1.5" << endl; 
		}
		else if(total >= 50){
		    cout << "Student Grade " << " = " << "1" << endl; 
		}
		else{
		    cout << "Student Grade " << " = " << "0" << endl;
		}
	return(total);
}


template<class T2>
T2 printGrade3(T2 total){
		if(total >= 50){
			cout << "Student Grade " << " = " << "Pass " <<endl;
		}
		else{
			cout << "Student Grade " << " = " << "Not Pass " <<endl;
		}
	return(total);
}