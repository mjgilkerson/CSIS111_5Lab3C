// Michael Gilkerson Lab 3 Part C

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void firstText()
{
    string myNum;
    ifstream MyReadFile("A.txt");
    int i = 0;

    cout << "test";

    //Creating an array
    int arrayA[3][2] = { {2,-5},{4,0},{9,1} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <2; ++j)
        cout << i << j << arrayA[i][j] << endl;
    }
    system("pause");
    
    //Read the file 
    while (getline(MyReadFile, myNum)) {
        cout << myNum << endl;
        i++;
    }
    MyReadFile.close();
    system("pause");
}

void secondText()
{
    //this function reads txt file B.txt
    string myNum;
    ifstream MyReadFile("B.txt");
    int i = 0;
    while (getline(MyReadFile, myNum)) {
        cout << myNum << endl;
        i++;
    }
    MyReadFile.close();
    system("pause");
}

void thirdText()
{
    //This function creates a txt document and writes the following into it
    ofstream MyFile("C.txt");
    for (int i = 1; i <= 10; i++)
    {
        MyFile << i;
        cout << i;
        MyFile << endl;
    }
    MyFile.close();
    system("pause");
}

int main()
{
    firstText();
    secondText();
    thirdText();
}

