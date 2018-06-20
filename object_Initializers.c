//Object Initializers: A syntax for quickly initialising an object without the need to call one of its constructors
//Why: To avoid creating multiple constructors

//Constructor- To initlize an obejct and put it in an early state


//ex:
//
public class Person
{
    public int Id;

    public string FirstName;

    public string LastName;

    public DateTime Birthdate;
}

________

//constructors for varies fields, we end up with this

public class Person
{
    public Person(int id) {}

    public Person(int id, string firstName) {}

    public Person(int id, string firstName, string lastName) {}

    public Person(int id, DateTime birthdate) {}
}

//above can become messy and out of control

// ---with an object initalizer we don't need any constructors, we can initialize it like this---

var person = new Person
             {
                 FirstName = "Mosh",
                 LastName = "Hamedani"
             };

//an object cannot behave without passing some inital values