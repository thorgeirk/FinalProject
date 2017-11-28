//
//  main.cpp
//  Skilaverk1
//
//  Created by Þorgeir Kristján Þorgeirsson on 28/11/2017.
//  Copyright © 2017 Þorgeir Kristján Þorgeirsson. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool check_if_valid(char input)
{
    if(input == 'y')
    {
        return true;
    }
    return false;
}

int main()
{
    string str;
    ifstream fin;
    char input = 'y';
    
    fin.open("/Users/thorgeir/Documents/sodoma.txt");
    if (fin.is_open())
    {
        while(!fin.eof() && check_if_valid(input))
        {
            for (int i = 0; i < 11; i++)
            {
                getline(fin, str);
                cout << str << endl;
            }
            do
            {
                cout << "Do you wish to continue (y/n)? ";
                cin >> input;
                check_if_valid(input);
            }while(input != 'y' && input!= 'n');
            
            cout << endl;
        }
        
        fin.close();
    }
    else
    {
        cout << "Unable to read from file" << endl;
    }
    
    
    return 0;
}
