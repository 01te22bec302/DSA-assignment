/*1. Ramesh and mahesh were palying a game. Ramesh picked the even number bunch box
and mahesh got odd number bunch box. Randomly both started picking one coin from
box and the luckiest one who gets the highest count is counted to be the winner*/
#include <stdio.h>
//function prototype
void sum_even_odd(int n);
int main() {

     int n;
     scanf("%d",&n);
     if (n>0)
     {
         //function call
         sum_even_odd(n);
     }
    else
        printf("Invalid input\n");
    return 0;
}
//function defnetion
void sum_even_odd(int n)
{
    int i=1, esum=0, osum=0, num;
    while(i<=n)
    {
        scanf("%d",&num);
        if (num%2 == 0)
           esum = esum+num;
        else
            osum = osum+num;
        i++;
    }
    printf("Sum of even numbers=%d\n",esum);
    printf("Sum of odd numbers=%d\n",osum);
}
/*2.Albert is 6 year old child learning mathematics. He is given with a number asked to take individual numbers
and find the sum. His aim is to check whether the resulting number is even or odd. If the number is even then
 its call Albert's lucky number.*/
 #include <stdio.h>
int sum(int n);
int main() {
    int n,add;
    scanf("%d",&n);
    if(n>9&&n<10000000000)
    {
        add=sum(n);
        printf("Sum of all digits = %d\n",add);
    }
    else
        printf("Number should have more than one digit\n");
    return 0;
}
int sum(int n)
{
   int rem,sum=0;
    while(n!=0)
    {
        rem=n%10;
        printf("%d\n",rem);
        sum+=rem;
        n/=10;
    }
    return sum;

}
/*3.If inverse of a sequence follows rule of an A.P i.e, Arithmetic progression, then it is said to be in Harmonic Progression.
In general, the terms in a harmonic progression can be denoted as : 1/a, 1/(a + d), 1/(a + 2d), 1/(a + 3d) …. 1/(a + nd).
As Nth term of AP is given as ( a + (n – 1)d).
Hence, Nth term of harmonic progression is reciprocal of Nth term of AP, which is : 1/(a + (n – 1)d)
where “a” is the 1st term of AP and “d” is the common difference.
TASK:
Compute the Harmonic progression series (1 + 1/2 + 1/3 + ...) upto nth term.*/
#include<stdio.h>
//function defnetions
void sum(int n)
{
    double i,a=1,d=1;
    double sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+(1/(a+(i*d)));
    }
    printf("Harmonic Progression is %lf",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
        sum(n);
    }
    else
        printf("Invalid input\n");
    return 0;
}
/*4.The process of finding the largest number is used frequently in computer applications.
For example, a process to determine the winner in an election based on number of votes
 earned by each contestant. The contestant who gets maximum votes wins.
Write a modular C program to determine the largest number from a group of N contestants.
MODULAR TASK:
write a modular function largest() to find winner.*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void read_votes(int arr[MAX],int N);
int compare_votes(int arr[MAX],int N);
int main() {
    int N;
    int arr[MAX];
    int high;
    scanf("%d",&N);
    if(N>0&&N<100)
    {
       read_votes(arr,N);
       high = compare_votes(arr,N);
       printf("Winner among contestants with maximum votes = %d",high);
    }
    else
        printf("Cannnot determine winner.");
    return 0;
}
void read_votes(int arr[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
}
int compare_votes(int arr[MAX],int N)
{
    int high=0;
    int i;
    for(i=0;i<N;i++)
    {
        if(high<arr[i])
            high=arr[i];
    }
    return high;
}
/*4.CAPTAIN OF INDIAN CRICKET TEAM WANTS TO SELECT TOP 11 OUT OF 20 PLAYERS.
CAPTAIN WANTS TO LIST PLAYERS ACCORDING TO HIGHEST TO LOWEST BATTING AVERAGE
 OBTAINED IN THE PREVIOUS CRICKET MATCHES.
HELP THE CAPTAIN TO SELECT THE TOP 11 HIGHEST BATTING AVERAGE SCORED PLAYERS.*/
#include <stdio.h>
#include <string.h>
#define MAX 24
void read_array(float avg[MAX],int n);
void sort(float avg[MAX],int n);
int main() {
    int n;
    float avg[MAX];
    scanf("%d",&n);
    if(n>=11)
    {
        read_array(avg,n);
        sort(avg,n);
    }
    else
        printf("Number of players should be atleast 11.\n");
    return 0;
}
void read_array(float avg[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&avg[i]);
    }
}
void sort(float avg[MAX],int n)
{
    int i,j;
    float temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(avg[j]<avg[j+1])
            {
                temp=avg[j];
                avg[j]=avg[j+1];
                avg[j+1]=temp;
            }
        }
    }
    printf("Top 11 batting average players:\n");
    for(i=0;i<11;i++)
        printf("%0.2f ",avg[i]);
}
//5.Develop a modular proram in c to find out the lowest element in an array.
#include <stdio.h>
#include <string.h>
#define MAX 1000
void read_array(int n,int num[MAX]);
void display_array(int n,int num[MAX]);
void mini(int n,int num[MAX]);
int main() {
    int n,num[MAX];
    scanf("%d",&n);
    if(n>0)
    {
        read_array(n,num);
        display_array(n,num);
        mini(n,num);
    }
    else
        printf("Array should not be less than 0.");
    return 0;
}
void read_array(int n,int num[MAX])
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void display_array(int n,int num[MAX])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}
void mini(int n,int num[MAX])
{
    int i,x=1000;
    for(i=0;i<n;i++)
    {
        if(x>num[i])
        {
            x=num[i];
        }

    }
    printf("\nLowest number in array is %d.",x);
}
/*6.Develop a modular program in c to search an number in an array of size n.*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAX 100
void read_arr(int arr[MAX], int n);
void scan_arr(int arr[MAX], int n, int key);
void print_arr(int arr[MAX], int n);
int main() {

    int arr[MAX],n;
    scanf("%d",&n);
        if(n>0)
        {
            read_arr(arr,n);
            print_arr(arr,n);
            int key;
            scanf("%d",&key);
            scan_arr(arr,n,key);
        }
    else
        printf("array should be greater than 0.");
    return 0;
}
void read_arr(int arr[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
void print_arr(int arr[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void scan_arr(int arr[MAX], int n, int key)
{
    int i;
    int num=1;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
          num=0;
            break;
        }
    }
    if(num==0)
        printf("\nSearch successfull. %d found in list.",key);
    else
        printf("\nSearch unsuccessfull. %d not found in list.",key);
}
/*7.Develop a modular program in c to read an array and find out highest number in an array.*/
#include <stdio.h>
#include <string.h>
#define MAX 1000
void read_array(int num[MAX],int n);
void display_array(int num[MAX],int n);
int highest(int num[MAX],int n);
int main() {
    int n,num[MAX],high;
    scanf("%d",&n);
    if(n>0)
    {
        read_array(num,n);
        display_array(num,n);
        high=highest(num,n);
        printf("\nHighest number in array is %d.",high);
    }
    else
    {
         printf("Array cannot be less than 0.\n");
    }
    return 0;
}
void read_array(int num[MAX],int n)
{
    int i;
    for(i=0;n>i;i++)
    {
        scanf("%d\n",&num[i]);
    }
}
void display_array(int num[MAX],int n)
{
    int i;
    for(i=0;n>i;i++)
    {
        printf("%d ",num[i]);
    }
}
int highest(int num[MAX],int n)
{
    int i,high=0;
    for(i=0;i<n;i++)
    {
        if(high<num[i])
        {
           high=num[i];
        }
    }
    return high;
}
/*8.Develop a modular C program to read an array and display an array of size N.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
void read_array(int num[MAX],int n);
void display_array(int num[MAX],int n);
int main() {
    int n,num[MAX];
    scanf("%d",&n);
    if(n>0)
    {
        read_array(num,n);
        display_array(num,n);
    }
    else
    {
        printf("Elements should be more than 0.\n");
    }
    return 0;
}
void read_array(int num[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void display_array(int num[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
}
/*9.In mathematics, a Harshad number (or Niven number) in a given number base is an integer divisible by the
sum of its digits when written in that base. Harshad numbers in base n are also known as n-harshad (or n-
Niven) numbers. Sham is given with number, where he has to find out whether the number is Harshad
number. If it's Harshad Number print sum of its digits else print sum of odd digits sum. Please help sham to
 solve the problem by using Problem Solving Framework and Write the modular C program.*/
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void harshad(int n);
int main() {
    int n;
    scanf("%d",&n);
    if(n>=10&&n<100000)
    {
        harshad(n);
    }
    return 0;
}
void harshad(int n)
{
    int rem,osum=0;
    int z=n;
    int sum=0,total;
    while(n>0)
    {
        rem=n%10;
        if(rem%2!=0)
        {
            osum+=rem;
        }
        sum+=rem;
        n/=10;
    }
    total=z%sum;
    if(total==0)
    {
        printf("%d",sum);
    }
    else
    {
        printf("%d",osum);
    }
}
/*9.A two dimensional array has data/values stored in the form of number of rows and number of columns.
Develop a modular c program to read the two dimensional array and display the two dimensional array.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ROW 100
#define COL 100
//function defnetions
void read_and_display( int runs[ROW][COL],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&runs[i][j]);
        for(j=0;j<n;j++)
            printf("%d ",runs[i][j]);
        printf("\n");
    }
}
int main()
{
    int runs[ROW][COL],m, n;
    scanf("%d%d",&m,&n);
    if(m>0 && n>0)
    {
        read_and_display(runs,m,n);
    }
    else
        printf("Rows and columns should be more than 0.\n");
    return 0;
}
/*10.Rinku was reading a newspaper one-day morning. She came across a Sudoku game where she tried to solve it
in a different way. For a N x N Sudoku game, she adds up all the column wise numbers. If all the column wise
sums are equal, then she called it a Rinku’s Sudoku square.
Apply problem solving framework and write a modular C program to identify whether the square is Rinku’s
Sudoku square.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ROW 10
#define COL 10
//function defnetion
void read(int num[ROW][COL],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&num[i][j]);
    }
}
void col_sum(int num[ROW][COL],int n)
{
    int i,j,csum[COL],status=0;
    for(j=0;j<n;j++)
    {
        csum[j]=0;
        for(i=0;i<n;i++)
        {
            csum[j]+=num[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(csum[j]==csum[j+1])
            {
                status=1;
                break;
            }
            else
            {
                status=0;
                break;
            }
        }
    }
    if(status==1)
    {
        printf("Sudoku square is Rinku's Sudoku square.\n");
    }
    else
        printf("Sudoku square is not a Rinku's Sudoku square.\n");
}
int main()
{
    int num[ROW][COL],n;
    scanf("%d",&n);
    read(num,n);
    col_sum(num,n);
    return 0;
}
/*11.Zanfi Systems is a software development Multi National Company. It has offices in different countries. Due to
Lockdown and slow work progress, company had deducted 30% salary for all the employees. Consider there
are N employees in M offices, based on actual salary, the lockdown salary of each employee after deduction is
 computed by the Human Resource Manager.
Apply problem solving framework and write a modular C program to determine the lockdown salary.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ROW 100
#define COL 100
//function defnetions
void read(int sal[ROW][COL],int m,int n)
{
    int i,j;
    printf("Salary after deduction:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&sal[i][j]);
        for(j=0;j<n;j++)
        {
            if(sal[i][j]>=10000 && sal[i][j]<=100000)
                sal[i][j]-=0.3*sal[i][j];
            printf("%d ",sal[i][j]);

        }
         printf("\n");
    }
}
int main()
{
    int sal[ROW][COL],m,n;
    scanf("%d%d",&m,&n);
    read(sal,m,n);
    return 0;
}
/*12.Indian Cricket team is doing so well in all 3 formats: (1) 20-20 2) ODI 3) TEST) -of the game. They are number 1
in Test Rankings. Rohit Sharma and Rahul Dravid are leading the team well.
Consider currently Indian squad has N players and read the runs scored by each of them in 20-20, ODI and
TEST matches respectively. Display the total runs scored by each player and find the player with highest total runs scorer.
Apply Problem Solving Framework to solve the above problem.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ROW 100
#define COL 100
//function defnetions
void read_and_display(int runs[ROW][COL],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&runs[i][j]);
        for(j=0;j<n;j++)
            printf("%d ",runs[i][j]);
        printf("\n");
    }
    printf("\n");
}
void sum_all(int runs[ROW][COL],int m,int n)
{
    int i,j,sum[100];
    int index=0,max=0,index1=0;
    for(i=0;i<m;i++)
    {
        sum[i]=0;
        for(j=0;j<n;j++)
        {
            sum[i]+=runs[i][j];
            index=i;
        }
        printf("Player %d: %d\n",index+1,sum[i]);
        for(j=0;j<n;j++)
        {
            if(max<sum[i])
            {
                max=sum[i];
                index1=i;
            }
        }
    }
    printf("\n");
    printf("Player %d has highest total runs scored of %d",index1+1,max);
}
int main()
{
    int runs[ROW][COL], m,n;
    scanf("%d%d",&m,&n);
    if(m>5 && n==3)
    {
        read_and_display(runs,m,n);
        sum_all(runs,m,n);
    }
    else
        printf("Invalid players or game formats\n");
    return 0;
}
/*13.An election is contested by 5 candidates. The candidates are numbered 1 to 5 and the voting is done by
marking the candidates number on the ballot paper. Apply Problem solving framework and Write a modular C
 program to read the ballots and count the vote cast for each candidate.*/
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ROW 10
#define COL 10
void read(int arr[ROW][COL],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
             scanf("%d",&arr[i][j]);
    }
}
void votes(int arr[ROW][COL],int m,int n)
{
    int i,j,sum[ROW],index=0;
    int status=0;
    for(i=0;i<m;i++)
    {
        sum[i]=0;
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==1 || arr[i][j]==0)
            {
                sum[i]+=arr[i][j];
            }
            else
            {
                 status=1;
            }
            index=i;
        }
        if(status==1)
            break;
        printf("Candidate %d: %d\n",index+1,sum[i]);
    }
    if(status==1)
        printf("Invalid votes\n");
}
int main()
{
    int arr[ROW][COL];
    int m,n;
    scanf("%d%d",&m,&n);
    if(m>0 && n>0)
    {
        read(arr,m,n);
        votes(arr,m,n);
    }
    else
        printf("Invalid input\n");
    return 0;
}
/*14.Given an array, Count leaders of an array. An element is called as a leader if there exists no element greater to
 it on the RHS.*/
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define x 100
void read(int num[x],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
}
void sort(int num[x],int n)
{
    int i,max=0,c=0;
    for(i=n-1;i>=0;i--)
    {
        if(num[i]>max||num[i]==max)
        {
            max=num[i];
            c++;
        }
    }
    printf("%d\n",c);
}
int main()
{
    int num[x],n;
    scanf("%d",&n);
    if(n>0)
    {
        read(num,n);
        sort(num,n);
    }
    else
        printf("Invalid\n");
    return 0;
}
/*15.Given an array of integers find the first repeating element.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define x 44
void read(int num[x],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void repeat(int num[x],int n)
{
    int i,j,copy=0,s=0;
    for(i=0;i<n;i++)
    {
        copy=num[i];
        for(j=i+1;j<n;j++)
        {
            if(copy==num[j])
            {
                printf("%d",num[j]);
                exit (0);
            }
            else
                s=1;
        }
    }
    if(s==1)
        printf("No repeating element\n");
}
int main()
{
    int num[x],n;
    scanf("%d",&n);
    if(n>1)
    {
        read(num,n);
        repeat(num,n);
    }
    else
        printf("Invalid\n");
    return 0;
}
/*16.A primary teacher intended to teach addition of decimal numbers. She chosen n different colors and kept
 in two rows systematically. She asked kids to perform addition of similar colors in row kept parallel. Use
 modular C program to achieve the given task. (Add two arrays index wise).*/
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 50

