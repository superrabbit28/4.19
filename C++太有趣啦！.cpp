//#include <iostream>
//using namespace std;
//int main()
//{
//	cout<<"please enter one of the following choices: \n"
//	    <<"c) carnivore       p) pianist \n"
//	    <<"t) tree            g) game \n";
//	char ch;
//	cin>>ch;
//	while(ch!='c'&&ch!='p'&&ch!='t'&&ch!='g')
//	{
//		cout<<"please enter c,p,t,g: ";
//		cin>>ch;
//	}
//	switch(ch)
//	{
//		case 'c': cout<<"A maple is a car.";break;
//		case 'p': cout<<"A maple is a pianisrt.";break;
//		case 't': cout<<"A maple is a tree.";break;
//		case 'g': cout<<"A maple is a game.";break;
//	  }  
//    return 0;
//}

//#include<iostream>
//using namespace std;
 //   const int size=20;
//	char arr;
//	struct bop{
//		char fullname[20];
//		char title[20];
//		char bopname[20];
//		int preference;  
//	};
//	bop a[size]={{"qqq","QQQ","qQ",0},{"www","WWW","wW",1},{"eee","EEE","eE",2},{"rrr","RRR","rR",0}};
//	void printname()
//	{
//		for(int i=0;i<20;i++)
//		{   if(a[i].fullname!=0)
//			cout<<a[i].fullname<<endl;
//			else
//			 break;
//		}
///	}
//int main()
//{
 //   cout<<"a.displine by name     b.display by title \n"
//	    <<"c.displine by bopname  d.display by preference\n"
//	    <<"quit \n";
//	cin>>arr;
//	void printname();
//	void print_title();
//	void print_bopname();
//	void print_preference();
//	void print_quit();
//	
//	
//	switch(arr)
//	{
//		case 'a': printname;break;
//		case 'b': print_title;break;
//		case 'c': print_bopname;break;
//		case 'd': print_preference;break;
//		case 'q': print_quit;break;
///	}
//	return 0;
//#include<iostream>
//using namespace std;
//int main()
//{
//	int wage;
//	cin>>wage;
//	double payer=0.0;
//	while(wage>0)
//	{
//	  if(wage<5000)
//	  	payer=0;
//	  else if(wage>=5000&&wage<=15000)
//	    payer=(wage-5000)*0.1;
//	  else if(wage>=15000&&wage<=35000)
//	    payer=1000+(wage-20000)*0.15;
  //    else if(wage>35000)
	//    payer=4000+(wage-35000)*0.2;
	//	cout<<"所得税为 "<<payer<<endl;	
	//	cin>>wage;			
	//}	
//	return 0;
//}


//#include<iostream>
//#include<string.h>
//#include<cctype>
//using namespace std;
//int main()
//{
//	cout<<"Enter words (q to quit):\n";
//	char words[10];
//	cin>>words;
//	int others=0,yuan=0,feiyuan=0;
//	while(strcmp(words,"q")!=0)
//	{
//		if(!isalpha(words[0]))
//		{
//			others++;
//		  switch(words[0])
//		  {
//		  	case 'a':
///		  	case 'e':	
//		  	case 'i':
//		  	case 'o':
//		  	case 'u':
//			  yuan++;break;
//		  	default: feiyuan++;
//		}
//		cin>>words;	
//	}
//	
//}
//cout<<"others= "<<others<<"yuan= "<<yuan<<"feiyuan= "<<feiyuan;
//	return 0;	
//}


#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("file_name");
    char arr;
	if(!fin.is_open())	
	{
		cout<<"文件不存在\n"; 
		exit(EXIT_FAILURE);
	}
	int count=0;
	while(!fin.eof())
	{
		fin>>arr;
		count++;
	}
	cout<<"共包含"<<count<<"个字符"<<endl; 
	fin.close();
	return 0;
}














