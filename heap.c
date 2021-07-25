void form(int val[])
{
    int counter,chk;
    chk=val[0];

    for(counter=chk/2;counter>=1;counter--)
        set_down(val,counter);
}

void set_down(int val[],int counter)
{
    int counter2,temp_val,chk,flag=1;
    chk=val[0];
    while(2*counter<=chk && flag==1)
    {
        counter2=2*counter;
        if(counter2+1<=chk && val[counter2+1] > val[counter2])
            counter2=counter2+1;
        if(val[counter] > val[counter2])
            flag=0;
        else
        {
    
            temp_val=val[counter];
            val[counter]=val[counter2];
            val[counter2]=temp_val;
            counter=counter2;
        }
    }
}