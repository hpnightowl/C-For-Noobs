#include<stdio.h>

void main()
        {
            int id=101;char pass='b';
            printf("Enter your ID: ");
            scanf("%d",&id);
            switch(id)
                {
              case 101:
                    printf("\n Enter Your Password: ");
                    gets(pass);
                        switch(pass)
                        {
                        case (char)98:
                            printf("\nCheers! Your are Welcome To Our Club");
                            break;
                        default:
                            printf("\n Sir please Enter valid Password");
                            break;
                        }
                    break;
              default:
                    printf("\nInvalid Id Please Enter Correct ID");
                    break;

                }


        }
