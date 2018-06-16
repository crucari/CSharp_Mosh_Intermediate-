//work from Mosh's C Sharp Intermediate course to go here//

//declaring a class
public class Person
{
    public string Name;  //field, starting with an access modifyer (public) and data tyoe(string) + identifier (Name)

    public void Introduct()  //method, return type void)doesn't return
    {
        Console.WriteLine("Hi, my name is " + Name); //displaying name of person on console
    }
}

//creating an object

Person person = new Person();   //(type, identifyier) = (new operator,name of class=person) //we're initializing an instance of the class

var person = new Person();  //shorter way to write the above. var is a c sharp keyword. We use var to keep us from typing the full name of a class+ to avoid duplication