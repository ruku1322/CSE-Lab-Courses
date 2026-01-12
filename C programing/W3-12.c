#include<stdio.h>
int main ()
{
/**char id[10];
float hr,salary,amount;
scanf("%s%f%f",&id,&hr,&amount);
salary=hr*amount;
printf("id =%s \n salary is = %.2f",id,salary);
return 0 ;

}
13.
int a,b, c;
scanf("%d%d%d",&a,&b,&c);
if ((a>b) && (a>b))
    printf("a=%d is max",a);
    else if((b>a)&&(b>c))
        printf("b=%d is max",b);
    else
        printf("c=%d is max",c);
    return 0;
    }

    14.
    int km ;
    float fuel,avarage;
scanf("%d%f",&km,&fuel);
avarage=km/fuel;
printf("avarage is = %.2f",avarage);
return 0 ;
}
15.
#include<math.h>
int a1,b1,a2,b2;
float distance;
scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
distance= ((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1));
        printf("distance =%.2f",sqrt(distance));
        16.
  #define SIZE 10
  int tk, notes, i;
  int note[SIZE] = {1000,500,200,100,50,20,10,5,2,1};
  printf("ENTER AMOUNT: ");
  scanf("%d",&tk);
   for ( i = 0; i < SIZE; i++)
    {
    notes=tk/note[i];
  tk = tk %note[i];
  printf("%d:%d\n",note[i],notes);
  }
17.
int hr, min, sec,seconds;
printf("Enter the seconds : ");
scanf("%d",&seconds);
hr = seconds/3600;
min= (seconds-(hr*3600))/60;
sec = seconds - ((min*60)+(hr*3600));
printf("hr = %d\n min = %d\n sec = %d",hr,min,sec);
 18.
   int year, month, day,days;
printf("Enter the days : ");
scanf("%d",&days);
year = days/365;
month= (days-(year*365))/30;
day = days - ((month*30)+(year*365));
printf("year = %d\n month = %d\n day = %d",year,month,day);

  //19. 26/35/15/50
  int p,q,r,s;
  printf("Enter the 4 number : ");
  scanf("%d%d%d%d",&p,&q,&r,&s);
  if (((q>r)&&(s>p))&&((r+s)>(p+q))&&(p%2==0))
    printf("correct values");
  else
    printf("Worng values");


    20.
     #include<math.h>
       float p,q,r,pr1,a,b;
  printf("Enter the 3 number : ");
  scanf("%f%f%f",&p,&q,&r);
  pr1=(q*q)-(4*p*r);
  if (pr1>0 && p !=0 )
{

  pr1 = sqrt(pr1);
  a = (-q+pr1)/(2*p);
   b = (-q-pr1)/(2*p);
   printf("Root1 = %.5f\n",a);
   printf("Root2 = %.5f\n",b);
}
   else
	 {
		printf("Impossible to find the roots.\n");
	}

int x;

printf ("Enter the number of x: ");
scanf("%d",&x);
if (0 <=x && x<=20)
printf("Range [0,20]");
else if (21<= x && x<=40)
printf("Range [20,40]");
else if (41<=x && x<=60)
printf("Range[40,60]");
else if (61<=x && x<=80)
printf("Range [60,80]");
else
    ("out of range");
22.

int i,sum=0;
#define SIZE 5
int number[SIZE] ;
printf("enter the number: ");
for(i=1;i<=SIZE;i++){
    scanf("%d",&number[i]);
if (number[i]%2 !=0)
sum = sum+ number[i];
}

 printf("%d",sum);

 23..

float a,b,c,p;
printf("input the number of a : ");
scanf("%f",&a);
printf("input the number of b : ");
scanf("%f",&b);
printf("input the number of c : ");
scanf("%f",&c);
if  (a<(b+c)&& b<(c+a)&& c<(a+b))
{
    p=a+b+c;
    printf("  values are valid\n the perimeter of the triangle is :%f",p);
}
else
      printf("  values are not valid");

     24.

      int a,b,c;
printf("input the number of a : ");
scanf("%d",&a);
printf("input the number of b : ");
scanf("%d",&b);
      if (a>b)
      {
          if(a%b==0)
            	printf("\nMultiplied!\n");
          else
            	printf("\nNot Multiplied!\n");
      }
      else if (a<b)
      {
          if(b%a==0)
            	printf("\nMultiplied!\n");
          else
            	printf("\nNot Multiplied!\n");
      }
      else
            	printf("\nNot Multiplied!\n");

25..
    int number ;
    printf("Enter the number of month : ");
    scanf("%d",&number);
    switch(number)
    {
    case 1 :
        printf("january");
     break;
    case 2 : printf("feb\n");
     break;
    case 3:
        printf("march\n");
    break;
    case 4 :
        printf("april\n");
         break;
    case 5:
        printf("may\n");
        break;
    case 6:
        printf("jun\n");
         break;
    case 7:
        printf("julay\n");
         break;
    case 8:
        printf("aug\n");
         break;
    case 9:
        printf("sept\n");
         break;
    case 10:
        printf("oct\n");
        break;
    case 11:
        printf("nov\n");
         break;
    case 12:
        printf("dec\n");
         break;
    }
      26..

       int num,i ;
       printf("Enter the number : ");
       scanf("%d",&num);
       for(i=1;i<=num;i++)
       {
        if (i%2==0)
            printf("%d  ",i);

       }
 27..
 #define SIZE 5
 int neg=0,pos=0,i,sam[SIZE];
 printf("Enter the 5 number : ");
 for (i=1;i<=SIZE;i++)
 {
       scanf("%d",&sam[i]);

       if (sam[i]<0)
      neg++;

      else if (sam[i] >0)
        pos++;

 }
 printf("pos : %d\n",pos);
 printf("neg : %d\n",neg);

 28..


  #define SIZE 5
 int neg=0,pos=0,i,sam[SIZE],sum=0,ave;
 printf("Enter the 5 number : ");
 for (i=1;i<=SIZE;i++)
 {
       scanf("%d",&sam[i]);

       if (sam[i]<0)
      neg++;

      else if (sam[i] >0)
       {pos++;
         sum= sum+sam[i];

       }
 }
 ave = sum/pos;
 printf("pos : %d\n",pos);
  printf("neg : %d\n",neg);
   printf("ave : %d\n",ave);

   29..

#define SIZE 5
 int num,i,sam[SIZE] ;
       printf("Enter the 5 number : ");

       for(i=1;i<=5;i++)
       {
            scanf("%d",&sam[i]);
        if (sam[i]%2!=0)
        {
            num = num+sam[i];
        }
           }

 printf("%d  ",num);

 30..

    int num,i,squ=1 ;
       printf("Enter the number : ");
       scanf("%d",&num);
       for(i=1;i<=num;i++)
       {
        if (i%2==0)
        {
            squ = i*i;
             printf("%d  ",squ);

        }

       }

31..


 int n;
 printf("Enter the  number : ");
 scanf("%d",&n);

       if (n>0)
      {
          if(n%2==0)
         printf("Posative even");
          else
            printf("posative odd");
      }
       else if (n<0)
      {
          if(n%2==0)
         printf("neg even");
          else
            printf("neg odd");
      }

     32..
       int i,n;
 printf("Enter the  number : ");
 scanf("%d",&n);
 for(i=1;i<=100;i++)
 {
    if (i%n==3)
    {

        printf("%d\n",i);}
 }

  33.

  #define SIZE 5
 int i,sam[SIZE] ,max=0,j,num;
       printf("Enter the 5 number : ");

  for(i = 0; i < SIZE; i++)
	{ scanf("%d",&sam[i]);
		if(sam[i] > max) {
			max = sam[i];
			num = i+1;
		}
 }
   printf(" n = %d \n max = %d",num,max);

    34..

    int a,b,sum,c,i;
    printf("enter 2 number : ");
    scanf("%d%d",&a,&b);
    if (a<b)
    {
        c=a;
        a=b;
        b=c;
    }
    for (i=b;i<=a;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            printf("odd num = %d\n ",i);
        }
    }
    printf("sum = %d\n",sum);

    35..

    int x,y;
    printf("enter 2 number : ");
    scanf("%d%d",&x,&y);

    if (x>y)
	  {
	  	printf("The pair is in descending order!");
	  }
	  else
	  {
	  	printf("The pair is in ascending order!");
	  }

	  36..


	  int x = 1234,y;
    printf("enter 2 number : ");
    scanf("%d",&y);
    if(x==y)
        printf("Correct password ");
    else
        printf("Incorrect password");

       37..

        int a,b;
        printf("Enter number of a,b : ");
        scanf("%d%d",&a,&b);
        if((a>0)&&(b>0))
            printf("Quadrant-I(+,+)");
        else if ((a>0)&&(b<0))
        printf("Quadrant-IV(+,-)");
        else if ((a<0)&&(b>0))
        printf("Quadrant-II(-,+)");
        else if ((a<0)&&(b<0))
        printf("Quadrant-III(-,-)");

        38..


         int a,b,d;
        printf("Enter number of a,b : ");
        scanf("%d%d",&a,&b);
        if(a>b){
            d = a/b;
             printf("Expected Output:%d",d);
        }
         else
          printf("Division not possible");


         39..


       int a,b,c,sum=0,i;
    printf("enter 2 number : ");
    scanf("%d%d",&a,&b);
    if (a<b)
    {
        c=a;
        a=b;
        b=c;
    }
 for (i=b;i<=a;i++){
        if(i%17!=0)
            sum=sum+i;
        }
    printf("sum = %d\n",sum);


      40..


       int a,b,c,sum=0,i;
    printf("enter 2 number : ");
    scanf("%d%d",&a,&b);
    if (a<b)
    {
        c=a;
        a=b;
        b=c;
    }
 for (i=b;i<=a;i++){
        if((i%7==2)||(i%7==3))
            printf("num = %d\n",i);
        }

**/


    return 0;
}
