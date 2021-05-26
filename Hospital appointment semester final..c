#include<stdio.h>
#include<stdlib.h>
struct patient{
	char name[20];
	char  d[20];      // blood group
	char  e[20];      // gender
	char  i[20];      // appointment day  
    char  b[20];      // contact number
	int age;
};
    char *m;
	char *n;
//	int x,y;
PatientInformation(struct patient info) //This function will ask user to select their medical condition and their desired doctors
{
	int f,g,h,j=0;
	char *t1="12PM to 5AM";       // time 1
	char *t2="6PM to 11PM";       //time 2
	// Doctor's List
	char *aa="DR.IMTIAZ.RAJ(M.PHIL.CARDIOVASCULAR)";            
	char *ab="DR.HANSRAJ.HATHI(P.PHIL.CARDIOLOGY)";
	char *ac="DR.AYUB.KHOSA(M.A.CARDIOLOGY)";
	char *ad="DR.SHAHID.YOSUFZAI(M.A.CARDIOLOGY)";
	char *ba="DR.SIKANDAR.BAKHT(M.PHIL.NEUROLOGY)";
	char *bb="DR.KAMRAN.UDDIN(M.PHIL.NEUROLOGY&M.A.PSYCHOLOGY)";
	char *bc="DR.NASEER.AKMAL(M.A.NEUROLOGY)";
	char *bd="DR.RASHID.NASEEM(M.A.NEUROLOGY)";
	char *ca="DR.RAJA.BASHIR(M.PHIL NEPHROLOGY)";
	char *cb="DR.WAHEED.SHAMS(M.PHIL NEPHROLOGY)";
	char *cc="DR.REHAN.DANIYAL(M.A NEPHROLOGY)";
	char *cd="DR.SYED.NAIMATULLAH(M.A.NEPHROLOGY)";
	char *da="DR.RAMIZ.KAMAL(CARDIOLOGIST)";
	char *db="DR.IMRAN.TAHIR(CARDIOLOGIST)";
	
	
	printf("\t\t\t\t\tPLEASE SELECT YOUR MEDICAL ISSUE\n\t\t\t\t\t*********************************\n");
	printf("\t\t\t\t\t\t1.HEART DISEASE \n\n\t\t\t\t\t\t2.BRAIN DISEASE\n\n\t\t\t\t\t\t3.KIDNEY DISEASE\n\n\t\t\t\t\t\t4.BONE DISEASE\n");
	scanf("\n \t\t%d",&f);
	system("CLS");
	switch(f==1)
	{
	case 1:
		{
			printf("\t\t\t\t\t\tPATIENT'S CONDITION:\n\t\t\t\t\t\t*******************\n\n\t\t\t\t\t\t    1.SEVERE\n\n\t\t\t\t\t\t    2.NORMAL\n");
			scanf("\n %d",&g);
			switch(g==1)
			{
				case 1 :
					{
						system("CLS");
						printf("\t\t\t\t\t\tAVAILABLE SPECIALISTS:\n\t\t\t\t\t\t*********************\n\n   \t\t\t\t1.%s(%s)\n\n   \t\t\t\t2.%s(%s)\n",aa,t1,ab,t2);
						scanf("%d",&h);
						switch(h==1)
						{
							case 1 :
								{
								system("CLS");
								CreditCardInformation();
								system("CLS"); 
								OnlineReciept(aa,t1,info);
								break;
						}
						case 0:
							{								
								system("CLS");
								CreditCardInformation();
								system("CLS");
								OnlineReciept(ab,t2,info);
								break;
							}
							
						}
					
					break;
					}
					
				case 0:
							
							{
							system("CLS");
							printf("\t\t\t\t\t\tAVAILABLE DOCTORS:\n\t\t\t\t\t\t*****************\n\n   \t\t\t\t1.%s(%s)\n\n   \t\t\t\t2.%s(%s)\n\t\t\t\t\t\t",ac,t1,ad,t2);	
							scanf("%d",&h);
							switch(h==1)
							{
								case 1:
									{										
										system("CLS");
										CreditCardInformation();
										system("CLS");
	          							OnlineReciept(ac,t1,info);
										break;
									}
									case 0:
										{										
											system("CLS");
											CreditCardInformation();
											system("CLS");
								            OnlineReciept(ad,t2,info);
											break;
										}
							}
							break;
							}
					}
			}
		
	
	case 0:
		{
			switch(f==2)
			{
				case 1:
					{
						printf("\t\t\t\t\t\tPATIENT'S CONDITION:\n\t\t\t\t\t\t*******************\n\n\t\t\t\t\t\t    1.SEVERE\n\n\t\t\t\t\t\t    2.NORMAL\n");
						scanf("\n%d",&g);
						switch(g==1)
						{
							case 1:
								{
									system("CLS");
									printf("\t\t\t\t\t\tAVAILABLE SPECIALISTS:\n\t\t\t\t\t\t*********************\n\n   \t\t\t\t1.%s(%s)\n\n   \t\t\t\t2.%s(%s)\n",ba,t1,bb,t2);
									scanf("\n%d",&h);
									switch(h==1)
									{
										case 1:
											{																							
												system("CLS");
												CreditCardInformation();
												system("CLS");
								                OnlineReciept(ba,t1,info);
												break;
											}
											case 0:
												{																									
													system("CLS");
													CreditCardInformation();
													system("CLS");
								                    OnlineReciept(bb,t2,info);												
													break;
												}
									}
								break;
								}
								case 0:
									{
									system("CLS");
									printf("\t\t\t\t\t\tAVAILABLE DOCTORS:\n\t\t\t\t\t\t*****************\n\n   \t\t\t\t1.%s(%s)\n\n   \t\t\t\t2.%s(%s)\n",bc,t1,bd,t2);
									scanf("\n%d",&h);
									switch(h==1)
									{
										case 1:
											{												
												system("CLS");
												CreditCardInformation();
												system("CLS");
								                OnlineReciept(bc,t1,info);
												break;
											}
											case 0:
												{																										
													system("CLS");
													CreditCardInformation();
													system("CLS");
								                    OnlineReciept(bd,t2,info);
													break;
												}
									
									}
									break;
								}
						}
					}
					case 0:
						{
							switch(f==3)
							{
								case 1:
									
									{
									    printf("\t\t\t\t\t\tPATIENT'S CONDITION:\n\t\t\t\t\t\t*******************\n\n\t\t\t\t\t\t    1.SEVERE\n\n\t\t\t\t\t\t    2.NORMAL\n");
						                scanf("\n%d",&g);
						        switch(g==1)
						        {
					            case 1:
								{
								system("CLS");
								printf("\t\t\t\t\t\tAVAILABLE SPECIALISTS:\n\t\t\t\t\t\t*********************\n\n   \t\t\t\t1.%s(%s)\n\n   \t\t\t\t2.%s(%s)\n",ca,t1,cb,t2);
									scanf("\n%d",&h);
									switch(h==1)
									{
										case 1:
											{																								
												system("CLS");
												CreditCardInformation();
												system("CLS");
								                OnlineReciept(ca,t1,info);
												break;
											}
											case 0:
												{																										
													system("CLS");
													CreditCardInformation();
													system("CLS");
								                    OnlineReciept(cb,t2,info);
												    break;
												}
									
						}
						break;
							}
							case 0:
								{
									system("CLS");
									printf("\t\t\t\t\t\tAVAILABLE DOCTORS:\n\t\t\t\t\t\t*****************\n\n   \t\t\t\t1.%s(%s)\n\n   \t\t\t\t2.%s(%s)\n",cc,t1,cd,t2);
									scanf("%d",&h);
									switch(h==1)
									{
										case 1:
											{																								
												system("CLS");
												CreditCardInformation();
												system("CLS");
								                OnlineReciept(cc,t1,info);
												break;
											}
											case 0:
												{																										
													system("CLS");
													CreditCardInformation();
													system("CLS");
								                    OnlineReciept(cd,t2,info);
												    break;
												}
									}
									break;
								}
							
						}
									}
									case 0:
										{
											switch(f==4)
											{
												case 1:
													{
														system("CLS");
														printf("\t\t\t\t\t\tAVAILABLE SPECIALISTS:\n\t\t\t\t\t\t*********************\n\n   \t\t\t\t1.%s(%s)\n\n   \t\t\t\t2.%s(%s)\n",da,t1,db,t2);
									                    scanf("%d",&h);
									switch(h==1)
									{
										case 1:
										{										
										    system("CLS");
										    CreditCardInformation();
										    system("CLS");
								            OnlineReciept(da,t1,info);
										    break;
									    }
									case 0:
										{																						
											system("CLS");
											CreditCardInformation();
											system("CLS");
								            OnlineReciept(db,t2,info);
											break;
										}
									}
												break;	
													}
											}
										}
								
							}
						}
			}
		}
	
}

}
CreditCardInformation()
{
    long long num;
	char ch;
    int count = 0,dx,zx;
    printf("\t\t\t\t\t WELCOME TO PAYEMENT METHOD\t\n");
	printf("\t\t\t\t\tPAYEMENT THROUGH CREDIT CARD\t\n");
    printf("\nENTER YOUR 16 DIGIT CREDIT CARD NUMBER: ");
    scanf("%lld", &num);
    while (num != 0) 
	{
        num /= 10;     
        ++count;  
    }
    if (count!=16)
    {
        printf ("\nINVALID ACCOUNT NUMBER\n");
       	printf ("\nDO YOU WANT TO RE-ENTER CREDIT CARD NUMBER?\n1.YES\n2.NO\n");
        scanf ("%d",&zx);
        system("CLS");
        if (zx==1)
        {
        	CreditCardInformation();
		}
	    else  
	    {
		    system ("CLS");
		    FormNotSubmitted();
	    }
    }	    
	else 
	{
		printf ("\nENTER YOUR PIN-CODE:");
        scanf("\n%d",&dx);
	}
		
}		
OnlineReciept(char *m, char *n, struct patient info)
{	
	int fee=1000;
	FILE *ptr;
	ptr = fopen("D:/hospital project.txt","a");
	printf ("*************************************************************************************\n");
	printf ("                              786 HOSPITAL                            \n");
	printf ("                             **************                           \n");
	printf ("                        ONLINE APPOINTMENT FORM                       \n");
	printf ("                        ***********************                       \n");
	printf ("              PATIENT NAME:                 %s                        \n",info.name);
	printf ("              GENDER:                       %s                        \n",info.e);
	printf ("              CONTACT NUMBER:               %s                        \n",info.b);
	printf ("              PATIENT AGE:                  %d                        \n",info.age);
	printf ("              BLOOD GROUP:                  %s                        \n",info.d); 	
	printf ("              DOCTOR NAME:                  %s                        \n",m);
	printf ("              APPOINTMENT TIME:             %s                        \n",n);
	printf ("              APPOINTMENT DAY:              %s                        \n",info.i);
	printf ("              APPOINTMENT FEE:              %d                        \n\n",fee);
	printf ("**************************************************************************************");
	
	fprintf (ptr,"Patient Name: %s\n",info.name);
	fprintf (ptr,"Gender: %s\n",info.e);
	fprintf (ptr,"Contact Number: %s\n",info.b);
	fprintf (ptr,"Patient Age: %d\n",info.age);
	fprintf (ptr,"Blood Group: %s\n",info.d);
	fprintf (ptr,"Doctor Name: %s\n",m);
	fprintf (ptr,"Appointment Time: %s\n",n);
	fprintf (ptr,"Appointment Day: %s\n",info.i);
	fprintf (ptr,"Appointment Fee: %d\n\n",fee);
	fprintf (ptr, "------------------------------------------\n");
	fclose(ptr);            
}
FormNotSubmitted()
{
	printf ("\t\t\t\t\t*************************\n");
	printf ("\t\t\t\t\tONLINE FORM NOT SUBMITTED\n");
	printf ("\t\t\t\t\t*************************\n");
	exit (0);
}	
main()
{
	struct patient info;
	system( "color 3");	
	printf("\t\t\t\t\t\t786 HOSPITAL\t\n\t\t\t\t\t\t************\t");
	printf("\n\t\t\t\t\t   ONLINE APPOINTMENT FORM\t\n\t\t\t\t\t   ***********************\t\n");
	printf("\n\t\t\t\t\tPATIENT NAME: ");
	gets(info.name);
	printf("\n\t\t\t\t\tENTER GENDER: ");
	gets(info.e);
	printf("\n\t\t\t\t\tCONTACT NUMBER: ");
	scanf("\n%s",&info.b);
	printf("\n\t\t\t\t\tPATIENT AGE: ");
	scanf("%d",&info.age);
	fflush(stdin);
	printf("\n\t\t\t\t\tBLOOD GROUP: ");
	gets(info.d);
	printf("\n\t\t\t\t\tPLEASE TYPE YOUR APPOINTMENT DAY: ");
	gets(info.i);
	
	system("CLS");
	
	PatientInformation(info);
}
