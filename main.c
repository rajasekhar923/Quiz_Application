#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"head.h"
#include"functions.c"
int score;
int main()
{
    FILE *fp=fopen("C:/Users/chath/OneDrive/Documents/Desktop/Radar practise/Quiz Application/quiz_data.txt","a");  // opening the file
    printf("Welcome to the Online Quiz Application!\n");
    back_to_enter_name:
    printf("Please enter your name: ");
    scanf(" %[^\n]s", data.user_name);  // reading name of the user
    for(int i=0;data.user_name[i];i++){ // loop for checking name weather it contains any numbers or special characters
        if((data.user_name[i]>='A'&&data.user_name[i]<='Z')||(data.user_name[i]>='a'&&data.user_name[i]<='z')){ // condition for checking name

        }
        else{       // if name contains any numbers or special characters
            printf("The name you had entered has some numbers/special characters!.Try Again.\n");
            goto back_to_enter_name;    // go back to user input
        }
    }   // end of loop for checking name
    fputs(data.user_name,fp);   // writing name of the user into file
    fputs("-------->",fp);      
    back_to_enter_mobile_number:
    printf("Please enter your mobile number: ");
    scanf(" %[^\n]s", data.user_mobile_number); // reading mobile number from the user
    // checking mobile number 
    for(int i=0;data.user_mobile_number[i];i++){    // 'for' loop for validating the number 
        if(data.user_mobile_number[i]>='0'&&data.user_mobile_number[i]<='9'){   // The mobile number should be within range of 0-9 only

        }
        else{   // if characters are present then go back to user input
            printf("The number you had entered has some characters!.Try Again.\n");
            goto back_to_enter_mobile_number;
        }
    }
    if(strlen(data.user_mobile_number)!=10){    // mobile number should be 10 digits
        printf("The number you have entered doesn't have 10 numbers.");
        goto back_to_enter_mobile_number;   // if 10 digits are not present, go back to user nput
    }
    else if((data.user_mobile_number[0]!='9')&&(data.user_mobile_number[0]!='8')&&(data.user_mobile_number[0]!='7')&&(data.user_mobile_number[0]!='6')){    // The mobile should start with 9 or 8 or 7 or 6
        printf("The number you have entered is not valid.");
        goto back_to_enter_mobile_number;
    }
    fputs(data.user_mobile_number,fp);  // writing mobile number into text file.
    fputs("-------->",fp);
    //fputs("\n",fp);
    printf("\nHello %s! Let's get started.\n", data.user_name);
    int choice;     // variable to store the choice of user
    back_to_topic_selection:
    printf("In which topic do you want test:\n1.English grammer\n2.Current affairs\n3.Cricket\nplease select your choice:");
    if(scanf("%d",&choice)!=1){     // condition for checking if user entered any character
        // scanf returns 1 if the value entered is integer. If value entered is character, then scanf returns 0. Then the if condition becomes TRUE
        scanf("%*s");   // if character is entered, clear the buffer
        printf("You have entered character! Please enter correct choice.\n");
        goto back_to_topic_selection;   // if character had entered, go back to user choice.
    }
    switch (choice){
    case 1:
        printf("Good Choice. Ok! Let's start your Quiz on English Grammer.\n");
        delay();
        English_grammer();      // function calling
        fprintf(fp,"Score(English Grammer)=%d\n",score);    // printing user score into the file
        break;
    case 2:
        printf("Good Choice. Ok! Let's start your Quiz on Current Affairs.\n");
        delay();
        Current_Affairs();  // function calling
        fprintf(fp,"Score(Current Affairs)=%d\n",score);     // printing user score into the file
        break;
    case 3:
        printf("Good Choice. Ok! Let's start your Quiz on Cricket.\n");
        delay();
        Cricket();  // function calling
        fprintf(fp,"Score(Cricket)=%d\n",score);     // printing user score into the file
        break;
    default:
        printf("You have selected wrong choice! Please enter it again.\n");    // If the user entered out of the choice, This message will be printed
        goto back_to_topic_selection;   // go back to user choice input
        break;
    }
    printf("\nCongratulations %s, you have completed the quiz!\n", data.user_name);     
    printf("Your final score is %d out of 5.\n", score);
    return 0;
}