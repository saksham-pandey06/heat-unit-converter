/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//print wave 
#include <stdio.h>

int main()
{
    int m;
    printf("enter a row");
    scanf("%d",&m);
    
    int n;
    printf("enter a column");
    scanf("%d",&n);
    
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
  //  printf("enter a element\n");
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                printf("%d",arr[i][j]);
                
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                printf("%d",arr[i][j]);
            }
            //printf("\n");
            
            
        }
        printf("\n");
    }
    

    return 0;
}