# codes-for-c-
<div dir="rtl">
#include <iostream>
using namespace std;

int main(){

  int x,y,z;
   cout<<"Enter x:";
  
    
  cin>>x;
  
  cout<<"enter y: ";
  cin>>y;

  z = x+y;

  cout<<z;
  
return 0;}
کد جمع 1 

#include<iostream>

 using namespace std ;

   int main()
   {
int x,y,z,avg;
    cin>>x>>y>>z;
    avg = (x+y+z)/3;
    cout<<avg;

    cout<<"\n\n";
    return 0;
   }

  میانگین سه عدد  x , y , z    2

  #include<iostream>

 using namespace std ;

   int main()
   {
 int x,y;
 float avg;
    cin>>x>>y;
    avg = (x+y)/2;
    cout<<avg;


    return 0;}

    میانگین دوعدد 3

    #include<iostream>

 using namespace std ;

   int main()
   {
int x,y,z;
float avg;
    cin>>x>>y>>z;
    avg = (x+y+z)/3.0;
    cout<<avg;

    cout<<"\n\n";
    return 0;
   }

میانگین سه عدد با اعشار . 4

#include<iostream>

 using namespace std ;

   int main()
   {
int a,p,s;
    cout<<"enter a: ";
   cin>>a;
   p=4*a;
   s=a*a;
   cout<<"p = "<<p<<endl;
   cout<<"s = "<<s<<endl;

    cout<<"\n\n";
    return 0;
   }

محیط و مساحت مربع به ضلع a  5

#include<iostream>
 using namespace std;

 int main(){

  int amount;

 cout<<"cheghadr moondeh?";
  cin>>amount;

 int a10,a5,a2,a1;
 a10=a5=a2=a1=0;

 a10=amount/10000;
 amount%=10000;

 a5=amount/5000;
 amount%=5000;

 a2=amount/2000;
 amount%=2000;

 a1=amount/1000;

 cout<<"\n"<<a10<<"ta 10 ee bedeh\n";
 cout<<"\n"<<a5<<"ta 5 ee bedeh\n";
 cout<<"\n"<<a2<<"ta 2 ee bedeh\n";
 cout<<"\n"<<a1<<"ta 1 ee bedeh\n";


 return 0;
 }

مقدار پول باقی مانده که باید با کمترین مقدار اسکناس داده شود . 6

#include<iostream>
#include<cmath>
using namespace std ;

  int main() {

      int r ;
      float P , S , pi=3.14 ;
    cout << "enter r : " ;
    cin >>  r  ;
      P = 2*pi*r ;
      S = pi*r*r ;

      cout << "masahat" << S << endl ;
      cout << "mohit" << P  ;

      return 0;
  }

  محیط و مساحت دایره ای که شعاعش را کاربر بدهد . 7

#include <iostream>
using namespace std;

int main() {


  int n,i,c=1;
  cout<<"Enter n :  " ;
  cin>>n ;
  for(i=1;i<=n;i++){

    c=c*i;
    }
  cout<<c;


  return 0;
}

فاکتوریل با مقدار n ای که کاربر میده . 8

#include <iostream>
using namespace std;

int main() {

 int x , y ;

 cout<< "x:...." ;
 cin >> x ;
 cout<< "y:...." ;
 cin >> y;

  if(x>y)
    cout << "x bozorg ast";
  else if (x<y)
  cout << "y bozorg ast ";
  return 0;
}

مقایسه دوعدد که توسط کاربر داده می شود. 9

#include <iostream>
using namespace std;

int main() {

 int x ;
 cout << "Enter x:?" ;
  cin >> x ;

   if(x>0){
    cout << "x is positive ";
   }
  else if(x<0){
      cout << "x is negative ";
  }
else {
    cout << "x is zero(0)";
}
  return 0;
}

مثبت یا منفی بودن عددی که کاربر میده . 10

#include <iostream>
using namespace std;

