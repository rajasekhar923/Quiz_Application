#include<stdio.h>
extern int score;       // TO access the variable 'score' in this file, we have used extern
void delay(void){
    for(int i=0;i<100000;i++){
        for(int j=0;j<8000;j++){

        }
    }
}
void Cricket(void){         // Cricket function definition  
    int option;
    printf("How many players does a cricket team can have?\n1. 10\n2. 11\n3. 12\n4. 13\nEnter your option:");
    cricket1:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose your option from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto cricket1;      // go back to take user input
    }
    else if(!(option>0&&option<5)){     // checking weather the option is within the range of 1-4
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto cricket1;      // go back to take user input
    }
    else if(option==2){      // checking the user answer
        score++;    // if user answer is TRUE, then Score will be incremented
    }
    printf("How many balls does a over have?\n1. 3\n2. 4\n3. 5\n4. 6\nEnter your option:");
    cricket2:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto cricket2;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto cricket2;      // go back to take user input
    }
    else if(option==4){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }   
    printf("In 20 overs format, how many maximum number of overs that a player can bowl?\n1. 1\n2. 2\n3. 3\n4. 4\nEnter your option:");
    cricket3:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto cricket3;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto cricket3;      // go back to take user input
    }
    else if(option==4){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("In which country cricket game has born?\n1. India\n2. England\n3. Australia\n4. West Indies\nEnter your option:");
    cricket4:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto cricket4;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto cricket4;      // go back to take user input
    }
    else if(option==2){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("n which year India had won First world cup?\n1. 1981\n2. 1982\n3. 1983\n4. 1984\nEnter your option:");
    cricket5:
    if(scanf("%d",&option)!=1){         // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto cricket5;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto cricket5;      // go back to take user input
    }
    else if(option==3){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
}           // End of Cricket function definition  






void Current_Affairs(void){     // Current_Affairs function definition  
    int option;
    printf("In which year did the COVID-19 pandemic officially begin?\n1. 2019\n2. 2020\n3. 2021\n4. 2018\nEnter your option:");
    Current_Affairs1:
    if(scanf("%d",&option)!=1){      // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto Current_Affairs1;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        goto Current_Affairs1;      // go back to take user input
    }
    else if(option==1){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("In which state, The Train coramandal Express has occured?\n1. Chattisgarh\n2. Odisha\n3. Tamilnadu\n4. Andhra Pradesh\nEnter your option:");
    Current_Affairs2:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto Current_Affairs2;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto Current_Affairs2;      // go back to take user input
    }
    else if(option==2){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("In which year, Ram mandir in ayodhya is reconstructed?\n1. 2019\n2. 2020\n3. 2021\n4. 2024\nEnter your option:");
    Current_Affairs3:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto Current_Affairs3;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto Current_Affairs3;      // go back to take user input
    }
    else if(option==4){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("Who is the current President (or Prime Minister) India?\n1. Amitsha\n2. Narendra Modi\n3. Jaisha\n4. Obama\nEnter your option:");
    Current_Affairs4:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto Current_Affairs4;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto Current_Affairs4;      // go back to take user input
    }
    else if(option==2){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("Who won the 2023 cricket world cup?\n1. India\n2. England\n3. Australia\n4. West Indies\nEnter your option:");
    Current_Affairs5:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto Current_Affairs5;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto Current_Affairs5;      // go back to take user input
    }
    else if(option==3){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
}       // End of Current_Affairs function definition




void English_grammer(void){     // English_grammer function definition  
    int option;
    printf("Choose the correct form of the verb: \"She _____ to the park every Sunday.\"\n1. go\n2. goes\n3. went\n4. gone\nEnter your option:");
    English_grammer1:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto English_grammer1;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto English_grammer1;      // go back to take user input
    }
    else if(option==2){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("Identify the adjective in the sentence: \"The big, red balloon floated in the sky.\"?\n1. big\n2. balloon\n3. floated\n4. Sky\nEnter your option:");
    English_grammer2:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto English_grammer2;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto English_grammer2;      // go back to take user input
    }
    else if(option==1){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("Fill in the blank with the correct preposition: \"The book is __________ the shelf.\"?\n1. is\n2. at\n3. on\n4. above\nEnter your option:");
    English_grammer3:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto English_grammer3;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto English_grammer3;      // go back to take user input
    }
    else if(option==3){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("Choose the correct preposition: \"The ball rolled _______ the hill.\"?\n1. Up\n2. down\n3. beside\n4. above\nEnter your option:");
    English_grammer4:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto English_grammer4;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto English_grammer4;      // go back to take user input
    }
    else if(option==2){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
    printf("Fill in the blank with the correct preposition: \"The cat is hiding ________ the bed.\"?\n1. is\n2. at\n3. on\n4. under\nEnter your option:");
    English_grammer5:
    if(scanf("%d",&option)!=1){     // waiting for user answer and checking weather it is Number or character
        printf("You have entered a character. Please choose the options from the above mentioned options only!");
        scanf("%*s");       // if character is entered, clear the buffer
        goto English_grammer5;      // go back to take user input
    }
    else if(!(option>0&&option<5)){
        printf("You have entered wrong option which is not mentioned above.Please choose your option from the above mentioned options only! ");
        goto English_grammer5;      // go back to take user input
    }
    else if(option==4){      // checking the user answer
        score++;        // if user answer is TRUE, then Score will be incremented
    }
}           // End of English_grammer function definition  