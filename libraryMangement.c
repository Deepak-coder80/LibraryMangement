/***********************************************************************************
 * ######################### PROJECT DETAILS #################################### *
 * AUTHOR : DEEPAK M S
 * AIM    : Create a structure containing book information like accession number, 
            name of book and name of author. The maximum number of books in the 
            library is1000. Also create and display a menu as follows: 
            (i) Add a new book. 
            (ii) Display book information in lexicographical order of book names. 
            (iii) Display the number of books of a particular author  .
            (Use separate function for sorting .)  

***********************************************************************************/


//header files
#include <stdio.h>
#include <string.h>

//struct for book
struct libraryMangement
{
   int access_number;
   char book_name[100];
   char book_author[100];
};


//function declartions
int optionSelector(); //options display functions

//global variables
int i; //loop variable
int n; //size of books

//main function
int main(){
    //create book struct
    struct libraryMangement book[1000];
    //local variable declartion
    int option;
    printf("****************************************\n");
    printf("\tLIBRARY MANAGEMENT SYSTEM\n");
    printf("****************************************\n");

    option = optionSelector();

    switch (option)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    
    default:
        printf("Invalid Entry");
        break;
    }


    return 0;
}

int optionSelector(){
    int choice;
    printf("\n\tEnter 1 for Add books: ");
    printf("\n\tEnter 2 for display Books: ");
    printf("\n\tEnter 3 for search book by author: ");

    printf("\n\nEnter your choice here:");
    scanf("%d",&choice);

    return choice;

}