#include<iostream.h>
#include<conio.h>

void type(int a, int b, int c)
{
if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
    {

      if((a==b)&&(b==c))
	  cout<<"Equilatral\n";
    else if((a==b)||(b==c)||(c==a))
	cout<<"Isosceles\n";
	  else
	      cout<<"Scalene\n";

    }
    else
    cout<<"Not Triangle\n";
}

void checkForAllTestCase()
{
cout << "\nTestcase\ta\tb\tc\tOutput" << endl;
	cout << endl;
	int a, b, c;
	int testcase = 1;
	while (testcase <= 19) {
		if (testcase == 1) {
			a = 50;
			b = 50;
			c = 50;
		}
		else if (testcase == 2) {
			a = 1;
			b = 50;
			c = 50;
		}
		else if (testcase == 3) {
			a = 2;
			b = 50;
			c = 50;
		}
		else if (testcase == 4) {
			a = 99;
			b = 50;
			c = 50;
		}
		else if (testcase == 5) {
			a = 100;
			b = 50;
			c = 50;
		}
		else if (testcase == 6) {
			a = 50;
			b = 1;
			c = 50;
		}
		else if (testcase == 7) {
			a = 50;
			b = 2;
			c = 50;
		}
		else if (testcase == 8) {
			a = 50;
			b = 99;
			c = 50;
		}
		else if (testcase == 9) {
			a = 50;
			b = 100;
			c = 50;
		}
		else if (testcase == 10) {
			a = 50;
			b = 50;
			c = 1;
		}
		else if (testcase == 11) {
			a = 50;
			b = 50;
			c = 2;
		}
		else if (testcase == 12) {
			a = 50;
			b = 50;
			c = 99;
		}
		else if (testcase == 13) {
			a = 50;
			b = 50;
			c = 100;
		}
else if (testcase == 14) {
			a = 0;
			b = 50;
			c = 50;
		}
else if (testcase == 15) {
			a = 101;
			b = 50;
			c = 50;
		}
else if (testcase == 16) {
			a = 50;
			b = 0;
			c = 50;
		}
else if (testcase == 17) {
			a = 50;
			b = 101;
			c = 50;
		}
else if (testcase == 18) {
			a = 50;
			b = 50;
			c = 0;
		}
else if (testcase == 19) {
			a = 50;
			b = 50;
			c = 101;
		}
		cout << testcase << "\t\t"
			<< a << "\t" << b << "\t"
			<< c << "\t";
		type(a,b,c);
		testcase++;
	}
}

void main()
{
clrscr();
checkForAllTestCase();
cout<<"\nMansimar Singh IT-2\t";
getch();
}
