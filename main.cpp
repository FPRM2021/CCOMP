 #include <iostream>

using namespace std;

int main()
{
    /*int x=8;
    float y=3;
    int s=x+y;
    int r=x-y;
    int m=x*y;
    float d=x/y;
    int a,b;
    std::cout <<"el primer numero es: "<<x<<std::endl;
    std::cout <<"el segundo numero es: "<<y<<std::endl;
    std::cout <<"la suma es: "<<s<<std::endl;
    std::cout <<"la resta es: "<<r<<std::endl;
    std::cout <<"la multiplicacion es: "<<m<<std::endl;
    std::cout <<"la division es: "<<d<<std::endl;
    //std::cout <<"a es: "<<a<<" y b es: "<<b<<std::endl;
    std::cout <<"ingrese el radio del circulo: "<<std::endl;
    cin>>a;
    float c=(3.14)*(a*a);
    cout<<"el area es: "<<c;
    cout<<"*********\t **\t\t*\t\t*\n*\t*      *    *\t       ***\t       * *\n*\t*     *      *\t      *****\t      *   *\n*\t*     *      *\t     *******\t     *     *\n*\t*      *    *\t        *\t    *       *\n*********\t **\t\t*\t   ***********";*/
    /*int p=7;
    int r=2;
    int q=6;
    int w=4;
    int x=5;
    int y=2;
    int z=p*r%q+w/x-y;*/
    /*cin>>a;
    cin>>b;
    cin>>c;
    if (a>b and a>c){
        cout<<a;
    }else{
    if(b>a and b>c){
        cout<<b;
    }else{
        cout<<c;
    }
    }*/

    /*int a;
    int b;
    int c;
    int d;
    int e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    if (a>b and a>c and a>d and a>e){
        cout<<a;
    }else{
        if(b>a and b>c and b>d and b>e){
        cout<<b;}
        else{
        if(c>a and c>b and c>d and c>e){
        cout<<c;}
        else{
        if(d>a and d>b and d>c and d>e){
        cout<<d;}
        else{
        if(e>a and e>b and e>c and e>d){
        cout<<e;}}}}}
        if (a>b and a>c and a>d and a>e){
        cout<<" "<<a;
    }else{
        if(b<a and b<c and b<d and b<e){
        cout<<" "<<b;}
        else{
        if(c<a and c<b and c<d and c<e){
        cout<<" "<<c;}
        else{
        if(d<a and d<b and d<c and d<e){
        cout<<" "<<d;}
        else{
        if(e<a and e<b and e<c and e<d){
        cout<<" "<<e;}}}}}*/
    /*int n;
    cin>>n;
    if (n%2){
        cout<<"impar";
    }else{
    cout<<"par";
    }
    int a;
    int b;
    cin>>a;
    cin>>b;
    if (a%b){
        cout<<"no es multiplo";
    }else{
        cout<<"si es multiplo";
    }
    int x;
    cin>>x;

    for(int i=10000;i>=1;i=i/10){
        int tmp=x/i;
        cout<<tmp<<" ";
        x=x%i;
    }*/

    int mayor=0;
    int menor=0;
    int suma=0;
    int a;
    int n;
    float promedio=0;
    cin>>n;
    cin>>a;
    mayor=a;
    menor=a;
    for(int i=1; i<n; i=i+1){
        cin>>a;
        if (a>mayor){
            mayor=a;
        }else if(a<menor){
            menor=a;
        suma+=a;
        }
    }
    promedio=suma/n;
    cout<<"promedio: "<<promedio<<" mayor: "<<mayor<<" menor: "<<menor<<endl;
    return 0;
}
