#include<stdio.h>
#define MAX 500
int k=0;
int top=-1,stack[MAX],stack1[100];
void overflow()
{
    int x;
    if(top==MAX-1)
    {
        x=0;
        return x;
    }
    else
    {
        x=1;
        return x;
    }

}
void underflow()
{
    int x;
    if(top==-1)
    {
        x=0; int p=0;
        return x;
    }
    else
    {
        x=1;
        return x;
    }
}
void push(int x)
{
    int y;
 y=overflow();
    if(y!=1)
    {
        top++;
        stack[top]=x;
    }

}
void sort(int x[])
{
    int n=0;
    while(x[n]!='\0')
    {
        n++;
    }
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(x[i]>x[j])
            {
                int a;
                a=x[i];
                x[i]=x[j];
                x[j]=a;
            }
        }
    }
}
void pop()
{

//    if(underflow()!=1)
    {
      return stack[top];
      top--;
    }
}
void push1(int x)
{

    if(k==0){stack1[0]=x;}
    else
    {
        if(x>stack1[0])
        {
            stack1[0]=x;


        }
    }
    k++;
}

void main()
{
    printf("******************************************");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\tQUIZ GAME");
    int i,a,count=0;
    char p[20];
        printf("\t\n\n##Enter your name-->");
        gets(p);

    int y=0;
while(y!=1)
{
    printf("\t\n\nWho is the author of 'A Tale of 2 cities'?");
    printf("\t\n\n**option@1-->>'Charles Dicken'\t\t\t**option@2-->>'Sir Arthur Conan Doyle'");
    printf("\t\n\n**option@3-->>'William Shakespeare'\t\t\t**option@4-->>'George Orwell'");
    printf("\t\n\n");

     scanf("%d",&a);printf("\n");printf("\n");
    if(a==1)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
    y=0;
while(y!=1)
{
    printf("\t\n\nAspirin is");
    printf("\t\n\n**option@1-->>'Chloro benzoic acid'\t\t\t**option@2-->>'Anthranilic acid'");
    printf("\t\n\n**option@3-->>'Benzoyl salicylic acid '\t\t\t**option@4-->>'Acetyl salicylic acid'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==4)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
     y=0;
while(y!=1)
{
    printf("\t\n\nThe term 'Butterfly stroke' is reffered to in which sport?");
    printf("\t\n\n**option@1-->>'Wrestling'\t\t\t**option@2-->>'Volleyball'");
    printf("\t\n\n**option@3-->>'Swimming'\t\t\t**option@4-->>'Tennis'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==3)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
  y=0;
while(y!=1)
{
    printf("\t\n\nWho is the founder of instagram?");
    printf("\t\n\n**option@1-->>'Mark Zuckerberg'\t\t\t**option@2-->>'Kevin Systrom'");
    printf("\t\n\n**option@3-->>'Elon Musk'\t\t\t**option@4-->>'Tim Cook'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==2)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
 y=0;
while(y!=1)
{
    printf("\t\n\nWho is the director of 'INTERSTELLAR'?");
    printf("\t\n\n**option@1-->>'Christopher Columbus'\t\t\t**option@2-->>'Christopher Nolan'");
    printf("\t\n\n**option@3-->>'Ridley Scott'\t\t\t**option@4-->>'Matt Damon'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==2)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}

    //count++
    //question
    //options

 y=0;
while(y!=1)
{
    printf("\t\n\nWho is the 'BATMAN' of JIIT?");
    printf("\t\n\n**option@1-->>'Saurav Shekhar Singh'\t\t\t**option@2-->>'Abhishek Kumar Tamoli'");
    printf("\t\n\n**option@3-->>'Sir Dhiren Chugh'\t\t\t**option@4-->>'Leader Sahil Bhandari'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==2)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
     y=0;
while(y!=1)
{
    printf("\t\n\nWhy was Impressions such a disaster?");
    printf("\t\n\n**option@1-->>'Snowfall'\t\t\t**option@2-->>'Rain'");
    printf("\t\n\n**option@3-->>'Tornado'\t\t\t**option@4-->>'All because of JYC'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==2)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
     y=0;
while(y!=1)
{
    printf("\t\n\nComplete the lyrics of the given song 'Tumse milna baatein karna bada....'?");
    printf("\t\n\n**option@1-->>'Bekar lagta hai'\t\t\t**option@2-->>'Time waste lagta hai'");
    printf("\t\n\n**option@3-->>'Mehnat ka kaam lagta hai'\t\t\t**option@4-->>'Acha lagta hai'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==4)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
     y=0;
while(y!=1)
{
    printf("\t\n\nWhat is the sir name of shinchan's family?");
    printf("\t\n\n**option@1-->>'kyunhara'\t\t\t**option@2-->>'dobara'");
    printf("\t\n\n**option@3-->>'bechara'\t\t\t**option@4-->>'nohara'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==4)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
     y=0;
while(y!=1)
{
    printf("\t\n\nWho is 'tuh' in 'Jaane tuh ya jaane na'?");
    printf("\t\n\n**option@1-->>'writer'\t\t\t**option@2-->>'poet'");
    printf("\t\n\n**option@3-->>'reader'\t\t\t**option@4-->>'i don't know!!!'");
    printf("\t\n\n");
     scanf("%d",&a);printf("\n");printf("\n");
    if(a==4)
    {
        count++;
        y=1;
    }
    else if(a==2||a==3||a==4)
    {
       y=1;
    }
    else
    {
        printf("******invalid input******");printf("\n");printf("\n");
        printf("Type again!!");
         y=0;
    }
}
    //count++
    printf("\n");printf("\n");
    printf("%s your score is-->>%d",p,count);printf("\n");printf("\n");
    FILE *fp;
    fp=fopen("quiz_game_results.txt","a");
    fprintf(fp,"%s\t\tSCORE-->> %d \n",p,count);
    fclose(fp);

    fp=fopen("quiz_game_results.txt","r");
    printf("\tScores of the players played till now!");
     printf("\n*********");
       printf("\n");
       char f[100][100];
    while(!feof(fp))
    {
         int k[20],i=0;

    fscanf(fp,"%s",&f[i]);
    puts(f[i]);printf("\t-->>");printf("\t");
    fscanf(fp,"\t\tSCORE-->> %d",&k[i]);
    printf("%d",k[i]);
    push1(k[i]);
    push(k[i]);
    i++;
    printf("\n");
       printf("\n*********");
       printf("\n");
    }
    printf("\n\n\t\thighest score is -->>%d",stack1[0]);
    printf("\n");
       printf("\n*********");
       printf("\n");

    int j=0;
        while(stack[j]!='\0')
    {
        printf("%d",stack[j]);
        j++;
    }

    sort(stack);
     printf("\n");
       printf("\n*********");
       printf("\n");

 int u=0;
while(stack[u]!='\0')
    {
        printf("%d",stack[u]);
        u++;
    }


fclose(fp);
}
