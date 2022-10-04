#include <stdio.h>
#include <stdlib.h>
int mla=0, congress=0, moist=0, independent=0;

//function for counting vote start
void votecount(int vote){
    switch (vote)
    {
    case 1:
        mla+=1;
        break;
    case 2:
        congress+=1;
        break;
    case 3:
        moist+=1;
        break;
    case 4:
        independent+=1;
        break;
    
    default:
        break;
    }
}
//function for counting vote end

//function for showing result starts
void voteresult(){
    int won_by_vote;
    if (mla>congress && mla>moist && mla>independent)
    {
        printf("***MLA won the vote***\n");
        printf("Total vote of MLA : %d\n",mla);
        won_by_vote= mla-congress;
        printf("MLA won by %d votes form congress\n",won_by_vote);
        won_by_vote= mla-moist;
        printf("MLA won by %d votes form moist\n",won_by_vote);
        won_by_vote= mla-independent;
        printf("MLA won by %d votes form independent\n",won_by_vote);
    }
    else if (congress>moist && congress>independent)
    {
        printf("***Congress won the vote***\n");
        printf("Total vote of Congress : %d\n",congress);
        won_by_vote= congress-mla;
        printf("Congress won by %d votes form MLA\n",won_by_vote);
        won_by_vote= congress-moist;
        printf("Congress won by %d votes form moist\n",won_by_vote);
        won_by_vote= congress-independent;
        printf("Congress won by %d votes form independent\n",won_by_vote);
    }
    else if (moist>independent)
    {
        printf("***Moist won the vote***\n");
        printf("Total vote of Moist : %d\n",moist);
        won_by_vote= moist-mla;
        printf("MOist won by %d votes form MLA\n",won_by_vote);
        won_by_vote= moist-congress;
        printf("Moist won by %d votes form congress\n",won_by_vote);
        won_by_vote= moist-independent;
        printf("Moist won by %d votes form Independent\n",won_by_vote);
    }
    else if(mla==congress==moist==independent){
        printf("****No party won the vote****");
        printf("Total Vote   %d       %d        %d     %d\n",mla,congress,moist,independent);
    }
    else{
        printf("***Independent won the vote***\n");
        printf("Total vote of Independent : %d\n",independent);
        won_by_vote= independent-mla;
        printf("Independent won by %d votes form MLA\n",won_by_vote);
        won_by_vote= independent-congress;
        printf("Independent won by %d votes form Congress\n",won_by_vote);
        won_by_vote= independent-moist;
        printf("Independent won by %d votes form Moist\n",won_by_vote);
    }
}
//function for showing result ends

// main function starts
int main(int argc, char const *argv[])
{
    system("CLS");
    system("color A");
    int choose;
        printf("\n*********Welcome to the simple voting system*********\n\n");
        printf("                       Local election                        \n\n");
        printf("*************************************************************\n");
        printf("|           1.MLA             |          2.Congress         |\n");
        printf("*************************************************************\n");
        printf("|           3.Moist             |        4.Independent      |\n");
        printf("*************************************************************\n\n");
    do
    {
        printf("Press 1 to vote MLA\n");
        printf("Press 2 to vote Congress\n");
        printf("Press 3 to vote Moist\n");
        printf("Press 4 to vote Independent\n");
        printf("Press 5 to show the result\n");
        printf("Please Choose: ");
        scanf("%d", &choose);
        if (choose==5)
        {
            voteresult();
        }
        else{
            votecount(choose);
        }
        printf("\n");
    } while (choose!=5);
       
    return 0;
}
// main function ends