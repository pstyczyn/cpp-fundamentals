#pragma once

int NWD(int lhs, int rhs) {
    int max=0;

    for(int i=1; i<100; i++)
    {
        if(lhs==0)
        {
            return rhs;
        }
        else if(rhs==0)
        {
            return lhs;
        }
        if(lhs%i==0 && rhs%i==0)
        {
            max=i;
        }
        else
        {
            continue;
        }
    }
    return max;
}


int NWW(int lhs, int rhs) {

    unsigned long max=0;
    unsigned long i=0;
    for(i=1; i<5000000; i++)
    {
        if(lhs == 0 || rhs == 0)
        {
            return 0;
        }
        // if(lhs<0)
        // {
        //     return -rhs;
        // }
        // else if(rhs<0)
        // {
        //     return -lhs;
        // }
        if(i%abs(lhs)==0 && i%abs(rhs)==0)
        {
            max=i;
            break;
        }
        else
        {
            continue;
        }
    }
    return max;
}
