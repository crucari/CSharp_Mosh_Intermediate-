//Topics:
//signature of methods
//method overloading
//Params modifer
//Ref modifier
//Out modifier

// Signatue of Method =
// -Name
// -Number and Type of Parameters

public class Point
{
    public void Move(int x, int y) {}  //point class with a method called move

}

//Overloading Methods:
//Having a method with the same name but different signatures

public class Point
{
    public void Move(int x, int y){}

    public void Move(Point newLocation) {}

    public void Move(Point newLocation, int speed) {}  //can create an animation

}

//A method with varying number of parameters

public class Calculator //has at least 3 overloads for the add method //not very effiective
{
    public int Add(int n1, int n2){}
    public int Add(int n1, int n2, int n3) {}
    public int Add(int n1, int n2, int n3, int n4){}

}

public class Calculator
{
    public int Add(int[] numbers){}
}

var result = calculator.Add(new int[]{ 1, 2, 3, 4 });
var result = calculator.Add(1, 2, 3, 4);


// The Ref Modifer:
public class MyClass
{
    public void MyMethod(int a)
    {
        a += 2;  //adds 2 to the interger
    }
}

var a = 1;  //
myClass.MyMethod(a);  //What is the result of a after reurning from this method? It's 1 becuasea is a value type.

//---
//The ref modifier

public class Weirdo
{
    public void DpAWeirdThing(ref int a)
    {
        a += 2;
    }
}

var a = 1;
weirdo.DoAWeirdThing(ref a);  //a 3 is returned

//out modifier
public class MyClass
{
    public void MyMethod(out int result)
    {
        result =1;
    }
}

int a;
myClass.MyMethod(out a);  //with out this method can return a value to the caller.

//----

namespace Methods
{
     public class Point
     {
         public int X;
         public int Y;

         public Point(int x, int y)
         {
             this.X = z;
             this.Y = y;
         }

         public void Move(int x, int y)
         {

         }
     }
}
