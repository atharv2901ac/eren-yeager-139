#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void EnterDetails(vector <int> Marks){
    cout << "ENTER THE MARKS OF PHYSICS:";
    cin >> Marks[0];
    cout << "ENTER THE MARKS OF MATHS:";
    cin >> Marks[1];
    cout << "ENTER THE MARKS OF CHEMISTRY:";
    cin >> Marks[2];

    ofstream File("samplemarks.bin", ios::out | ios::binary);
    if(File.is_open()){
        size_t bytesToPack = Marks.size()*sizeof(int);
        File.write(reinterpret_cast<const char*>(Marks.data()),bytesToPack);
        File.close();
    }
}
int main(int argc, char const *argv[])
{
    vector <int> Marks;
    EnterDetails(Marks);
    return 0;
}

