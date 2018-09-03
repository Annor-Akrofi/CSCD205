	#include <iostream>
	
	using namespace std;
	
	int main()
	{
	 double score;
	cout <<"Please enter the student score"<<endl;
	cin>>score;
	if ((score >=80) && (score<100))
	    {
	    cout <<"Your grade is:"<<'A';
	    }
	else if ((score>=75 ) &&(score<80))
	    {
	    cout<<"Your grade is:"<<"B+";
	}
	else if ((score >=70 ) &&(score<75))
	    {
	    cout<<"Your grade is:"<<"B";
	}
	else if ((score>=65 ) &&(score<70))
	    {
	    cout<<"Your grade is:"<<"C+";
	}
	else if ((score>=60 ) &&(score<65))
	    {
	    cout<<"Your grade is:"<<'C';
	}
	else if ((score>=55 ) &&(score<60))
	    {
	    cout<<"Your grade is:"<<"D+";
	}
	else if ((score>=50 ) &&(score<55))
	    {
	    cout<<"Your grade is:"<<'D';
	}
	else if ((score>=45 ) &&(score<50))
	    {
	    cout<<"Your grade is:"<<'E';
	}
	else if ((score>=0 ) &&(score<45))
	    {
	    cout<<"Your grade is:"<<'F';
	}
	else{
	    cout<< "You cannot be graded ";
	}
	    return 0;
	}

