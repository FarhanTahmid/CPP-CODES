#include<iostream>
using namespace std;
struct TIME {

   int seconds;

   int minutes;

   int hours;

};
void differenceBetweenTimePeriod(struct TIME* t1, struct TIME* t2, struct TIME *diff){
    while(t2->seconds > t1->seconds){
        t1->minutes--;
        t1->seconds+=60;
    }
    diff->seconds=t1->seconds-t2->seconds;
    while(t2->minutes>t1->minutes){
        t1->hours--;
        t1->minutes+=60;
    }
    diff->minutes=t1->minutes-t2->minutes;
    diff->hours=t1->hours-t2->hours;
}
