# LIPI
User defined string class with additional functionalities

since lipi has overloaded functions for possible combinations of lipi, character array , we can use directly
we can do formatting of lipi type variables. like we can set the color,bold,underline etc..

					Datatatype " lipi " manual

*  cin will take 100 characters
*  get will take  upto 10000 character including space


char* strrev(lipi&); 
char* strrev(char*);  

void color(int a,int b,int c,int d)    // can send maximum upto 4 argument at a time. eg: color(red,uline,bold);
default settings: normal
bold,nobold,uline,nouline
font colors: black,red,green,brown,blue,magenta,cyan,white
background colors: bblack,bred,bgreen,bbrown,bblue,bmagenta,bcyan,bwhite,bdef(default backround)

char* strwbw(lipi&);                        
char* strwbw(char*);                     

int strlen(const lipi);                        

char* strcpy(lipi&,const char*);               
char* strcpy(char*,const lipi);                  
char* strcpy(lipi&,const lipi );  

char* strncpy(lipi&,const char*,int);         
char* strncpy(char*,const lipi,int);               
char* strncpy(lipi&,const lipi,int );  

char*  strcat(lipi&,const char*);          
char* strcat(char*,const lipi);                 
char*  strcat(lipi&,const lipi );  

char*  strncat(lipi&,const char*,int);
char* strncat(char*,const lipi,int);    
char*  strncat(lipi&,const lipi,int);  

char*  strchr(const lipi&,char);
char*  strrchr(const lipi&,char);

char*  strstr(const lipi&,const char*);
char* strstr( char*,const lipi);          
char*  strstr(const lipi&,const lipi);  

char*  strcasestr(const lipi&,const char*);
char* strcasestr( char*,const lipi);
char*  strcasestr(const lipi&,const lipi); 


int strcmp(const lipi,const char*);
int strcmp(const char*,const lipi);
int strcmp(const lipi,const lipi); 

int strncmp(const lipi,const char*,int);
int strncmp(const char*,const lipi,int);
int strncmp(const lipi,const lipi,int); 


int strcasecmp(const lipi,const char*);
int strcasecmp(const char*,const lipi);
int strcasecmp(const lipi,const lipi);  

int strncasecmp(const lipi,const char*,int);
int strncasecmp(const char*,const lipi,int);
int strncasecmp(const lipi,const lipi,int); 

int strspn(const char*,const lipi);
int strspn(const lipi,const char*); 
int strspn(const lipi,const lipi);  

int strcspn(const char*,const lipi);  
int strcspn(const lipi,const char*); 
int strcspn(const lipi,const lipi); 

char* strupp(char*); 
char*  strupp(lipi&);  

char* strlow(char*);
char*  strlow(lipi&);
char* strtog( char*);
char*  strtog(lipi&);
char* strupp(char*);
char* strlow(char*);
char* strtog( char*);


// if new word is 0, delete the old word
int strreplace(char*,const char*,const char*);// source, search word, new word  , return howmany times repalcced, if new word=0, it will delete the old word
int strreplace(lipi&,const char*,const char*);// source, search word, new word, returns howmany times replaced, if new word=0, it will delete the old word
int strreplace(char*,const lipi,const char*);// source, search word, new word  , return howmany times repalcced, if new word=0, it will delete the old word
int strreplace(lipi&,const lipi,const char*);// source, search word, new word  , return howmany times repalcced, if new word=0, it will delete the old word
int strreplace(char*,const char*,const lipi);// source, search word, new word  , return howmany times repalcced, if new word=0, it will delete the old word
int strreplace(lipi&,const char*,const lipi);// source, search word, new word  , return howmany times repalcced, if new word=0, it will delete the old word
int strreplace(char*,const lipi,const lipi);// source, search word, new word  , return howmany times repalcced, if new word=0, it will delete the old word
int strreplace(lipi&,const lipi,const lipi );// source, search word, new word  , return howmany times repalcced, if new word=0, it will delete the old word

int strdel(char*,char);// source, search word, new word  , return howmany times deleted
int strdel(lipi&,char);// source, search word, new word  , return howmany times deleted

void strformat(char*); // remove additional spaces
void strformat(lipi&);


ostream&operator<<(ostream &out,const lipi);  
istream&operator>>(istream &in, lipi&);
lipi&operator>>(lipi&);   // for get,uin
lipi&operator<<(const lipi);  

char& operator[](int);   // operator[] return end index if index value is out of range 


int operator==(const lipi,const char*); 
int operator==(const char*,const lipi); 
int operator==(const lipi,const lipi); 

int operator<=(const lipi,const char*); 
int operator<=(const char*,const lipi); 
int operator<=(const lipi,const lipi);

int operator>=(const lipi,const char*); 
int operator>=(const char*,const lipi); 
int operator>=(const lipi,const lipi);

int operator<(const lipi,const char*); 
int operator<(const char*,const lipi); 
int operator<(const lipi,const lipi); 

int operator>(const lipi,const char*); 
int operator>(const char*,const lipi); 
int operator>(const lipi,const lipi); 

int operator!=(const lipi,const char*); 
int operator!=(const char*,const lipi); 
int operator!=(const lipi,const lipi); 

lipi  operator +(const char*);            
lipi  operator +(const lipi); 



lipi operator=(const lipi); 
lipi operator=(const char* );  // if =0 given it will delete the string and only single byte will be there 

lipi  operator --(); // convert to uppercase
lipi  operator ++();  // convert to lowecase
lipi  operator ~(); // toggle characters
 
void operator()();  : for help


