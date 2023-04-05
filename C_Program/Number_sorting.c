#include<stdio.h>
#include<stdint.h>
int count[1000] = {0} ;
//sort array.
void Interchange_Sort(uint8_t arr[], int number_of_elements )
{
	int i,j;
	for( i = 0 ; i< number_of_elements - 1 ; i++)
    {
		for(j = i+1; j < number_of_elements ; j++)
        {
			if(arr[i] >= arr[j])
            {
				int x = arr[i]  ;    /* Swap Two Numbers arr[i] and arr[j] */
                arr[i] = arr[j] ; 
                arr[j] = x      ;     
			}
		}
	}
}
//the number of occurrences.
void Thenumber_Of_Occurrences(uint8_t arr[] , int number_of_elements)
{
	for ( int i = 0 ;  i < number_of_elements ; i++)
    {
           count[arr[i]]++;            // array marking the number of occurrences .
    }
    for ( int i = 0 ; i < number_of_elements ; i++)
    {
        if(count[arr[i]]!=0)
        {
            printf("Number %d appeared : %d times\n" , arr[i] , count[arr[i]]);
            count[arr[i]] = 0 ;          
        }
    }
}
// print array to screen.
void PrintArray( uint8_t arr[]  , int number_of_elements)
{
    printf("OUTPUT_ARRAY : ") ;
    for ( int i = 0 ; i < number_of_elements ; i++)
    {
            printf("%d " , arr[i]);
    }
    printf("\n");
}

int main()
{
    uint8_t arr[14] = {1,7,9,3,7,1,2,6,7,8,2,9,9,3};
    Interchange_Sort(arr,14);
    PrintArray(arr,14) ;
    Thenumber_Of_Occurrences(arr,14) ;
    return 0 ; 
}