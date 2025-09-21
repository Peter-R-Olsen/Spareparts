#include <stdio.h> // Needed for printf/scanf
#include <string.h> // Needed for strcmp
#include <stdlib.h> // Needed for Exit
#include <unistd.h> // Needed for sleep
#include <windows.h> // Needed for Beep

//The main function of this program is to give the customer the parts they need for their project
//I've installed usleep and sleep timers to make the experience a bit more lively
//There is an easteregg in here if you ask for the right part

int main(){

char input[10]; // checks for exit command or general input
char spring[] = "Dispensing spring"; // spring
int spring_counter = 2; // can be called twice
char lever[] = "Dispensing lever"; // lever
int lever_counter = 1; // can be called once
char button[] =  "Dispensing button"; // button
int button_counter = 3; // can be called three times
char resistor[] = "Dispensing resistor"; // resistor
int resistor_counter = 100; // can be called one hundred times
char ear[] = "Dispensing human body parts is illigal at the moment"; // human ear
int ear_counter = 1; // can be called once

int a4 = 440; //Don't think to hard about it, just ask for the ear
int b4 = 494;
int c4 = 262;
int d4 = 294;
int e4 = 330;
int f4 = 349;
int fs4 = 370;
int g4 = 392;
int c5 = 523;
int d5 = 587;
int e5 = 659;
 

while(1) { //while-loop is to make sure that no matter the input the loop will go back and ask for a new input untill ended by "exit" command.
    
printf("\033[33mTo exit the interaction, please type Exit\033[0m\n"); // Exit command explained
sleep(1);

printf("Welcome to the supply-shop, what can I get you today?: \n"); // Greetings
usleep(1500000);
printf("Type the name of the part you want dispensed\n");
usleep(150000);
printf("\033[32mParts list:\033[0m\n"); // Parts list
usleep(200000);
printf("spring:\n");
usleep(200000);
printf("lever:\n");
usleep(200000);
printf("button:\n");
usleep(200000);
printf("resistor:\n");
usleep(200000);
printf("ear:\n");
printf(">: "); // input line for customer
scanf("%9s", input); //Part ordered.

if (strcmp(input, "exit") == 0) { //Exit massage
    printf("Okay, ");
    usleep(450000);
    printf("okay ");
    usleep(450000);
    printf("easy ");
    usleep(300000);
    printf("there ");
    usleep(350000);
    printf("cowboy ");
    usleep(400000);
    printf("i'll ");
    usleep(200000);
    printf("close ");
    usleep(300000);
    printf("up ");
    usleep(250000);
    printf("shop! ");
    usleep(300000);
    printf(".");
    usleep(600000);
    printf(" .");
    usleep(600000);
    printf(" .");
    sleep(1);
    return(0); // customer will feel like they're talking to a real robot
}
    else if (strcmp(input, "spring") == 0) {
        printf("\033[33mChecking backroom\033[0m");
         printf("\033[33m . \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m\n");
    sleep(1);
    
    if (spring_counter > 0 ){
        spring_counter--;
        sleep(1);
        printf("%s\n", spring);
        Beep(261,150);
        Beep(329,200);
        Beep(392,250);
        sleep(2);
    }    else {
        printf("There are no more springs in stock!\n");
        Beep(261,150);
        Beep(202,200);
        Beep(156,250);
        sleep(2);
        printf("The program will return to the options menu now\n");
        sleep(3);
    }    
}   else if(strcmp(input, "lever") == 0) {
    printf("\033[33mChecking backroom\033[0m");
         printf("\033[33m . \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m\n");
    sleep(1);

       if (lever_counter > 0 ){
        lever_counter--;
        sleep(1);
        printf("%s\n", lever);
        Beep(261,150);
        Beep(329,200);
        Beep(392,250);
        sleep(2);
    }    else {
        sleep(1);
        printf("There are no more levers in stock!\n");
        Beep(261,150);
        Beep(202,200);
        Beep(156,250);
         sleep(2);
        printf("The program will return to the options menu now\n");
        sleep(3);
    }
}   else if(strcmp(input, "button") == 0) {
    printf("\033[33mChecking backroom\033[0m");
         printf("\033[33m . \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m\n");
    sleep(1);

       if (button_counter > 0 ){
        button_counter--;
        sleep(1);
        printf("%s\n", button);
        Beep(261,150);
        Beep(329,200);
        Beep(392,250);
        sleep(2);
    }    else {
        sleep(1);
        printf("There are no more buttons in stock!\n");
        Beep(261,150);
        Beep(202,200);
        Beep(156,250);
         sleep(2);
        printf("The program will return to the options menu now\n");
        sleep(3);
    }
}   else if(strcmp(input, "resistor") == 0) {
    printf("\033[33mChecking backroom\033[0m");
         printf("\033[33m . \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m\n");
    sleep(1);

       if (resistor_counter > 0 ){
        resistor_counter--;
        sleep(1);
        printf("%s\n", resistor);
        Beep(261,150);
        Beep(329,200);
        Beep(392,250);
        sleep(2);
    }    else {
         sleep(1);
        printf("There are no more resistors in stock!\n");
        Beep(261,150);
        Beep(202,200);
        Beep(156,250);
         sleep(2);
        printf("The program will return to the options menu now\n");
        sleep(3);
    }
}   else if(strcmp(input, "ear") == 0) {
    printf("\033[33mChecking backroom\033[0m");
        printf("\033[33m . \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m");
    sleep(1);
    printf("\033[33m. \033[0m\n");
    sleep(1);
    if (ear_counter > 0 ){
        ear_counter--;
        sleep(1);
        printf("%s\n", ear);

Beep(b4, 400); // b ok
Beep(fs4, 200); // f# ok
Beep(g4, 200); // g ok
Beep(a4, 400); // a ok
Beep(g4, 200); // g ok
Beep(fs4, 200); // f# ok
Beep(e4, 400); // e ok
Beep(e4, 200); // e ok
Beep(g4, 200); // g ok
Beep(b4,400); // b ok
Beep(a4,200); //a ok
Beep(g4,200); // g ok
Beep(fs4,400); // f# ok
Beep(fs4,200); // f# ok
Beep(g4,200); // g ok
Beep(a4,400); // a ok
Beep(b4,350); // b ok
Beep(g4,480); // g ok
Beep(e4,320); // e ok
Beep(e4,320); // e ok

usleep(380000); // ok

Beep(g4,450); // g ok
Beep(b4,200); // b ok
Beep(e5,400); // e ok
Beep(d5,200); // d ok
Beep(c5,200); // c ok
Beep(b4,500); // b ok
Beep(g4,220); // g ok
Beep(b4,400); // b ok
Beep(a4,200); // a ok
Beep(g4,200); // g ok
Beep(fs4,400); // f# ok
Beep(fs4,200); // F# ok
Beep(g4,200); // g ok
Beep(a4,400); // a ok
Beep(b4,350); // b ok
Beep(g4,410); // g ok
Beep(e4,320); // e ok
Beep(e4,320); // e ok

        sleep(2);
    } else {
      sleep(1);
      printf("What are you trying to build?\n");
      Beep(261,150);
        Beep(202,200);
        Beep(156,250);
        sleep(2);
        printf("The program will return to the options menu now\n");
        sleep(3);

    }
}
} // while-loop end


return (0);
}