int main() {
  int x ;
  cout << "Enter x: ?";
  cin >> x ;

  if(x>90 && x<100){
    cout << "Excellentttttttttttttttt !!!";
  }
  else if(x>70 && x<89){
    cout << "goooood !! ";
  }
  else if(x>50 && x<68){
    cout << "acceptable !";
  }
    else if (x<50 && x>0){
        cout << "rejected ";
    }
    else {cout << "x is invalid *****";
    }

  return 0;
}

نمره ای کاربر به برنامه میده و بر اساس نمره به صورت توصیفی بهش گفته میشه که وضعش چطوره؟ 11

#include <iostream>
using namespace std;

int main() {
  int x ;
  cout << "Enter x : ?";

   cin >> x ;

   if(x%4==0){
    cout << "this year is Leap";
   }
   else { cout << "this year is no Leap";
   }

  return 0;
}

با این کد میشه فهمید که سالی که کاربر وارد کرده کبیسه هست یا نه ؟ 12
#include <iostream>
using namespace std;

int main() {
  int x , y , z ;

  cout << "x : ? \n  y : ? \n  z : ? \n" ;
    cin >> x >> y >> z;
    if (x+y>z ){

        cout << "'yes', you can create a triangle !";
    }
    else { cout << "'NO',you can not create a triangle";}

  return 0;
}

در این برنامه کاربر به ما 3 عدد میده و ما با یه سری محاسبات میتونیم ببینیم که مثلث میشه با این اضلاع ساخت یا نه ؟ 13

#include <iostream>
using namespace std;

int main() {

  int x  , c ;
   cout << "Enter x cubic meter";
   cin >> x ;

     if(x>0 && x<=50){
     c = x*5000 , cout << c ;
     }
   if (x>51 && x<=150){
    c = x*10000 , cout << c ;
  }
    if ( x > 150){
   c = x*15000 , cout << c ;
}




  return 0;
}

برنامه ای که کاربر بهم مقدار مصرفی از کنتور آبش رو برنامه اساس متر مکعب بهم میده تا برنامه با حساب کردن هر مقدار یعنی هر مقدار بازه ای بهش بگم که طبق اون تعرفه چقدر باید به اداره آب پول بده (در این صورت عدالت برقرار میشه!!). 14

#include <iostream>
using namespace std;

int main() {

    float a , b , A , D  ;// a: percent discount  ,, b: rate

  cout << "Enter a discount and b tooman";
   cin >> a >> b ;

   D = a*b  ;
 A = D/100 ;

   cout << A ;
   
  return 0;
}

برنامه ای هست که درصد تخفیف رو با قیمت کاربر میده و برنامه با حساب کتاب های مورد نظر بهش میگه چه قدر تخفیف میدن البته باید قیمت تخفیف رو از قیمت قبل از تخفیف کم کرد. 15

#include <iostream>
using namespace std;

int main() {

    int i ;
  double x , sum ;
  int const n = 10 ;

  for (i=1 , sum=0 ; i<=n ; i++){
    cout << "Enter x : ";
    cin >> x ;
      sum += x ;
      cout << "Average : "<<sum / 10;
  }

  return 0;
}
برنامه ای که نمره 10 دانشجو رو میگیره و میانگین آن ها رو حساب میکنه . 16

#include <iostream>
using namespace std;

int main() {

  int i = 1 , cross = 1 , n ;
  cout << "Enter n : " ;
  cin >> n ;

  while ( i<= n){
    cross = cross * i ;
    i++ ;
  }
    cout << cross << " ";
    
  return 0;
}
برنامه ای  که کاربر عدد وارد میکند و اون عدد فاکتوریل یا ضرب از 1 تا اون عدد که کاربر داده انجام میشه و جوابش چاپ میشه (فقط جوابش) . 17

#include <iostream>
using namespace std;

int main() {

  int i , n ;
 cout << "Enter n : ?";
  cin >> n ;
 while (i<5){cout << n << " " ;
    i++ ;
 }
 
  return 0;
}
با این کد کاربر عدد وارد میکنه و این عدد پنج بار تکرار میشه توی یه خط . 18

