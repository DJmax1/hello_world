#include<iostream.h>
#include<conio.h>

class book
{
 int book_no;
 char book_title[20];
 float book_price;
 char author[20];
 int publishing_date;
 float bill_amt;


public:
 void total_cost();
 void input();
 void display();


     void book::total_cost(int n)
       {
       bill_amt=book_price*n;
       cout<<bill_amt;
       }


       void book::input(int n)
       {
	cout<<" Enter the Book Number"<<endl;
	cin>>book_no;
	cout<<" Enter the Book Title"<<endl;
	cin>>book_title;
	cout<<" Enter the Book Price"<<endl;
	cin>>book_price;
	cout<<" Enter the Book Author"<<endl;
	cin>>author;
	cout<<" Enter the Publishing date"<<endl;
	cin>>publishing_date;
	cout<<" Enter the Number of Books"<<endl;
	cin>>n;
	}


	void book::display(int n)
	{
	cout<<" The Book Tiltle"<<book_title<<endl;
	cout<<" The Book Number"<<book_price<<endl;
	cout<<" The Book Author"<<author<<endl;
	cout<<" The Publishing Date"<<publishing_date<<endl;
	cout<<" The Number of Book"<<n<<endl;
	}


};

void main()
{
clrscr();
book obj;

obj.total_cost();
obj.input();
obj.display();

getch();
}
