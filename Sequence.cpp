#include"Sequence.h"
char woc[15000000];
char* wocs[15000000];
Sequence::Sequence(const string& filename)
{
    char fuc;
    total="";
    countA=countT=countC=countG=0;
    freopen(filename.c_str(),"r",stdin);
    while (cin>>fuc)
        if (fuc=='A'||fuc=='T'||fuc=='G'||fuc=='C')
            {
                total+=fuc;
                if (fuc=='A')
                    {
                        countA++;
                        continue;
                    }
                if (fuc=='T')
                    {
                        countT++;
                        continue;
                    }
                if (fuc=='G')
                    {
                        countG++;
                        continue;
                    }
                if (fuc=='C')
                    {
                        countC++;
                        continue;
                    }
            }
    freopen("CON","r",stdin);
}
int Sequence::length()
{
    return total.length();
}
int Sequence::numberOf(char base)
{
    if (base=='A') return countA;
    if (base=='T') return countT;
    if (base=='G') return countG;
    if (base=='C') return countC;
    return 0;
}
string Sequence::longestConsecutive()
{
    int a=0,end=0,start=0;
    int sd=1,st=0;
    while (a<int(total.length()))
        {
            if (a>0)
                {
                    if (total[a]==total[a-1])
                        {
                            sd++;
                            if (sd>end)
                                {
                                    start=st;
                                    end=sd;
                                }
                        }
                    else sd=1;
                    st=a;
                }
        a++;}
return total.substr(start,end);
}
string Sequence::longestRepeated()
{
	return "";
}
