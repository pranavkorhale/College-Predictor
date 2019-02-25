//project:- College predictor for take an admission into college after 12th

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<cmath>
#include<cstring>
using namespace std;

class student
		{
		    public:
			float hsc,bhsc;
			int score,age,p,c,m,b;
			int ch,rank,opt,uni;
			string name,exam;
int option;
			public:

				void getdata();
				void sppuchoicedata();
				void mumbaichoicedata();
				void smuchoicedata();


		};


void student::getdata()
		{



			cout<<"\t\tHi "<<name<<" Fill the information for college prediction!"<<endl;
			cout<<"\t\t--------------------------------------------------------------------------"<<endl;


			cout<<"\t\tEnter the Valid 12th Information:"<<endl;
			cout<<"\t\t1.Physics Marks: ";cin>>p;
			cout<<"\n\t\t2.Chemistry Marks: ";cin>>c;
			cout<<"\n\t\t3.Enter Optional Subject(1.Mathematics  2.Biology): ";cin>>opt;



			switch(opt)
			{
				case 1:
				{
						cout<<"\t\tEnter The MATHEMATICS  marks"<<endl;
					cin>>m;
					hsc=(p+c+m)/3;
			cout<<"\t\tAverage of PCM score "<<hsc<<"%"<<endl;
			break;
				}
				case 2:
					{
						cout<<"\t\tEnter your BIOLOGY marks"<<endl;
		            	cin>>b;
		            	bhsc=(p+c+b)/3;
					     cout<<"\t\tAverage of PCB score "<<bhsc<<"%"<<endl;
					     break;
					}
				default:
				{
					cout<<"\t\tINVALID OPTION"<<endl;
					break;
				}
			}

		}
//******************savitribai phule pune university***********
void student::sppuchoicedata()
{
    cout<<"\t\tHi ";
			cout<<name<<",\n\t\t  choose the COURSE"<<endl;
			cout<<"\n\t\t 1.Engineering\n\t\t2.Medical "<<endl;
			cin>>ch;


	switch(ch)
	{

	case 1:
	{
		if(opt==1)
		{

		 cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

			cout<<"\t\tEnter the name of exam you give"<<endl;
			cout<<"\n\t\t 1.JEE \t 2.MHT-CET"<<endl;
			cin.get();
			getline(cin,exam);

			cout<<"\t\tEnter the score of the entrance exam "<<exam<<endl;
				cin>>score;
					cout<<"\t\tEnter your rank"<<endl;
			cin>>rank;

		if(hsc>=50)
		{
		      cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

			cout<<"\t\t------------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tYour score of the exam"<<score<<endl;
				 cout<<"\n \t\t AND your rank is "<<rank<<endl;
			cout<<"\t\t So you are Eligible for Engineering  course"<<endl;
			cout<<"\n\t\tYOUR COLLEGE PREDICTION IS....."<<endl;
			cout<<"  "<<endl;



				if(score>0)
			    {

					  if(rank<=200)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get COEP"<<endl;
					  	}
					  else if(rank>200 && rank<=500)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get MESCOE Pune"<<endl;
					    }
					  else if(rank>500 && rank<=800)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get AISSMSCOE Pune"<<endl;
						  }
					 else if(rank>800 && rank<=1100)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get TrinityCOE Pune"<<endl;
						}
					 else
					 	cout<<"\t\tPLEASE TRY NEXT ROUND"<<endl;
                }
					else
					  	cout<<"\t\tsorry you ARE NOT ELIGIBLE FOR any college !!!"<<endl;
        }
         else
            {
                cout<<"\t\tsorry!! because your 12th marks score is TOO LOW "<<endl;
                cout<<"\t\tYou are not ELIGIBLE for engineering"<<endl;
            }

	}
	else
	{
		cout<<"\t\tyou cant take admission for Engineering course"<<endl;
	}
	 break;
}
	case 2:
	{
		if(opt==2)
		{
		     cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

			cout<<"\t\tEnter the name of exam you give"<<endl;
			cout<<"\n\t\t 1.NEET \t 2.JIPMER"<<endl;
			cin>>exam;
			cout<<"\t\tEnter the score of the entrance exam "<<exam<<endl;
				cin>>score;
					cout<<"\t\tEnter your rank"<<endl;
			cin>>rank;

			if(bhsc>=50)
		{
		     cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

			cout<<"\t\t------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\n\t\tyou are ELIGIBLE for medical course"<<endl;
			cout<<"\n\t\tYour score of the exam is "<<score<<endl;
			cout<<"\n\t\tAND your rank is "<<rank<<endl;
			cout<<"\n\t\tSO YOUR COLLEGE PREDICTION IS....."<<endl;
			cout<<"  "<<endl;




			if(score>0)
		    {

			  if(rank>0)
              {


                      if(rank<=244)
                        {
                            cout<<"\n\t\t Congratulation!!\n\t\tyou will get AFMC Pune"<<endl;
                        }
                     else if(rank>244 && rank<=514)
                        {
                            cout<<"\n\t\t Congratulation!!\n\t\tyou will get  BJ Medical Pune"<<endl;
                        }
                     else if(rank>514 && rank<=712)
                        {
                            cout<<"\n\t\t Congratulation!!\n\t\tyou will get Tilak MCPune"<<endl;
                          }
                     else if(rank>712 && rank<=940)
                        {
                            cout<<"\n\t\t Congratulation!!\n\t\tyou will get Sane G MCPune"<<endl;
                        }
                     else
                        cout<<"\t\tplease try next round"<<endl;
              }
              else if(rank<0 || rank>720)
                cout<<"\n INVALID RANK INPUT";

		    }
		else
		{
		     cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;
		    cout<<"\t\tsorry!! because your 12th marks score IS TOO LOW "<<endl;
		cout<<"\t\tYou are not ELIGIBLE for medical"<<endl;

		}


	}
}
else
{
	cout<<"\t\tyou cant take admission to Medical course \n\t\t\t BECAUSE your optional SUBJECT is MATHEMATICS"<<endl;


}
	break;
}
	default:
		{
		     cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;
		cout<<"\t\twrong choce"<<endl;
	}
}

}




