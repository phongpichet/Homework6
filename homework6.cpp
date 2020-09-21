#include<iostream>
#include<time.h>
using namespace std;
int Guess(int)
int main()
{
	int ran,round;
	srand(time(NULL));
	ran = rand() % 9 + 1;
	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	round = Guess(ran);
	cout<<"The secret number is lower"<<ran<<endl;
	cout<<"You made 4 guesses"<<round<<" guesses"<<endl;
}
int Guess(int ran)
{
	int num,round;
	for (round = 1;; round++)
	{	cout<<"Guess the number (1 to 10)"<<endl;
		cin>>num;
		if (num<ran)
			cout<<"The secret number is lower"<<endl;
		else if (num>ran)
			cout<<"The secret number is higher"<<endl;
		else
		{
			cout<<"Congratulations!"<<endl;
			break;
		}
	}
	return round;
}