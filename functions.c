#include<stdio.h>
extern int score;
void delay(void){
    for(int i=0;i<100000;i++){
        for(int j=0;j<8000;j++){

        }
    }
}
void Cricket(void){     
    int option;
    printf("How many players does a cricket team can have?\n1. 10\n2. 11\n3. 12\n4. 13\nEnter your option:");
    scanf("%d",&option);
    if(option==2){      // checking 
        score++;
    }
    printf("How many balls does a over have?\n1. 3\n2. 4\n3. 5\n4. 6\nEnter your option:");
    scanf("%d",&option);
    if(option==4){
        score++;
    }
    printf("In 20 overs format, how many maximum number of overs that a player can bowl?\n1. 1\n2. 2\n3. 3\n4. 4\nEnter your option:");
    scanf("%d",&option);
    if(option==4){
        score++;
    }
    printf("In which country cricket game has born?\n1. India\n2. England\n3. Australia\n4. West Indies\nEnter your option:");
    scanf("%d",&option);
    if(option==2){
        score++;
    }
    printf("n which year India had won First world cup?\n1. 1981\n2. 1982\n3. 1983\n4. 1984\nEnter your option:");
    scanf("%d",&option);
    if(option==3){
        score++;
    }
}
void Current_Affairs(void){
    int option;
    printf("In which year did the COVID-19 pandemic officially begin?\n1. 2019\n2. 2020\n3. 2021\n4. 2018\nEnter your option:");
    scanf("%d",&option);
    if(option==1){
        score++;
    }
    printf("In which state, The Train coramandal Express has occured?\n1. Chattisgarh\n2. Odisha\n3. Tamilnadu\n4. Andhra Pradesh\nEnter your option:");
    scanf("%d",&option);
    if(option==2){
        score++;
    }
    printf("In which year, Ram mandir in ayodhya is reconstructed?\n1. 2019\n2. 2020\n3. 2021\n4. 2024\nEnter your option:");
    scanf("%d",&option);
    if(option==4){
        score++;
    }
    printf("Who is the current President (or Prime Minister) India?\n1. Amitsha\n2. Narendra Modi\n3. Jaisha\n4. Obama\nEnter your option:");
    scanf("%d",&option);
    if(option==2){
        score++;
    }
    printf("Who won the 2023 cricket world cup?\n1. India\n2. England\n3. Australia\n4. West Indies\nEnter your option:");
    scanf("%d",&option);
    if(option==3){
        score++;
    }
}
void English_grammer(void){
    int option;
    printf("Choose the correct form of the verb: \"She _____ to the park every Sunday.\"\n1. go\n2. goes\n3. went\n4. gone\nEnter your option:");
    scanf("%d",&option);
    if(option==2){
        score++;
    }
    printf("Identify the adjective in the sentence: \"The big, red balloon floated in the sky.\"?\n1. big\n2. balloon\n3. floated\n4. Sky\nEnter your option:");
    scanf("%d",&option);
    if(option==1){
        score++;
    }
    printf("Fill in the blank with the correct preposition: \"The book is __________ the shelf.\"?\n1. is\n2. at\n3. on\n4. above\nEnter your option:");
    scanf("%d",&option);
    if(option==3){
        score++;
    }
    printf("Choose the correct preposition: \"The ball rolled _______ the hill.\"?\n1. Up\n2. down\n3. beside\n4. above\nEnter your option:");
    scanf("%d",&option);
    if(option==2){
        score++;
    }
    printf("Fill in the blank with the correct preposition: \"The cat is hiding ________ the bed.\"?\n1. is\n2. at\n3. on\n4. under\nEnter your option:");
    scanf("%d",&option);
    if(option==4){
        score++;
    }
}