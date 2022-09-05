#include <stdio.h>
#include <stdlib.h>

int main()
{
	char entry;
	int t0,t1,m0,z,n=1;
	float c1,c2,c3,m1;
	
	while(n!=0)
	{
		printf("Enter T for temperature, C for currency, M for mass and Z for exiting the program\n");
	    scanf(" %c",&entry);
	    
	switch(entry) //Switching starts
	{
		case ('T'): //for temperature
			printf("You have entered T, here are the available conversions for temperature: \n");
			printf("Enter 1. for celsius to fahrenheit\n");
			printf("Enter 2. for fahrenheit to celsius\n");
			printf("Enter 3. for celsius to kelvin\n");
			printf("Enter 4, for kelvin to celsius\n");
			printf("Enter 5. for fahrenheit to kelvin\n");
			printf("Enter 6. for kelvin to fahrenheit\n");
			scanf("%d",&t0);
			
			if(t0==1) //c to f
			{
				printf("Enter temperature in celsius\n");
				scanf("%d",&t1);
				printf("%d degree celsius in fahrenheit is %d\n",t1, ((t1*9)/5)+32);
				break;
			}
			else if(t0==2) //f to c
			{
				printf("Enter temperature in fahrenheit\n");
				scanf("%d",&t1);
				printf("%d degree fahrenheit in celsius is %d\n",t1, ((t1-32)*5)/9);
				break;
			}
			else if(t0==3) //c to k
			{
				printf("Enter temperature in celsius\n");
				scanf("%d",&t1);
				printf("%d degree celsius in kelvin is %d\n", t1, (t1+273));
				break;
			}
			else if(t0==4) //k to c
			{
				printf("Enter temperature in kelvin\n");
				scanf("%d",&t1);
				printf("%d degree kelvin in celsius is %d\n",t1, (t1-273));
				break;
			}
			else if(t0==5) //f to k
			{
				printf("Enter temperature in fahrenheit\n");
				scanf("%d",&t1);
				printf("%d degree fahrenheit in kelvin is %d\n",t1, (((t1-32)*5)/9) + 273 );
				break;
			}
			else if(t0==6) //k to f
			{
				printf("Enter temperature in kelvin\n");
				scanf("%d",&t1);
				printf("%d degree kelvin in fahrenheit is %d\n",t1, (((t1-273)*9 )/5)+32);
				
			}
			
			
			break;
			
		case('C'): //currency case
			printf("You have entered C, here are the available currency conversions\n");
			printf("Enter two values for conversion, 1st for the home currency and 2nd for the currency to be converted into: \n");
			printf("1. Indian Rupee \n2. US Dollar \n3. British GBP \n4. Australian Dollar \n5. Japanese Yen\n");
			scanf("%f",&c1);
			scanf("%f",&c2);
			
			if(c1==1.00&&c2==1.00) //INR to INR
			{
				printf("Enter rupees:\n"); 
				scanf("%f",&c3);
				printf("%0.2f rupees is %0.2f rupees\n",c3,c3);
				break;
			}
			else if(c1==1.00&&c2==2.00) //INR to USD
			{
				printf("Enter rupees:\n");
				scanf("%f",&c3);
				printf("%0.2f rupees is %0.2f USD\n",c3,c3*0.013);
				break;
			}
			else if(c1==1.00&&c2==3.00) //INR to GBP
			{
				printf("Enter rupees:\n");
				scanf("%f",&c3);
				printf("%0.2f rupees is %0.2f GBP\n",c3,c3*0.011);
				break;
			}
			else if(c1==1.00&&c2==4.00) //INR to AUD
			{
				printf("Enter rupees:\n");
				scanf("%f",&c3);
				printf("%0.2f rupees is %0.2f AUD\n",c3,c3*0.018);
				break;
			}
			else if(c1==1.00&&c2==5.00) //INR to YEN
			{
				printf("Enter rupees:\n");
				scanf("%f",&c3);
				printf("%0.2f rupees is %0.2f YEN\n",c3,c3*1.76);
				break;
			}
			else if(c1==2.00&&c2==1.00) //USD to INR
			{
				printf("Enter US Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f USD is %0.2f INR\n",c3,c3*79.71);
				break;
			}
			else if(c1==2.00&&c2==2.00)  //USD to USD
			{
				printf("Enter US Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f USD is %0.2f USD\n",c3,c3);
				break;
			}
			else if(c1==2.00&&c2==3.00) //USD to GBP
			{
				printf("Enter US Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f USD is %0.2f GBP\n",c3,c3*0.87);
				break;
			}
			else if(c1==2.00&&c2==4.00) //USD to AUD
			{
				printf("Enter US Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f USD is %0.2f AUD\n",c3,c3*1.47);
				break;
			}
			else if(c1==2.00&&c2==5.00) //USD to YEN
			{
				printf("Enter US Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f USD is %0.2f YEN\n",c3,c3*140.21);
				break;
			}
			else if(c1==3.00&&c2==1.00) //GBP to INR
			{
				printf("Enter Great Britain Pound:\n");
				scanf("%f",&c3);
				printf("%0.2f GBP is %0.2f INR\n",c3,c3*91.75);
				break;
			}
			else if(c1==3.00&&c2==2.00) //GBP to USD
			{
				printf("Enter Great Britain Pound:\n");
				scanf("%f",&c3);
				printf("%0.2f GBP is %0.2f USD\n",c3,c3*1.15);
				break;
			}
			else if(c1==3.00&&c2==3.00) //GBP to GBP
			{
				printf("Enter Great Britain Pound:\n");
				scanf("%f",&c3);
				printf("%0.2f GBP is %0.2f GBP\n",c3,c3);
				break;
			}
			else if(c1==3.00&&c2==4.00) //GBP to AUD
			{
				printf("Enter Great Britain Pound:\n");
				scanf("%f",&c3);
				printf("%0.2f GBP is %0.2f AUD\n",c3,c3*1.69);
				break;
			}
			else if(c1==3.00&&c2==5.00) //GBP to YEN
			{
				printf("Enter Great Britain Pound:\n");
				scanf("%f",&c3);
				printf("%0.2f GBP is %0.2f YEN\n",c3,c3*161.38);
				break;
			}
			else if(c1==4.00&&c2==1.00)
			{
				printf("Enter Australian Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f AUD is %0.2f INR\n",c3,c3*54.31);
				break;
			}
			else if(c1==4.00&&c2==2.00) //AUD to USD
			{
				printf("Enter Australian Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f AUD is %0.2f USD\n",c3,c3*0.68);
				break;
			}
			else if(c1==4.00&&c2==3.00) //AUD to GBP
			{
				printf("Enter Australian Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f AUD is %0.2f GBP\n",c3,c3*0.59);
				break;
			}
			else if(c1==4.00&&c2==4.00) //AUD to AUD
			{
				printf("Enter Australian Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f AUD is %0.2f AUD\n",c3,c3);
				break;
			}
			else if(c1==4.00&&c2==5.00) //AUD to YEN
			{
				printf("Enter Australian Dollar:\n");
				scanf("%f",&c3);
				printf("%0.2f AUD is %0.2f YEN\n",c3,c3*95.53);
				break;
			}
			else if(c1==5.00&&c2==1.00) //YEN to INR
			{
				printf("Enter Japanese YEN:\n");
				scanf("%f",&c3);
				printf("%0.2f YEN is %0.2f INR\n",c3,c3*0.57);
				break;
			}
			else if(c1==5.00&&c2==2.00) //YEN to USD
			{
				printf("Enter Japanese YEN:\n");
				scanf("%f",&c3);
				printf("%0.2f YEN is %0.2f USD\n",c3,c3*0.0071);
				break;
			}
			else if(c1==5.00&&c2==3.00) //YEN to GBP
			{
				printf("Enter Japanese YEN:\n");
				scanf("%f",&c3);
				printf("%0.2f YEN is %0.2f GBP\n",c3,c3*0.0062);
				break;
			}
			else if(c1==5.00&&c2==4.00)  //YEN to AUD
			{
				printf("Enter Japanese YEN:\n");
				scanf("%f",&c3);
				printf("%0.2f YEN is %0.2f AUD\n",c3,c3*0.010);
				break;
			}
			else if(c1==5.00&&c2==5.00) //YEN to YEN
			{
				printf("Enter Japanese YEN:\n");
				scanf("%f",&c3);
				printf("%0.2f YEN is %0.2f YEN\n",c3,c3);
				break;
			}
			else
			{
				printf("Enter valid entry:\n");
			}
			
			break;
		
		case('M'): //mass conversion
			printf("You have entered M, here are the available mass conversions\n");
			printf("Enter 1. for Pounds to Ounces:\n");
			printf("Enter 2. for Ounces to Pounds:\n");
			printf("Enter 3. for Grams to Pounds:\n");
			printf("Enter 4. for Pounds to Grams:\n");
			printf("Enter 5. for Grams to Ounces:\n");
			printf("Enter 6. for Ounces to Grams:\n");
			scanf("%d",&m0);
			
			if(m0==1) //Pounds to Ounces
			{
				printf("Enter Value in Pounds:\n");
				scanf("%f",&m1);
				printf("%0.3f Pounds is %0.3f Ounces\n",m1,m1*16);
				break;
			}
			else if(m0==2) //Ounces to Pounds
			{
				printf("Enter Value in Ounces:\n");
				scanf("%f",&m1);
				printf("%0.3f Ounces is %0.3f Pounds\n",m1,m1/16);
				break;
			}
			else if(m0==3) //Grams to Pounds
			{
				printf("Enter Value in Grams:\n");
				scanf("%f",&m1);
				printf("%0.3f Grams is %0.3f Pounds\n",m1,m1*0.0022);
				break;
			}
			else if(m0==4) //Pounds to Grams
			{
				printf("Enter Value in Pounds:\n");
				scanf("%f",&m1);
				printf("%0.3f Pounds is %0.3f Grams\n",m1,m1*453.592);
				break;
			}
			else if(m0==5) //Grams to Ounces
			{
				printf("Enter Value in Grams:\n");
				scanf("%f",&m1);
				printf("%0.3f Grams is %0.3f Ounces\n",m1,m1*0.0352);
				break;
			}
			else if(m0==6) //Ounces to Grams
			{
				printf("Enter Value in Ounces:\n");
				scanf("%f",&m1);
				printf("%0.3f Ounces is %0.3f Grams\n",m1,m1*28.349);
				break;
			}
			else
			{
				printf("Enter valid number");
			}
			
			break;
			
			case('Z'):
				printf("Thankyou for using the program");
				n=0;
				break;
			
		        default:
		    	        printf("Enter valid value");
		    	        break;
					}
             }
}
