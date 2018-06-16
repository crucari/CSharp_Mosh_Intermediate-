
using System;

namespace Classes
{
    public class Person  //type class + anme
    {
        public string Name;  //filed for the class

public void Introduce(string to) //method + parameter
{
    console.WriteLine("Hi {0}, I am {1}", to, Name);  //format string(template), the 0 and 1 are parameters to be filled. 0 = to, 1 =name
}

public static Person Parse(string str)  //parese method to create a person object from a string
{
    var person = new Person();  //create a person object, and set a name field based on the str here, and return the person
    person.Name = str;

    return person;
}
}

class Program  //use case for static member
{
    static void Main(string[] args)
    {
        var person = Person.Parse("John");  //this returns a person object
        person. Introduce("Mosh");//method, introduct self to mosh

    }
}
}