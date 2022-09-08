#include <iostream>
using namespace std;
int studentDetails(string name, string surname, string schoolName)
{
    cout<<"Please enter your name:";
    cin>>name;
    cout<<"Please enter your surname:";
    cin>>surname;
    cout<<"Please enter your school name:";
    cin>>schoolName;
    //studentDetails(name,surname,schoolName);
    return 0;
}



int calcAverageYearMark()
{
    float total=0;
    int list_num[6];
    //getMarks(list_num);
    for(int i=0; i<=5; i++)
        total=total+list_num[i];
    total=total/6;   
    total=float(total);
    cout<<"The average of all 6 marks is: "<<total<<endl;
    return 0;
}

int minMax()
{
    int temp_val;
    int list_num[6];
    //getMarks(list_num);
    for (int i=0; i<=5; i++)
    {
        for(int y=i+1; y<=6;y++)  
        {
            if(list_num[i] > list_num[y])
            {
                temp_val=list_num[i];
                list_num[i]=list_num[y];
                list_num[y]=temp_val;
            }

        }
    }
    //for(int i=0;i<=5;i++)
    //    cout<<list_num[i];
    int min=list_num[0];
    int max=list_num[5];
    cout<<"The max is: "<<max<<" min is: "<<min;   

    return 0;  
        
}

int passOrFail(string status)
{
    int counter=0;
    int da_list[6];
    //getMarks(da_list);
    for(int i=0; i<5; i++)
        if (da_list[i]>=50)
        {
            counter=counter+1;
        }
     if (counter>=4 and da_list[0]>=50)   
        status="True";
     else if (counter<4 or da_list[0]<50)
         status="False";   
    return 0;     
        
}

int awardDistinctionto(int distinctions)
{
    int da_list[6];
    //getMarks(da_list);
    for (int i=0; i<=5; i++)
        if (da_list[i]>=75)
        {
            distinctions=distinctions+1;
        }

    return distinctions;   
        
}

int codeSymbol( int da_list[6])
{
    //getMarks(da_list);
    string symbol[6];
    int code[6];
    for (int i=0; i<5; i++)
        {
            if (da_list[i]=0 and da_list[i]<=29)
                {symbol[i]="FF";
                code[i]=1;}

            if (da_list[i]>=30 and da_list[i]<=39)
                {symbol[i]="F";
                code[i]=2;}

            if (da_list[i]=40 and da_list[i]<=49)
                {symbol[i]="E";
                code[i]=3;}

            if (da_list[i]=50 and da_list[i]<=59)
                {symbol[i]="D";
                code[i]=4;}

            if (da_list[i]=60 and da_list[i]<=69)
                {symbol[i]="C";
                code[i]=5;}

            if (da_list[i]=70 and da_list[i]<=79)
                {symbol[i]="B";
                code[i]=6;}

            if (da_list[i]=80 and da_list[i]<=100)
                {symbol[i]="A";
                code[i]=7;}
        }
    return 0;//*display*//    
}

int display(int da_list[6])
{
    string symbol[6];
    string name,surname,schoolName;
    int code[6];
    string subjects[6]={"English","Mathematics", "Life Orientation", "History", "Computer Literacy", "Art"};
    studentDetails(name,surname,schoolName);
    codeSymbol(da_list);
    name=name;
    surname=surname;
    schoolName=schoolName;
    cout << "*******************************************" << endl;
    cout<<"This is the student record application"<<endl;
    cout<<"*******************************************"<<endl;
    cout<<"Name: "<<name<<" "<<surname<<"         schoolName: "<<schoolName<<endl;
    cout<<" "<<endl;
    cout<<"Subjects        Mark       Symbol      code"<<endl;
    for(int i=0;i<=5; i++)  
        cout<<subjects[i]<<"          "<<da_list[i]<<"%         "<<symbol[i]<<"        "<<code[i]<<endl;
    return 0;    
}

int getMarks(int list_num[6])
{
    string name, surname, schoolName; 
    int number=0;
    string listed[6]={"English","Mathematics", "Life Orientation", "History", "Computer Literacy", "Art"};
    for(int i=0 ; i<=5 ; i++)
    {
        cout<<"please enter mark for "<<listed[i]<<": ";
        cin>>number;
        if (number<0 or number>100)
        {
            cout<<"invalid marks"<<endl;  
            cout<<"please re-enter mark for "<<listed[i]<<": ";
            cin>>number; 
        }   
        list_num[i]=number;
    }       
    return display(list_num);   
}
int main()
{
    int list_num[6];
    getMarks(list_num);
    return 0;
}