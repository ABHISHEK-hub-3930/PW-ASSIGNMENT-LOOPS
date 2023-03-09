#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"Enter Number of Row = ";
    cin>>row;
    cout<<"Enter Number of col = ";
    cin>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    getch();

    
}