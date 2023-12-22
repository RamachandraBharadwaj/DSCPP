#include <iostream>
using namespace std;

class chessboard
{

    //all the attributes are private by default !
    public:
        string company;
        int parts;
        string colorpairs;
        int length;
        int breadth;
        float price;

};


int main()
{
    chessboard bro;
    bro.company="Kasparov";
    bro.parts=32;
    bro.colorpairs="black n white";

    cout<<bro.company<<endl;

    return 0;
}