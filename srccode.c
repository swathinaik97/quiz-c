#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int a1[10]= {4,1,3,3,4,4,1,3,1,2};
int a2[10]= {2,2,4,1,2,1,3,1,2,3};
int a3[10]={2,2,3,3,3,2,2,1,3,2};
int p1=0,i=0,j=0,p2=0,p3=0,p=0,c=-1,ch2=-1,ch3=-1;
float amt=0.0;
struct ds//structure for first category
{
int ans[10];
struct ds *link;
};
typedef struct ds *node;
struct ds c1;
struct uni //structure for second category
{
int ans2[10];
struct uni *link2;
};
typedef struct uni *node2;
struct uni c2;
struct cloud//structure for third category
{
int ans3[10];
struct cloud *link3;
};
typedef struct cloud *node3;
struct cloud c3;
node insert(node first1, int a[])//insert for cat1
{
i=0;
node temp; 
temp=(node)malloc(sizeof(node));
temp->ans[i]=a1[i];
temp->link=NULL;
if(first1==NULL)
{
temp=first1;
return;
}
else
{
first1=temp->link;
temp=first1;
}
free(temp);
return(first1);
}//end of insert
node qu1()//category 1
{
node first1;
first1 =(node)malloc(sizeof(node)); 
printf("\n\n-------------DATA STRUCTURES-------------\n\n");
printf("\n1.In which of the following areas data structures are applied extensively?\n1.Compiler Design\t2.Operating System\t3.Database Management System\t4.All of the above\n");
printf("Answer:");
scanf("%d",&c1.ans[0]);
insert(first1,&c1.ans[0]);
if(c1.ans[0]==a1[0])
{
p1=p1+10;
}
else
{
printf("The right answer is %d\n",a1[0]);
}
printf("\n2.The major data structure used in networking model is_______?\n1.Graphs\t2.Trees\t3.Stacks\t4.Queues\n");
printf("Answer:");
scanf("%d",&c1.ans[1]);
insert(first1,&c1.ans[1]);
if(c1.ans[1]==a1[1])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[1]);
}
printf("\n3.In C language, which pointer type is used to implement heterogeneous linked list ?\n1.Integer pointer\t2.Character pointer\t3.Void pointer\t4. Double pointer\n");
printf("Answer:");
scanf("%d",&c1.ans[2]);
insert(first1,&c1.ans[2]);
if(c1.ans[2]==a1[2])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[2]);
}
printf("\n4. Which of the following sorting methods is not possible?\n1.Insertion sort\t2.Bubble sort\t3.Deletion sort\t4.Selection sort\n");
printf("Answer:");
scanf("%d",&c1.ans[3]);
insert(first1,&c1.ans[3]);
if(c1.ans[3]==a1[3])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[3]);
}
printf("\n5.Which of the following is not an application of tree data structure?\n1.The manipulation of Arithmetic expression\t2. Symbol Table construction\t3.Syntax analysis\t4.Relational database management system\n");
printf("Answer:");
scanf("%d",&c1.ans[4]);
insert(first1,&c1.ans[4]);
if(c1.ans[4]==a1[4])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[4]);
}
printf("\n6.Which of the following data structure is not a linear data structure?\n1.Arrays\t2.Linked lilsts\t3.Both\t4.None\n");
printf("Answer:");
scanf("%d",&c1.ans[5]);
insert(first1,&c1.ans[5]);
if(c1.ans[5]==a1[5])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[5]);
}
printf("\n7.Stacks follow _________ rule!\n1.Last in first out\t2.First in last out\t3.Last in last out\t4.First in first out\n");
printf("Answer:");
scanf("%d",&c1.ans[6]);
insert(first1,&c1.ans[6]);
if(c1.ans[6]==a1[6])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[6]);
}
printf("\n8.To represent hierarchical relationship between elements, which data structure is suitable\n1.Dequeue\t2.Priority\t3.Tree\t4.Graph\n");
printf("Answer:");
scanf("%d",&c1.ans[7]);
insert(first1,&c1.ans[7]);
if(c1.ans[7]==a1[7])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[7]);
}
printf("\n9.Which of the following data structure cant store the non homogeneous data elements?\n1.Arrays\t2.Records\t3.Pointers\t4.Stacks\n");
printf("Answer:");
scanf("%d",&c1.ans[8]);
insert(first1,&c1.ans[8]);
if(c1.ans[8]==a1[8])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[8]);
}
printf("\n10.In binary trees nodes  with no successors are called_____?\n1.End nodes\t2.Terminal nodes\t3.Final nodes\t4.Last nodes\n");
printf("Answer:");
scanf("%d",&c1.ans[9]);
insert(first1,&c1.ans[9]);
if(c1.ans[9]==a1[9])
p1=p1+10;
else
{
printf("The right answer is %d\n",a1[9]);
}
free(first1);
c++;
}//end of category1
node2 insert2(node2 first2, int a[])//insert for cat2
{
i=0;
node2 temp; 
temp=(node2)malloc(sizeof(node2));
temp->ans2[i]=a2[i];
temp->link2=NULL;
if(first2==NULL)
{
temp=first2;
return;
}
else
{
first2=temp->link2;
temp=first2;
}
free(temp);
return(first2);
}//end of insert
node2 qu2()//category 2
{node2 first2;
first2 =(node2)malloc(sizeof(node2));
printf("\n\n-------------UNIX-------------\n\n");
printf("\n1.In a system, if 5 people are currently using the vi editor, then the number of corresponding processes will be\n1.One\t2.Five\t3.Two\t4.Zero\n");//2
printf("Answer:");
scanf("%d",&c2.ans2[0]);
insert2(first2,&c2.ans2[0]);
if(c2.ans2[0]==a2[0])
{
p2=p2+10;
}
else
{
printf("The right answer is %d\n",a2[0]);
}
printf("\n2. If $cat x prints garbage, then x is probably a_____?\n1.Data file\t2.Binary file\t3.Text file\t4.Source file\n");
printf("Answer:");
scanf("%d",&c2.ans2[1]);
insert2(first2,&c2.ans2[1]);
if(c2.ans2[1]==a2[1])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[1]);
}
printf("\n3.  /bin is a_______?\n1.Is a bucket for storing information\t2.Has files in binary code\t3.is a directory\t4.Both (b) and (c)\n");
printf("Answer:");
scanf("%d",&c2.ans2[2]);
insert2(first2,&c2.ans2[2]);
if(c2.ans2[2]==a2[2])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[2]);
}
printf("\n4. Profilers are______?\n1.Tools that analyze the run time behaviour of a program\t2.Tools that check a C code for cross file consistency\t3.Tools that keep track of evolving versions of a file\t4.None of the above\n");
printf("Answer:");
scanf("%d",&c2.ans2[3]);
insert2(first2,&c2.ans2[3]);
if(c2.ans2[3]==a2[3])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[3]);
}
printf("\n5.The File that contains a set of instructions which are performed when a user logs in, is?\n1.exrc\t2.profile\t3.autoexec\t4.autoexec.bat\n");
printf("Answer:");
scanf("%d",&c2.ans2[4]);
insert2(first2,&c2.ans2[4]);
if(c2.ans2[4]==a2[4])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[4]);
}
printf("\n6.Which of the following command is used to count just the number of lines contained in a file?\n1.wc -l\t2.wc -c\t3.wc -w\t4.wc -r\n");
printf("Answer:");
scanf("%d",&c2.ans2[5]);
insert2(first2,&c2.ans2[5]);
if(c2.ans2[5]==a2[5])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[5]);
}
printf("\n7.Which command is used to move all files to the bin sub-directory of the parent directory?\n1.mv *.* /bin/\t2.mv * /bin/*\t3.mv * ../bin\t4.mv * ../bin *.*\n");
printf("Answer:");
scanf("%d",&c2.ans2[6]);
insert2(first2,&c2.ans2[6]);
if(c2.ans2[6]==a2[6])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[6]);
}
printf("\n8.Which of the following commands is used to absolutely assign all permissions to the owner, read and write permissions to the group and only executable permission to the others of the file note?\n1.chmod 761 note\t2.chmod 671 note\t3.chmod 167 note\t4.chmod 4=rwx, g=rw note\n");
printf("Answer:");
scanf("%d",&c2.ans2[7]);
insert2(first2,&c2.ans2[7]);
if(c2.ans2[7]==a2[7])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[7]);
}
printf("\n9.Which command is used to delete all files in the current directory as well as all files and sub-directories in its subdirectories?\n1.rm *\t2.rm -r *\t3.rm all\t4.rm *.*\n");
printf("Answer:");
scanf("%d",&c2.ans2[8]);
insert2(first2,&c2.ans2[8]);
if(c2.ans2[8]==a2[8])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[8]);
}
printf("\n10. Which of the following is not one of the 3 general components of the Unix operating system?\n1.The kernel\t2.The shell\t3.The Gui\t4.The file system\n");
printf("Answer:");
scanf("%d",&c2.ans2[9]);
insert2(first2,&c2.ans2[9]);
if(c2.ans2[9]==a2[9])
p2=p2+10;
else
{
printf("The right answer is %d\n",a2[9]);
}
free(first2);
ch2++;
}//end of category 2
node3 insert3(node3 first3, int a[])//insert for cat3
{
i=0;
node3 temp; 
temp=(node3)malloc(sizeof(node3));
temp->ans3[i]=a3[i];
temp->link3=NULL;
if(first3==NULL)
{
temp=first3;
return;
}
else
{
first3=temp->link3;
temp=first3;
}
free(temp);
return(first3);
}//end of insert
node3 qu3()//category 3
{
node3 first3;
first3 =(node3)malloc(sizeof(node3));
printf("\n\n-------------CLOUD COMPUTING-------------\n\n");
printf("\n1. _________ computing refers to applications and services that run on a distributed network using virtualized resource\n1.Distributed\t2.Cloud\t3.Soft\t4.Parallel\n");
printf("Answer:");
scanf("%d",&c3.ans3[0]);
insert3(first3,&c3.ans3[0]);
if(c3.ans3[0]==a3[0])
{
p3=p3+10;
}
else
{
printf("The right answer is %d\n",a3[0]);
}
printf("\n2. ________ as a utility is a dream that dates from the beginning of the computing industry itself.\n1.Model\t2.Computing\t3.Software\t4.All of the mentioned\n");
printf("Answer:");
scanf("%d",&c3.ans3[1]);
insert3(first3,&c3.ans3[1]);
if(c3.ans3[1]==a3[1])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[1]);
}
printf("\n3. Which of the following cloud concept is related to pooling and sharing of resources ?\n1.Polymorphism\t2.Abstraction\t3.Virtualization\t4.None of the mentioned\n");
printf("Answer:");
scanf("%d",&c3.ans3[2]);
insert3(first3,&c3.ans3[2]);
if(c3.ans3[2]==a3[2])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[2]);
}
printf("\n4. Which of the following can be identified as cloud ?\n1. Web Applications\t2.Intranet\t3.Hadoop\t4.All of the mentioned\n");
printf("Answer:");
scanf("%d",&c3.ans3[3]);
insert3(first3,&c3.ans3[3]);
if(c3.ans3[3]==a3[3])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[3]);
}
printf("\n5. Point out the correct statement :\n1.Google’s cloud includes perhaps some 10 datacenters worldwide\t2.Flipkart.com’s infrastructure was built to support elastic demand so the system could accommodate peak traffic\t3.Datacenters have been sited to optimize the overall system latency\t4.All of the mentioned\n");
printf("Answer:");
scanf("%d",&c3.ans3[4]);
insert3(first3,&c3.ans3[4]);
if(c3.ans3[4]==a3[4])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[4]);
}
printf("\n6. The _____ is something that you can obtain under contract from your vendor.\n1.PoS\t2.QoS\t3. SoS\t4. All of the mentioned\n");
printf("Answer:");
scanf("%d",&c3.ans3[5]);
insert3(first3,&c3.ans3[5]);
if(c3.ans3[5]==a3[5])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[5]);
}
printf("\n7. All cloud computing applications suffer from the inherent _______ that is intrinsic in their WAN connectivity.\n1.propagation\t2.latency\t3.noise\t4. All of the mentioned\n");
printf("Answer:");
scanf("%d",&c3.ans3[6]);
insert3(first3,&c3.ans3[6]);
if(c3.ans3[6]==a3[6])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[6]);
}
printf("\n8. _________ model consists of the particular types of services that you can access on a cloud computing platform.\n1.Service\t2.Deployment\t3.Application\t4.None of the mentioned\n");
printf("Answer:");
scanf("%d",&c3.ans3[7]);
insert3(first3,&c3.ans3[7]);
if(c3.ans3[7]==a3[7])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[7]);
}
printf("\n9. Which of these companies is not a leader in cloud computing?\n1. Google\t2.Amazon\t3.Blackboard\t4.Microsoft\n");
printf("Answer:");
scanf("%d",&c3.ans3[8]);
insert3(first3,&c3.ans3[8]);
if(c3.ans3[8]==a3[8])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[8]);
}
printf("\n10. Which is not a major cloud computing platform?\n1.Google 101\t2.IBM Deep blue\t3.Microsoft Azure\t4.Amazon EC2\n");
printf("Answer:");
scanf("%d",&c3.ans3[9]);
insert3(first3,&c3.ans3[9]);
if(c3.ans3[9]==a3[9])
p3=p3+10;
else
{
printf("The right answer is %d\n",a3[9]);
}
free(first3);
ch3++;
}//end of category 3
void chrty(int p)
{
if((p>=250) && (p<=300))
{
amt=100000.00;
printf("\nWe would like to inform you that Rs.%f of your cash prize has been added to the charity fund\n------------You have won a cash prize of Rs.%f----------\nThankyou for your participation.\n\n",(0.25*amt),amt);
exit(0);
}
else if(p>=200 && p<250)
{amt=75000.00;
printf("\nWe would like to inform you that Rs.%f of your cash prize has been added to the charity fund\n------------You have won a cash prize of Rs.%f----------\nThankyou for your participation.\n\n",(0.25*amt),amt);
exit(0);
}
else if(p>=100 && p<200)
{amt=30000.00;
printf("\nWe would like to inform you that Rs.%f of your cash prize has been added to the charity fund\n------------You have won a cash prize of Rs.%f----------\nThankyou for your participation.\n\n",(0.25*amt),amt);
exit(0);
}
else if(p>=50 && p<100)
{amt=10000.00;
printf("\nWe would like to inform you that Rs.%f of your cash prize has been added to the charity fund\n------------You have won a cash prize of Rs.%f----------\nThankyou for your participation.\n\n",(0.25*amt),amt);
exit(0);
}
else
printf("\n\nWe are sorry to inform you that you have scored very less points in compiz. Better luck next time. Thankyou for your participation!!\n\n");
exit(0);
}
void list()
{
int choice;
printf("\n\n\nPlease select the category you want to answer\n1.DATA STRUCTURES\n2.UNIX\n3.CLOUD COMPUTING\n4.QUIT GAME\n");
scanf("%d",&choice);
int y=0;
switch(choice)
{
case 1:if(c==0)
{
printf("You cannot chose this category again. Please select a different category!\n\n");
list();
}
++y;
if(y==3)
return;
qu1();
printf("The points you have scored in DATA STRUCTURES category=%d\n\n\n",p1);
list();
break;
case 2:if(ch2==0)
{
printf("You cannot chose this category again. Please select a different category!\n\n");
list();
}
++y;
if(y==3)
return;
qu2();
printf("The points you have scored in UNIX category=%d\n\n\n",p2);
list();
break;
case 3:
if(ch3==0)
{
printf("You cannot chose this category again. Please select a different category!\n\n");
list();
}
++y;
if(y==3)
{
return;
}
qu3();
printf("The points you have scored in CLOUD COMPUTING category=%d\n\n\n",p3);
list();
break;
case 4:
p=p1+p2+p3;
printf("\n-------TOTAL POINTS YOU HAVE SCORED=%d/300!!!!------\n\n",p);
chrty(p);
break;
default: printf("Please enter a valid choice\n");
return;
}
}
int def()
{ 
int d1,d2,d3;
printf("\nBASIC QUESTIONS------>");
printf("\n1.Which of the following data structures contains two fields, one for info and another for address?\n1.Structures\t2.Queues\t3.Linked lists\n");
printf("Enter your answer\n");
scanf("%d",&d1);
printf("\n2.Is unix a multi user operating system?\nEnter 1 for YES and 0 for NO\n");
scanf("%d",&d2);
printf("\n3.________invented C programming language!\n1.James Gosling\t2.Dennis Ritchie\t3.Bjarne Stroustrup\n");
printf("Enter your answer\n");
scanf("%d",&d3);
if((d1==3)&&(d2==1)&&(d3==2))
return 1;
else
return 0;
}

