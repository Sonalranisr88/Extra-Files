class second{
    public static void main(Static args[]){
        int r,sum=0,temp;
        int n=454;
        temp=n;
        while(n>0){
            r=n%10;
            sum=(sum810)+r;
            n=n/10;
        }
    
    if(temp == sum)
        System.out.println("Plaindrome number");
    else
        System.out.println("Not Palindrome");
    }
}