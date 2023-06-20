#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>


void main()
{
    system("color 1f");

    int a;
    int  Meatball,Cheesecreapes,Friedfries,Pizza,Chawmin,FriedRice,Shawarma,Tandoori,Naan,FruitSalad,GreenSalad,Water,Coke,Sprite;
    int  Meatball1,Cheesecreapes1, Friedfries1,Pizza1,Chawmin1,FriedRice1,Shawarma1,Tandoori1,Naan1,FruitSalad1,GreenSalad1,Water1,Coke1,Sprite1;




    printf("\t\t\tWelcome TO Our Runtime Food Gallery\n");
    printf("\t\t------------------------------------------------\n");
    printf("\n\n\n");
    printf("\t\t\t********Order Your Menu********\n");
    printf("\n\n\n");
    printf(" 1.Appetizer\n\n 2.Main Course\n\n 3.Salad\n\n 4.Beverage\n\n ");
    printf("\nEnter your choice to see the food and price of menu\n");
    scanf("%d",&a);

    switch(a)
    {
    case 1:printf("\n\nOrder Your Appetizer:\n");
           printf("============================");
        int choice;
        printf("\n1.Meat ball\n Price: 120Tk\n\n2.Cheese Crepes\n Price: 100TK\n\n3.Fried Fries\n Price: 150TK\n\n ");
        printf("Enter your choice\n");
        scanf(" \n %d",&choice);

        switch(choice)
        {
            case 1: printf("\n You Order meat ball\n");

                     Meatball1++;
                     printf("\nYour Order Is Successful");
                     break;

            case 2: printf("\n You Order cheese crepes\n");

                     Cheesecreapes1++;
                     printf("\nYour Order Is Successful");
                     break;

            case 3: printf("\n you order fried fries\n");

                     Friedfries1++;
                     printf("\nYour Order Is Successful");
                     break;

            default:
                printf("***************you enter wrong choice**************");
                break;

         }

        break;

    case 2:printf("\nOrder Your Main Course\n\n");

        int choice1;

        printf("\n1.Pizza\n Price: 850TK\n\n2.Chaumin\n Price: 90TK\n\n3.Fried Rice\n Price: 150Tk\n\n4.Chicken Shawarma\n Price: 90TK\n\n5.Tandoori\n Price: 160Tk\n\n6.Naan\n Price: Per piece 30Tk\n\n");
        printf("\nEnter your choice\n");
        scanf(" \n %d",&choice1);
        switch(choice1)
        {

             case 1: printf("\n You Order Pizza\n");

                     Pizza1++;
                     printf("\nYour Order IS Successful");
                     break;

            case 2: printf("\n You Order Chawmin\n");

                     Chawmin1++;
                     printf("\nYour Order Is Successful");
                     break;

            case 3: printf("\n You Order Fried Rice\n");

                     FriedRice1++;
                     printf("\nYour Order Is Successful");
                     break;

            case 4: printf("\n You Order Chicken Shawarma\n");

                     Shawarma1++;
                     printf("\nYour Order Is Successful");
                     break;

            case 5: printf("\n You Order Tandoori\n");

                     Tandoori1++;
                     printf("\nYour Order Is Successful");
                     break;

            case 6: printf("\n You Order Naan\n");

                     Naan1++;
                     printf("\nYour Order Is Successful");
                     break;


            default:
                printf("***************you enter wrong choice**************");
                break;


        }
        break;

    case 3:printf("Order Your Salad\n\n");
        int choice2;
        printf("\n\n1.Fruit Salad\n Price: 50TK\n\n2.Green Salad\n Price: 80TK\n\n ");
        printf("Enter your choice\n");
        scanf(" \n %d",&choice2);

        switch(choice2)
        {
            case 1: printf("\n You Order Fruit Salad\n");

                     FruitSalad1++;
                     printf("\nYour Order Is Successful");
                     break;

            case 2: printf("\n You Order Green Salad\n");

                     GreenSalad1++;
                     printf("\nYour Order Is Successful");
                     break;

            default:
                printf("***************you enter wrong choice**************");
                break;

         }
         break;



    case 4:printf("Order Your Beverage");
        int choice3;

        printf("1.Water\n Price: 15Tk\n 2.Cocacola Coke\n Price: 20Tk\n 3.Sprite\n Price: 20Tk\n");
        printf("Enter Your Choice\n");
        scanf(" \n %d",&choice3);

        switch(choice3)
        {
            case 1: printf("\n You Order Water\n");

                     Water1++;
                     printf("\nYour Order Is Successful");
                     break;

            case 2: printf("\n You Order Coke\n");

                     Coke1++;
                     printf("\nYour Order Is Successfully");
                     break;

            case 3: printf("\n You Order Sprite\n");

                     Sprite1++;
                     printf("\nYour Order Is Successfully");
                     break;


            default:
                printf("***************you enter wrong choice**************");
                break;

         }

        break;

        default:
        printf("Invalid Food item");
        break;


    }


    getch();


}

