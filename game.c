#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void instructions()
{
    printf("\n===== INSTRUCTIONS =====");
    printf("\nManage Fuel, Oxygen and Health.");
    printf("\nDifficulty increases with levels.");
    printf("\nGood decisions move you forward faster.");
    printf("\nReach distance 100 to win.");
}

void showResult(int fuel,int oxygen,int health,int distance)
{
    printf("\n\n===== FINAL RESULT =====");

    if(distance>=100 && fuel>0 && oxygen>0 && health>0)
        printf("\n🎉 MISSION SUCCESSFUL!");
    else
        printf("\n💀 MISSION FAILED!");

    printf("\n========================");
}

void applyEffects(int choice,int level,int *fuel,int *oxygen,int *health,int *distance)
{
    if(choice==1) // best decision
    {
        *fuel -= 12*level;
        *oxygen -= 8*level;
        *health -= 6*level;
        *distance += 10;
    }
    else if(choice==2) // average
    {
        *fuel -= 20*level;
        *oxygen -= 15*level;
        *health -= 12*level;
        *distance += 5;
    }
    else // worst decision
    {
        *fuel -= 35*level;
        *oxygen -= 30*level;
        *health -= 25*level;
        *distance -= 8;
    }
}


void playGame()
{
    int fuel=100, oxygen=100, health=100, distance=0;
    int level=1, event, choice;

    srand(time(0));

    printf("\n🚀 Mission Started!\n");

    while(fuel>0 && oxygen>0 && health>0 && distance<100)
    {
        if(distance>=50 && distance<85) level=2;
        else if(distance>=85) level=3;


        printf("\n--------------------------------");
        printf("\nLevel:%d Fuel:%d Oxygen:%d Health:%d Distance:%d",
               level,fuel,oxygen,health,distance);

        event = rand()%5 + 1;

        // ================= LEVEL 1 (MILD PROBLEMS) =================
        if(level==1)
        {
            if(event==1)
                printf("\nFuel pipe crack!\n1 Seal quickly\n2 Adjust flow\n3 Ignore");
            else if(event==2)
                printf("\nSpace debris nearby!\n1 Clear path\n2 Move slowly\n3 Rush ahead");
            else if(event==3)
                printf("\nOxygen alarm blinking!\n1 Check tank\n2 Reduce breathing\n3 Ignore");
            else if(event==4)
                printf("\nLoose circuit sparks!\n1 Fix wires\n2 Cut power\n3 Ignore");
            else
                printf("\nFatigue setting in!\n1 Rest\n2 Energy pack\n3 Ignore");
        }

        // ================= LEVEL 2 (DANGEROUS PROBLEMS) =================
        else if(level==2)
        {
            if(event==1)
                printf("\nEngine overheating badly!\n1 Cool engine\n2 Reduce speed\n3 Push engine");
            else if(event==2)
                printf("\nMeteor shower hits hull!\n1 Shield ship\n2 Dodge slowly\n3 Speed through");
            else if(event==3)
                printf("\nMajor oxygen leak!\n1 Seal chamber\n2 Backup tank\n3 Ignore");
            else if(event==4)
                printf("\nStrong radiation burst!\n1 Wear suit\n2 Hide inside\n3 Ignore");
            else
                printf("\nNavigation system failure!\n1 Manual control\n2 Restart\n3 Fly blindly");
        }

        // ================= LEVEL 3 (CRITICAL DISASTERS) =================
        else
        {
            if(event==1)
                printf("\nMassive asteroid approaching!\n1 Full shield\n2 Emergency thrust\n3 Escape route");
            else if(event==2)
                printf("\nOxygen system completely failed!\n1 Emergency repair\n2 Backup tank\n3 Ignore");
            else if(event==3)
                printf("\nExtreme radiation wave incoming!\n1 Shield suit\n2 Hide deep\n3 Ignore");
            else if(event==4)
                printf("\nEngine destroyed mid-flight!\n1 Manual repair\n2 Restart system\n3 Drift");
            else
                printf("\nBlack hole pulling ship strongly!\n1 Full thrust\n2 Stabilize orbit\n3 Do nothing");
        }

        scanf("%d",&choice);

        applyEffects(choice,level,&fuel,&oxygen,&health,&distance);

        // Passive survival drain
          fuel -= 2;
          oxygen -= 2;
          health -= 1;


        if(fuel>100) fuel=100;
        if(oxygen>100) oxygen=100;
        if(health>100) health=100;
        if(distance<0) distance=0;
    }

    showResult(fuel,oxygen,health,distance);
}

int main()
{
    int choice;

    do
    {
        printf("\n\n===== SPACE MISSION GAME =====");
        printf("\n1 Start Mission");
        printf("\n2 Instructions");
        printf("\n3 Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1: playGame(); break;
        case 2: instructions(); break;
        case 3: printf("\nGoodbye Commander!\n"); break;
        default: printf("\nInvalid choice!");
        }

    }while(choice!=3);

    return 0;
}