#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
 
class book
{ 
 
 char desc[200];
 
 
public:
	   char title[50];
      char type[20];
      char  author[20];
      int pic;
	 void enter(void)
	 {cout<<"\nAdd New Books";
	  cout<<"PLease enter the following details\n";
	  cout<<"\n1.Book Name:-";
	  gets(title);
	  cout<<"2.Book Type:-";
	  gets(type);
	  cout<<"3.Author:-";
	  gets(author);
	  cout<<"4.desc:-";
	  gets(desc);
	  cout<<"How many Copies:-";
	  cin>>pic;
	  
	 }
	 void display(void)
	 { cout<<"\n1.Book Name:- "<<title;
	   cout<<"\n2.Book Type:- "<<type; 
	   cout<<"\n3.Author:- "<<author;
	   cout<<"\n4.desc:- "<<desc;
	   cout<<"\nNo. of copies:-"<<pic;
	 }
	 
	 void changebookcount(void)
	  {cout<<"enter exixting book count: -";
	    cin>>pic;
	  }
 } ;
 
 void addnew(void);
 void viewallbooks(void);
 
 
int main()
{ cout<<"LIbrary INITIATor";
   int cho;
   do{
   cout<<"Welcome Library Admin";
   cout<<"\t\t\t\n\nMENU";
   cout<<"\n1.Add books";
   cout<<"\n2.Remove books";
   cout<<"\n3.Channge Book Counts";
   cout<<"\n4.View All Books";
   cout<<"\n5.Exit";
   cout<<"\n\tPlease enter your choice";
   cin>>cho;
   switch(cho)
   { case 1:   addnew();
                 break;
	 case 2:  cout<<"dzf";
	          break;
	 case 3: cout<<"adfg";
	        break;
	 case 4: viewallbooks();
	         break;       
   }
   }while(cho!=5);
   cout<<"\n Program terminating";
   return 1;
}

void addnew(void)
{ cout<<"You are about to add new books";
  fstream file;
  file.open("book.dat",ios::app);
  book b;
  b.enter();
  file.write((char*)&b,sizeof(b));
  file.close();
  
   
}

void viewallbook(void)
{ cout<<"All books Present in the database ";
   book d;
   int n=1;
   fstream file;
   file.open("book.dat",ios::in);
    cout<<"\n\n";
 cout<<"Sl| Title         |  Type      | Author    | Copies   ";
   while(!file.eof())
    {  file.read((char*)&d,sizeof(d));
       cout<<setw(2)<<n<<"|";
       cout<<setw(20)<<d.title<<"|";
       cout<<setw(10)<<d.type<<"|";
       cout<<"  "<<d.pic;
       ++n;
	  }  
  file.close();
}
