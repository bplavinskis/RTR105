#include<stdio.h>

void main()
{
int a=10; //atmiņā parādīsies mainīgais a (izmērs 4 baiti, satur 0000 0000  0000 0000  0000 0000  0000 1010)
printf("operācija <<: %d<<1 rezultāts %d\n",a,a<<1);//sagaiam skaitli 20

int b; //atmiņā parādīsies mainīgais b (izmērs 1 byte, saturs ???? ????  ???? ???? ???? ????  ???? ????)
printf("B mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;//divas opwrācijas: =(piešķiršana) un <<(būdīšana pa bitiem pa kreisi)
printf("operācija <<: %d<<%d rezultāts %d\n",a,2,b);//sagaiam skaitli 40

int c;
printf("\nOperācijas << pētīšana \n------------------------\n");
printf("Ievadiet operācijas pirmo operandu: \n");
scanf("%d",&a);
printf("Ievadiet operācijas pirmo operandu: \n");
scanf("%d",&c);
b=a<<c;
printf("------------------------\nSanāca: %d\n",b);

/*
char a=10; //atmiņā parādīsies mainīgais a (izmērs 1 byte, saturs 00001010)
printf("operācija <<: %d<<1 rezultāts %d\n",a,a<<1);//sagaiam skaitli 20

char b; //atmiņā parādīsies mainīgais b (izmērs 1 byte, saturs ????????)
printf("B mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;//divas opwrācijas: =(piešķiršana) un <<(būdīšana pa bitiem pa kreisi)
printf("operācija <<: %d<<%d rezultāts %d\n",a,2,b);//sagaiam skaitli 40

char c;
printf("Operācijas << pētīšana \n------------------------\n");
printf("Ievadiet operācijas pirmo operandu: \n");
scanf("%d",&a);
printf("Ievadiet operācijas pirmo operandu: \n");
scanf("%d",&c);
b=a<<c;
printf("-----------------------\nSanāca: %d\n",b);
*/

}

/*
Bruno P 2019
Komentārs pa vairākām rindām
*/
