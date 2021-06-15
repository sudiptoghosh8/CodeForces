#include<bits/stdc++.h>
#include<stdio.h>
#include<time.h>
#include <stdbool.h>
#include <stdlib.h>




struct Knapsack
{
    int value;
    int weight;
};

bool compare(struct Knapsack a, struct Knapsack b)
{
    int r1 = (double)a.value / a.weight;
    int r2 = (double)b.value / b.weight;
    if(r1>r2)
        return true;
}

struct Knapsack fractional_Knapsack(int W, struct Knapsack *val, int n)
{
    qsort(val, sizeof(val)/sizeof(*val), sizeof(*val), compare);


    int curWeight = 0;
    int finalvalue = 0;
    struct Knapsack result;
    int i;
    for (i= 0; i < n; i++)
    {

        if (curWeight + val[i].weight <= W)
        {
            curWeight += val[i].weight;
            finalvalue += val[i].value;
        }


        else
        {
            int remain = W - curWeight;
            finalvalue += val[i].value * ((double) remain / val[i].weight);
            break;
        }
    }

    result.weight = curWeight;
    result.value = finalvalue;


    return result;
}

int main(void)
{

    struct Knapsack aSack;
    int i;
    time_t t;
    int val[5];
    int wt[5];
    struct Knapsack sackItems[5];



    srand((unsigned) time(&t));

    printf("Knapsack Exhaustive Search\n");

    printf("Five Random Values:\n");
    for( i = 0 ; i < 5 ; i++ )
    {

        val[i]=rand()%15+3;
        printf("%d\n",val[i]);

    }


    int j;

    printf("Five Random Weights:\n");
    for( j = 0 ; j < 5 ; j++ )
    {
        wt[j]=rand() % 10000;
        printf(" %d\n", wt[j]);

    }

    for(i=0; i<5; i++)
    {
        sackItems[i].value = val[i];
        sackItems[i].weight = wt[i];
    }


    int W = 10000;
    int n = sizeof(val)/sizeof(val[0]);

    aSack = fractional_Knapsack( W,sackItems, n);

    printf("Total Value: %d\t\n", aSack.value);
    printf("Total Weight:%d\t\n",aSack.weight);

    return 0;
}
