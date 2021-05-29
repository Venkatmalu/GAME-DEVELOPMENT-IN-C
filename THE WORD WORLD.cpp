#include<iostream>

using namespace std;
int score=0;
int startgame()
{
    int ready;
    cout<<endl<<"                                                  THE WORD WORLD                                                                 "<<endl<<endl<<endl;
    cout<<"Hey guys!!!...Are U Ready For Compitate with WORDS...."<<endl<<endl;
    cout<<"***Ok,Read The Rules Carefully***"<<endl<<endl;
    cout<<"Rules :"<<endl;
    cout<<"    1.This is a **WORD Based Game**."<<endl;
    cout<<"    2.There are 5 Questions."<<endl;
    cout<<"    3.There Are Some Blanks In The Words."<<endl;
    cout<<"    4.U Have To Fill That Blanks With Corresponding(Suitable) Letters."<<endl;
    cout<<"    5.U Have Only One Attempt For One Question."<<endl;
    cout<<"    6.If U Try To Attend Same Question Again And Again,U Cause To Lose Other Questions(U MUST FOLLOW THIS CONDITION)."<<endl;
    cout<<"    7.Right Or Wrong U Must Attend Next Questions(To GET Correct Score)."<<endl;
    cout<<"    8.When The Game Is Reach The Last Question(5th Question) Game Will End."<<endl;
    cout<<"    9.Finally U Get The Score U Scored Out Off 5 Questions."<<endl<<endl;
    cout<<"If u ready PRESS Greater Than 1 Else 0"<<endl<<endl;
    cin>>ready;
    cout<<endl;
    if(ready)
    {
        cout<<"Ok Lets Have a Fun..."<<endl<<endl;
        return ready;
    }
    else
    {
        cout<<"Its Ok U Can Try Later Some Time....BYE"<<endl<<endl;
        return ready;
    }
}

