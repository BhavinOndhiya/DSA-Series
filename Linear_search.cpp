for( i = 0; i < length ; i++ )
{
	if( key == A[ i ] )
	return i;	 	 	 //if search is successful it ends here
}
return -1;	 	 	 	 // if search unsuccessful returns -1

To improve the speed of comparison , you can move a key
element repeatedly search one step forward this method is called
transposition
Syntax :
for( i = 0; i < length ; i++ )
{
	 	 if( key == A[ i ] )
	 	 {
	 	 	 swap( A[i], A[i-1]);\\Every time we move the element one position forward
	 	 	 return i-1;
	 	 }
}

The second method is you can directly swap the key element to
the first element this process is called move to head . The next
search for the same element becomes faster.
for( i = 0; i < length ; i++ )
{
	 	 if( key == A[ i ] )
	 	 {
	 	 	 swap( A[i], A[0]);\\Directly move your key to the Head of the Array
	 	 	 return 0;
	 	 }
}




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    int check=0;
        for(int j=0;j<n;j++){
            if(a[j]==x)
            {
                cout<<j<<endl<<j+1;
                check++;
                break;
            }
    }
    if(check==0)
    {
       cout<<"Element "<<x<<" is not present in the array"<<endl<<n;
    }
    return 0;
}
