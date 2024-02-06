#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"head.h"
#include"functions.c"
int score;
int main()
{
    FILE *fp=fopen("C:/Users/chath/OneDrive/Documents/Desktop/Radar practise/Quiz Application/quiz_data.txt","a");
    printf("Welcome to the Online Quiz Application!\n");
    back_to_enter_name:
    printf("Please enter your name: ");
    scanf(" %[^\n]s", data.user_name);
    for(int i=0;data.user_name[i];i++){
        if((data.user_name[i]>='A'&&data.user_name[i]<='Z')||(data.user_name[i]>='a'&&data.user_name[i]<='z')){

        }
        else{
            printf("The name you had entered has some numbers/characters!.Try Again.\n");
            goto back_to_enter_name;
        }
    }
    fputs(data.user_name,fp);
    fputs("-------->",fp);
    back_to_enter_mobile_number:
    printf("Please enter your mobile number: ");
    scanf(" %[^\n]s", data.user_mobile_number);
    // checking mobile number is correct or not
    for(int i=0;data.user_mobile_number[i];i++){
        if(data.user_mobile_number[i]>='0'&&data.user_mobile_number[i]<='9'){

        }
        else{
            printf("The name you had entered has some numbers/characters!.Try Again.\n");
            goto back_to_enter_mobile_number;
        }
    }
    if(strlen(data.user_mobile_number)!=10){
        printf("The number you have entered doesn't have 10 numbers.");
        goto back_to_enter_mobile_number;
    }
    else if((data.user_mobile_number[0]!='9')&&(data.user_mobile_number[0]!='8')&&(data.user_mobile_number[0]!='7')&&(data.user_mobile_number[0]!='6')){
        printf("The number you have entered is not valid.");
        goto back_to_enter_mobile_number;
    }
    fputs(data.user_mobile_number,fp);
    fputs("-------->",fp);
    //fputs("\n",fp);
    printf("\nHello %s! Let's get started.\n", data.user_name);
    int choice;
    back_to_topic_selection:
    printf("In which topic do you want test:\n1.English grammer\n2.Current affairs\n3.Cricket\nplease select your choice:");
    scanf("%d", &choice);
    printf("Ok! Let's get started.\n");
    delay();
    switch (choice){
    case 1:
        English_grammer();
        fprintf(fp,"Score(English Grammer)=%d\n",score);
        break;
    case 2:
        Current_Affairs();
        fprintf(fp,"Score(Current Affairs)=%d\n",score);
        break;
    case 3:
        Cricket();
        fprintf(fp,"Score(Cricket)=%d\n",score);
        break;
    default:
        printf("You have selected wrong choice! Please enter it again\n");
        goto back_to_topic_selection;
        break;
    }
    printf("\nCongratulations %s, you have completed the quiz!\n", data.user_name);
    printf("Your final score is %d out of 5.\n", score);
    return 0;
}
