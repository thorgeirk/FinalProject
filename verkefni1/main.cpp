#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char input;
    do{
            cout << "r: Read" << endl;
            cout << "w: Write" << endl;
            cout << "q: Quit" << endl;
            cin >> input;
            if (input == 'r') {

                string str;
                int i;
                double d;

                ifstream fin;
                fin.open("DataTextFile.txt");

                if (fin.is_open()){
                    while(!fin.eof()){
                        fin >> str;
                        fin >> i;
                        fin >> d;
                        cout << "String:      " << str << endl;
                        cout << "Integer:     " << i << endl;
                        cout << "Real number: " << d << endl;
                    }
                    cout << fin.eof() << endl;
                }
                else {
                    cout << "file not open";
                }
                fin.close();
            }

            else if (input == 'w') {
                string str;
                int i;
                double d;

                cout  << "Enter a string: ";
                cin >> str;

                cout  << "Enter an integer: ";
                cin >> i;

                cout  << "Enter a real number: ";
                cin >> d;

                ofstream fout;
                fout.open("DataTextFile.txt", ios::app);

                fout << str << endl;
                fout << i << endl;
                fout << d << endl;

                fout.close();
            }
    }while (input != 'q');


    return 0;
}
