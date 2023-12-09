#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream write("HOMEWORK.cpp");
    write<<"#include<iostream>\n";
    write<<"using namespace std;\n";
    write<<"int main()\n";
    write<<"{\n";
    write<<"\tint aadesh;\n";
    write<<"\tcout<<\"Enter a number = \";\n";
    write<<"\tcin>>aadesh;\n";
    write<<"\tif(aadesh==0)\n";
    write<<"\t{\n";
    write<<"\t\tcout<<\"Even Number\";\n";
    write<<"\t}\n";

    for (int i =1; i<=10000; i+=2)
    {
        write<< "\telse if(aadesh=="<<i<<")\n";
        write<< "\t{\n";
        write<< "\t\tcout<<\"Odd Number\";\n";
        write<< "\t}\n";
        write<< "\telse if(aadesh=="<<i+1<<")\n";
        write<< "\t{\n";
        write<< "\t\tcout<<\"Even Number\";\n";
        write<< "\t}\n";
    }

    write<<"\telse\n";
    write<<"\t{\n";
    write<<"\t\tcout<<\"Invalid number\";\n";
    write<<"\t}\n";
    write<<"\treturn 0;\n";
    write<<"}\n";


    write.close();
    return 0;
}
