#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[]){
    
    int flag = 0;
    int i;
    FILE * fptr;
    int lines;

    if (argc == 1)
    {   printf("Enter the number of rows:");
        scanf("%d",&lines);
        while(lines>10){
            printf("Enter lines less than 10\n");
            printf("Enter the number of rows:");
            scanf("%d",&lines);
        }
    }
    
    else if (argc == 2)
        
    {  lines = atoi(argv[argc-1]); // important conversion (you were stuck on this part!s )
        
    
    }

    else

    {   
        flag = 1;
        lines = atoi(argv[1]);
        fptr = fopen(argv[argc - 1], "w");

    }

    

    // settting the number of rows to the numver of arguments passed
    int r1 = lines; // a temp variable

    

    //setting the counter for the asterisks
    int ct = 1;
    
    

    for  (i = 0; i < lines; i++) // traversing through rows
    {
        
        int j;
        
        for ( j = r1; j > 1; j--) // loop for spaces
            
        {
            printf(" ");

            if (flag == 1)
            {
                char a = 32;
                fwrite(&a,1,1,fptr);
            }
            
            
        }

        r1 --;


    int k;
    for ( k = 0; k < ct; k++) //loop for asterisks
    {
       printf("*");
       if (flag == 1)
            {
                char b = 42;
                fwrite(&b,1,1,fptr);
            }
       
       
       
    }
    printf("\n");
    if (flag == 1)
        {
            char c = 10;
            fwrite(&c,1,1,fptr);
        }
    
    
    ct = ct +2;

        
    }

    // stem of the Christmas tree
    
    int g;

    // default to 3 rows mentioned
    for ( g = 0; g < 3; g++) 

    {   int p;

        // loop for spaces
        for (p = 0; p < lines-1; p++) 
        {
            printf(" ");
            if (flag == 1)
        {
            char a = 32;
            fwrite(&a,1,1,fptr);
        }

            
        }
        
        printf("*\n");
        if (flag == 1)
        {
            fputs("*\n", fptr);
        }
        
    }

    if (flag == 1){

        fclose(fptr);
    }

    
    


}
