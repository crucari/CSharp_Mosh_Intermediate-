namespace CSharpIntermediate
{
    public class Customer   //
    {
        public int Id;
        public string Name;
        public List<Order> Orders;
    }

        public Customer()
        {
             Orders = new List<Order>(); //whenever you have a class and that class has a list of objects, make sure to always initialize
        }

        public Customer(int id)
            : this() //first it will call the constructor without parameters
        {
            this.Id = id;
        }

        public Customer(int id, string name)
           : this(id)
        {
            // this.Id - id;
            this.Name = name;
        }
    }
}

//-------------
//supplement
 public class Person
    {
        // Constructor that takes no arguments:
        public Person()
        {
            Name = "unknown";
        }


 // Constructor that takes one argument:
        public Person(string name)
        {
            Name = name;
        }

        // Auto-implemented readonly property:
        public string Name { get; }

        // Method that overrides the base class (System.Object) implementation.
        public override string ToString()
        {
            return Name.ToString();
        }
    }

        class TestPerson
    {
        static void Main()
        {
            // Call the constructor that has no parameters.
            var person1 = new Person();
            Console.WriteLine(person1.Name);

             // Call the constructor that has one parameter.
            var person2 = new Person("Sarah Jones");
            Console.WriteLine(person2.Name);
            // OR use ToString method to get string representation of the person2 instance:
            Console.WriteLine(person2.ToString());

            Console.WriteLine("Press any key to exit.");
            Console.ReadKey();
        }
    }

______

public class Person
{
    public string Name { get; set; }
    public int Age { get; set; }
    public Person(string name, int age)
    {
        Name = name;
        Age = age;
    }
    //Other properties, methods, events...
}

class Program
{
    static void Main()
    {