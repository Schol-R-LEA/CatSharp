# CatSharp

CatSharp (cat#, cats) is a programming language based on JS, C# etc

# Examples
This application will print on Console info with content "Hello Cat#!"
```cat#
pack Example {
  # import statements can have ";" but don't have to
  imp CatSharp
  class Main {
    public void main(String[] args) {
      # <Class|pack>Class>.<func>(<args>)
      Example.Main(args);
    }
  }

  class Example {
    public static void Main(String[] args) {
      CatSharp.Console.print(CatSharp.PrintTypes.Info, "Hello Cat#!");
    }
  }
}
```
# Docs
To start coding in Cat# you need to know how the base should look like. At first you need to have:
```cat#
pack <packageName> {

}
```
In package you need to declare minimum 1 class with:
```cat#
public void main(String[] args) {

}
```
this is requirenments of .cat# application