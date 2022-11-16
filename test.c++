

#include"lipi.h"  

int main()  
{
lipi s,a("abcd"),b(a),c=a,kda=(char*)"dfvsdg";

char* abc=(char*)"string normal";
char arr[20]="ad";
char* aa=(char*)"hello";
char* bb=(char*)"hello";
char* cc=(char*)"helloo";

cout<<"s      "<<"a      "<<" b     "<<" c    "<<" abc  "<<endl;
cout<<s<<"  "<<a<<"  "<<b<<"  "<<c<<"  "<<abc<<endl;

cin>>s>>arr;
cout<<"arr= "<<arr<<"  a= "<<a<<endl;
c=b=a=s;
cout<<"s      "<<"a      "<<" b     "<<" c    "<<" abc  "<<endl;

cout<<s<<"  "<<a<<"  "<<b<<"  "<<c<<"  "<<abc<<endl;
color(red,uline,bold);
cout<<"s      "<<"a      "<<" b     "<<" c    "<<" abc  "<<endl;
cout<<s<<"  "<<a<<"  "<<b<<"  "<<c<<"  "<<abc<<endl;

color(green,uline);
color(nobold);

strcpy(arr,b);
cout<<"arr= "<<arr<<"  a= "<<a<<endl;





color(magenta,bold);



              
char ch11;
cin>>a>>b>>ch11;
cout<<"a= "<<a<<"  b= "<<b<<" ch "<<ch11<<endl;



color(cyan,bold);
get>>a>>b;
cout<<"a= "<<a<<"  b= "<<b<<endl;
char arr2[]="how are you today";




cout<<"...................."<<endl;
cout<<"strwbw  b= "<<b<<"  arr2= "<<arr2;
cout<< strwbw(b) <<endl;
cout<< strwbw(arr2) <<endl;
cout<<"strrev  b= "<<b<<"  arr2= "<<arr2;
cout<< strrev(b) <<endl;
cout<< strrev(arr2) <<endl;

char* ann=strncpy(a,b,3);
char arr3[]="nnnn";

cout<<"copy"<<endl;
ann=strcpy(a,b); 
cout<<"a= "<<a<<"  ann   "<<ann<<"  b= "<<b<<endl;

ann=strcpy(a,"12345"); 
cout<<"a= "<<a<<"  ann   "<<ann<<"  b= "<<b<<endl;
ann=strcpy(arr3,a); 
cout<<"a= "<<a<<"  ann   "<<ann<<"  arr3= "<<arr3<<endl;

ann=strcpy(a,"12345"); 
cout<<"a= "<<a<<"  strncpy   "<<strncpy(b,"12345",4)<<"  b= "<<b<<endl;
a=(char*)"new";
cout<<"a= "<<a<<"  strncpy   "<<strncpy(b,a,4)<<"  b= "<<b<<endl;
a=(char*)"1234567";
cout<<"a= "<<a<<"  strncpy   "<<strncpy(b,a,4)<<"  b= "<<b<<endl;


cout<<"a= "<<a<<"  strncpy   "<<strncpy(arr2,b,7)<<"  b= "<<b<<"  arr2 = "<<arr2<<endl;

 
cout<<"a= "<<a<<"  ann   "<<ann<<"  b= "<<b<<endl;
ann=(char*)"123456";
cout<<"a= "<<a<<"  ann   "<<ann<<"  b= "<<b<<endl;

ann=strcat(a,b); 
cout<<"a= "<<a<<"  ann   "<<ann<<"  b= "<<b<<endl;

ann=strcat(a,"12345"); 
cout<<"a= "<<a<<"  ann   "<<ann<<"  b= "<<b<<endl;
ann=strcat(arr3,a); 
cout<<"a= "<<a<<"  ann   "<<ann<<"  arr3= "<<arr3<<endl;

ann=strcat(a,"12345"); 
cout<<"a= "<<a<<"  strncat   "<<strncat(b,"12345",4)<<"  b= "<<b<<endl;
a=(char*)"new";
cout<<"a= "<<a<<"  strncat   "<<strncat(b,a,4)<<"  b= "<<b<<endl;
a=(char*)"1234567";
cout<<"a= "<<a<<"  strncat   "<<strncat(b,a,4)<<"  b= "<<b<<endl;


cout<<"a= "<<a<<"  strncat   "<<strncat(arr2,b,7)<<"  b= "<<b<<"  arr2 = "<<arr2<<endl;

cout<<a[3]<<endl;;
a[3]='z';
cout<<a[3]<<a[4]<<a[10]<<"  length=  "<<strlen(a)<<"  a =  "<< a<<endl;

a=(char*)"new";
b=(char*)"start";
c=(char*)"from here";
cout<<(a+b);             // a+b returns value
strcpy(c,a+b);



cout<<"a=a+b ="<<(a=a+b)<<endl;
cout<<"a+ +b+ +c ="<<a+" "+b+" "+c<<endl;
a= a+" "+b+" "+c;
cout<<"a=  a+" "+b+" "+c ="<<a<<endl;

color(cyan);

a=b=c=0;
cout<<"a,b,c = "<<a<<b<<c<<endl;
cout<<".........................................................................."<<endl;
a="hi hi hello 1213 1213 hello hellohello 12 12 testt test testb=c=0";
cout<<"a,b,c = "<<a<<" "<<b<<" "<<c<<endl;
char* p;
p=strchr(a,'2');
cout<<"strchr"<<endl;
cout<<strchr(a,'h')<<endl;
cout<<strrchr(a,'h')<<endl;
cout<<strchr(a,'0')<<endl;
cout<<strrchr(a,'0')<<endl;
cout<<strchr(a,'2')<<endl;
cout<<"cherccccccc    length="<<strlen(a)<<endl;
p=strchr(a,'2');
cout<<p<<endl;
cout<<strrchr(a,'2')<<endl;
cout<<(long int)p<<endl;              // buggggggggggggggggggggggggggggggg
cout<<(long int)strrchr(a,'2')<<endl;

cout<<"strstr"<<endl;
 cout<<strstr(a,"hi")<<endl;
 cout<<strstr(a,"hi")<<endl;
  cout<<(long int)strstr(a,"hi")<<endl;
 p=strstr(a,"hi");
 cout<<p-80<<endl; ///////////////////////buggggggggggggggggggggg
 cout<<(long int)p<<endl;
 p=&a[0];
  cout<<(long int)p<<endl;
 cout<<(long int)(&a[0])<<endl;
 ///cout<<strstr(p+1,"hello")<<endl;
// p=strstr(p+1,"hello");
  char* t1=(char*)"hi hi hello 1213 1213 hello hellohello 12 12 testt test testb=c=0";
  cout<<strstr(a,"1213")<<endl;
 
p=strstr(t1,"1213");
  cout<<p<<endl;

a=(char*)"hello";
b=(char*)"hello";
c=(char*)"helloo";

cout<<strcmp(a,b)<<endl;
cout<<strcmp(a,c)<<endl;
cout<<strcmp(c,a)<<endl;
c=(char*)"kello";
cout<<strcmp(a,c)<<endl;
cout<<strcmp(c,a)<<endl;

cout<<"..................."<<endl;
cout<<strcmp(aa,b)<<endl;
cout<<strcmp(aa,c)<<endl;
cout<<strcmp(c,aa)<<endl;
c=(char*)"kello";
cout<<strcmp(aa,c)<<endl;
cout<<strcmp(c,aa)<<endl;
cout<<".........strncmpppp.........."<<endl;
c=(char*)"helloo";
cout<<strncmp(a,b,4)<<endl;
cout<<strncmp(a,c,4)<<endl;
cout<<strncmp(c,a,1)<<endl;
c=(char*)"kello";
cout<<strncmp(a,c,2)<<endl;
cout<<strncmp(c,a,5)<<endl;

cout<<"..................."<<endl;
cout<<strncmp(aa,b,3)<<endl;
cout<<strncmp(aa,c,2)<<endl;
cout<<strncmp(c,aa,1)<<endl;
c=(char*)"kello";
cout<<strncmp(aa,c,3)<<endl;
cout<<strncmp(c,aa,10)<<endl;
c=(char*)"hellooooooooooooooooooo";
cout<<strncmp(aa,c,5)<<endl;
cout<<strncmp(aa,c,7)<<endl;
cout<<strncmp(c,aa,10)<<endl;
cout<<strncmp("hello","helloooooooo",6)<<endl;
cout<<strncmp("hello","helloooooooo",10)<<endl;
cout<<strncmp("helloooooooo","hello",10)<<endl;
cout<<strcmp("helloo","hello")<<endl;


a=(char*)"hello";
b=(char*)"HeLlO";
c=(char*)"helloo";
cout<<strupp(a)<<endl;
cout<<strlow(b)<<endl;
cout<<strtog(b)<<endl;



a=(char*)"HeLlo";
b=(char*)"HeLlO";
c=(char*)"HeLLoo";
cout<<".........strcasecmpppp.........."<<endl;
cout<<strcasecmp(a,b)<<endl;
cout<<strcasecmp(a,c)<<endl;
cout<<strcasecmp(c,a)<<endl;
c=(char*)"kello";
cout<<strcasecmp(a,c)<<endl;
cout<<strcasecmp(c,a)<<endl;

cout<<"..................."<<endl;
cout<<strcasecmp(aa,b)<<endl;
cout<<strcasecmp(aa,c)<<endl;
cout<<strcasecmp(c,aa)<<endl;
c=(char*)"kello";
cout<<strcasecmp(aa,c)<<endl;
cout<<strcasecmp(c,aa)<<endl;

cout<<".........strncasecmpppp.........."<<endl;
c=(char*)"helloo";
cout<<strncasecmp(a,b,4)<<endl;
cout<<strncasecmp(a,c,4)<<endl;
cout<<strncasecmp(c,a,1)<<endl;
c=(char*)"kello";
cout<<strncasecmp(a,c,2)<<endl;
cout<<strncasecmp(c,a,5)<<endl;

cout<<"..................."<<endl;
cout<<strncasecmp(aa,b,3)<<endl;
cout<<strncasecmp(aa,c,2)<<endl;
cout<<strncasecmp(c,aa,1)<<endl;
c=(char*)"kello";
cout<<strncasecmp(aa,c,3)<<endl;
cout<<strncasecmp(c,aa,10)<<endl;
c=(char*)"hellooooooooooooooooooo";
cout<<strncasecmp(aa,c,5)<<endl;
cout<<strncasecmp(aa,c,7)<<endl;
cout<<strncasecmp(c,aa,10)<<endl;
aa=(char*)"abcd";
bb=(char*)"abcd";
cc=(char*)"mcdd";
a="abcd";
b="abcd";
c="mcdd";
cout<<"=="<<endl;
cout<<(aa==b)<<endl;
cout<<(aa==c)<<endl;
cout<<(a==c)<<endl;
cout<<(a==cc)<<endl;

cout<<(b==aa)<<endl;
cout<<(a==b)<<endl;


cout<<"<="<<endl;
cout<<(aa<=b)<<endl;
cout<<(aa<=c)<<endl;
cout<<(a<=c)<<endl;
cout<<(a<=cc)<<endl;

cout<<(b<=aa)<<endl;
cout<<(a<=b)<<endl;


cout<<">="<<endl;
cout<<(aa>=b)<<endl;
cout<<(aa>=c)<<endl;
cout<<(a>=c)<<endl;
cout<<(a>=cc)<<endl;

cout<<(b>=aa)<<endl;
cout<<(a>=b)<<endl;




cout<<"<"<<endl;
cout<<(aa<b)<<endl;
cout<<(aa<c)<<endl;
cout<<(a<c)<<endl;
cout<<(a<cc)<<endl;

cout<<(b<aa)<<endl;
cout<<(a<b)<<endl;


cout<<">"<<endl;
cout<<(aa>b)<<endl;
cout<<(aa>c)<<endl;
cout<<(a>c)<<endl;
cout<<(a>cc)<<endl;

cout<<(b>aa)<<endl;
cout<<(a>b)<<endl;

aa=(char*)"abcd";
bb=(char*)"abcd";
cc=(char*)"mcdd";
a="abcd";
b="abcd";
c="mcdd";
cout<<"!="<<endl;
cout<<(aa!=b)<<endl;   
cout<<(aa!=c)<<endl;
cout<<(a!=c)<<endl;
cout<<(a!=cc)<<endl;

cout<<(b!=aa)<<endl;
cout<<(a!=b)<<endl;
a="aBcd";
b="AbCde";
c="Abc";

cout<<"test: "<< strncasecmp(a,b,0)<<endl;
cout<<"test: "<< strncasecmp(b,a,4)<<endl;
cout<<"test: "<< strncasecmp(a,c,1)<<endl;
cout<<"test: "<< strncasecmp(c,a,10)<<endl;

cout<<++a<<endl;
cout<<--a<<endl;
cout<<~a<<endl;
cout<<a<<endl;


cout<<strcpy(b,strchr(a,'B'))<<endl; 

cout<<">................................................................................................................."<<endl;

aa=(char*)"zxvabcde";
bb=(char*)"eccba";
cc=(char*)"cde";
char* dd=(char*)"cbd";
cout<<strspn(aa,bb)<<endl;
cout<<strspn(aa,cc)<<endl;
cout<<strspn(bb,aa)<<endl;
cout<<strspn(cc,aa)<<endl;
cout<<strspn(cc,dd)<<endl;
cout<<strspn(dd,aa)<<endl;
cout<<strspn(aa,dd)<<endl;
cout<<strspn(bb,cc)<<endl;
cout<<"............................."<<endl;
a=(char*)"zxvabcde";
b=(char*)"eccba";
c=(char*)"cde";
lipi d=(char*)"cbd";
cout<<strspn(a,b)<<endl;
cout<<strspn(a,c)<<endl;
cout<<strspn(b,a)<<endl;
cout<<strspn(c,a)<<endl;
cout<<strspn(c,d)<<endl;
cout<<strspn(d,a)<<endl;
cout<<strspn(a,d)<<endl;
cout<<strspn(b,c)<<endl;




aa=(char*)"zxvabcde";
bb=(char*)"eccba";
cc=(char*)"cde";
 dd=(char*)"cbd";
cout<<strcspn(aa,bb)<<endl;
cout<<strcspn(aa,cc)<<endl;
cout<<strcspn(bb,aa)<<endl;
cout<<strcspn(cc,aa)<<endl;
cout<<strcspn(cc,dd)<<endl;
cout<<strcspn(dd,aa)<<endl;
cout<<strcspn(aa,dd)<<endl;
cout<<strcspn(bb,cc)<<endl;
cout<<"............................."<<endl;
a=(char*)"zxvabcde";
b=(char*)"eccba";
c=(char*)"cde";
d=(char*)"cbd";
cout<<strcspn(a,b)<<endl;
cout<<strcspn(a,c)<<endl;
cout<<strcspn(b,a)<<endl;
cout<<strcspn(c,a)<<endl;
cout<<strcspn(c,d)<<endl;
cout<<strcspn(d,a)<<endl;
cout<<strcspn(a,d)<<endl;
cout<<strcspn(b,c)<<endl;


char arr4[]="  z   x v  a e ee eeee   b c ede deeafa desaf afafe adfdsaf "; // need checkkkkkkkkkkkkkkkkkkk
a=(char*)"  z   x v  a e ee eeee   b c ede deeafa desaf afafe adfdsaf ";
cout<<a<<endl;
//cout<<strformat(a)<<endl;
//cout<<a<<endl;

//cout<<strformat(a)<<endl;
//cout<<strformat(arr4)<<endl;
cout<<strdel(a,'e')<<endl;
cout<<a<<endl;
//cout<<strformat(a)<<endl;
//cout<<strdel(a,'e')<<endl;
//cout<<a<<endl;


}
