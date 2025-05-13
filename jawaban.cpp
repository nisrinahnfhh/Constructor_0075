#include <iostream>
using namespace std;

class BangunDatar;
class PersegiPanjang{
    public:
       void inputData(BangunDatar &bd);
       void outputData(BangunDatar &bd);
};

class BangunDatar{
    private:
       float panjang;
       float lebar;
       float hitungLuas(){
        return panjang * lebar;
       };
       float hitungKeliling(){
        return 2 * (panjang + lebar);

       };
    };