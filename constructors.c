// Constructors- A method that is called when an instance of a class is created.
// Why we need them: Used to put an object in an early state. To initialize some fields in the class

//How to declare a constructor. They have the exact same name as a class
public class Customer  //class called Customer
{
    public Customer()   //constructor (they do not have a return type, not even void) (Currently it has no parameters, as such the C sharp complier creates one for you. )
    {

    }
}

//example
public class Customer  //class called Customer
{
    public string Name;  //field name, pascal case

    public Customer(string name)  //has a parameter, camel case
    {
        this.Name = name;  //this references the current object
    }
}

//example
Var customer = new Customer("John"); //name supplied. The string that is passed will be copied to the name field


//Constructor Overloading  //method by the same name but different method signature(uniquely identifies a method: return type, name, and the types//numbers in its parameters)
//this ex has 3 constructors
public class Customer
{
    public Customer() {...}  //no parameters

    public Customer(string name) {...}  //takes 1 parameter of type string

    public Customer(int id, string name) {...}  //takes 1 interger and 1 string as parameter
}

//Why overloading?
//to make intialzintion of the class easier.

// Example:
namespace CSharpIntermediate
{
    public class Customer

    class Program
    {
        static void Main(string[] args)
    {
    }
   }
}
