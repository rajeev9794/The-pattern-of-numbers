#include<iostream>
using namespace std;
void odd(int n){
 int i,j,k,ch=0,c;
 for(i=1;i<=n;i++){
   k=1,c=0;
  (i<=n/2+1?ch++:ch--);
  for(j=1;j<=n;j++){
     if(j>=n/2-ch+2&&j<=n/2+ch){
      k=(j<=((n/2)+1)?++c:--c);
      cout<<k;
      }
     else
      cout<<'*';
    }
  cout<<endl;
   }
}
void even(int n){
 int i,j,k,c=-1,a;
 for(i=1;i<=n;i++){
    a=0;
     if(i<=n/2)
      c++;
      else if(i>n/2+1)
       c--;
     for(j=1;j<n;j++){
       if(j>=n/2-c&&j<=n/2+c){
       k=(j<=(n/2)?++a:--a);
       cout<<k;
       }
       else
        cout<<"*";
     }
   cout<<endl;
}

}
int main(){
int n,ch;
do{
  cout<<"Enter the size of pattern:";
  cin>>n;
  if(n%2==1)
   odd(n);
  else
   even(n);
  cout<<"Enter 1 to get more pattern:";
  cin>>ch;
 }while(ch==1);
return 0;
}
