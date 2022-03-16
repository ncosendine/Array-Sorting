//Nathan Cosendine
//CSC210

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int startingarray[12]={16,100,9,4,49,22,64,31,6,8,12,81};
    int userarray[12]={0};
    int newarray[12]={0};

    //Ask user to enter data and add it to the array
    cout << "Please Enter 12 Numbers" << endl;
    for(int i=0;i<12;i++)
        cin >> userarray[i];

    //sort the users array
    int n=sizeof(userarray) / sizeof(userarray[0]);
    sort(userarray,userarray + n);

    //output the users sorted array
    cout << "\n\n USER SORTED ARRAY" << endl;
    for(int i=0;i<12;i++)
    {
        if(i%4==0)
        cout << "\n";

        cout << userarray[i] << ", ";
    }

    //add the users sorted array to the starting array
    for(int i=0;i<12;i++)
    newarray[i] = userarray[i] + startingarray[i];

    //output the new array
    cout << "\n\n NEW ARRAY" << endl;
    for(int i=0;i<12;i++)
    {
        if(i%4==0)
        cout << "\n";

        cout << newarray[i] << ", ";
    }

return 0;
}