//*****************mumbai university*******************

void student::mumbaichoicedata()
{
			cout<<name<<" \t\twhich course you want"<<endl;
			cout<<"\t\t 1.Engineering 2.Medical "<<endl;
			cin>>ch;


	switch(ch)
	{

	case 1:
	{
		if(opt==1)
		{

			cout<<"\t\tEnter the name of exam you give"<<endl;
			cout<<"\t\t 1.JEE \t 2.MHT-CET"<<endl;
			cin>>exam;

			cout<<"\t\tEnter the score of the entrance exam "<<exam<<endl;
				cin>>score;
					cout<<"\t\tEnter your rank"<<endl;
			cin>>rank;

		if(hsc>=50)
		{
			  cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

			cout<<"\t\t------------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tYour score of the exam"<<score<<endl;
				 cout<<"\n \t\t AND your rank is "<<rank<<endl;
			cout<<"\t\t So you are Eligible for Engineering  course"<<endl;
			cout<<"\n\t\tYOUR COLLEGE PREDICTION IS....."<<endl;
			cout<<"  "<<endl;

				if(score>0)
			    {

					  if(rank<=350)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get VJTI Mumbai"<<endl;
					  	}
					 else if(rank>350 &&rank<=650)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get KJ Somaiya COEMumbai"<<endl;
					    }
					else  if(rank>650 && rank<=1003)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get Don Bosco IOTMumbai"<<endl;
						  }
					else  if(rank>1003 && rank<=1300)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get VITMumbai"<<endl;
						}
					 else
					 	cout<<"\t\tplease try next round"<<endl;
					}
					else
					  	cout<<"\t\tsorry you will not get any college !!!"<<endl;
			    }
				else
				{
					cout<<"\t\tYou are not Eligible for engineering"<<endl;
					cout<<"\t\tsorry!! because your 12th marks score too low "<<endl;
			    }

	}
	else
	{
		cout<<"\t\tyou cant take admission for Engineering course"<<endl;
	}
	 break;
}
	case 2:
	{
		if(opt==2)
		{
			cout<<"\t\tEnter the name of exam you give"<<endl;
			cout<<"\t\t 1.NEET \t 2.JIMPER"<<endl;
			cin>>exam;
			cout<<"\t\tEnter the score of the entrance exam "<<exam<<endl;
				cin>>score;
					cout<<"\t\tEnter your rank"<<endl;
			cin>>rank;

			if(bhsc>=50)
		{
			  cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

			cout<<"\t\t------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\n\t\tyou are ELIGIBLE for medical course"<<endl;
			cout<<"\n\t\tYour score of the exam is "<<score<<endl;
			cout<<"\n\t\tAND your rank is "<<rank<<endl;
			cout<<"\n\t\tSO YOUR COLLEGE PREDICTION IS....."<<endl;
			cout<<"  "<<endl;

			if(score>0)
		    {

			  if(rank>0)
                      {
                          if(rank<=263)
                            {
                                cout<<"\n\t\t Congratulation!!\n\t\tyou will get  GMC Mumbai"<<endl;
                            }
                         else if(rank>263 && rank<=540)
                            {
                                cout<<"\n\t\t Congratulation!!\n\t\tyou will get  Seth GS MCMumbai"<<endl;
                            }
                         else if(rank>540 && rank<=658)
                            {
                                cout<<"\n\t\t Congratulation!!\n\t\tyou will get Lokmanya Tilak MCMumbai"<<endl;
                              }
                         else if(rank>658 && rank<=970)
                            {
                                cout<<"\n\t\t Congratulation!!\n\t\tyou will get Topivalla National MC Mumbai"<<endl;
                            }
                             else
                                cout<<"\t\tplease try next round"<<endl;
                       }
                      else if(rank<0 || rank>1000)
                        cout<<"\n INVALID RANK INPUT";
		    }
		else
		{
		cout<<"\t\tYou are not Eligible for medical"<<endl;
		cout<<"\t\tsorry!! because your 12th marks score too low "<<endl;
		}


	}
}
else
{
	cout<<"\t\tyou cant take admission to Medical course"<<endl;


}
	break;
}
	default:
		{
		cout<<"\t\twrong choce"<<endl;
	}
}

}


