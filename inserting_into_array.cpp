//Displaying the Elements
for( i= 0; i < length; i++ )
{
	 print( A[ i ] )
}
 
//Inserting the Elements
 Insert(4, 15)
 for( i = Length; i > index ; i - -)
{
	 A[ i ] = A[ i -1] ;
}
 A[ index ] = x ;
 Length ++;
       
#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
 void Append(struct Array *arr,int x)//Using an Append Function to Insert an Element at Last position
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
 void Insert(struct Array *arr,int index,int x)//Using an Insert Function to Insert an Element at Desired Position of an Array
 {
 int i;
 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 }
int main()
{
struct Array arr1={{2,3,4,5,6},10,5};
Append(&arr1,10);//CALLING THE FUNCTIONS WE HAVE CREATED
Insert(&arr1,0,12);
Display(arr1);
 return 0;
}
