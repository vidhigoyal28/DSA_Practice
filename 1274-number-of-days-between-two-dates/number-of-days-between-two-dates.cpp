class Solution {
public:
// bool isLeapyear(int year){
//     return ((y%400 == 0) || (y%4 == 0 &&))
// }
int convert(string date){
    int year = stoi(date.substr(0,4));
    int month = stoi(date.substr(5,2));
    int day = stoi(date.substr(8 , 2));
    int total = 0;
    for(int i = 1971 ; i<year;i++){
        if((i%400 == 0) || (i%4 == 0 && i%100 !=0)){
            total += 366;
        }
        else{
            total += 365;
        }
    }
    int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31};
    for(int m = 1 ;m <month; m++){
        total += days[m-1];
    }
    if(month>2 && ((year%400 == 0 ) || (year%4 ==0 && year%100 !=0))){
        total++;
    }
    total += day;
    return total;

}
    int daysBetweenDates(string date1, string date2) {
        return abs(convert(date1) - convert(date2));
    }
};