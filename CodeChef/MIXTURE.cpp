#include <iostream>
using namespace std;

int main() {

	int T,i,A,B;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cout<<"enter the value of A and B";
       cin>>A>>B;
       if(A==0)
       {
           cout<<"A=0";
           cout<<"Liquid"<<"\n";
            
           
       
       }else
       {
          if(B==0)
           {
               
               cout<<"B=0";
           cout<<"Solid"<<"\n";
           }
       else{
           cout<<"both +";
       if((A>0)&&(B>0))
       {
           cout<<"Solution"<<"\n";
          
       }
       }
        
     } 
	    
	}
	return 0;
}
