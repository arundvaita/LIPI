#include"lipi.h"  // check multpile insersion




// constrocotrs
lipi::lipi()  // default
{
    s=new char[1]{0};  // for dlete in cin

}
lipi::lipi(const char* a)// parametrized
{
    s=new char[strlen(a)+1]{0};
    strcpy(s,a);
}
lipi::lipi(const lipi &a)  // copy constructor 
{
    s=new char[strlen(a.s)+1]{0};
    strcpy(s,a.s);
}  

lipi::~lipi()  // destructor
{
    delete [] s; 
}




int c1=nobold,c2=white,c3=nouline,c4=bdef; 
lipi get,uin;     



int cflag=0;

void setcolor()
{
if(cflag)
    printf("\033[%d;%d;%d;%dm",c2,c3,c4,c1);           // some cases are still need to resolve

}
void color(int a,int b,int c,int d)  
{

    if((a>=30 && a<=37) || (b>=30 && b<=37) ||(c>=30 && c<=37)||(d>=30 && d<=37))
        c2=a;
    if((a>=40 && a<=47) ||(b>=40 && b<=47) ||(c>=40 && c<=47) ||(d>=40 && d<=47))
        c4=a;
    if(a==normal)     
        cflag=0;
    else
    cflag=1;
    
    if((a==bold)||(b==bold)||(c==bold)||(d==bold))
        c1=bold;
    if((a==nobold)||(b==nobold)||(c==nobold)||(d==nobold))
        c1=c2;
    if((a==uline)||(b==uline)||(c==uline)||(d==uline))
        c3=uline;
    if((a==nouline)||(b==nouline)||(c==nouline)||(d==nouline))
        c3=c2;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
char* strwbw(lipi &s)
{
    for(int i=0,f=0;s.s[i];i++)
    {
        if((s.s[i]==32) || (s.s[i+1]==0))
        {
            if(s.s[i+1]==0)
                i++;
            for(int j=f,k=i-1;j<k;j++,k--)
            {
                s.s[j]^=s.s[k]^=s.s[j]^=s.s[k];
            }
            f=i+1;
        }
    }
    return s.s;
}


char* strwbw(char*s)
{
    for(int i=0,f=0;s[i];i++)
    {
        if((s[i]==32) || (s[i+1]==0))
        {
            if(s[i+1]==0)
                i++;
            for(int j=f,k=i-1;j<k;j++,k--)
            {
                s[j]^=s[k]^=s[j]^=s[k];
            }
            f=i+1;
        }
    }

    return s;
}
//...........................................
char* strrev(char*s)
{
    int l=strlen(s)-1;
    for(int i=0;i<l;i++,l--)
        s[i]^=s[l]^=s[i]^=s[l];
    return s;
}
char* strrev(lipi &s)
{
    int l=strlen(s)-1;
    for(int i=0;i<l;i++,l--)
        s.s[i]^=s.s[l]^=s.s[i]^=s.s[l];
    return s.s;
}
//...........................................
int strlen(const lipi s)
{
    int i=0;
    while(s.s[i++]);
    return --i;
}
//...........................................
char* strcpy(lipi &d,const char*s)                
{
    int i=0;
    delete [] d.s;
    d.s=new char[strlen(s)+1]{0};
    while(s[i])
        d.s[i++]=s[i];
    d.s[i]=s[i];     // not required since initialising with 0
    return d.s;
}
char* strcpy(char*d,const lipi s)
{
    int i=0;

    while(s.s[i])
        d[i++]=s.s[i];
    d[i]=s.s[i];
    return d;
}
char* strcpy(lipi &d,const lipi s)
{
    delete [] d.s;
    d.s=new char[strlen(s.s)+1]{0};
    int i=0;
    while(s.s[i])
        d.s[i++]=s.s[i];  //d.s[i]=s.s[i++];   gives 
    d.s[i]=s.s[i];      // not required since initialising with 0
    return d.s;
}
//..............................................
char* strncpy(lipi &d,const char*s,int n)
{
    int i=0;
    delete [] d.s;
    d.s=new char[n+1]{0};  // only n chars are copied
    while(s[i] && i<n)
        d.s[i++]=s[i];
    d.s[i]=0;  // not required since initialising with 0
    return d.s;
}
char* strncpy(char*d,const lipi s,int n)
{
    int i=0;
    while(s.s[i] && i<n)
        d[i++]=s.s[i];
    d[i]=0;
    return d;
}
char* strncpy(lipi &d,const lipi s,int n)
{
    delete [] d.s;
    d.s=new char[n+1]{0};  // only n chars are copied
    int i=0;
    while(s.s[i] && i<n)
        d.s[i++]=s.s[i];
    d.s[i]=0;  // not required since initialising with 0
    return d.s;
}
//.............................................. 
char* strcat(lipi &d,const char*s)           // can realloc so that temp wont require, now iam disturbing these
{

    int ld=strlen(d);
    int i=0;
    int ls=strlen(s);
    char *temp=new char[ld+ls+1]{0};  
    strcpy(temp,d);
    while(s[i])   // can use strcat(temp,s); directly 
        temp[ld++]=s[i++];
    temp[ld]=s[i];
    delete [] d.s;
    d.s=temp;
    return d.s;
}
//.......................................
char* strcat(char*d,const lipi s)  // data overflow not taken care , cant do that also,ie char array not created by new operator
{
    int i=0,l=strlen(d);
    while(s.s[i])
        d[l++]=s.s[i++];
    d[l]=s.s[i];
    return d;
}

//.............................
char* strcat(lipi &d,const lipi s)
{
    int ld=strlen(d);
    int i=0;
    int ls=strlen(s);
    char *temp=new char[ld+ls+1]{0};  
    strcpy(temp,d);
    while(s.s[i])
        temp[ld++]=s.s[i++];
    temp[ld]=s.s[i];
    delete [] d.s;
    d.s=temp;
    return d.s;
}
//.............................
char* strncat(lipi &d,const char*s,int n)  
{
    int ld=strlen(d);
    int i=0;
    int ls=strlen(s);
    char *temp=new char[ld+n+1]{0};  
    strcpy(temp,d);

    while(s[i] && i<n)
        temp[ld++]=s[i++];
    delete [] d.s;
    d.s=temp;
    return d.s;
}
char* strncat(char*d,const lipi s,int n)
{
    int i=0,l=strlen(d);
    while(s.s[i] && i<n)
        d[l++]=s.s[i++];
    d[l]=0;
    return d;
}
char* strncat(lipi &d,const lipi s,int n)   
{
    int ld=strlen(d);
    int i=0;
    int ls=strlen(s);
    char *temp=new char[ld+n+1]{0};  
    strcpy(temp,d);

    while(s.s[i] && i<n)
        temp[ld++]=s.s[i++];
    delete [] d.s;
    d.s=temp;
    return d.s;

}

//////////////////////////////////////////////////////
char*  strchr(const lipi &s,char ch)
{
    int i=0;
 
    while(s.s[i])
    {
        if(s.s[i]==ch)
            return &(s.s[i]);
        i++;
    }
    return 0;
}
char*  strrchr(const lipi &s,char ch)
{
    int i=strlen(s)-1;
    while(i>=0)
    {
        if(s.s[i]==ch)
            return &(s.s[i]);
        i--;
    }
    return 0;

}
/////////////////////////////////////////////////////////

char*  strstr(const lipi &main,const char* sub)
{
    int i;
    for(i=0;main.s[i];i++)
    {
        int j=0;
        if(main.s[i]==sub[0])
        {
            for(j=0;sub[j];j++)
            {
                if(main.s[i+j]!=sub[j])
                    break;
            }
            if(sub[j]==0)     
                return &(main.s[i]);
           
        } 
    }
    return 0;

}

char* strstr( char* main,const lipi sub)   // const makes error????????????? what to dooooooooooooooooooooooo??????
{
    int i;
    for(i=0;main[i];i++)
    {
        int j=0;
        if(main[i]==sub.s[0])
        {
            for(j=0;sub.s[j];j++)
            {
                if(main[i+j]!=sub.s[j])
                    break;
            }
            if(sub.s[j]==0)
                return &(main[i]);
        } 
    }
    return 0;
}

char*  strstr(const lipi &main,const lipi sub)
{
    int i;
    for(i=0;main.s[i];i++)
    {
        int j=0;
        if(main.s[i]==sub.s[0])
        {
            for(j=0;sub.s[j];j++)
            {
                if(main.s[i+j]!=sub.s[j])
                    break;
            }
            if(sub.s[j]==0)
                return &(main.s[i]);
        } 
    }
    return 0;
}


char*  strcasestr(const lipi &main,const char* sub)
{
    int i;
    for(i=0;main.s[i];i++)
    {
        int j=0;
        if((main.s[i]|32)==(sub[0]|32))
        {
            for(j=0;sub[j];j++)
            {
                if((main.s[i+j]|32)!=(sub[j]|32))
                    break;
            }
            if(sub[j]==0)
                return &(main.s[i]);
        } 
    }
    return 0;


}
const char* strcasestr(const char* main,const lipi sub)  
{
    int i;
    for(i=0;main[i];i++)
    {
        int j=0;

        if((main[i]|32)==(sub.s[0]|32))
        {
            for(j=0;sub.s[j];j++)
            {
                if((main[i+j]|32)!=(sub.s[j]|32))
                    break;
            }
            if(sub.s[j]==0)
                return &(main[i]);
        } 
    }
    return 0;


}
char*  strcasestr(const lipi &main,const lipi sub) 
{
    int i;
    for(i=0;main.s[i];i++)
    {
        int j=0;
        if((main.s[i]|32)==(sub.s[0]|32))
        {
            for(j=0;sub.s[j];j++)
            {
                if((main.s[i+j]|32)!=(sub.s[j]|32))
                    break;
            }
            if(sub.s[j]==0)
                return &(main.s[i]);
        } 
    }
    return 0;

}




int strcmp(const lipi lhs,const char* rhs)
{
int i=0;
while(lhs.s[i] && rhs[i])
{
if(lhs.s[i] > rhs[i])
return 1;
else if(lhs.s[i] < rhs[i])
return -1;
i++;
}
if(rhs[i]==lhs.s[i])
return 0;
else if(lhs.s[i] > rhs[i])
return 1;
else 
return -1;
}


int strcmp(const char* lhs,const lipi rhs)
{
int i=0;

while(lhs[i] && rhs.s[i])
{

if(lhs[i] > rhs.s[i])
return 1;
else if(lhs[i] < rhs.s[i])
return -1;
i++;
}

if(rhs.s[i]==lhs[i])
return 0;
else if(lhs[i] > rhs.s[i])
return 1;
else 
return -1;

}
int strcmp(const lipi lhs,const lipi rhs)
{
int i=0;

while(lhs.s[i] && rhs.s[i])
{
if(lhs.s[i] > rhs.s[i])
return 1;
else if(lhs.s[i] < rhs.s[i])
return -1;
i++;
}
if(rhs.s[i]==lhs.s[i])
return 0;
else if(lhs.s[i] > rhs.s[i])
return 1;
else 
return -1;
}

int strncmp(const lipi lhs,const char* rhs,int n)
{
int i=0;
while(lhs.s[i] && rhs[i] && i<n)
{
if(lhs.s[i] > rhs[i])
return 1;
else if(lhs.s[i] < rhs[i])
return -1;
i++;
}

if((rhs[i]==lhs.s[i]) || (i==n))
return 0;
else if(lhs.s[i] > rhs[i])
return 1;
else 
return -1;
}
int strncmp(const char* lhs,const lipi rhs,int n)
{
int i=0;
while(lhs[i] && rhs.s[i] && i<n)
{
if(lhs[i] > rhs.s[i])
return 1;
else if(lhs[i] < rhs.s[i])
return -1;
i++;
}
if(rhs.s[i]==lhs[i] || (i==n))
return 0;
else if(lhs[i] > rhs.s[i])
return 1;
else 
return -1;
}
int strncmp(const lipi lhs,const lipi rhs,int n)
{
int i=0;
while(lhs.s[i] && rhs.s[i] && i<n)
{
if(lhs.s[i] > rhs.s[i])
return 1;
else if(lhs.s[i] < rhs.s[i])
return -1;
i++;
}
if(rhs.s[i]==lhs.s[i] || (i==n))
return 0;
else if(lhs.s[i] > rhs.s[i])
return 1;
else 
return -1;
}




int strcasecmp(const lipi lhs,const char* rhs)
{
int i=0;

while(lhs.s[i] && rhs[i])
{

if((lhs.s[i]|32) > (rhs[i] |32))
return 1;
else if((lhs.s[i]|32) < (rhs[i] |32))
return -1;
i++;
}
if((rhs[i]|32)==(lhs.s[i]|32))
return 0;
else if((lhs.s[i]|32) > (rhs[i]|32))
return 1;
else 
return -1;
}


int strcasecmp(const char* lhs,const lipi rhs)
{
int i=0;

while(lhs[i] && rhs.s[i])
{
if((lhs[i]|32) > (rhs.s[i]|32))
return 1;
else if(lhs[i] < rhs.s[i])
return -1;
i++;
}
if((rhs.s[i]|32)==(lhs[i]|32))
return 0;
else if((lhs[i] |32) > (rhs.s[i]|32))
return 1;
else 
return -1;

}
int strcasecmp(const lipi lhs,const lipi rhs)
{
int i=0;

while(lhs.s[i] && rhs.s[i])
{
if((lhs.s[i]|32) > (rhs.s[i]|32))
return 1;
else if((lhs.s[i]|32) < (rhs.s[i]|32))
return -1;
i++;
}
if((rhs.s[i]|32)==(lhs.s[i]|32))
return 0;
else if((lhs.s[i]|32) > (rhs.s[i]|32))
return 1;
else 
return -1;
}

int strncasecmp(const lipi lhs,const char* rhs,int n)
{
int i=0;

while(lhs.s[i] && rhs[i] && i<n)
{
if((lhs.s[i]|32) > (rhs[i]|32))
return 1;
else if((lhs.s[i]|32) < (rhs[i]|32))
return -1;
i++;
}

if((rhs[i]|32)==(lhs.s[i]|32)  || (i==n))
return 0;
else if((lhs.s[i]|32) > (rhs[i]|32))
return 1;
else 
return -1;
}
int strncasecmp(const char* lhs,const lipi rhs,int n)
{
int i=0;

while(lhs[i] && rhs.s[i] && i<n)
{
if((lhs[i]|32) > (rhs.s[i]|32))
return 1;
else if((lhs[i]|32) < (rhs.s[i]|32))
return -1;
i++;
}
if((rhs.s[i]|32)==(lhs[i]|32) || (i==n))
return 0;
else if((lhs[i]|32) > (rhs.s[i]|32))
return 1;
else 
return -1;
}
int strncasecmp(const lipi lhs,const lipi rhs,int n)
{
int i=0;

while(lhs.s[i] && rhs.s[i] && i<n)
{
if((lhs.s[i]|32) > (rhs.s[i]|32))
return 1;
else if((lhs.s[i]|32) < (rhs.s[i]|32))
return -1;
i++;
}
if((rhs.s[i]|32)==(lhs.s[i]|32) || (i==n))
return 0;
else if((lhs.s[i]|32) > (rhs.s[i]|32))
return 1;
else 
return -1;
}

char* strupp(char* s)
{
int i=0;
while(s[i])      // if directly reset 32 , other chars may also effect, 
{
if(s[i]>='a' && s[i]<='z')
 s[i]-=32;
i++;
}
return s;
}
 char*  strupp(lipi &s)   
 {
 int i=0;
while(s.s[i])      // if directly reset 32 , other chars may also effect, 
{
if( s.s[i]>='a' && s.s[i]<='z')
 s.s[i]-=32;

i++;
}

return &(s.s[0]);
 }
 
char* strlow(char* s)
{
int i=0;
while(s[i])      // if directly reset 32 , other chars may also effect, 
{
if(s[i]>='A' && s[i]<='Z')
 s[i]-=32;
i++;
}
return s;
}
char*  strlow(lipi &s)
{
int i=0;
while(s.s[i])      // if directly reset 32 , other chars may also effect, 
{
if(s.s[i]>='A' && s.s[i]<='Z')
 s.s[i]+=32;

i++;
}

return &(s.s[0]);
}
char* strtog( char* s)
    {
    int i=0;
while(s[i])      // if directly reset 32 , other chars may also effect, 
{
if((s[i]>='a' && s[i]<='z') ||  (s[i]>='A' && s[i]<='Z'))
 s[i]^=(1<<5);
i++;
}
return s;
    
    }
char*  strtog(lipi &s) 
   {
   int i=0;
while(s.s[i])      // if directly reset 32 , other chars may also effect, 
{
if( (s.s[i]>='a' && s.s[i]<='z') ||  (s.s[i]>='A' && s.s[i]<='Z'))
 s.s[i]^=(1<<5);

i++;
}

return &(s.s[0]);
}


int strspn(const char* s,const lipi d) //check in initial segment only
    {
    int ret=0,i;
    for(i=0;s[i];i++)
    {
    if(strchr(d,s[i]) == 0)
    return ret;
    ret++;
    }
     return ret;
    }

    int strspn(const lipi s,const char* d) //overload
    {
        int ret=0,i;
    for(i=0;s.s[i];i++)
    {
    if(strchr(d,s.s[i]) == 0)
    return ret;
    ret++;
    }
    
     return ret;
     }
    
    
    int strspn(const lipi s,const lipi d) // overload
    {
     int ret=0,i;
    for(i=0;s.s[i];i++)  //passing ‘const lipi’ as ‘this’ argument discards qualifiers [-fpermissive]  when dirctly using []  what to do
    {
    if(strchr(d,s.s[i]) ==0)
    return ret;
    
    ret++;
    }
     return ret;
    }
    int strcspn(const char*s,const lipi d)  // overload
    {
        int ret=0,i;
    for(i=0;s[i];i++)
    {
    if(strchr(d,s[i]))
    return ret;
    ret++;
    }
    
     return ret;
     }
    
    
    int strcspn(const lipi s,const char* d)//overload
      {
        int ret=0,i;
    for(i=0;s.s[i];i++)
    {
    if(strchr(d,s.s[i]))
    return ret;
    ret++;
    }
    
     return ret;
     }
    
    
    
    int strcspn(const lipi s,const lipi d)  // overload
    {
    int ret=0,i;
    for(i=0;s.s[i];i++)  //passing ‘const lipi’ as ‘this’ argument discards qualifiers [-fpermissive]  when dirctly using []  what to do
    {
    if(strchr(d,s.s[i]))
    return ret;
    
    ret++;
    }
     return ret;
     }




 int strreplace(char*,const char*,const char*);// source, search word, new word  , return howmany times repalcced
 int strreplace(lipi&,const char*,const char*);// source, search word, new word, returns howmany times replaced
   int strreplace(char*,const lipi,const char*);// source, search word, new word  , return howmany times repalcced
       int strreplace(lipi&,const lipi,const char*);// source, search word, new word  , return howmany times repalcced
   int strreplace(char*,const char*,const lipi);// source, search word, new word  , return howmany times repalcced
    int strreplace(lipi&,const char*,const lipi);// source, search word, new word  , return howmany times repalcced
  int strreplace(char*,const lipi,const lipi);// source, search word, new word  , return howmany times repalcced
  int strreplace(lipi&,const lipi,const lipi );// source, search word, new word  , return howmany times repalcced
 
  int strdel(char*,char)// source, search word, new word  , return howmany times deleted
{

}


  int strdel(lipi& s,char ch)// source, search word, new word  , return howmany times deleted
 {
 int c=0,i;
 /*
 for(i=0,c=0;s.s[i];i++)
 {
 
 if(p=strchr(s.s[i]==ch)
 {
 //strcpy(s.s+i,s.s+i+1);
  for(int j=i;s.s[j];j++)
                s.s[j]=s.s[j+1];
 c++;
 i--;
 }
 }
 */
 char*p;
 while(p=strchr(s.s,ch))
 {
 strcpy(p,p+1);
 c++;
 }
 
 
 
 return c;
 }

 
 
 
 
  char* strformat(char* s) // remove additional spaces
  {
  char* c;
  char*p=s;
  /*
    for(int i=0,j;s[i];i++)
    {
        if( s[i]==' ')         
        {
            if(s[i+1]==' ')
            {
                for(j=i;s[j];j++)
                s[j]=s[j+1];
            i--;
            }
        }
                
        }
        */
  while(c=strchr(s,' '))
  {
  cout<<c<<endl;
      if(c[1] ==' ')
      {
      strcpy(c,c+1);
      s=c-1;
      }
      
      else
      s=c+1;
      }
          return p; 
      }
  
  char* strformat(lipi& p)
  {
  char* c;
  char* s=p.s;
 /*
  while(c=strchr(s,' '))
  {
      if(c[1] ==' ')
     {
     cout<<"c= "<<c<<endl;
     cout<<"befor : "<<s<<endl;
      strcpy(c,c+1);
      //s=c-1;
          cout<<"after : "<<s<<endl;
      }
      else
      s=c+1;
      }

*/for(int i=0,j;s[i];i++)
    {
        if( s[i]==' ')         
        {
            if(s[i+1]==' ')
            {
             cout<<"befor :"<<s<<endl;
          cout<<"func:"<<   strcpy(&(s[i]),&(s[i+1]))<<endl;
                //for(j=i;s[j];j++)
                //s[j]=s[j+1];
                 cout<<"afer :"<<s<<endl;
            i--;
            }
        }
                
        }
          return p.s; 
  
  }
 




