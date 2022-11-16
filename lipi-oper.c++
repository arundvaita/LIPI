#include"lipi.h"  // check multpile insersion
 


void lipi::operator()()  // open from file 
{
ifstream fin("man.txt");
string s;
char ch;
system("clear");
while(getline(fin,s))
cout<<s<<endl;
fin.close();
cout<<"Do you want to run test progream  : y/n "<<endl;
cin>>ch;
if(ch=='y')
{
ifstream finn("test.c++");
system("clear");
cout<< "....................test program program..............."<<endl;
while(getline(finn,s))
cout<<s<<endl;
fin.close();
cout<< "....................output..............."<<endl;
system("./test");
}
}
ostream& operator<<(ostream &out, const lipi a)
{
setcolor();
    cout<<a.s;
    printf("\033[0m");  
    return cout;
  
}
istream& operator>>(istream &in, lipi &a)  
{   
// no need to delete here, strcpy will delete it
char* temp=new char[100];

   cin>>temp;
   strcpy(a.s,temp);
   delete []temp;
    return cin;
}
lipi& lipi::operator>>(lipi &a)  // get>>s
{  

lipi *ret;
if(this==&get)
{
// no need to delete here, strcpy will delete it
char* temp = new char[10000];

    //cin.ignore();            // how to flush buffer data, is it good practice????????????, no need of ignore here
   cin.getline(temp,10000);               // change to [^\n]
    strcpy(a,temp);
       delete []temp;
   
    ret=&get;
}
else if(this==&uin)
{
   // cin.ignore();
    //getline(cin,a.s);  // change
    ret=&uin;
}
 return *ret;
}


////////////////////////////////////////////////////
lipi lipi::operator=(const lipi rhs) // lipi=lipi=lipi
{

strcpy(*this,rhs); 
return *this;
}

lipi lipi::operator=(const char* rhs)   // lipi=char*=lipi
{
if(rhs==0)
{
delete []s;
 s=new char;
 *s=0;
 }
else
strcpy(*this,rhs); // delete old s in strcpy
return *this;
}
/*  // any wayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy
char* operator=(char* rhs,lipi lhs) // char*=lipi=lipi, only for char array
{
strcpy(rhs,lhs.s);
return rhs;
}
*/

char& lipi::operator[](int n)const
{
int l=strlen(s);
if(n<l)
return s[n];
return s[l-1];
}

  lipi  lipi::operator +(const char* s)  // not completeeeeeeeeeeeeeeeeeeeeeeeee something misssiiiiiiiiiiiing
 { 
lipi temp;
 temp=strcat(*this,s);
 return temp;
 }
 
lipi lipi::operator +(const lipi s ) // overload       //done
 { 
lipi temp(strcat(*this,s));
 return temp;
 }
 
 int operator==(const char* s,const lipi d) 
 {
  if(strcmp(s,d))
  return 0;
  else 
  return 1;
  }
   int operator==(const lipi s,const char* d) 
 {
  if(strcmp(s,d))
  return 0;
  else 
  return 1;
  }
     int operator==(const lipi s,const lipi d) 
 {
  if(strcmp(s,d))
  return 0;
  else 
  return 1;
  }
  
   int operator>=(const char* s,const lipi d) 
 {
  if(strcmp(s,d)>=0)
  return 1;
  else 
  return 0;
  }
   int operator>=(const lipi s,const char* d) 
 {
  if(strcmp(s,d)>=0)
  return 1;
  else 
  return 0;
  }
     int operator>=(const lipi s,const lipi d) 
 {
  if(strcmp(s,d)>=0)
  return 1;
  else 
  return 0;
  }
   int operator<=(const char* s,const lipi d) 
 {
 if(strcmp(s,d)<=0)
  return 1;
  else 
  return 0;
  }
   int operator<=(const lipi s,const char* d) 
 {
   if(strcmp(s,d)<=0)
  return 1;
  else 
  return 0;
  }
     int operator<=(const lipi s,const lipi d) 
 {
   if(strcmp(s,d)<=0)
  return 1;
  else 
  return 0;
  }
  
  
     int operator>(const char* s,const lipi d) 
 {
  if(strcmp(s,d)>0)
  return 1;
  else 
  return 0;
  }
   int operator>(const lipi s,const char* d) 
 {
  if(strcmp(s,d)>0)
  return 1;
  else 
  return 0;
  }
     int operator>(const lipi s,const lipi d) 
 {
  if(strcmp(s,d)>0)
  return 1;
  else 
  return 0;
  }
   int operator<(const char* s,const lipi d) 
 {
 if(strcmp(s,d)<0)
  return 1;
  else 
  return 0;
  }
   int operator<(const lipi s,const char* d) 
 {
   if(strcmp(s,d)<0)
  return 1;
  else 
  return 0;
  }
     int operator<(const lipi s,const lipi d) 
 {
   if(strcmp(s,d)<0)
  return 1;
  else 
  return 0;
  }
  
     int operator!=(const char* s,const lipi d) 
 {
 if(strcmp(s,d))
  return 1;
  else 
  return 0;
  }
   int operator!=(const lipi s,const char* d) 
 {
   if(strcmp(s,d))
  return 1;
  else 
  return 0;
  }
     int operator!=(const lipi s,const lipi d) 
 {
   if(strcmp(s,d))
  return 1;
  else 
  return 0;
  }
   lipi  lipi::operator --()
   {
   return strlow(*this);
   }
      lipi   lipi::operator ++()
      {
       return  strupp(*this);
      }
       lipi  lipi::operator ~()
   {
       return strtog(*this);
      }