void read_array(float clr[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&clr[i]);
    }
}
void sum_array(float clr1[MAX],float clr2[MAX],float sum_clr[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        sum_clr[i]=clr1[i]+clr2[i];
    }
}
void display_array(float sum_clr[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%0.1f ",sum_clr[i]);
    }
}
int main()
{
     int n;
    float clr1[MAX],clr2[MAX],sum_clr[MAX];
    scanf("%d",&n);
    if(n>0)
    {
        read_array(clr1,n);
        read_array(clr2,n);
        sum_array(clr1,clr2,sum_clr,n);
        display_array(sum_clr,n);
    }
     else
         printf("Rows should be more than 0.\n");
    return 0;
}
/*17.You are in charge of the cake for your brother's birthday and have decided the cake will have one candle for
 each year of his total age. When he blows out the candles, he’ll only be able to blow out the tallest ones. Your task
  is to find out how many candles he can successfully blow out.
For example, if your brother is turning 5 years old, and the cake will have 5 candles of height 7, 6, 4, 7, 3, he will
be able to blow out 2 candles successfully, since the tallest candles are of height 7 and there are 2 such candles.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
void read(int arr[MAX],int N);
void display(int arr[MAX],int N);
int tallest(int arr[MAX],int N);
int tall_num(int arr[MAX],int N,int tall);
int main() {
    int arr[MAX],N,tall,blown;
    scanf("%d",&N);
    if(N>0)
    {
        read(arr,N);
        display(arr,N);
        tall=tallest(arr,N);
        printf("\nTallest Candle = %d\n",tall);
        blown=tall_num(arr,N,tall);
        printf("Tallest Candles blown = %d\n",blown);

    }
    else
        printf("Invalid input.");

    return 0;
}
void read(int arr[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
}
void display(int arr[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
}
int tallest(int arr[MAX],int N)
{
    int i;
    int max=0;
    for(i=0;i<N;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}
int tall_num(int arr[MAX],int N,int tall)
{
    int count=0,i;
    for(i=0;i<N;i++)
    {
        if(tall==arr[i])
            count++;
    }
    return count;

}
/*18.KLE TECH university has offered a course ADVANCED C PROGRAMMING to the students of core branches
of 4th semester. There are total 300 students in all the core branches.
The eligibility criteria for student is he / she should have CGPA greater than or equal to 8.0.
After registration process the course faculty would like to find out how many students have registered to the course,
what is the minimum and maximum CGPA of the students.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 300
void read_cgpa(float arr[MAX],int N);
void display_cgpa(float arr[MAX],int N);
int count_registered(float arr[MAX],int N);
float find_min(float arr[MAX],int N);
float find_max(float arr[MAX],int N);
int main() {
    float arr[MAX],min,max;
    int N,count;
    scanf("%d",&N);
    read_cgpa(arr,N);
    display_cgpa(arr,N);
    count=count_registered(arr,N);
    printf("\nRegistered = %d\n",count);
    min=find_min(arr,N);
    printf("Minimum cgpa = %.1f\n",min);
    max=find_max(arr,N);
    printf("Maximum cgpa = %.1f\n",max);
    return 0;
}
void read_cgpa(float arr[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
        scanf("%f",&arr[i]);
}
void display_cgpa(float arr[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
        printf("%.1f ",arr[i]);
}
int count_registered(float arr[MAX],int N)
{
    int i,count=0;
    for(i=0;i<N;i++)
    {
        if(arr[i]>=8)
            count=count+1;
    }
    return count;
}
float find_min(float arr[MAX],int N)
{
    float min=999999;
    int i;
    for(i=0;i<N;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    return min;
}
float find_max(float arr[MAX],int N)
{
    float max=0;
    int i;
    for(i=0;i<N;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}
/*19.A student in Pre University College, scores marks in different subjects in mid term examination. There were
elective subjects in mid term examination which student can attend. Student has atleast 6 subjects to appear for
exam. The student wants to check the percentage of marks he/she has scored. Also determine what is highest
marks the student scored out of appeared subjects.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
void read_marks(int arr[MAX],int N);
void display_percentage(int arr[MAX],int N);
int main() {
    int arr[MAX],N,i;
    scanf("%d",&N);
    if(N>=6&&N<=10)
    {
        read_marks(arr,N);
        for(i=0;i<N;i++)
            printf("%d ",arr[i]);
        display_percentage(arr,N);
    }
    else
        printf("Subjects cannot be less than 6 and more than 10.");
    return 0;
}
void read_marks(int arr[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display_percentage(int arr[MAX],int N)
{
    int sum=0,i,high=0,total;
    float percent;
    for(i=0;i<N;i++)
    {
        sum=sum+arr[i];
    }
    total=N*100;
    percent=((float)sum/total*100);
    for(i=0;i<N;i++)
    {
        if(high<arr[i])
            high=arr[i];
    }

    printf("\nPercentage: %.2f",percent);
    printf("\nHighest marks: %d",high);
}
/*20.Write a modular c program to create a SLL to store computer details by performing the following operations:
Computer details: Company name, model, processor name, ram in GB, storage in GB.
a) Create a SLL using insert at end operation.
b) Display SLL.
c) Insert a new computer details at specified position(position number starts from 1) and display updated SLL.
d) Delete the first computer details and display the updated SLL.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    char name[20],model[20],proc[20];
    int ram ,storage;
    struct node *link;
};
struct node *create_node()
{
    struct node *newn = (struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("no memory allocated\n");
    else
    {
        scanf("%s%s%s%d%d",newn->name,newn->model,newn->proc,&newn->ram,&newn->storage);
        newn->link=NULL;
    }
    return newn;
}
int count_nodes(struct node *head)
{
    struct node *cur=NULL;
    int count = 0;
    cur=head;
    while(cur->link!=NULL)
    {
        count++;
        cur=cur->link;
    }
    return count;
}
void display(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("sll is empty\n");
    else{
        cur = head;
        while(cur!=NULL)
        {
            printf("%s %s %s %d %d\n",cur->name,cur->model,cur->proc,cur->ram,cur->storage);
            cur=cur->link;
        }
    }
}
struct node* insert_end(struct node *head)
{
    struct node *newn=create_node();
    struct node *cur=NULL;
    if(head==NULL)
        head = newn;
    else
    {
        cur = head;
        while(cur->link!=NULL)
        {
            cur = cur->link;
        }
        cur->link = newn;
    }
    return head;
}

struct node* insert_pos(struct node *head,int pos)
{
    struct node *newn = create_node();
    int count = count_nodes(head);
    struct node *cur = NULL;
    struct node *next = NULL;
    if(head == NULL)
    {
        head = newn;
    }
    else if(pos == 1 )
    {
        newn->link  = head ;
        head = newn;
    }
    else if(pos>= count+1)
    {
        cur = head ;
        while (cur->link!=NULL)
        {
            cur= cur->link;
        }
        cur->link = newn;
    }
    else if(pos>1&&pos<=count)
    {
        cur = head;
        for(int i=1;i<pos-1;i++)
        {
            cur = cur->link;
        }
        next = cur->link;
        cur->link = newn;
        newn->link = next;
    }
    return head;
}

struct node* delete_front(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("list is empty\n");
    else
    {
        cur = head;
        head=head->link;
        free(cur);
    }
    return head;
}
int main()
{
    struct node *head = NULL;
    int n, pos ;
    scanf("%d",&n);
    if(n>=1)
    {
        for(int i=0;i<n;i++)
        {
            head = insert_end(head);
        }
        printf("List is:\n");
        display(head);
        scanf("%d",&pos);
        head=insert_pos(head,pos);
        printf("\nList after insertion is:\n");
        display(head);
        head=delete_front(head);
        printf("\nList after deletion is:\n");
        display(head);
    }
    else
        printf("Invalid input\n");
    return 0;
}
/*21.Write a modular C program to perform the following operations using CSLL.
a) Insert N data values at the end of the list.
b) Display the CSLL.
c) Delete 1 node from end of the CSLL.
d) Delete 1 node from front of the CSLL.
Finally, display the updated CSLL.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* create_node()
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("memory is not allocated\n");
    else
    {        scanf("%d",&newn->data);
             newn->link=newn;
    }
    return newn;
}
struct node* insert_end_csll(struct node* head)
{
    struct node* newn=create_node();
    struct node* cur=NULL;
    if(head==NULL)
    {
        head=newn;
    }
    else
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        cur->link=newn;
        newn->link=head;
    }
    return head;
}
void display_csll(struct node* head)
{
    struct node* cur=NULL;
    if(head==NULL)
        printf("Empty.\n");
    else
    {
        cur=head;
        do
        {
            printf("%d ",cur->data);
            cur=cur->link;
        }
        while(cur!=head);
    }
}
struct node* delete_end_csll(struct node* head)
{
    struct node*prev=NULL,*cur=NULL;
    if(head==NULL)
      printf("csll is empty");
    else if(head->link==head)
    {
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        while(cur->link!=head)
        {   prev=cur;
            cur=cur->link;
        }
        prev->link=head;
        free(cur);
    }
    return head;
}
struct node* delete_front_csll(struct node* head)
{
    struct node*temp=NULL,*cur=NULL;
    if(head==NULL)
      printf("csll is empty");
    else if(head->link==head)
    {
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        cur->link=head->link;
        temp=head;
        head=head->link;
        free(temp);
    }
    return head;
}
int main()
{
    struct node *head=NULL;
    int n;
    scanf("%d",&n);
    if(n>=1)
    {
        for(int i=0;i<n;i++)
        {
            head=insert_end_csll(head);
        }
        printf("Circular list is: ");
        display_csll(head);
        head=delete_end_csll(head);
        head=delete_front_csll(head);
        printf("\n\nFinal circular list is: ");
        display_csll(head);
    }
    else
        printf("Invalid input\n");
    return 0;
}
/*22.Write a modular c program to reverse the singly linked list (SLL). First create a SLL
using insert front operation. Display the SLL, then reverse the nodes of the SLL. Display
the reversed list.
Suppose the list is: 10 -> 20 -> 30 -> 40 -> 50.
Reverse List should be: 50 -> 40 -> 30 -> 20 -> 10.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *create_node()
{
    struct node *newn = (struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory is not allocated\n");
    else
    {
        scanf("%d",&newn->data);
        newn->link=NULL;
    }
    return newn;
}
struct node* insert_front(struct node *head)
{
    struct node *newn=create_node();
    if(head==NULL)
        head =newn;
    else
    {
        newn->link=head;
        head=newn;
    }
    return head;
}
void display(struct node *head)
{
    struct node *cur;
    if(head ==NULL)
        printf("Invalid input\n");
    else
    {
        cur = head;
        while(cur!=NULL)
        {
            printf("%d ",cur->data);
            cur =cur->link;
        }
        printf("\n");
    }
}
struct node* reverse(struct node *head)
{
    struct node *cur,*next,*prev;
    if(head==NULL)
        printf("Invalid input\n");
    else if(head->link==NULL)
        return head;
    else
    {
        cur=head;
        prev=NULL;
        while(cur!=NULL)
        {
            next=cur->link;
            cur->link=prev;
            prev=cur;
            cur=next;
        }
        head = prev;
    }
    return head;
}
int main()
{
    struct node *head=NULL;
    int n;
    scanf("%d",&n);
    if(n>=1)
    {
        for(int i=0;i<n;i++)
            head=insert_front(head);
        printf("List is:\n");
        display(head);
        printf("\n");
        head=reverse(head);
        printf("Reversed list is:\n");
        display(head);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
/*23.A company conducts interviews in two different colleges to select the brilliant students for the Software Engineer
 job. They have the list of students who appeared for an interview in two different lists. But the HR of the company
 demands to make it a single list after the interview is completed in both the colleges. Apply problem solving framework
  and write a modular c program to merge the two lists of students. Also display the selected students of both the
  colleges for the job who have scored more than 70 points out of 100 during the interview process.*/
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    char name[100];
    char college[100];
    int points;
    struct node *link;
};
struct node* create_node()
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn ==NULL)
    {
        printf("Memory is empty memory not allocated\n");
    }
    else
    {
        scanf("%s%s%d",newn->name,newn->college,&newn->points);
        newn->link = NULL;
    }
    return newn;
}
struct node* insert_end(struct node *list1)
{
    struct node *newn = create_node();
    if(list1==NULL)
        list1=newn;
    else if(list1->link==NULL)
    {
        list1->link = newn;
    }
    else
    {
        struct node *cur=list1;
        while(cur->link !=NULL)
        {
            cur=cur->link;
        }
        cur->link = newn;
    }
    return list1;
}
struct node* murge_lists(struct node *list1,struct node *list2)
{
    struct node *cur;
    if(list1==NULL && list2==NULL)
    {
        printf("no memory allocated\n");
    }
    else
    {
        cur = list1;
        while(cur->link!=NULL)
        {
            cur = cur->link;
        }
        cur->link = list2;
    }
    return list1;
}

