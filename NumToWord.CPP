#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char num[6];
	int n,pos,flag=0,count=0;
	cout<<"Note:Enter the number < 1 Crore!\nEnter the number :";
	cin>>num;
	n=strlen(num);
	cout<<"In Words:\n ";
	pos=n;
	for(int j=0;j<n;j++)
	{
		if(num[j]=='0')
			count++;
		if(count==n)
			cout<<"Zero";
	}
	for(int i=0;i<n;i++)
	{
		if(pos==7 || pos==5 || pos==2)
		{
			switch(num[i])
			{
				case'2':cout<<"Twenty ";
						break;
				case'3':cout<<"Thirty ";
						break;
				case'4':cout<<"Forty ";
						break;
				case'5':cout<<"Fifty ";
						break;
				case'6':cout<<"Sixty ";
						break;
				case'7':cout<<"Seventy ";
						break;
				case'8':cout<<"Eighty ";
						break;
				case'9':cout<<"Ninety ";
						break;
				case'1':switch(num[i+1])
						{
							case'0':cout<<"Ten ";
									flag++;break;
							case'1':cout<<"Eleven ";
									flag++;break;
							case'2':cout<<"Twelve ";
									flag++;break;
							case'3':cout<<"Thirteen ";
									flag++;break;
							case'4':cout<<"Fourteen ";
									flag++;break;
							case'5':cout<<"Fifteen ";
									flag++;break;
							case'6':cout<<"Sixteen ";
									flag++;break;
							case'7':cout<<"Seventeen ";
									flag++;break;
							case'8':cout<<"Eighteen ";
									flag++;break;
							case'9':cout<<"Nineteen ";
									flag++;break;
                        }
                        if(pos==7)
                            cout<<"Lack ";
                        else if(pos==5)
                            cout<<"Thousand  ";
                        break;
			}
			if(num[i]!='0')
            {
                if(pos==7)
                    cout<<"Lack ";
                else if(pos==5)
                    cout<<"Thousand ";
            }
		}
		if(pos==6 || pos==4 || pos==3 || pos==1)
		{
			switch(num[i])
			{
				case'1':cout<<"One ";
						break;
				case'2':cout<<"Two ";
						break;
				case'3':cout<<"Three ";
						break;
				case'4':cout<<"Four ";
						break;
				case'5':cout<<"Five ";
						break;
				case'6':cout<<"Six ";
						break;
				case'7':cout<<"Seven ";
						break;
				case'8':cout<<"Eight ";
						break;
				case'9':cout<<"Nine ";
						break;
			}
			if(pos==6 && num[i]!='0')
				cout<<"Lack ";
			if(pos==4 && num[i]!='0')
				cout<<"Thousand ";
			if(pos==3 && num[i]!='0')
				cout<<"Hundred ";
		}
		if(flag==1)
		{
			pos=pos-2;
			i++;
			flag=0;
		}
		else
			pos--;
	}
	return 0;
}
