#include <iostream>
using namespace std;
int main()
{
    int len=0,i,j;
    char str[10]="Dileep";
    char cat[20]="Murthy",res[30];
    cout<<"String:"<<str<<"\n";
    
    for(i=0;str[i]!='\0';i++,j++)
            res[j]=str[i];
    cout<<"1st String :"<<res<<"\n";
    
    for(i=0;cat[i]!='\0';i++,j++)
    {
        res[j]=cat[i];
      
    }
      res[j]='\0';
    cout<<"concat  string is:"<<res;
    
}
