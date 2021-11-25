int flames(int count)
{
	if(count==3 || count==5 || count== 14 || count== 18)
	{
		printf("\n\t\t\tYou and Your partner are Friends...");	
	}
	else if(count==10 || count==19 || count==16)
	{
		printf("\n\t\t\tYou both are Lovers...");
	}
	else if(count==8 || count==12 || count==13 || count==17)
	{
		printf("\n\t\t\tYour partner's having Affection between with you...");
	}
	else if(count==6 || count==11 || count==15)
	{
		printf("\n\t\t\tYour partner wants to Marry you");
	}
	else if(count==2 || count==4 || count==7 || count ==9 || count==20)
	{
		printf("\n\t\t\tYou and your partners are Enemy");
	}
	else if(count==1)
	{
		printf("\n\t\t\t	Omg! both are Brother and Sister");
	}	
	else if(count==0)
	{
		printf("\nAffection");
	}
	
