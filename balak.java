package com.balak.balak1;


// javac -d . balak.java
class Outer{
    public static void main(String[] args){
        System.out.println("Hello World");

        Aayush a = new Aayush();
        a.m1();

        Kanhiya b = new Kanhiya();
        b.m2();
    }
}


class Kanhiya{
    public void m2(){
        System.out.println("hello Kanhiya");
    }
}
class Aayush{

   public void m1(){
       System.out.println("Hello Gate Topper");
   }
}