#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

//function declaration
double speed(double, double);
double distance(double, double);
double time(double, double);

int main()
{
    //loading bar
    system("cls");
    for (int i=1; i<=50; i++)
    {
        system("cls");
        cout<<"\n\t\t\t\t##############################^_^##############################";
        cout<<"\n\t\t\t\t|                                                             |";
        cout<<"\n\t\t\t\t|                                                             |";
        cout<<"\n\t\t\t\t+++           Welcome to our Group Project                  +++";
        cout<<"\n\t\t\t\t|                                                             |";
        cout<<"\n\t\t\t\t|                                                             |";
        cout<<"\n\t\t\t\t##############################^_^##############################";
        cout<<"\n\t\t\t\t|                                                             |";
        cout<<"\n\t\t\t\t|                                                             |";
        cout<<"\n\t\t\t\t+++           Welcome to our Group Project                  +++"; //u may enter ur title here
        cout<<"\n\t\t\t\t|                                                             |";
        cout<<"\n\t\t\t\t|                                                             |";
        cout<<"\n\t\t\t\t##############################^_^##############################";
        cout<<"\n\n\t\t\t\t                       Loading "<<2*i<<"%\n\n\t\t\t\t        ";

        for (int j=1; j<=i; j++)
        //cout<<"²";
        cout<<"\xB2";

        if (i > 1 && i < 50)
        {
            cout<<"\n\n\t\t\t\t      Working on perfections ^_^";
        }

        else
        {
            cout<<"\n\n\t\t\t\t      Loading complete, you may now press any key to continue: ";
        }

        Sleep(150 - i*3);
    }
    getch();

    system("cls");

    double firstval, secondval, answer;
    int choice;

    //Welcome message
    cout<<"\t\t\t\t______________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t                    --HELLO--                   "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t______________________________________________\n\n"<<endl;

    cout<<"   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"   | To start, make sure you have both variables from your given problem for the calculation of the    |"<<endl;
    cout<<"   | speed, distance or time.                                                                          |"<<endl;
    cout<<"   | The answer will be in the same unit as what you entered. Thank You.                               |"<<endl;
    cout<<"   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    do{
        cout<<"   Enter the number that you want to be calculated: \n";
        cout<<"   1 for Speed\n";
        cout<<"   2 for Distance\n";
        cout<<"   3 for Time\n";
        cout<<"   4 to Exit\n";
        cout<<"   > ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"\n   -SPEED-";
            cout<<"\n   Please enter the value for distance: ";
            cin>>firstval;
            cout<<"\n   Please enter the value for time: ";
            cin>>secondval;
        }

        else if(choice==2)
        {
            cout<<"\n   -DISTANCE-";
            cout<<"\n    Please enter the value for speed: ";
            cin>>firstval;
            cout<<"\n   Please enter the value for time: ";
            cin>>secondval;
        }

        else if(choice==3)
        {
            cout<<"\n   -TIME-";
            cout<<"\n   Please enter the value for distance: ";
            cin>>firstval;
            cout<<"\n   Please enter the value for speed: ";
            cin>>secondval;
        }

        switch(choice)
        {
            case 1:
            answer = speed(firstval, secondval);
            cout<<"\n   Result = "<<answer;
            break;

            case 2:
            answer = distance(firstval, secondval);
            cout<<"\n   Result = "<<answer;
            break;

            case 3:
            answer = time(firstval, secondval);
            cout<<"\n   Result = "<<answer;
            break;

            case 4:
            return 0;

            default:
            cout<<"\n   Invalid Input!";
            break;
        }
        cout<<"\n   ------------------------------------------------------\n\n";
    }

    while(choice!=4);
    cout<<endl;
    return 0;

}

double speed(double firstval, double secondval)
{
    double answer= firstval / secondval;
    return answer;
}

double distance(double firstval, double secondval)
{
    double answer= firstval*secondval;
    return answer;
}

double time(double firstval, double secondval)
{
    double answer= firstval / secondval;
    return answer;
}