void display_list(struct node *list1)
{
    struct node *cur;
    if(list1==NULL)
    {
        printf("no memory allocated\n");
    }
    else
    {
        cur=list1;
        while(cur!=NULL)
        {
        printf("%s %s %d\n",cur->name,cur->college,cur->points);
            cur=cur->link;
        }
    }
}
void joined(struct node *list1)
{
    struct node *cur;
    if(list1==NULL)
        printf("no memory allocated\n");
    else
    {
        cur = list1;
        while(cur!=NULL)
        {
            if(cur->points>70)
            {
                printf("%s %s %d\n",cur->name,cur->college,cur->points);
            }
            cur = cur->link;
        }
    }
}
int main() {
    struct node *list1 = NULL;
    struct node *list2 = NULL;
    int m,n;
    scanf("%d%d",&m,&n);
    if(m>0&&n>0)
    {
    for(int i=0;i<m;i++)
    list1=insert_end(list1);
    for(int j=0;j<n;j++)
    list2=insert_end(list2);
    list1=murge_lists(list1,list2);
    printf("Joined list is:\n");
    display_list(list1);
        printf("\n");
    printf("Students with more than 70 points:\n");
    joined(list1);
    }
    else
        printf("Empty List\n");
    return 0;
}
/*24.Write a modular C program to perform the following operations using CSLL.
a) Insert N data values at the front of the list.
b) Display the CSLL.
c) Insert 1 node at postion P in the exisitng CSLL.
d) Delete 1 node from position Q in the existing CSLL.
Finally, display the updated CSLL.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* create_node()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Memory not allocated\n");
    else
    {
        scanf("%d",&newnode->data);
        newnode->link=newnode;
    }
    return newnode;
}
void display_csll(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("Circular list empty\n");
    else
    {
        cur=head;
        do{
            printf("%d ",cur->data);
            cur=cur->link;
        }while(cur!=head);
    }
}
int count_nodes(struct node *head)
{
    int count=0;
    struct node *cur=NULL;
    if(head==NULL)
        return count;
    else
    {
        cur=head;
        do{
            count++;
            cur=cur->link;
        }while(cur!=head);
    }
    return count;
}
struct node* insert_front_csll(struct node *head)
{
    struct node *cur=NULL;
    struct node *newnode=create_node();
    if(head==NULL)
        head=newnode;
    else
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        newnode->link=head;
        cur->link=newnode;
        head=newnode;
    }
    return head;
}
struct node* insert_position_csll(struct node *head,struct node *newnode,int pos)
{
    struct node *cur=NULL;
    int count=count_nodes(head);
    if(head==NULL)
        return NULL;
    else if(pos<=1)
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        cur->link=newnode;
        newnode->link=head;
        head=newnode;
    }
    else if(pos>=count+1)
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        cur->link=newnode;
        newnode->link=head;
    }
    else if(pos>1&&pos<=count)
    {
        cur=head;
        for(int i=1;i<pos-1;i++)
            cur=cur->link;
        newnode->link=cur->link;
        cur->link=newnode;
    }
    return head;
}
struct node* delete_position_csll(struct node *head,int pos)
{
    struct node *cur=NULL,*prev=NULL,*temp=NULL;
    int count=count_nodes(head);
    if(head==NULL)
        return NULL;
    else if(head->link==head&&pos==1)
    {
        free(head);
        head=NULL;
    }
    else if(pos<=1)
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        temp=head;
        cur->link=head->link;
        head=head->link;
        free(temp);
    }
    else if(pos==count)
    {
        cur=head;
        while(cur->link!=head)
        {
            prev=cur;
            cur=cur->link;
        }
        prev->link=head;
        free(cur);
    }
    else if(pos>1&&pos<count)
    {
        cur=head;
        for(int i=1;i<pos;i++)
        {
            prev=cur;
            cur=cur->link;
        }
        prev->link=cur->link;
        free(cur);
    }
    return head;
}
int main() {
    struct node *head=NULL,*newnode;
    int n,p,q;
    scanf("%d",&n);
    if(n>=1)
    {
        for(int i=0;i<n;i++)
            head=insert_front_csll(head);
        scanf("%d",&p);
        newnode=create_node();
        scanf("%d",&q);
        printf("Circular list is: ");
        display_csll(head);
        head=insert_position_csll(head,newnode,p);
        printf("\n\nCircular list after insertion is: ");
        display_csll(head);
        head=delete_position_csll(head,q);
        printf("\n\nCircular list after deletion is: ");
        display_csll(head);
    }
    else
        printf("Invalid input\n");
    return 0;
}
/*25.Everyday a Postman starts distribution of the letters at 8.00 am in the colony (In the order houses are connected) and returns to the post office at 2.00 pm. Apply PSF and implement using CIRCULAR SINGLY LINKED LIST:
a) Add a house details at the end of the list.
b) Display all the house details in the colony that the postman visits.
c) Delete the house details which do not have letters.
d) Display house details with more than 5 letters.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    char name[20],house[20];
    int street ,letters;
    struct node *link;
};
struct node* create_node()
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("memory not allocated\n");
    else
    {
        scanf("%s%s%d%d",newn->name,newn->house,&newn->street,&newn->letters);
        newn->link=newn;
    }
    return newn;
}
struct node* insert_end_csll(struct node *head)
{
    struct node *cur=NULL;
    struct node *newn=create_node();
    if(head==NULL)
        head=newn;
    else
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        cur->link=newn;
        newn->link=head;
    }
    return head;
}
void display_csll(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("csll is empty\n");
    else
    {
        cur=head;
         do
         {
            printf("%s %s %d %d\n",cur->name,cur->house,cur->street,cur->letters);
            cur=cur->link;
         }while(cur!=head);
    }
}
struct node* delete_letters(struct node *head)
{
    struct node *prev=NULL,*temp=0;
    int status=0;
    struct node *cur=NULL;
    if(head==NULL)
        return NULL;
    else if(head->link==head&&head->letters==0)
    {
        printf("%s %s %d %d\n",head->name,head->house,head->street,head->letters);
        free(head);
        head=NULL;
        status =1;
    }
    else if(head->letters==0)
    {
        cur=head;
        while(cur->link!=head)
            cur=cur->link;
        cur->link=head->link;
        temp=head;
        head=head->link;
        printf("%s %s %d %d\n",temp->name,temp->house,temp->street,temp->letters);
        free(temp);
        status=1;
        free(temp);
    }
    else
    {
        cur=head;
        do
        {
            if(cur->letters==0)
                break;
            prev=cur;
            cur=cur->link;
        }while(cur!=head);
            if(cur==head)
                status=0;
        else
        {
            printf("%s %s %d %d\n",cur->name,cur->house,cur->street,cur->letters);
            status=1;
            prev->link=cur->link;
            free(cur);
        }
    }
        if(status==0)
        {
            printf("No house to delete.\n");
        }
    return head;
}
void display_more(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("empty");
    else
    {
        cur=head;
        do
        {
            if(cur->letters>5)
               printf("%s %s %d %d\n",cur->name,cur->house,cur->street,cur->letters);
            cur=cur->link;
        }
        while(cur!=head);
    }
}
int main()
{
    struct node *head=NULL;
    int n;scanf("%d",&n);
    if(n>=1)
    {
        for(int i=0;i<n;i++)
            head=insert_end_csll(head);
        printf("Houses postman visits:\n");
        display_csll(head);
        printf("\nDeleted house:\n");
        head=delete_letters(head);
        printf("\nUpdated houses list:\n");
        display_csll(head);
        printf("\nHouses with more than 5 letters:\n");
        display_more(head);
    }
    else
        printf("Invalid input\n");
    return 0;
}
/*26.Write a modular C Program to perform the following operations using Circular Doubly Linked List.
a) Insert at the front of the CDLL.
b) Display the CDLL in forward direction.
c) Display the CDLL in reverse direction.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *r_l,*l_l;
};
struct node *create_node()
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory not allocated\n");
    else
    {
        scanf("%d",&newn->num);
        newn->r_l=newn;
        newn->l_l=newn;
    }
    return newn;
}
//global declaration
struct node *head;

struct node* insert_end()
{
   struct node *newn=create_node();
    struct node *last=NULL;
    if(head==NULL)
       head=newn;
    else
    {
        last =head->l_l;
        newn->r_l=head;
        newn->l_l=last;
        head->l_l=newn;
        last->r_l=newn;
    }
    return head;
}
void display_forward()
{
    struct node *cur=NULL ;
    if(head==NULL)
        printf("empty");
    else
    {
        cur=head;
        do
        {
            printf("%d ",cur->num);
            cur=cur->r_l;
        }while(cur!=head);
    }
}
void display_reverse()
{
    struct node *cur=NULL,*last=head->l_l;
    if(head==NULL)
        printf("empty");
    else
    {
        cur=last;
        do
        {
            printf("%d ",cur->num);
            cur=cur->l_l;
        }while(cur!=last);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1)
    {
        for(int i=0;i<n;i++)
            head=insert_end();
        printf("CDLL in forward direction is:\n");
        display_reverse();
        printf("\n\nCDLL in reverse direction is:\n");
        display_forward();
    }
    else
        printf("Invalid input\n");
    return 0;
}
/*27.Kaalia the thief wants to loot money in a Society having N houses where the road is in the two
directional form (Kaalia can visit from first to last house, also he can visit from last to first house). He
is a weird person and follows a certain rule when looting the houses. One fine day, he plans to
loot the first and last house thinking that he may get maximum money. Once he loots the houses,
 he never loots those houses again.
Apply Problem Solving Framework and write a modular C program to find out how much money
 Kaalia looted from the two houses?*/
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int num;
    double money;
    struct node *right_link,*left_link;
};
struct node *create_node()
{

    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory not allocated\n");
    else
    {
        scanf("%d%lf",&newn->num,&newn->money);
        newn->right_link=NULL;
        newn->left_link=NULL;
    }
    return newn;
}

