
#include<iostream>
#include<cstring> 
#include<fstream>
using namespace std;

 char* strwbw(char*);        
 char* strrev(char*);      
char* strupp(char*);
 char* strlow(char*);
char* strtog( char*);
char* strformat(char*); // remove additional spaces


class lipi
{
 char* s;       
public:  
     lipi();
    lipi(const char* a);
    lipi(const lipi&);  
    ~lipi();
  
    friend char* strrev(lipi&); 
    friend char* strrev(char*);  
     
    friend char* strwbw(lipi&);                        
    friend char* strwbw(char*);                     
    
    friend int strlen(const lipi);                        
  
    friend char* strcpy(lipi&,const char*);               
    friend char* strcpy(char*,const lipi);                  
    friend char* strcpy(lipi&,const lipi );  
    
    friend char* strncpy(lipi&,const char*,int);         
    friend char* strncpy(char*,const lipi,int);               
    friend char* strncpy(lipi&,const lipi,int );  
  
    friend char*  strcat(lipi&,const char*);          
    friend char* strcat(char*,const lipi);                 
    friend char*  strcat(lipi&,const lipi );  
   
    friend char*  strncat(lipi&,const char*,int);
    friend char* strncat(char*,const lipi,int);    
    friend char*  strncat(lipi&,const lipi,int);  

   friend char*  strchr(const lipi&,char);
   friend char*  strrchr(const lipi&,char);
    
   friend char*  strstr(const lipi&,const char*);
   friend char* strstr( char*,const lipi);          
   friend char*  strstr(const lipi&,const lipi);  
       
   friend char*  strcasestr(const lipi&,const char*);
   friend const char* strcasestr( const char*,const lipi);
   friend char*  strcasestr(const lipi&,const lipi); 
   
   
   friend int strcmp(const lipi,const char*);
   friend int strcmp(const char*,const lipi);
   friend int strcmp(const lipi,const lipi); 
    
   friend int strncmp(const lipi,const char*,int);
   friend int strncmp(const char*,const lipi,int);
   friend int strncmp(const lipi,const lipi,int); 
   
   
      friend int strcasecmp(const lipi,const char*);
   friend int strcasecmp(const char*,const lipi);
   friend int strcasecmp(const lipi,const lipi);  
    
   friend int strncasecmp(const lipi,const char*,int);
   friend int strncasecmp(const char*,const lipi,int);
   friend int strncasecmp(const lipi,const lipi,int); 

   friend int strspn(const char*,const lipi);
   friend int strspn(const lipi,const char*); 
   friend int strspn(const lipi,const lipi);  
    
   friend int strcspn(const char*,const lipi);  
   friend int strcspn(const lipi,const char*); 
   friend int strcspn(const lipi,const lipi); 
   
   friend char* strupp(char*); 
   friend char*  strupp(lipi&);  
   
    friend char* strlow(char*);
   friend char*  strlow(lipi&);
    friend char* strtog( char*);
   friend char*  strtog(lipi&);
   
   
   // if new word is 0, delete the old word
   friend int strreplace(char*,const char*,const char*);// source, search word, new word  , return howmany times repalcced
    friend int strreplace(lipi&,const char*,const char*);// source, search word, new word, returns howmany times replaced
     friend int strreplace(char*,const lipi,const char*);// source, search word, new word  , return howmany times repalcced
      friend int strreplace(lipi&,const lipi,const char*);// source, search word, new word  , return howmany times repalcced
  friend int strreplace(char*,const char*,const lipi);// source, search word, new word  , return howmany times repalcced
   friend int strreplace(lipi&,const char*,const lipi);// source, search word, new word  , return howmany times repalcced
 friend int strreplace(char*,const lipi,const lipi);// source, search word, new word  , return howmany times repalcced
 friend int strreplace(lipi&,const lipi,const lipi );// source, search word, new word  , return howmany times repalcced
 
 friend int strdel(char*,char);// source, search word, new word  , return howmany times deleted
 friend int strdel(lipi&,char);// source, search word, new word  , return howmany times deleted
 

 friend char* strformat(lipi&);
 

    friend ostream&operator<<(ostream &out,const lipi);  
    friend istream&operator>>(istream &in, lipi&);
 	lipi&operator>>(lipi&);   // for get,uin
 	  lipi&operator<<(const lipi);  
 	  
 	char& operator[](int)const;   
 	 
 	
 	 friend int operator==(const lipi,const char*); 
 	  friend int operator==(const char*,const lipi); 
 	   friend int operator==(const lipi,const lipi); 
 	   
 	    friend int operator<=(const lipi,const char*); 
 	  friend int operator<=(const char*,const lipi); 
 	   friend int operator<=(const lipi,const lipi);
 	  
 	   friend int operator>=(const lipi,const char*); 
 	  friend int operator>=(const char*,const lipi); 
 	   friend int operator>=(const lipi,const lipi);
 	
 	  friend int operator<(const lipi,const char*); 
 	  friend int operator<(const char*,const lipi); 
 	   friend int operator<(const lipi,const lipi); 
 	  
 	   friend int operator>(const lipi,const char*); 
 	  friend int operator>(const char*,const lipi); 
 	   friend int operator>(const lipi,const lipi); 
 	 
 	  friend int operator!=(const lipi,const char*); 
 	  friend int operator!=(const char*,const lipi); 
 	   friend int operator!=(const lipi,const lipi); 
 	 
      lipi  operator +(const char*);            
      lipi  operator +(const lipi); 
    
   
  
  lipi operator=(const lipi); 
    lipi operator=(const char* ); 
  //  friend char* operator=(char* ,lipi );    // with type conversion may be possible
     lipi  operator --(); 
      lipi  operator ++(); 
       lipi  operator ~(); 
    void operator()();  
};

// how to make these in namespace, should i include the class lipi also in namespace ?????????????????????

enum colour{bold=1,nobold=24,uline=4,nouline=22 ,normal=0,black=30,red,green,brown,blue,magenta,cyan,white,bblack=40,bred,bgreen,bbrown,bblue,bmagenta,bcyan,bwhite,bdef=49  };
extern lipi get,uin;
extern int c1,c2,c3,c4;
void color(int a=-1,int b=-1,int c=-1,int d=-1);
void setcolor();