#include <iostream>
using namespace std;

int main() {

  int i = 0 , n ;
 cout << "Enter n :..." ;
 cin >> n ;
 while (i <= n){
    cout << i <<"  " ;
    i++ ;
 }
  return 0;
}
با این برنامه کاربر یه عدد وارد میکنه و برنامه از اون عدد تا 0 به صورت نزولی میره جلو . 19

#include <iostream>
using namespace std;

int main() {
    
    int i = 1 , n ;

cout << "Enter n :..." ;
 cin >> n ;

   while (i <= n){
  cout << "*" <<"  " ;
    i++ ;
 }
return 0;

}
کاربر به من مقدار میده و به اون مقدار که اون میده برنامه به همون مقدار ستاره (*) چاپ کنه . 20

#include <iostream>
using namespace std;

int main() {
  int n ;
  cout << "Enter n :..." ;
  cin >> n ;
 if(n % 2 == 0){
    cout << "n is even" ;
 }
  else {cout << "n is odd" ;}

return 0;

}

برنامه ای که یک عدد از کاربر بگیرد و بررسی کند زوج است یا فرد ؟ 21

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    cout << "digits sum : " << sum << endl;
    return 0;
}

برنامه ای بنویسید که یک عدد صحیح مثبت از کاربر بگیرد و مجموع ارقام آن را چاپ کند . 22

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter n : ";
 cin>> n ;
  if (1<=n && n<=3){cout<<"spring";}
else if(4<=n && n<=6) {cout<<"summer";}
 else if(7<=n && n<=9) {cout<<"fall";}
  else if(10<=n && n<=12) {cout<<"winter";}

else {cout<<"This n is invalid";}
    return 0;
}

برنامه ای که شماره یک ماه (1 تا 12) رو از کاربر میگیرد و بررسی می کند ، اگر ماه در بازه ی 1 تا 3 بود ، پیام بهار را چاپ کند و اگر ماه در بازه ی 4 تا 6 بود تابستان را چاپ کند و اگر ماه در بازه ی 7 تا 9 بود پاییز را چاپ کند و اگر ماه در بازه ی 10 تا 12 بود زمستان را چاپ کند . 23

#include <iostream>
using namespace std;

int main() {

 int m , i , x ;
 cout<< "Enter x :  " ;
  cin >> x ;

  for(i=1;1<=i&&i<=100;i++){
    m = x * i ;
  cout<< m <<" " ;
  }
    return 0;
}

نمایش جدول ضرب : از کاربر بخواه یک عدد وارد کند و جدول ضرب اون  عدد رو تا 10 چاپ کند. (3*1=3 و 3*2=6 و ...) . 24

#include <iostream>
#include <cmath>
using namespace std;

int main() {
 float s ;
 cout << "Enter s (s=> score) :  ";
 cin >> s ;

 if(s<10){cout<<"rejected";}
else if(10<=s && s<=15){cout<<"accept";}
 else if(15<s && s<=18){cout<<"gooooooood";}
 else if(18<s && s<=20){cout<<"impressiveeeeeeeee success";}
 else{cout<<"This is score is invalid."
    "Please enter correct score";}
    return 0;
}

مدیریت نمرات دانشجو : برنامه ای بنویسید که نمره یک دانشجو را از ورودی بگیرد و بر اساس نمره ، پیام های مناسب زیر را بدهد : 
نمره کمتر از 10 : مردود 
نمره بین 10 تا 15 : قبول 
نمره بین 15 تا 18 : خوب 
نمره بالای 18 : عالی . 25

#include <iostream>
#include <cmath>
using namespace std;

int main() {
 int x ;
 cout<< "Enter x hours";
 cin>> x ;
 if(8<=x && x<=22){cout<<"This market is opened!!";}
else if(24<x){cout<<"This hours not correct please enter correct hours";}
 else {cout<<"This market is closed!!!";}
    return 0;
}

