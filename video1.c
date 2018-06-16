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

//Using an object
var person = new Person();  //object
person.Name = "Mosh"; (//field name + value)
person.Introduce();  //method

//class members: Instance vs Static/
//Instance member is accessible from an object. Ex below

var person = new Person();
person.Introduce();

//A static member is accessible from the class
//Why use static members: To represent concepts that are singleton(meaning we should only have one instance of the concept in the memory, DateTime.Now, and Console.WriteLine()
Console.WriteLine();  //console is the class, writeline is the static method

//Declaring static members

public class Person
{
    public static int PeopleCount = 0; //use the static keyword after the access modifyer
}