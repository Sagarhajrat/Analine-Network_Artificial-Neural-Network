/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    cout<<"Neural Networks by MS Khan"<<endl;
    cout<<"*********************************************"<<endl;
    cout<<"____________CASE 1_____________"<<endl;
    double w1=0.2;
    double w2=0.2;
    double a=0.2;
    double b=0.2;
    cout<<"W1= "<<w1<<endl<<"W2= "<<w2<<endl<<"alpha= "<<a<<endl<<"b= "<<b<<endl;
    double yin,lms,error;
    double x1,x2,target;
    cout<<"Enter x1 and x2 and target"<<endl;
    cin>>x1>>x2>>target;
    cout<<"x1= "<<x1<<endl<<"x2= "<<x2<<endl<<"target= "<<target<<endl;
    yin=(b+(x1*w1)+(x2*w2));
    lms=(target-yin);
    error=(lms)*(lms);
    cout<<"yin= "<<yin<<endl<<"lms= "<<lms<<endl<<"error= "<<error<<endl;
    double w1n,w2n,bn,yinn,lmsn,errorn;
    w1n=(w1+(a*lms*x1));
    w2n=(w2+(a*lms*x2));
    bn=(b+(a*lms));
    cout<<"w1(new)= "<<w1n<<endl<<"w2(new)= "<<w2n<<endl<<"b(new)= "<<bn<<endl;
    yinn=(bn+(x1*w1n)+(x2*w2n));
    lmsn=(target-yinn);
    errorn=(lmsn)*(lmsn);
    cout<<"yinn= "<<yinn<<endl<<"lmsn= "<<lmsn<<endl<<"errorn= "<<errorn<<endl;
    cout<<"*********************************************"<<endl;
    cout<<"____________CASE 2_____________"<<endl;
    cout<<"W1= "<<w1n<<endl<<"W2= "<<w2n<<endl<<"alpha= "<<a<<endl<<"b= "<<bn<<endl;
    double yin2,lms2,error2;
    double x12,x22,target2;
    cout<<"Enter x1 and x2 and target"<<endl;
    cin>>x12>>x22>>target2;
    cout<<"x1= "<<x12<<endl<<"x2= "<<x22<<endl<<"target= "<<target2<<endl;
    yin2=(bn+(x12*w1n)+(x22*w2n));
    lms2=(target2-yin2);
    error2=(lms2)*(lms2);
    cout<<"yin= "<<yin2<<endl<<"lms= "<<lms2<<endl<<"error= "<<error2<<endl;
    double w1n2,w2n2,bn2,yinn2,lmsn2,errorn2;
    w1n2=(w1n+(a*lms2*x12));
    w2n2=(w2n+(a*lms2*x22));
    bn2=(bn+(a*lms2));
    cout<<"w1(new)= "<<w1n2<<endl<<"w2(new)= "<<w2n2<<endl<<"b(new)= "<<bn2<<endl;
    yinn2=(bn2+(x12*w1n2)+(x22*w2n2));
    lmsn2=(target2-yinn2);
    errorn2=(lmsn2)*(lmsn2);
    cout<<"yinn= "<<yinn2<<endl<<"lmsn= "<<lmsn2<<endl<<"errorn= "<<errorn2<<endl;
    cout<<"*********************************************"<<endl;
    cout<<"____________CASE 3_____________"<<endl;
    cout<<"W1= "<<w1n2<<endl<<"W2= "<<w2n2<<endl<<"alpha= "<<a<<endl<<"b= "<<bn2<<endl;
    double yin3,lms3,error3;
    double x13,x23,target3;
    cout<<"Enter x1 and x2 and target"<<endl;
    cin>>x13>>x23>>target3;
    cout<<"x1= "<<x13<<endl<<"x2= "<<x23<<endl<<"target= "<<target3<<endl;
    yin3=(bn2+(x13*w1n2)+(x23*w2n2));
    lms3=(target3-yin3);
    error3=(lms3)*(lms3);
    cout<<"yin= "<<yin3<<endl<<"lms= "<<lms3<<endl<<"error= "<<error3<<endl;
    double w1n3,w2n3,bn3,yinn3,lmsn3,errorn3;
    w1n3=(w1n2+(a*lms3*x13));
    w2n3=(w2n2+(a*lms3*x23));
    bn3=(bn2+(a*lms3));
    cout<<"w1(new)= "<<w1n3<<endl<<"w2(new)= "<<w2n3<<endl<<"b(new)= "<<bn3<<endl;
    yinn3=(bn3+(x13*w1n3)+(x23*w2n3));
    lmsn3=(target3-yinn3);
    errorn3=(lmsn3)*(lmsn3);
    cout<<"yinn= "<<yinn3<<endl<<"lmsn= "<<lmsn3<<endl<<"errorn= "<<errorn3<<endl;
    cout<<"*********************************************"<<endl;
    cout<<"____________CASE 4_____________"<<endl;
    cout<<"W1= "<<w1n3<<endl<<"W2= "<<w2n3<<endl<<"alpha= "<<a<<endl<<"b= "<<bn3<<endl;
    double yin4,lms4,error4;
    double x14,x24,target4;
    cout<<"Enter x1 and x2 and target"<<endl;
    cin>>x14>>x24>>target4;
    cout<<"x1= "<<x14<<endl<<"x2= "<<x24<<endl<<"target= "<<target4<<endl;
    yin4=(bn3+(x14*w1n3)+(x24*w2n3));
    lms4=(target4-yin4);
    error4=(lms4)*(lms4);
    cout<<"yin= "<<yin4<<endl<<"lms= "<<lms4<<endl<<"error= "<<error4<<endl;
    double w1n4,w2n4,bn4,yinn4,lmsn4,errorn4;
    w1n4=(w1n3+(a*lms4*x14));
    w2n4=(w2n3+(a*lms4*x24));
    bn4=(bn3+(a*lms4));
    cout<<"w1(new)= "<<w1n4<<endl<<"w2(new)= "<<w2n4<<endl<<"b(new)= "<<bn4<<endl;
    yinn4=(bn4+(x14*w1n4)+(x24*w2n4));
    lmsn4=(target4-yinn4);
    errorn4=(lmsn4)*(lmsn4);
    cout<<"yinn= "<<yinn4<<endl<<"lmsn= "<<lmsn4<<endl<<"errorn= "<<errorn4<<endl;
    cout<<"*********************************************"<<endl;
    return 0;
}