تشخیص ساعت بازه یا بسته بودن فروشگاه: برنامه ای که یک ساعت مثلا (8 تا 23 )را از کاربر بگیرد و بررسی می کند آیا فروشگاه باز است یا بسته ؟
فروشگاه از ساعت 8 صبح تا 10 شب باز است.
اگر ساعت خارج از این محدوده بود.پیام فروشگاه بسته است را چاپ کند . 26

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x ;
  cout<<" Enter x :  "<<endl<<" x thousand tooman ";
 cin>>x ;
  if(x<100000){cout<<" No discount ";}
  else if(100000<=x && x<=500000){cout<<"you have %10 discount";}
else if(x>500000){cout<<"you have %20 discount";}
else {cout<<"This is price is invalid.";}
    return 0;
}

مشتری از فروشگاه خرید کرده و فروشگاه بر اساس محدوده قیمتی که گذاشته گفته که مثلا( کمتر از 100)
تومن تخفیف نداره و بین 100 تومن تا 500 تومن 10 درصد تخفیف داره و بیشتر از 500 تومن همون 20 درصد تخفیف داره  . و این برنامه بر اساس قیمتی که کاربر بهش میده میگه که فروشگاه باید جقدر به مشتری تخفیف بدهد. 27

#include <iostream>
using namespace std;

int main() {
    int number[6] = {12,23,15,62,58,40} , sum = 0 ;
    for(int i=0 ; i<=5 ; i++){
   sum = sum + number[i];
    }

    cout << sum ;
    return 0; }

    
کدی که با آرایه نوشته شده و اعداد داخل کروشه رو میگیره بعد اون اعداد رو جمع میکنه  . 28

#include <iostream>
using namespace std;

int main() {
  int i= 5 ;
  int A[i]{24,14,36,27,78};

  for(i=0;i<5;i++){cout<<A[i]<<"  " ;}

    return 0;
}

کدی که با آرایه نوشته شده و اعداد داخل کروشه میتونن عوض بشن و اون عدد ها رو چاپ میکنه . 29 
#include <iostream>
using namespace std;

int main() {
int A[5] , i = 0 ;
int  MAX=A[0] ;
 int x , y , z , v , k ;
 cout << "x:"<<"y:"<<"z:"<<"v:"<<"k:" ;
cin>>x>>y>>z>>v>>k ;
     A[0]= x ;
     A[1]= y ;
     A[2]= z ;
     A[3]= v ;
     A[4]= k ;
  for(i=0 ; i<5 ; i++){
    if(A[i]>MAX){MAX = A[i] ;}
    }
 cout<< MAX <<" " ;

    return 0;

}

این کد با آرایه نوشته شده و اعداد رو از کاربر میگیره و توی memory  طبقه بندی میکنه بعد در نهایت بزرگترینش رو نشون میده . 30

#include <iostream>
using namespace std;

int main() {
   int  A[5];
    int x,y,z,t,v ,i;

cin>>x>>y>>z>>t>>v ;
  A[0]=x ;
  A[1]=y ;
  A[2]=z ;
  A[3]=t ;
  A[4]=v ;
      int Min = x ;
  for(i=0 ; i<5 ; i++){if(A[i]<Min){Min = A[i];} ;};
cout<<Min<<" " ;

    return 0;

}

این کد با آرایه نوشته شده و اعداد رو از کاربر میگیره و توی memory  طبقه بندی میکنه بعد در نهایت کوچکترینش رو نشون میده . 31

  #include <iostream>
using namespace std;

int main() {
   int A[10];
 int i;
 int b,c,d,e,f,g,h,j,k,l,m,H , n ;

   cin>>b>>c>>d>>e>>f>>g>>h>>j>>k>>l;
   A[0]=b;
   A[1]=c;
   A[2]=d;
   A[3]=e;
   A[4]=f;
   A[5]=g;
   A[6]=h;
   A[7]=j;
   A[8]=k;
   A[9]=l;

 for(i=0;i<10;i++)
{if(A[i]>0){cout<<A[i]<<"  " ;}  }
    return 0;

}