//***************** Shivaji Maharaj kolhapur university**************

void student::smuchoicedata()
{
			cout<<name<<" \t\twhich course you want"<<endl;
			cout<<"\t\t 1.Engineering 2.Medical "<<endl;
			cin>>ch;


	switch(ch)
	{

	case 1:
	{
		if(opt==1)
		{

			cout<<"\t\tEnter the name of exam you give"<<endl;
			cout<<"\t\t 1.JEE \t 2.MHT-CET"<<endl;
			cin>>exam;

			cout<<"\t\tEnter the score of the entrance exam "<<exam<<endl;
				cin>>score;
					cout<<"\t\tEnter your rank"<<endl;
			cin>>rank;

		if(hsc>=50)
		{
			  cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

			cout<<"\t\t------------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tYour score of the exam is"<<score<<endl;
				 cout<<"\n \t\t AND your rank is "<<rank<<endl;
			cout<<"\t\t So you are Eligible for Engineering  course"<<endl;
			cout<<"\n\t\tYOUR COLLEGE PREDICTION IS....."<<endl;
			cout<<"  "<<endl;
				if(score>0)
			    {

					  if(rank<=400)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get DKTE Society COE Kolhapur"<<endl;
					  	}
					 else if(rank>400 && rank<=600)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get DY Patil COE Kolhapur"<<endl;
					    }
					 else if(rank>600 && rank<=900)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get Bharati Vidhypith COE Kolhapur"<<endl;
						  }
					 else if(rank>900 && rank<=1500)
					  	{
					  		cout<<"\n\t\t Congratulation!!\n\t\tyou will get Sant Gajanan Maharaj COE Kolhapur"<<endl;
						}
					 else
					 	cout<<"\t\tplease try next round"<<endl;
                }
					else
					  	cout<<"\t\tsorry you will not get any college !!!"<<endl;
			    }
				else
				{
					cout<<"\t\tYou are not Eligible for engineering"<<endl;
					cout<<"\t\tsorry!! because your 12th marks score too low "<<endl;
			    }

	}
	else
	{
		cout<<"\t\tyou cant take admission for Engineering course"<<endl;
	}
	 break;
}
	case 2:
	{
		if(opt==2)
		{
			cout<<"\t\tEnter the name of exam you give"<<endl;
			cout<<"\t\t1.NEET \t 2.JIMPER"<<endl;
			cin>>exam;
			cout<<"\t\tEnter the score of the entrance exam "<<exam<<endl;
				cin>>score;
					cout<<"\t\tEnter your rank"<<endl;
			cin>>rank;

			if(bhsc>=50)
		{
			  cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

			cout<<"\t\t------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\n\t\tyou are ELIGIBLE for medical course"<<endl;
			cout<<"\n\t\tYour score of the exam is "<<score<<endl;
			cout<<"\n\t\tAND your rank is "<<rank<<endl;
			cout<<"\n\t\tSO YOUR COLLEGE PREDICTION IS....."<<endl;
			cout<<"  "<<endl;

			if(score>0)
		    {

			  if(rank>0)
              {
                  if(rank<=481)
                    {
                        cout<<"\n\t\t Congratulation!!\n\t\tyou will get R.Shahu Maharaj Gov. College Kolhapur "<<endl;
                    }
                  else if(rank>481 && rank<=542)
                    {
                        cout<<"\n\t\t Congratulation!!\n\t\tyou will get  JJM Medical College"<<endl;
                    }
                  else if(rank>542 && rank<=714)
                    {
                        cout<<"\n\t\t Congratulation!!\n\t\tyou will get DY Patil Medical College Kolhapur "<<endl;
                      }
                  else if(rank>714 && rank<=812)
                    {
                        cout<<"\n\t\t Congratulation!!\n\t\tyou will get EB Gadakari Medical collge Kolhapur"<<endl;
                    }
                 else
                    cout<<"\t\tplease try next round"<<endl;
              }
              else if(rank<0 || rank>1000)
                cout<<"\n INVALID RANK INPUT";
		    }
		else
		{
		cout<<"\t\tYou are not Eligible for medical"<<endl;
		cout<<"\t\tsorry!! because your 12th marks score too low "<<endl;
		}


	}
}
else
{
	cout<<"\t\tyou cant take admission to Medical course"<<endl;


}
	break;
}
	default:
		{
		cout<<"\t\twrong choce"<<endl;
	}
}

}