void main()
{
printf("\n------------------------------------------WELCOME TO COMPIZ-----------------------------------\n\n");
printf("Read the rules in order to play the quiz.\n\n->The quiz will initially have 3 basic questions which the user has to answer if he/she has to continue to the main part of the quiz\n\n->If the user fails to answer these questions then he will not proceed to the latter part of the quiz.\n\n->The quiz has 3 main areas each having 10 subquestions.\n\n->The player can choose the area he /she wants to asnwer.\n\n->The player cannot chose the same category again.\n\n->Each question has has 4 options\n\n->For every correct answer the player earns 10 points.\n\n->For every wrong answer the right answer is displayed.\n\n->Depending on the total points you win out of 300, you are rewarded with some prize money.\n\n->25 percent of your prize money is donated to a chairty fund.\n\n->ALL THE BEST!!!!!\n\n");
int x=def();
if(x==1)
{
system("clear");
printf("\n\nCONGRATULATIONS!!\nYou are eligible to play COMPIZ. Lets begin-------\n\n");
list();
 p=p1+p2+p3;
printf("\n-------TOTAL POINTS YOU HAVE SCORED=%d/300!!!!------\n\n",p);
chrty(p);
}
else
{
printf("Sorry. You are not eligible to play the game.\nBetter luck next time!!\n");
return;
}
}