کدی که با آرایه نوشته شده و اعدادی که کاربر میده رو اون هایی که منفی هستن رو نبینه و چاپ نکنه ولی اون هایی که مثبت هستند رو ببینه و چاپ کنه همین . 32

  #include <iostream>
using namespace std;

int main() {
  int A[10], i , MAX , Min ;
 for(i=0;i<10;i++){
    cin>>A[i];}

 MAX = A[0] , Min = A[0];

  for(i=0;i<10;i++){
        if(A[i]>MAX){MAX = A[i];} }
  for (i=0;i<10;i++){
        if(A[i]<Min){Min = A[i];} }
  cout<<MAX<<" "<<endl;
   cout<<Min<<" "<<endl;

    return 0;
}

برنامه ای که با آرایه نوشته شده و  10 تا عدد  از کاربر میگیره و کمترین و بیشترین عدد رو به کاربر میده . 33

  #include <iostream>
using namespace std;

int main() {

  int A[5] , i ;

  for(i=0;i<5;i++){
    cin>>A[i];
  }
  for(i=5;i>=0;i--){
    cout<<A[i]<<" " b;
  }
return 0;

}

کاربر به برنامه 5 تا عدد میده برنامه بهش عدد ها رو از آخر به اول نمایش میده . 34

#include <iostream>
using namespace std;

int main() {


  int A[5],i ;

 for(i=0;i<5;i++){cin>>A[i];}

 for(i=5;i>=0;i--){cout<<A[i];}


return 0;

}

یک آرایه با 7 عنصر که کاربر به برنامه میده و هر عدد که توی این 7 مکان جای بگیره توی خروجی همراه با صفر اولش داده میشه به کاربر . (مخصوص کد ملی و ... ) . 35

#include <iostream>
using namespace std;

int main() {

    int A[5],i,m,n ;
  for(i=0;i<5;i++){cin>>A[i];}


  for(i=0;i<5;i++){A[i]%2 ;
        if(A[i]%2 == 0){cout<<"even"<<endl;}
        else if(A[i]%2 == 1){cout<<"odd"<<endl;}
  }
return 0;

}

با این کد کاربر بهم مثلا 5 عدد میده و من اون اعداد رو به این برنامه میدم و بهش میگم که کدوم عدد ها زوج و کدوماش فرده . 36

#include <iostream>
using namespace std;

int main() {

 int A[5] , i , m  ;
 cout<<"Enter m :  ";
 cin>> m ;
 for(i=0;i<5;i++){cin>>A[i];}
 for(i=0;i<5;i++){if(A[i] == m){cout<<"WooooooooooooooooooooW"<<endl;}
                  else{cout<<"Ooooooooooooooooooooohhhhh."<<endl;}
 }
return 0;

}

با این کد کاربر به برنامه اول یه عدد میده بعد برنامه 5 تا عدد در قالب آرایه میگیره و بعد اگر اون عدد توی اون آرایه بود کلمه wow  چاپ میشه و اگر نبود oh چاپ میشه . 37

#include <iostream>
using namespace std;

int main() {

 int A[5], i , sum = 0;
 for(i=0;i<5;i++){cin>>A[i];}

for(i=0;i<5;i++){
    sum = sum + A[i];
}
cout<< sum <<"  " ;
return 0;

}

با کد این برنامه کاربر میتونه  طبق کد 5 عدد بهم بده و من با این برنامه اون 5 عدد یا هر چند عدد رو جمع کنم . 38

#include <iostream>
using namespace std;

int main() {

 int A[5] , i , Minus = 0 ;
 cout<<"Enter only minus number" ;

  for(i=0;i<5;i++){cin>>A[i];}

  for(i=0;i<5;i++){
    Minus = Minus + A[i] ;
    Minus > 0 ; }
  cout<< "-(" << Minus <<")"<<endl;
  cout<< "so - cross - is plus (+) :))))) " << endl;
return 0;
}