void playgame(int x)
{
    string name,name1;
    int Question_Number;
    cout<<"***Hey Brilliant GUY...U Have Now "<<x<<" Questions....So,Pls Choose any ONE Quetion***"<<endl<<endl;
    cout<<"1 2 3 4 5 "<<endl;
    cin>>Question_Number;
    cout<<endl;
    if(1==Question_Number)
    {
       name="india";
       name1="i_d_a";
       int count=3;
       int guess=0;
       char x;
       int repeat=0;
       int repeat1=0;
       cout<<"You Have To Find The Blank Spaces Intelligent Guy..."<<endl<<endl;
       cout<<"***U Have 3 Chances Only***"<<endl<<endl;
       cout<<"The Task is : "<<name1<<endl<<endl;
       cout<<"Guess The First Letter,Enter it and Guess Second One,Enter it and So on..."<<endl;
       cout<<endl;
       while(count && guess<=2)
       {
           cout<<"Enter Ur Guess : ";
           cin>>x;
           cout<<endl;
         if(x==name[1])
        {
             if(repeat==0)
             {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[1]=x;
               cout<<name1<<endl<<endl;
               guess++;
               repeat++;
               count--;
               if(guess!=2)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
             }
             else
             {
               count--;
                cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
             }
        }
        else if(x==name[3])
        {
             if(repeat1==0)
             {
                cout<<"wow!!!...U Found It"<<endl<<endl;
                name1[3]=x;
                cout<<name1<<endl<<endl;
                guess++;
                count--;
                if(guess!=2)
                {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
             }
             else
             {
                 count--;
                 cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
             }
        }
        else
        {
           count--;
           cout<<"***Ur Guess Is Not Correct***"<<endl<<endl;
           cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
        }
        if(guess==2)
        {
            guess++;
           cout<<"wow!!!..It is CORRECT...U Done Good Job...!!!"<<endl<<endl;
           cout<<"UR Guess is CORRECT The Answer Is : "<<name1<<endl<<endl;
           score++;
        }
       }
       if(guess!=3)
       {
           cout<<"***U Have NO More Chances To Finish The Task...Sorry Try AGAIN***"<<endl;
       }
    }
    else if(Question_Number==2)
    {
       name="wonder";
       name1="_o_d_r";
       int count=5;
       int guess=0;
       int repeat=0;
       int repeat1=0;
       int repeat2=0;
       char x;
       cout<<"You Have To Find The Blank Spaces Intelligent Guy..."<<endl<<endl;
       cout<<"***U Have "<<count<<" Chances Only***"<<endl<<endl;
       cout<<"The Task is : "<<name1<<endl<<endl;
       cout<<"Guess The First Letter,Enter it and Guess Second One,Enter it and So on..."<<endl;
        cout<<endl;
       while(count && guess<=3)
       {
           cout<<"Enter Ur Guess : ";
           cin>>x;
           cout<<endl;
         if(x==name[0])
        {
            if(repeat==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[0]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat++;
               if(guess!=3)
               {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=3)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[2])
        {
            if(repeat1==0)
            {
              cout<<"wow!!!...U Found It"<<endl<<endl;
              name1[2]=x;
              cout<<name1<<endl<<endl;
              guess++;
              repeat1++;
              count--;
              if(guess!=3)
               {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=3)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[4])
        {
            if(repeat2==0)
            {
              cout<<"wow!!!...U Found It"<<endl<<endl;
              name1[4]=x;
              cout<<name1<<endl<<endl;
              guess++;
              repeat2++;
              count--;
               if(guess!=3)
               {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=3)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else
        {
           count--;
           cout<<"***Ur Guess Is Not Correct***"<<endl<<endl;
           cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
        }
        if(guess==3)
        {
            guess++;
           cout<<"wow!!!..It is CORRECT...U Done Good Job...!!!"<<endl<<endl;
           cout<<"UR Guess is CORRECT The Answer Is : "<<name1<<endl<<endl;
           score++;
        }
       }
       if(guess!=4)
       {
           cout<<"***U Have NO More Chances To Finish The Task...Sorry Try AGAIN***"<<endl;
       }
    }
    else if(Question_Number==3)
    {

       name="reliefness";
       name1="r_l_ef_e_s";
       char x;
       int count=6;
       int guess=0,repeat=0,repeat1=0,repeat2=0,repeat3=0;
       cout<<"You Have To Find The Blank Spaces Intelligent Guy..."<<endl<<endl;
       cout<<"***U Have "<<count<<" Chances Only***"<<endl<<endl;
       cout<<"The Task is : "<<name1<<endl<<endl;
       cout<<"Guess The First Letter,Enter it and Guess Second One,Enter it and So on..."<<endl;
       cout<<endl;
       while(count && guess<=4)
       {
           cout<<"Enter Ur Guess : ";
           cin>>x;
           cout<<endl;
         if(x==name[1])
        {
            if(repeat==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[1]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat++;
               if(guess!=4)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=4)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[3])
        {
            if(repeat1==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[3]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat1++;
               if(guess!=4)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=4)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[6])
        {
            if(repeat2==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[6]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat2++;
               if(guess!=4)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=4)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[8])
        {
            if(repeat3==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[8]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat3++;
               if(guess!=4)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=4)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else
        {
           count--;
           cout<<"***Ur Guess Is Not Correct***"<<endl<<endl;
           cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
        }
        if(guess==4)
        {
            guess++;
           cout<<"wow!!!..It is CORRECT...U Done Good Job...!!!"<<endl<<endl;
           cout<<"UR Guess is CORRECT The Answer Is : "<<name1<<endl<<endl;
           score++;
        }
       }
       if(guess!=5)
       {
           cout<<"***U Have NO More Chances To Finish The Task...Sorry Try AGAIN***"<<endl;
       }
    }
    else if(Question_Number==4)
    {
       name="management";
       name1="_a_a_e_e_t";
       char x;
       int count=8;
       int guess=0,repeat=0,repeat1=0,repeat2=0,repeat3=0,repeat4=0;
       cout<<"You Have To Find The Blank Spaces Intelligent Guy..."<<endl<<endl;
       cout<<"***U Have "<<count<<" Chances Only***"<<endl<<endl;
       cout<<"The Task is : "<<name1<<endl<<endl;
       cout<<"Guess The First Letter,Enter it and Guess Second One,Enter it and So on..."<<endl;
       cout<<endl;
       while(count && guess<=5)
       {
           cout<<"Enter Ur Guess : ";
           cin>>x;
           cout<<endl;
         if(x==name[0] || x==name[6])
        {
            if(repeat==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[0]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else if(repeat3==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[6]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat3++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=5)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[2] || x==name[8])
        {
            if(repeat1==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[2]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat1++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else if(repeat4==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[8]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat4++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=5)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[4])
        {
            if(repeat2==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[4]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat2++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=5)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else
        {
           count--;
           cout<<"***Ur Guess Is Not Correct***"<<endl<<endl;
           cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
        }
        if(guess==5)
        {
            guess++;
           cout<<"wow!!!..It is CORRECT...U Done Good Job...!!!"<<endl<<endl;
           cout<<"UR Guess is CORRECT The Answer Is : "<<name1<<endl<<endl;
           score++;
        }
       }
       if(guess!=6)
       {
           cout<<"***U Have NO More Chances To Finish The Task...Sorry Try AGAIN***"<<endl;
       }
    }
    else if(Question_Number==5)
    {
       name="mesmerizing";
       name1="_es_e_i_i_g";
       char x;
       int count=9;
       int guess=0,repeat=0,repeat1=0,repeat2=0,repeat3=0,repeat4=0;
       cout<<"You Have To Find The Blank Spaces Intelligent Guy..."<<endl<<endl;
       cout<<"***U Have "<<count<<" Chances Only***"<<endl<<endl;
       cout<<"The Task is : "<<name1<<endl<<endl;
       cout<<"Guess The First Letter,Enter it and Guess Second One,Enter it and So on..."<<endl;
       cout<<endl;
       while(count && guess<=5)
       {
           cout<<"Enter Ur Guess : ";
           cin>>x;
           cout<<endl;
         if(x==name[0] || x==name[3])
        {
            if(repeat==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[0]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else if(repeat3==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[3]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat3++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=5)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[5])
        {
            if(repeat1==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[5]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat1++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=5)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[7])
        {
            if(repeat2==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[7]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat2++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=5)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else if(x==name[9])
        {
            if(repeat4==0)
            {
               cout<<"wow!!!...U Found It"<<endl<<endl;
               name1[9]=x;
               cout<<name1<<endl<<endl;
               count--;
               guess++;
               repeat4++;
               if(guess!=5)
               {
                   cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
               }
            }
            else
            {
                count--;
                if(guess!=5)
                {
                    cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
                }
            }
        }
        else
        {
           count--;
           cout<<"***Ur Guess Is Not Correct***"<<endl<<endl;
           cout<<"U Have "<<count<<" Chances ONLY...To Finish The Task..."<<endl<<endl;
        }
        if(guess==5)
        {
            guess++;
           cout<<"wow!!!..It is CORRECT...U Done Good Job...!!!"<<endl<<endl;
           cout<<"UR Guess is CORRECT The Answer Is : "<<name1<<endl<<endl;
           score++;
        }
       }
       if(guess!=6)
       {
           cout<<"***U Have NO More Chances To Finish The Task...Sorry Try AGAIN***"<<endl;
       }
    }
    else
    {
        cout<<"\n***Oops...There is only 5 Questions...Pls Enter Valid Question Number...***\n"<<endl;
    }
}

int main()
{
    int i,questions=5;
   i=startgame();
    if(i>0)
    {
        while(questions)
          {
              playgame(questions);
              questions--;
          }
          cout<<"YOUR SCORE IS :"<<score<<endl<<endl;
         cout<<endl<<"                                                    END GAME                                                                "<<endl<<endl<<endl;
    }
    cout<<"                                              THANK YOU FOR VISITING                                                         "<<endl<<endl<<endl;
}
