#include <iostream>
#include "permutations.h"
#include "bit_tables.h"
#include "data_tables.h"
#include "data_messages_examples.h"
#include "fonction.h"

using namespace std;

int main()
{


//step 1
    char *firstperm,*secondperm,*L0,*R0;
    displayAsHex("message_0",3,message_03,64);
    firstperm=permute(message_03,init_perm,64);
    displayAsHex("init_perm",0,firstperm,64);

    secondperm=permute(firstperm,reverse_perm,64);
    displayAsHex("reverse_perm",0,secondperm,64);
    cout<<endl;

    L0=split(firstperm,0,32);
    R0=split(firstperm,32,64);
    displayAsHex("L",0,L0,32);
    displayAsHex("R",0,R0,32);
    displayAsHex("Xor L+R ",0,XOR(L0,R0,32),32);
    cout<<endl;

 //step 2
    char **Ri=new char*[16];
    char **Li=new char*[16];
    char * E,*S;

    Ri[0]=R0;
    Li[0]=L0;
    for(int i=1;i<16;i++)
    { Li[i]=Ri[i-1];
        E=permute(Ri[0],expansion_table,48);//step2.1

        S=XOR(Key,E,48);//step2.3

        Ri[i]=XOR(Li[i-1],permute(S,expansion_table,32),32);//step2.4

    }


    //step 3
}
