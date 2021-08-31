#include <iostream>
#include <cstring>
#define ll long long

using namespace std;


bool isLeapYear(ll year);

int main() {
    int T, Case = 0;
    cin >> T;
    while (T--){
        char month1[20],month2[20];
        int date1,date2;
        ll year1,year2,count = 0;
        scanf("%s %d, %lld",month1,&date1,&year1);
        scanf("%s %d, %lld",month2,&date2,&year2);


        if(strcmp(month1,"January")==0 || strcmp(month1,"February")==0){
            while(!isLeapYear(year1)){year1++;};
        }
        else {
            while (!isLeapYear(++year1));
        }
        if(strcmp(month2,"January")==0 || strcmp(month2,"February")==0){
            if(date2 != 29){while(!isLeapYear(--year2));}
            else if(strcmp(month2,"February")!=0){while(!isLeapYear(--year2));}
        }
        else {
            while (!isLeapYear(year2)){ year2--;};
        }
        if(year1<=year2){
            count = ((year2-year1)/4) + 1;
            if(year1%100){
                year1 = (year1/100) + 1;
                year1 *=100;
            }

            year2/= 100;
            year2*=100;

        }


        if(1600<=year2-year1){

            while (!isLeapYear(year1)){
                count--;
                year1 +=100;
            }
            while (!isLeapYear(year2)){
                count--;
                year2-=100;
            }
            count -=((year2-year1)/400)*3;
        }
        else
        {
            while (year1 <= year2){
                if(!isLeapYear(year1)){
                    count--;
                }
                year1+=100;
            }
        }
        cout << "Case " << ++Case << ": " << count << endl;

    }
    return 0;
}

bool isLeapYear(ll year){
    if(year % 400){
        return year % 4 == 0 && year % 100 != 0;
    }
    return true;
}