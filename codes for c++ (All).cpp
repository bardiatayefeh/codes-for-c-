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

جمع 

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

میانگین سه عدد  x , y , z



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


میانگین دو عدد


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

میانگین سه عدد با خورده 


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

محیط و مساحت مربع با ضلu a



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


مقدار پول باقی مانده که باید با کمترین مقدار اسکناس داده شود




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


محیط و مساحت دایره ای که شعاعش را کاربر بدهد 



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


فاکتوریل با مقدار n ای که کاربر میده 


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




مقایسه دو عدد که توسط کاربر داده میشود !!! 





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


مثبت و منفی بودن عددی که توسط کاربر داده میشود  




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


نمره ای که کاربر میده و منفی بهش میگم بهش صورت توصیفی چجوری داری کار میکنی !!



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


با این کد میشه فهمید که سال مورد نظر کاربر میده کبیسه هست یا نه !!!



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


با این کد با طول اضلاعی که 3 عدد هستند که کاربر بهش ما میده ما با حساب کتاب بهش میگیم که با این سه عدد میشه تشکیل یه مثلث ( حالا هر مثلثی ) بده یا نه !!!





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


برنامه ای که کاربر بهم مقدار مصرفی از کنتور آبش رو برنامه اساس متر مکعب بهم میده تا منفی با حساب کردن هر مقدار یعنی هر مقدار بازه ای بهش بگم که طبق اون تعرفه چقدر باید بهش اداره آب پول بده و همین !!!






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





برنامه ای که بهش درصد تخفیف داده شده رو بهش میدیم و قیمت اصلی رو همین میدیم قیمتی که باید تخفیف بدیم میده ولی باید این قیمت تخفیف رو از کل قیمت اصلی کم کنیم  .!!!!








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



برنامه ای که نمره 10 دانشجو رو میگیره و میانگین آن ها رو حساب میکنه 






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


برنامه ای  که کاربر عدد وارد میکند و با اون عدد فاکتوریل یا ضرب از 1 تا اون عدد که کاربر داده انجام میشه و جوابش چاپ میشه فقط جوابش 





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



برنامه ای که کاربر یک عدد میده و برنامه میگیره اون عدد رو و درصد این برنامه فقط ، بهش طول 5 بار همون عدد رو درصد یک خط تکرار میکنه 






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

برنامه ای که کاربر مقدار n  رو میده و ما یه جوری برنامه رو نوشتیم تا اعداد قبل از اون رو برامون چاپ کنه و تا صفر بره به صورت نزولی هست این اعداد ..





#include <iostream>
using namespace std;
int main() {

   int i = 1 , n ;

cout << "Enter n :..." ;
 cin >> n ;

   while (i <= n){
  cout << i <<"  " ;
    i++ ;
 }
return 0;

}


برنامه ای که n رو از کاربر میگیره بعد به صورت نزولی اعداد قبل اون رو تا عدد 1 مینویسه و چاپ میکنه    . 




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



کاربر به من مقدار میده و به اون مقدار که اون میده من میرم و به برنامه دستور میدم که به همون مقدار ستاره (*) چاپ بکنه  و همینننن ..



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


برنامه ای بنویسید که یک عدد از کاربر بگیرد و بررسی کند زوج است یا فرد ؟



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



برنامه ای بنویسید که یک عدد صحیح مثبت از کاربر بگیرد و مجموع ارقام آن را چاپ کند 



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


برنامه ای بنویسید که شماره یک ماه (1 تا 12) رو از کاربر بگیرد و بررسی کند ، اگر ماه در بازه ی 1 تا 3 بود ، پیام بهار را چاپ کند و اگر ماه در بازه ی 4 تا 6 بود تابستان را چاپ کند و اگر ماه در بازه ی 7 تا 9 بود پاییز را چاپ کند و اگر ماه در بازه ی 10 تا 12 بود زمستان را چاپ کند .



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


نمایش جدول ضرب : از کاربر بخواه یک عدد وارد کند و جدول ضرب اون  عدد رو تا 10 چاپ کند. (3*1=3 و 3*2=6 و ...)




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
نمره بالای 18 : عالی .



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

تشخیص ساعت بازه یا بسته بودن فروشگاه: برنامه ای بنویسید که یک ساعت مثلا (8 تا 23 )را از کاربر بگیرد و بررسی کند آیا فروشگاه باز است یا بسته ؟
فروشگاه از ساعت 8 صبح تا 10 شب باز است.
اگر ساعت خارح از این محدوده بود.پیام فروشگاه بسته است را چاپ کند .



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
تومن تخفیف نداره و بین 100 تومن تا 500 تومن 10 درصد تخفیف داره و بیشتر از 500 تومن همون 20 درصد تخفیف داره  . و این برنامه بر اساس قیمتی که کاربر بهش میده میگه که فروشگاه باید جقدر به شماره تخفیف بدهد.




