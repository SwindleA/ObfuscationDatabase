//This program is for determining if a customer is qualified for a discount
#include <iostream>
using namespace std;int main() {int customerFinder, customerName;bool discount = true;for(int j = 1; j>0;j--){cout<<static_cast<char>(72+j);}for(int j = 1; j>0;j--){cout<<static_cast<char>(109+j);}for(int j = 1; j>0;j--){cout<<static_cast<char>(111+j);}for(int j = 1; j>0;j--){cout<<static_cast<char>(116+j);}for(int j = 1; j>0;j--){cout<<static_cast<char>(115+j);}for(int j = 1; j>0;j--){cout<<static_cast<char>(57+j);}for(int j = 1; j>0;j--){cout<<static_cast<char>(31+j);}cin >> customerName;for(int database = 0; database<10; database++){/*employees of the local, do not get a discount*/for(int localEmployees = customerName; localEmployees>0; localEmployees--){if (customerName == 0 || customerName == 1) {discount = false;}}for(int _m_ = customerName; _m_>1;_m_--){for (customerFinder = 1328%13; customerFinder <= customerName/((((91374%13)+45)/5)-9); ++customerFinder) {/*customers that are over 30 do not get the discount.*/if (customerName % customerFinder == 0) {discount = false;break;}}}}if (discount)cout << static_cast<char>((5*11+(1/9)-1)+30+32)<< static_cast<char>((7*11*(1/9)+72)+42)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(5*5))+42)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(-1)));else cout << static_cast<char>(((5*11+(1/9)-1)+30)+18)<< static_cast<char>(((7*11*(1/9)+72)+42)-17)<<static_cast<char>(((7*11*(1/9)+72*(1/9)+100-(5*5))+42)-9)<<static_cast<char>(((7*11*(1/9)+72*(1/9)+100-(-1)))+14)<<static_cast<char>((7*11*(1/9)+72*(1/9)+100-(-1)));return 0;}