با این کد کاربر میتونه طبق کد 5 عدد منفی بهم بده و من اون 5 عدد منفی رو با منفی هاشون جمع کنم و بهش تحویل بدم و  ( البته که اینجا یه خورده از قوانین ریاضی مثلا منفی در منفی میشه مثبت رو براش نوشتم پس داریم میبینیم که آخرش گفتم بنابراین منفی در منفی مثبت میشه پس اون منفی پشت عدد مثبت یعنی :)))) ) . 39

#include <iostream>
using namespace std;

int main(){

  int A[7] , i , x ;
  cout<<"Enter x : " ;
   cin>> x ;
 for(i=0;i<7;i++){cin>>A[i];}
  for(i=0;i<7;i++){if(x == A[i]){cout<<"Tekreryy Hast ."<<endl;}
                   else if(x != A[i]){cout<<"Tekrarryyy Nisttt ."<<endl;}   ;}

return 0;}

برنامه ای که با آرایه نوشته شده است که اگر اولین عدد را کاربر بدهد و هر عددی توی هفت عدد  و جایگاه دیگر بنویسد اگر هر کدام با عدد داده شده در اول برابر باشد پیام تکراری هست میدهد و در غیر این صورت تکراری نیست را پیام میدهد . 40

#include <iostream>

using namespace std ;

int main(){
    int x , m ;
 cout << "Enter x: ";
 cin >> x ;
  m = x % 10 ;

  cout << m <<" ";
return 0;
}

برنامه ای که کاربر عدد میده و باقیمانده اون عدد بر 10 چاپ میشه . 41

 #include <iostream>

using namespace std;

int main(){
    int age , m ;
 cout<<"Enter age : " ;
  cin>>age ;
 if(age<18){cout<<"you are not eligible";}
 else if(age > 18){cout<<"you are eligible";}

return 0;
}

برنامه ای میباشد که کاربر سن خود را وارد میکند چنانچه بالای 18 سال باشد که بتواند رای بدهد پیام شما واجد شرایط هستید چاپ میشه و اگر هم کمتر از 18 سال باشه پیام شما واجد شرایط نیستید چاپ میشه . 42

#include <iostream>

using namespace std;

int main(){
 float m , n , k , v ;
int MAX;
 cout << "Enter m , n";
  cin >> m >> n ;
  m == MAX ;
  if(m>n){m-n==k ;
    cout << k << "  " ;
  }
 n == MAX ;
 if(n>m){n-m == v ;
 cout << v <<"  ";
 }
return 0;
}

طول دو پاره خط با اعشار آن ها توسط کاربر به برنامه داده میشود سپس طول بزرگتر از کوچکتر کم میشود . 43

#include <iostream>

using namespace std;

int main(){
    int y , EE ;
 cout << "Enter (character) : " ;
 cin >> EE ;

 if( EE == y){cout << "yes" ;}
return 0;
}

برنامه ای که کاربر یه کاراکتر وارد میکنه اگر اون کاراکتر y بود  کلمه yes  چاپ میشه . 44

#include <iostream>

using namespace std;

int main(){
    int x , i ;
  cout << "Enter x" ;

  cin >> x ;
 i = x % 3 ;
 if(i == 0){cout << x << endl;
            cout <<"this program success completed !!" ;}
 else if(i != 0){cout << x+1 << endl;
                cout << "this program completed !!" ;}
return 0;
}

برنامه ای که کاربر به برنامه عدد میده و اگر اون عدد بر 3 بخش پذیر بود در نهایت خود عدد رو چاپ میکنه و مینویسه که این برنامه با موفقیت انجام شد ولی اگر بر 3 بخش پذیر نبود یک واحد به اون عدد که کاربر داده اضافه میکنه و بعدش چاپ میکنه این برنامه با موفقیت انجام شد . 45

#include <iostream>
using namespace std;

