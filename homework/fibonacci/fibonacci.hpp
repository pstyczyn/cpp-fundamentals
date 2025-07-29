#pragma once

int fibonacci_iterative(int sequence) {
    int result=0;
    int f1=1;
    int temp=0;
    if(sequence==0)
    {
        return 0;
    }
    else if(sequence==1)
    {
        return 1;
    }

    for(int i=2; i<=sequence; ++i)
    {
        result=temp+f1;
        temp=f1;
        f1=result;
    }
    
    return result;

}

int fibonacci_recursive(int sequence) {
    int i=0;
    i++;
    int result=0;
    if(sequence==0)
    {
        return 0;
    }
    else if(sequence==1)
    {
        return 1;
    }
    else
    {
        result=fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);
    }
    return result;
}