int main()
{
	int uni;
	int choice;
	cout<<"\n\t\t\t!!! WELCOME TO MY SOFTWARE  !!!\n";
	cout<<"\n\t****************************************************************\n";
	cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t****************************************************************"<<endl;
	student s;
do{

	cout<<"\n\n\n   Can You Enter your NAME Please..."<<endl;
	cout<<"\n\t\t=> ";
			getline(cin,s.name);


			cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;
cout<<"\t\tHi "<<s.name<<", \n\t\t  WOULD YOU LIKE TO SEE WHICH COLLEGE SHOULD YOU GET......"<<endl;
			cout<<"\n\t\t CHOOSE\n\t\t  1.YES\n\t\t  2.NO :";
			cin>>s.option;

			cout<<"\n\t\t Enter your VALID Age: ";
	cin>>s.age;

			if( s.option==2 )
            {
                yash:
               cout<<"\n \t\t!!! THANK YOU \""<<s.name<<"\",\n\n\t\t        HAVE A GREAT LIFE !!!!";
               cout<<"\n\n\n Press any Key to EXIT.....";
               getch();
               cout<<"\n\n\n";
            }
            else if(s.option==1 && s.age>14 && s.age<25)
            {

            cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;



	s.getdata();
	  cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

	cout<<"\t\tCHOOSE the university"<<endl;
	cout<<"\n\t\t1.Savitribai Phule Pune university, Pune"<<endl;
	cout<<"\n\t\t2.Mumbai University, Mumbai"<<endl;
	cout<<"\n\t\t3.Shivaji Maharaj University, Kolhapur"<<endl;
	cin>>uni;
	switch(uni)
	{
		case 1:
			{
			    cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;
					s.sppuchoicedata();
					break;
			}
		case 2:
			{
			    cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;
					s.mumbaichoicedata();
					break;
			}
		case 3:
			{
			    cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;
					s.smuchoicedata();
					break;
			}
		default:
			cout<<"\t\twrong choice"<<endl;

	}

            }
            else if(s.age<=14 || s.age>=25){
                      cout<<"\n Press any key to continue....";
			getch();
			system("cls");
			cout<<"\t\t\tWELCOME TO COLLEGE PREDICTOR"<<endl;
	cout<<"\n\t\t\tYEAR 2018-19"<<endl;
	cout<<"\t\t------------------------------"<<endl;

                cout<<"\n\t\t INVALID AGE\n\n";
                cout<<"\n\t\t SO You are NOT ELIGIBLE for any COURSE \n\t\t";
                goto yash;

            }
            else
                cout<<"\n INVALID OPTION";

            cout<<"\n \t\tPress \"1\"to check for Another STUDENT....";
cin>>choice;
}while(choice==1);
	return 0;
}