int main(){
int x , m , f , c ;
 cout <<"Enter x : (please enter in Celsius)" ;
 cin >> x ;

 f = (1.8 * x)+32 ;

 cout << f ;
return 0;
}

از کاربر دمایی به سانتی گراد دریافت میکند و فارنهایت آن را در خروجی چاپ می کند . 46

#include <iostream>
using namespace std;

int main(){
int m , x ;

  cout << "Enter m : " ;

  cin >> m ;

  if(m>0){cout << "This number is positive ." ;}
  else if (m = 0){cout << "This number is in positive .";}
  else {cout << "This number is in positive .";}
return 0;
}

عدد صحیحی را از کاربر گرفته می شود در صورت مثبت بودن عدد پیغام عدد مثبت است چاپ می شود . 47

#include <iostream>
using namespace std;

int main(){
int x ;

  cout << "Enter x : ";

  cin >> x ;

 if(x>=10 && x<=20){cout <<"YOU PASSED"<<endl;
           cout << "perfecctttttt !!"<<endl;}
 else if (x<10 && x>=0){cout << "YOU FAILED"<<endl;}
 else {cout << "your point is invalid "<<endl;}
return 0;
}

نمره یک دانشجو را دریافت میکند و در صورتی که بزرگتر یا مساوی 10 بود پیغام قبولی او را در خروجی چاپ می کند. 48

#include <iostream>
using namespace std;

int main(){
    int p ;
    string admin = "admin" ;
  string password ;

  cout << "Enter your password : ";
  cin >> password ;
    if(password == admin){cout << "wellcome our site";}
    else {cout <<"incorrect password";}
return 0;
}

رمز عبور را از کاربر دریافت میکند و چنانچه رمز Admin بود پیغام به سایت ما خوش آمدید چاپ شود و در غیر این صورت چاپ شود که رمز عبور شما ( پسورد شما )غلط است. 49

#include <iostream>
using namespace std;

int main(){

  int m , x , y ;
 cout << "Enter solar year : ";

  cin >> y ;

  m = y % 12 ;
 if(m == 0){cout << "This year is Snake";}
else if(m == 1){cout << "This year is Horse";}
else if(m == 2){cout << "This year is Sheep";}
else if(m == 3){cout << "This year is Monkey";}
else if(m == 4){cout << "This year is Chicken";}
else if(m == 5){cout << "This year is Dog";}
else if(m == 6){cout << "This year is Pig";}
else if(m == 7){cout << "This year is Mouse";}
else if(m == 8){cout << "This year is Cow";}
else if(m == 9){cout << "This year is Leopard";}
else if(m == 10){cout << "This year is Rabbit";}
else if(m == 11){cout << "This year is Whale";}
return 0;
}

در این کد کاربر به ما سال را بر اساس شمسی می دهد و سپس ما محاسبات مورد نیاز را انجام داده و سپس حیوانی که آن سال را به دوش می کشد را میفهمیم چه حیوانی است در حقیقت حیوان سال را پیدا میکنیم ؟؟!! 50

#include <iostream>
using namespace std;

int main(){
 int x , m ,n ;

 cout << "Enter your password : ";
 cin >> x ;

 if (x == 1234){cout << "your password is correct " ;}
 else if (x != 1234 ){cout << "incorrect your password " ;}
return 0;
}

اگر این کد رو اجرا کنیم با پسورد از پیش تعیین شده که 1234 هست . اگر کاربر پسورد رو درست بزنه براش چاپ میشه که پسوردت درسته اگر هم درست نباشه چاپ میشه که درست نییست پسوردتون . 51

#include <iostream>
using namespace std;

int main(){
 int x , y , z , i ;

 cout << "Enter hourse : (between 0 to 23)";
 cin >> x ;

 if(x>=6 && x<=15){cout << "Day";}
 else if (x>=16 && x<=19){cout << "Evening";}
 else if (x>=20 && x<=23){cout << "Night";}
 else if (x>=0 && x<=5){cout << "Night";}
return 0;
}