struct node *head;
struct node *cur;
struct node *prev;
void insert_end()
{
    struct node *newn=create_node();
    cur=head;

    if(head==NULL)
        head=newn;
    else
    {
        while(cur->right_link!=NULL)
            cur=cur->right_link;
        cur->right_link=newn;
        newn->left_link=cur;
    }
}
double sum()
{
    double total=head->money;
    while(cur->right_link!=NULL)
        cur=cur->right_link;
    total+=cur->money;
    return total;
}
void delete()
{
    if(head==NULL)
        printf("empty\n");
    else
    {
        cur=head;
        head=head->right_link;
        free(cur);
        cur=head;
        prev=NULL;
        while(cur->right_link!=NULL)
        {   prev=cur;
            cur=cur->right_link;
        }
        prev->right_link=NULL;
        free(cur);
    }
}
void display()
{
    cur=head;
    while(cur!=NULL)
    {
        printf("%d %0.2lf\n",cur->num,cur->money);
        cur=cur->right_link;
    }
}
int main()
{
    int n;
    head=NULL;
    scanf("%d",&n);
    if(n>=5)
    {
        for(int i=0;i<n;i++)
            insert_end();
        double total=sum();
        delete();
        display();
        printf("Total loot = %0.2lf",total);
    }
    else
        printf("Kaalia cannot loot houses");
    return 0;
}
/*28.Brad Pitt acted in many Hollywood movies and web series. He has many web
series popular over the internet.
Write a modular C program using Doubly Linked List to read and display all the web
series details. Also Count and Display the web series details of a particular year.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    char name[30];
    int yr;
    struct node *right_link,*left_link;
};
struct node* create_node()
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory not allocated\n");
    else
    {
        scanf("%s%d",newn->name,&newn->yr);
        newn->right_link=NULL;
        newn->left_link=NULL;
    }
    return newn;
}
struct node *insert_end(struct node *head)
{
    struct node *newn=create_node();
    struct node *cur=NULL;
    if(head==NULL)
        head=newn;
    else
    {
        cur=head;
        while(cur->right_link!=NULL)
            cur=cur->right_link;
        cur->right_link=newn;
        newn->left_link=cur;
    }
    return head;
}
int search(struct node *head,int year)
{
    int count=0;
    struct node *cur=NULL;
    if(head==NULL)
    {  printf("dll is empty\n");
         return count;
}
    else
    {
        cur=head;
        while(cur!=NULL)
        {
           if(cur->yr==year)
           {
               count++;
               printf("%s %d\n",cur->name,cur->yr);
           }
            cur=cur->right_link;
        }
    }
    return count;
}
void display(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("empty");
    else
    {
        cur=head;
        while(cur!=NULL)
        {
            printf("%s %d\n",cur->name,cur->yr);
            cur=cur->right_link;
        }
    }
}
int main()
{
    int n,year;
    struct node *head=NULL;
    scanf("%d",&n);
    if(n>=1)
    {
        for(int i=0;i<n;i++)
            head=insert_end(head);
        display(head);
        printf("\n");
        scanf("%d",&year);
        int count=search(head,year);
        if(count>0)
            printf("\n%d",count);
        else
        {
            printf("No web series in %d\n",year);
            printf("\n%d",count);
        }
    }
    else
        printf("Invalid\n");
    return 0;
}
/*29.Write a modular C program to perform the following operations using Doubly Linked List.
a) Insert nodes at the end of DLL.
b) Display DLL in forward direction. (first node to last node)
c) Display DLL in reverse direction. (Last node to first node)*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    double data;
    struct node *right_link ,*left_link;
};
struct node* create_node()
{
    struct node* newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory not allocated\n");
    else
    {
        scanf("%lf",&newn->data);
        newn->right_link=NULL;
        newn->left_link=NULL;
    }
    return newn;
}
struct node *insert_end_dll(struct node *head)
{
    struct node *newn=create_node();
    struct node *cur=NULL;
    if(head==NULL)
        head=newn;
    else
    {
        cur=head;
        while(cur->right_link!=NULL)
            cur=cur->right_link;
        cur->right_link=newn;
        newn->left_link=cur;
    }
    return head;
}
void display_forward(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("dll is empty\n");
    else
    {
        cur=head;
        while(cur!=NULL)
        {

            printf("%0.2lf ",cur->data);
              cur=cur->right_link;
        }
    }}
void display_reverse(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("dll is empty\n");
    else
    {
        cur=head;
        while(cur->right_link!=NULL)
            cur=cur->right_link;
        while(cur!=NULL)
        {
            printf("%0.2lf ",cur->data);
            cur=cur->left_link;
        }
    }
}
int main()
{
    struct node *head=NULL;
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=0;i<n;i++)
            head=insert_end_dll(head);
        printf("DLL in forward direction:\n");
        display_forward(head);
        printf("\n\nDLL in reverse direction:\n");
        display_reverse(head);
    }
    else
        printf("N should be positive.\n");
    return 0;
}
/*30.Write a modular C program to perform the following operations using Doubly Linked List.
a) Insert N data values at the front of the DLL.
b) Delete K data values from end of the DLL.
c) Delete K data values from front of the DLL.
d) Display the updated DLL.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *right_link,*left_link;
};
struct node *create_node()
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory not allocated");
    else
    {
        scanf(" %c",&newn->data);
        newn->right_link=NULL;
        newn->left_link=NULL;
    }
    return newn;
}
struct node *insert_front_dll(struct node *head)
{
    struct node *newn=create_node();
    if(head==NULL)
        head=newn;
    else
    {
        newn->right_link=head;
        head->left_link=newn;
        head=newn;
    }
    return head;
}
struct node* delete_end_dll(struct node *head)
{
    struct node *cur=NULL,*prev=NULL;
    if(head==NULL)
        printf("dll is empty\n");
    else if(head->right_link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        while(cur->right_link!=NULL)
            cur=cur->right_link;
        prev=cur->left_link;
        prev->right_link=NULL;
        free(cur);
    }
    return head;
}
struct node* delete_front_dll(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("dll is empty\n");
    else if(head->right_link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        head=cur->right_link;
        free(cur);
        head->left_link=NULL;
    }
    return head;
}
void display(struct node *head)
{
    struct node *cur=NULL;
    if(head==NULL)
        printf("dll is empty");
    else
    {
        cur=head;
        while(cur!=NULL)
        {
            printf("%c ",cur->data);
            cur=cur->right_link;
        }
    }
}
int main()
{
    int n,k;
    scanf("%d",&n);
    struct node *head=NULL;
    if(n>0)
    {
        for(int i=0;i<n;i++)
            head=insert_front_dll(head);
        printf("DLL before deletion:\n");
        display(head);
        scanf("%d",&k);
        for(int i=0;i<k;i++)
            head=delete_end_dll(head);
        for(int i=0;i<k;i++)
            head=delete_front_dll(head);
        printf("\n\nDLL after deletion:\n");
        display(head);
    }
      else
          printf("N should be positive.\n");

    return 0;
}






