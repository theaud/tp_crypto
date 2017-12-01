//
// Created by mathieu on 01/12/2017.
//

#include "fonction.h"


char* split(char *table,int start,int end)
{

    char *result = new char[end-start];

    for(int i=0; i <end-start;i++)
    {
        result[i]=table[i+start];
    }

    return result;
}


char* XOR(char *table1,char *table2,int size)
{
    char *result = new char[size];
   for(int i=0;i<size;i++)
   {
       if((table1[i]==1 &&table2[i]==0)||(table2[i]==1 &&table1[i]==0))
       {
           result[i]=1;
       }
       else
       {
           result[i]=0;
       }
   }
return result;
}