در این کد کاربر از بین ساعات شبانه روز یک ساعتی رو انتخاب میکنه و وارد میکنه و برنامه بر اون اساس بهش میگه که شب هست روز هست یا عصر . 52

#include <iostream>
using namespace std;

int main() {

 int x , y , m , n , i ;
 cout << "Enter two numbers : (two numbers should is odd or even) ";

 cin >> m >> n ;
 i = m % 2 ;
 x = n % 2 ;

 if (x==0 && i==0){cout <<m*n<<"  ";}
 else if (x==1 && i==1){cout << "is odd";}
 else {cout << m+1<<"  ";}


  return 0;
}

برنامه ای هست که کاربر دو تا عدد میده اگر  دو تا عدد هر دو به 2 بخش پذیر بودن ضرب اون دو عدد رو چاپ میکنه اگر هم نبودن چاپ میکنه فرد است و اگر متفاوت باشد اعداد هم باز توی همون دسته ی اول قرار میگیره متاسفانه . 53

#include <iostream>
using namespace std;

int main(){
 int x , y , m , n , i ;
cout << "Enter three numbers : ";
cin >> m >> n >> x ;
y = m+n ;

if (y == x){cout << "Therfore 2 bigginer numbers is mosavi ===";}
else {cout <<"barabar nistand !=";}
return 0;
}

در این کد کاربر سه تا عدد به ما میده و ما دو تا عدد اول رو با هم جمع میکنیم و با عدد سوم مقایسه میکنیم اگر برابر بود که چاپ میشه برابره اگر هم نبود چاپ میشه برابر نیست . 54

#include <iostream>
using namespace std;

int main(){
 int x , y , m , n , i ;
for(i=1 ; i<3 ; i++){cout << "  " <<i<<endl;}
for(i=3 ; i<5 ; i++){cout << i <<"  "<<endl;}
for(i=5 ; i<7 ; i++){cout << "  " <<i<<endl;}
for(i=7 ; i<9 ; i++){cout << i <<"  "<<endl;}
for(i=9 ; i<11 ; i++){cout << "  " <<i<<endl;}
for(i=11 ; i<13 ; i++){cout << i <<"  "<<endl;}
for(i=13 ; i<15 ; i++){cout << "  " <<i<<endl;}
for(i=15 ; i<17 ; i++){cout << i <<"  "<<endl;}
for(i=17 ; i<19 ; i++){cout << "  " <<i<<endl;}
for(i=19 ; i<21 ; i++){cout << i <<"  "<<endl;}
return 0;
}

با این کد شما میتوانید اعداد 1 تا 20 را به صورت دو تا دو تا و به صورت زیگزاگی یا مارپیچ ببینید. 55

#include <iostream>
using namespace std;

int main(){
 int x , y , m , n , i ;
for(i=1 ; i<2 ; i++){cout << "  " <<i<<endl<<endl;}
for(i=2 ; i<3 ; i++){cout << i <<"  "<<endl<<endl;}
for(i=3 ; i<4 ; i++){cout << "  " <<i<<endl<<endl;}
for(i=4 ; i<5 ; i++){cout << i <<"  "<<endl<<endl;}
for(i=5 ; i<6 ; i++){cout << "  " <<i<<endl<<endl;}
for(i=6 ; i<7 ; i++){cout << i <<"  "<<endl<<endl;}
for(i=7 ; i<8 ; i++){cout << "  " <<i<<endl<<endl;}
for(i=8 ; i<9 ; i++){cout << i <<"  "<<endl<<endl;}
for(i=9 ; i<10 ; i++){cout << "  " <<i<<endl<<endl;}
for(i=10 ; i<11 ; i++){cout << i <<"  "<<endl<<endl;}
return 0;
}

کد فوق ادیت شده ی کد بالاتر هست که اعداد از یک تا 10 به صورت مارپیچ به فاصله یک واحد یک واحد حرکت میکنه از بالا به پایین. 56
