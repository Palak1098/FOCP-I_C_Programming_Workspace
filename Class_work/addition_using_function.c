# include<stdio.h>
// function definition
int add(int x,int y){
    return x+y;
}

int main(void) // will be executed first
{
    int x,y;
    x=10;
    y=20;
    int result = add(x,y); // execute hoke jump krega on line number 1 then 2 krega execute after that wapas line 13,14 pe aaye (print wali statement pe)
    printf("%d\n",result); // print result 
    printf("%d\n",add(12,5)); // function call
    return 0; 
}