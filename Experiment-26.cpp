# include <stdio.h>
# include <string.h>
int main( )
{
    FILE *filePointer ;
    char dataToBeRead[50];
    filePointer = fopen("Foreignheit to Celcius.cpp", "r") ;
    if ( filePointer == NULL )
    {
        printf( "Foreignheit to Celcius.cpp file failed to open." ) ;
    }
    else
    {    
        printf("The file is now opened.\n") ;
        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {
            printf( "%s" , dataToBeRead ) ;
        }
        fclose(filePointer) ;
        printf("Data successfully read from file Foreignheit to Celcius.cpp\n");
        printf("The file is now closed.") ;
    }
    return 0;       
}
