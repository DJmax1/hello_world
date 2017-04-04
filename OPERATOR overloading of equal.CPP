#include<iostream.h>
#include<conio.h>
#include<string.h>
class compare
{
char ch[10];
int a;
public:
void getdata()
{
cout<<" enter the string\n";
cin>>ch;
}
int operator ==(compare s)
{
if(strcmp(ch,s.ch)==0)
{
return 1;
}
else
{
return 0;
}
}
};

void main()
{
clrscr();
compare s1,s2;
char c;
do {
s1.getdata();
s2.getdata();
if(s1==s2)
{
cout<<"strings are equal\n ";
}
else {
 cout<<"strings are not equal\n";
 }
 cout<<" do you want to continoue =(y/n)";
 cin>>c;
 }
 while(c=='y'||c=='Y');
 getch();
 }