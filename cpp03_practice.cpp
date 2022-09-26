//1.Box



#include <iostream>

using namespace std;



int main()

{

    short length, weight, height, boxvolume;

    //not exceed 40 * 40 * 40이라는 조건이 있기 때문에 size가 작은 short을 사용  

    cout << "Input length:";

    cin >> length;

    cout << "Input weight:";

    cin >> weight;

    cout << "Input height:";

    cin >> height;



    boxvolume = length * weight * height;



    cout << "Box volume:" << boxvolume << endl;



    return 0;



}



//2. Timer



#include <iostream>

using namespace std;



int main()

{

    int total, day, hour, min, sec, sday, shour, smin;

    sday = 86400;

    shour = 3600;

    smin = 60;



    cout << "Enter the number of seconds: ";

    cin >> total;



    day = total / sday;

    hour = (total % sday) / shour;

    min = ((total % sday) % shour) / smin;

    sec = ((total % sday) % shour) % smin;



    cout << total << " seconds = " << day << " days, " << hour << " hours, "

        << min << " minutes, " << sec << " seconds" << endl;



    return 0;

}



//3. Digits



#include <iostream>

using namespace std;



int main()

{

    short number, tousands, hundreds, tens, ones;

    // 숫자가 10,000을 넘어가지 않기 때문에 short을 사용



    cout << "Input your number: ";

    cin >> number;



    tousands = number / 1000;

    hundreds = (number % 1000) / 100;

    tens = ((number % 1000) % 100) / 10;

    ones = ((number % 1000) % 100) % 10;



    cout << "tousands: " << tousands << endl;

    cout << "hundreds: " << hundreds << endl;

    cout << "tens: " << tens << endl;

    cout << "ones: " << ones << endl;



    return 0;