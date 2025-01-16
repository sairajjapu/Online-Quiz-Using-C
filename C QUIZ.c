/*
	Name: {J.SAIRAJ,N.DEEPAK,RATNAKESHAV}
	Copyright: PPS-2 PROJECT
	Author: J.SAIRAJ
	Date: 24-05-23 14:10
	Description: QUIZ PROGRAM
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void reset_score();
int show_record();
void edit_score(int marks,struct student std1);
int QUIZ(struct student std);
int help();
struct student
{
	char name[20];
	char group[20];
	char  rollno[20];
};
int i=0;
int main()
{
struct student s[10];
  int  ch,k;
	int choice;
		system("cls");
	printf("\n\n\n\n\n\t\t\t\t   ___________________________________________________");
	printf("\n\t\t\t\t  | GEETHANJALI COLLEGE OF ENGINEERING AND TECHNOLOGY |");
	printf("\n\t\t\t\t  |___________________________________________________|");
	printf("\n\t\t\t\t  | ~~~~~~~~PROGRAMING FOR PROBLEM SOLVING-2~~~~~~~~~ |");
	printf("\n\t\t\t\t  |___________________________________________________|");
	printf("\n\t\t\t\t  | ++++++++++++++WELCOME TO PRIMO QUIZ++++++++++++++ |");
	printf("\n\t\t\t\t  |___________________________________________________|");
	printf("\n\t\t\t\t  | ..................QUIZ CHALLENGE................. |");
	printf("\n\t\t\t\t  |___________________________________________________|");
	printf("\n\t\t\t\t  | ***********LETS BEGIN THE CHALLENGE!!!*********** |");
	printf("\n\t\t\t\t  |___________________________________________________|");
	printf("\n\n\n\t\t\t\t  |---------------------HOME  PAGE--------------------|");
	 printf("\n\t\t\t\t  |    < Press [1] to start the game\t\t      |");
     printf("\n\t\t\t\t  |    > Press [2] to view the Highest Score\t      |");
     printf("\n\t\t\t\t  |    < Press [3] for Help       \t\t      |");
     printf("\n\t\t\t\t  |    > Press [4] to Quit         \t\t      |");
     printf("\n\t\t\t\t  |    > Press [5] to Reset the Score\t\t      |");
     printf("\n\t\t\t\t  |---------------------------------------------------|\n\t\t\t\t\t");
     scanf("%d",&ch);
     switch(ch)
     {
     	case 1:
   		{
       choice=QUIZ(s[i]);
	  i++;
	  if(choice==0)
	  main();
	  else
	  break;
	  break;	
			 }
	    case 2:
	    	{
	    	choice=show_record();
			if(choice==0)
			main();
			else
			break;
			break;	
			}
     case 3:
     	{
     	 choice=help();
	 if(choice==0)
	 main();
	 else 
	 	break;	
	 	break;
		 }
	 case 4:
	 	{
	 	system("cls");
	 	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t***:-}PRIMO_QUIZ{-:***");
	 	printf("\n\n\t\t\t\t\t\t----~~:>}THANK YOU{<:~~----");
	 	break;
		 exit(0);	
		}
		case 5:
			{
				reset_score();
				printf("Enter 0 for home page");
			scanf("%d",&k);
			if(k==0)
			main();
			else
			break;
			break;
			}
	}
	 return 0;
 }
int QUIZ(struct student std)
{
int marks,ans,Y,count=0;
char G;
system("cls");
printf("\n\n\n\n\n\n\n\t\t\t\t\t~~~~~REGISTRATION!!~~~~~");
printf("\n\n\t\t\t\t\t NAME:");
scanf("%s",std.name);
printf("\n\n\t\t\t\t\t GROUP:");
scanf("%s",std.group);
printf("\n\n\t\t\t\t\t ROLL NO:");
scanf("%s",&std.rollno);
system("cls");
    printf("\n\t\t ------------------  Welcome %s to C Program Quiz Game --------------------------",std.name);
    printf("\n\n\t\t Here are some tips you might wanna know before playing:");
    printf("\n\t\t -------------------------------------------------------------------------");
    printf("\n\t\t >> There are 2 rounds in this Quiz Game\n\t1.WARMUP ROUND\t 2.CHALLANGE ROUND"); 
	printf("\n\t\t >> In warmup round you will be asked a total of 5 questions to test your based on PPS-1");
    printf("\n\t\t    general knowledge. You are eligible to play the game if you give atleast 3");
    printf("\n\t\t    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n\t\t >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n\t\t    total of 10 questions based on PPS-2. Each right answer will be awarded 5Marks");
    printf("\n\t\t >> You will be given 4 options and you have to press 1, 2 , 3 or 4 for the");
    printf("\n\t\t    right option.");
    printf("\n\t\t >> No negative marking for wrong answers!");
    printf("\n\n\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n\n\tPlease enter 0 to start!!");
    scanf("%d",&Y);
    if(Y==0)
    goto warmup;
    else 
    exit(9);
      warmup:    
	system("cls");
    printf("\n\n\t\t\t\t\t\t~~~1.WARM UP ROUND~~~");
    printf("\n\n\t\t\t\t1)Which of the following is a Palindrome number?");
    printf("\n\n\t\t\t\t[1]42042\t\t[2]101010\n\n\t\t\t\t[3]23232\t\t[4]01234\n\t\t\t\t\t\t");
    scanf("%d",&ans);
    if(ans==3)
    {
    	printf("\n\n\t\t\t\tCORRECT!!");
        count++;
	}
    else
    {
    	printf("\n\n\t\t\t\tWRONG!!!The correct answer is 3)23232");
	}
	printf("\n\n\t\t\t\t2)In which Year C Language has been developed?");
	printf("\n\n\t\t\t\t[1]1960\t\t\t[2]1972\n\n\t\t\t\t[3]1950\t\t\t[4]1899\n\t\t\t\t\t\t");
    scanf("%d",&ans);
     if(ans==2)
    {
    	printf("\n\n\t\t\t\tCORRECT!!");
        count++;
	}
    else
    {
    	printf("\n\n\t\t\t\tWRONG!!!The correct answer is 2)1972");
	}
	printf("\n\n\t\t\t\t3)Who developed C Language?");
	printf("\n\n\t\t\t\t[1]Ken Thomson\t\t[2]Martin Ritchard\n\n\t\t\t\t");
	printf("[3]Dennis Ritchie\t[4]christopher\n\t\t\t\t\t\t");
	scanf("%d",&ans);
    if(ans==3)
    {
    	printf("\n\n\t\t\t\tCORRECT!!");
        count++;
	}
    else
    {
    	printf("\n\n\t\t\t\tWRONG!!!The correct answer is 3)Dennis Ritchi");
	}
    printf("\n\n\t\t\t\t4)Convert Decimal number to Binary Number of 10");
	printf("\n\n\t\t\t\t[1]1010\t\t[2]1012\n\n\t\t\t\t[3]2010\t\t[4]1017\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==1)
    {
    	printf("\n\n\t\t\t\tCORRECT!!");
        count++;
	}
    else
    {
    	printf("\n\n\t\t\t\tWRONG!!!The correct answer is 1)1010");
	}
    printf("\n\n\t\t\t\t5)_______ is a conditional operator?");
	printf("\n\n\t\t\t\t[1]&\t\t[2]!\n\n\t\t\t\t[3]?:\t\t[4]*\n\t\t\t\t\t\t");
	scanf("%d",&ans);
    if(ans==3)
    {
    	printf("\n\n\t\t\t\tCORRECT!!");
        count++;
	}
    else
    {
    	printf("\n\n\t\t\t\tWRONG!!!The correct answer is 3)?:");
	}
	if(count>=3)
	{
		goto CHALLENGE;
	}
    else
    {
    	system("cls");
	printf("\n\nSORRY %s YOU ARE NOT ELIGIBLE TO PARTICIPATE IN THIS QUIZ, BETTER LUCK NEXT TIME",std.name);
    printf("\n\n\t\tPlease enter 0 for for Home page\n\t\t\t\t\t\t");
    scanf("%d",&Y);
	getch();
    return Y;
	}
    CHALLENGE:
        system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to participate in this quiz ***",std.name);
     printf("\n\n\n\t\t!Press 0 key to Start the Game!\n\t\t\t\t\t\t");
     scanf("%d",&Y);
     if(Y!=0)
     exit(0);
     else
     system("cls");
    printf("\n\n\n\t\t\t\t\t~~~~~2.QUIZ TEST~~~~~");
    printf("\n\n\t\t(1)What is the built in library fuction to compare two strings?");
	printf("\n\n\t\t[1]sting_cmp()\t\t[2]strcmp()\n\n\t\t[3]equals()\t\t[4]str_compare()\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==2)
	{
	 printf("\n\n\t\tCORRECT!!!");
	 marks=marks+5;	
	}    
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is [2]strcmp()");
	}
	printf("\n\n\t\t(2)Which one of the following is correct syntax for opening a file?");
	printf("\n\n\t\t[1]FILE *fopen(const *filename,const char *mode)\n\n\t\t[2]FILE *fopen(const*filename)");
	printf("\n\n\t\t[3]FILE *OPEN(const char *mode)\n\n\t\t[4]file *open(const *filename)\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is [1]FILE *fopen(const *filename,const char *mode)");
	}
	printf("\n\n\t\t(3)When fopen() is not able to open a file,it returns ");
	printf("\n\n\t\t[1]EOF\t\t\t\t[2]NULL\n\n\t\t[3]Run-time Error\t\t[4]None of the above\n\t\t\t\t\t\t");
	scanf("%d",&ans);
    if(ans==2)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is [2]NULL");
	}
	printf("\n\n\t\t(4)In the given below code,the P2 is ");
	printf("\n\n\t\t Typedef int *ptr;\n\n\t\t ptr p1,p2;");
	printf("\n\n\t\t[1]Integer\t\t\t[2]Integer pointer\n\n\t\t[3]Both integer & integer pointer");
	printf("\t\t[4]None of the above\n\t\t\t\t\t\t");
    	scanf("%d",&ans);
    if(ans==2)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is [2]Integer pointer");
	}
	printf("\n\n\t\t(5)What is a structure in C language.?");
	printf("\n\n\t\t[1]A structure is a collection of elements that can be of same datatype.");
	printf("\n\t\t[2]A structure is a collection of elements that can be of different datatype.");
	printf("\n\t\t[3]Elements of a structure are called members.");
	printf("\n\t\t[4]All the above\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==4)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is [4]All the above");
	}
	printf("\n\n\t\t(6)What is the size of a C structure.?");
	printf("\n\n\t\t[1]C structure is always128bytes.");
	printf("\n\t\t[2]Size of C structure is the total bytes of all elements of structure.");
	printf("\n\t\t[3]Size of C structure is the size of largest element.");
	printf("\n\t\t[4]None of the above\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==2)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is ");
		printf("\n\t\t[2]Size of C structure is the total bytes of all elements of structure.");
	}
	printf("\n\n\t\t(7)A C structure or User defined data type is also called1.?");
	printf("\n\n\t\t[1]Derived data type  \t\t[2]Secondary data type");
	printf("\n\n\t\t[3]Aggregate data type\t\t[4]All the above\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==4)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is [4]All the above");
	}
	printf("\n\n\t\t(8)What are the types of data allowed inside a structure.?");
	printf("\n\n\t\t[1]int,float,double,long double");
	printf("\n\t\t[2]char,enum,union");
	printf("\n\t\t[3]pointers and Same structure type members");
	printf("\n\t\t[4]All the above\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==4)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is [4]All the above");
	}
	printf("\n\n\t\t(9)What is the keyword used to declare a C file pointer.?");
	printf("\n\n\t\t[1]file  \t\t[2]FILE\n\n\t\t[3]FILEFP\t\t[4]filefp\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==2)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
	{
		printf("\n\n\t\tWRONG!!!The correct answer is [2]FILE");
	}
	printf("\n\n\t\t(10)What is a C FILE data type.?");
	printf("\n\n\t\t[1]FILE is like a Structure only");
	printf("\n\t\t[2]FILE is like a Union only");
	printf("\n\t\t[3]FILE is like a user define int data type");
	printf("\n\t\t[4]None of the above\n\t\t\t\t\t\t");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("\n\n\t\tCORRECT!!!");
		marks=marks+5;
	}
	else
  {
  printf("\n\n\t\tWRONG!!!The correct answer is [1]FILE is like a Structure only");
  }
 // system("cls");
  printf("\n\t\t\t\t\t\t\tSCORE TABLE!!!");
  //if(marks>=35)
  {
  printf("\n\n\n\n\n\t\t\t\t\t~~~~~~~~~~CONGRATULATIONS!!!~~~~~~~~~");
  G=(marks>40)?'A':'B';
  printf("\n\t\t\t\t\tNAME:%s",std.name);
  printf("\n\t\t\t\t\tGROUP:%s",std.group);
  printf("\n\t\t\t\t\tROLL NO:%s",std.rollno);
  printf("\n\n\t\t\t\t\tMARKS:%d/50",marks);
  printf("\n\t\t\t\t\tGRADE:%C",G);
  printf("\n\n\n\t\t\t\t\t\tTHANK YOU!!!!!");
  printf("\n\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}
 //else if(marks>=20&&marks<35)
 {
  printf("\n\n\n\n\n\t\t\t\t\t~~~~~~~~~~YOUR SCORE!!!~~~~~~~~~");
  G=(marks>27)?'C':'D';
  printf("\n\t\t\t\t\tNAME:%s",std.name);
  printf("\n\t\t\t\t\tGROUP:%s",std.group);
  printf("\n\t\t\t\t\tROLL NO:%s",std.rollno);
  printf("\n\n\t\t\t\t\tMARKS:%d/50",marks);
    printf("\n\t\t\t\t\tGRADE:%C",G);
  printf("\n\n\n\t\t\t\t\t\tTHANK YOU!!!!!");
 printf("\n\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 }
 //else if(marks<20)
 {
  printf("\n\n\n\n\n\t\t\t\t\t~~~~~~~~~~SORRY!!!~~~~~~~~~");
  printf("\n\t\t\t\t\tNAME:%s",std.name);
  printf("\n\t\t\t\t\tGROUP:%s",std.group);
  printf("\n\t\t\t\t\tROLL NO:%s",std.rollno);
  printf("\n\n\t\t\t\t\tMARKS:%d/50",marks);
  printf("\n\t\t\t\t\tGRADE:FAIL");
  printf("\n\n\n\t\t\t\t\t\tTHANK YOU!!!!!");
 printf("\n\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 }
 edit_score(marks,std);
 printf("\n\n\t\t\t\tIF YOU WANT TO PARTICIPATE AGAIN PRESS 0");
 printf("\n\t\t\t\tOr 1 FOR EXIT ");
 scanf("%d",&Y);
 if(Y==0)
 return 0;
 else
 exit(0);
}
 
int show_record()
    {
	system("cls");
	char name[20];
	int marks,k;
	FILE *Q;
	Q=fopen("marks.bin","r");
	fscanf(Q,"%s%d",&name,&marks);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %d",name,marks);
	printf("\n\n\t\t*************************************************************");
	fclose(Q);
	getch();
	printf("\n\t\tEnter 0 for home page");
			scanf("%d",&k);
	return k;		
	}
	
void reset_score()
    {
	system("cls");
    int marks1;
	char nm[20];
	FILE *Q;
	Q=fopen("marks.txt","r");
	fscanf(Q,"%s%d",&nm,&marks1);
	marks1=0;
	fprintf(Q,"%s,%d",nm,marks1);
    fclose(Q);
	}
    
void edit_score(int marks,struct student std1)
	{
	system("cls");
	int marks1;
	char nm[20];
	FILE *Q;
	Q=fopen("marks.txt","r");
	fscanf(Q,"%s%d",&nm,&marks1);
	if (marks1>=marks)
	  {
	   marks1=marks;
	    fclose(Q);
	    Q=fopen("score.txt","w");
	    fprintf(Q,"%s\n%d",std1.name,marks1);
	    fclose(Q);
		}
		}
int help()
{
	int k;
	system("cls");
    printf("\n\n\n\n\t \t                             HELP");
    printf("\n\t\t --------------------------------------------------------------------------------");
    printf("\n\t\t ......................... C program Quiz Game...................................");
    printf("\n\t\t >> There are two rounds in the game,1.WARMUP ROUND ,2.CHALLANGE ROUND");
    printf("\n\t\t >> In warmup round you will be asked a total of 5 questions to test your general");
    printf("\n\t\t   knowledge. You will be eligible to play the game if you can give atleast 3");
    printf("\n\t\t    right answers otherwise you can't play the Game...........");
    printf("\n\t\t >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n\t\t    total 10 questions ");
    printf("\n\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t    right option");
    printf("\n\t\t >> No negative marking for wrong answers");
    printf("\n\t\t*********************************BEST OF LUCK***********************************");
    printf("\n\t\t********C PROGRAM QUIZ GAME is developed by J.SAIRAJ,N.DEEPAK,RATNAKESHAV*******");
    printf("\n\n\t\t\tPress 0 key for home page!!! Or any key for EXIT");
    scanf("%d",&k);
    return k;
}