#include <iostream>
using namespace std;

int main() {
    int number[6] = {12,23,15,62,58,40} , sum = 0 ;
    for(int i=0 ; i<=5 ; i++){
   sum = sum + number[i];
    }

    cout << sum ;
    return 0;
}





کدی که با آرایه نوشته شده و اعداد داخل کروشه رو میگیره بعد جمع میکنه اون ها رو 



#include <iostream>
using namespace std;

int main() {
  int i= 5 ;
  int A[i]{24,14,36,27,78};

  for(i=0;i<5;i++){cout<<A[i]<<"  " ;}

    return 0;
}



کدی که با آرایه نوشته شده و اعداد داخل کروشه میتونن عوض بشن و اون عدد ها رو چاپ میکنه 





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

این کد با آرایه نوشته شده و اعداد رو از کاربر میگیره و توی memory  طبقه بندی میکنه بعد بزرگترینش رو نشون میده در نهایت .


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

این کد با آرایه نوشته شده و اعداد رو از کاربر میگیره و توی memory طبقه بندی میکنه و بعد کوچک ترین رو نشون میده و نمایش میده .


  
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


کدی که با آرایه نوشته شده و اعدادی که کاربر میده رو اون هایی که منفی هستن رو نبینه و چاپ نکنه ولی اون هایی که مثبت هستند رو ببینه و چاپ کنه همین .




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



برنامه ای که با آرایه نوشته شده و  10 تا عدد  از کاربر میگیره و کوچکترین و بیشترین عدد رو بهه کاربر میده . 
  
  
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




کاربر بهم 5 تا عدد میده من بهش عدد ها رو از آخر به اول نمایش میدم .


#include <iostream>
using namespace std;

int main() {


  int A[5],i ;

 for(i=0;i<5;i++){cin>>A[i];}

 for(i=5;i>=0;i--){cout<<A[i];}


return 0;

}

یک آرایه با 7 عنصر که کاربر بهم میده ساختم و هر عدد که توی این 7 مکان جای بگیره توی خروجی همراه با صفر اولش داده میشه به کاربر . (مخصوص کد ملی و ... )



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



با این کد کاربر بهم مثلا 5 عدد میده و من اون اعداد رو به این برنامه میدم و بهش میگم که کدوم عدد ها زوج و کدوماش فرده .



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


با این کد کاربر به من اول یه عدد میده بعد 5 تا عدد در قالب آرایه میگیرم و بعد اگر اون عدد توی اون آرایه بود کلمه wow  کشیده و اگر نبود oh  کشیده می شود .



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


با کد این برنامه کاربر میتونه  طبق کد 5 عدد بهم بده و من با این برنامه اون 5 عدد یا هر چند عدد رو جمع کنم . 


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


با این کدِ من کاربر میتونه طبق کد 5 عدد منفی بهم بده و من اون 5 عدد منفی رو با منفی هاشون جمع کنم و بهش تحویل بدم و البته که اینجا یه خورده از قوانین ریاضی مثلا منفی در منفی میشه مثبت رو بهش خوروندم پس داریم میبینیم که آخرش گفتم بنابراین منفی در منفی مثبت میشه پس اون منفی پشت عدد مثبت یعنی :)))) 


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


برنامه ای که با آرایه نوشته شده است که اگر اولین عدد را کاربر بدهد و هر عددی توی هفت عدد  و جایگاه دیگر بنویسد اگر هر کدام با عدد داده شده در اول برابر باشد پیام تکراری هست میدهد و در غیر این صورت تکراری نیست . پیام میدهد . 



*************************************************************************************************************************************************************
در این مرحله بعد از * ها تمارین نوشته میشود و بعد از فرستادن به جایی دیگر انتقال داده میشود .
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
 
 111
 
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

222


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

333


#include <iostream>

using namespace std;

int main(){
    int y , EE ;
 cout << "Enter (character) : " ;
 cin >> EE ;

 if( EE == y){cout << "yes" ;}
return 0;
}

444


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

555

#include <iostream>

using namespace std;

int main(){
  int m , x ;
 float k ;
 cout << "Enter m : " ;

 cin >> m ;
 x == m % 2 ;
 if(x = 0){ //k == m/10 ;
        cout <<m%10 ;}
return 0;
}

666 ایراد داره ولی نمیدونم ایرادش چیه ؟؟



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
   
   جواب سوال 8 

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
جواب سوال 9 

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

جواب سوال 11 

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

جواب سوال 12 

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

جواب سوال 13 

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
جواب سوال 14 


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

جواب سوال 15 

*******************************************************************************************************************************************

کد ها در این مورد عادی می شود . 

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

در این کد کاربر به ما سال را بر اساس شمسی می دهد و سپس با محاسبات مورد نیاز را انجام داده و سپس حیوانی که آن سال را به دوش می کشد را میفهمیم چه حیوانی است ؟؟!!

 
