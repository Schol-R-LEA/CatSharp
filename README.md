# CatSharp

CatSharp (cat#, cats) is a programming language based on JS, C# etc

# Examples
This application will print on Console info with content "Hello Cat#!"
```cat#
pack Example {
  imp CatSharp;
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
