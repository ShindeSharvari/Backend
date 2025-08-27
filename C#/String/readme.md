String in C#
✅ What is a String?

A string in C# is a sequence of characters used to store text. It is represented by the System.String class.

✅ What is Immutable?

Immutable means cannot be changed after creation.
In C#, a string is immutable, which means once a string object is created, it cannot be modified.

✅ Why String is Immutable in C#?

Security: Strings are often used for sensitive data like URLs, file paths, and database connections. Immutability prevents changes after creation.

Thread Safety: Multiple threads can access the same string safely without locking.

Performance: String interning works because strings do not change.

Hashing: Strings are used as keys in collections like dictionaries. Immutability ensures the hash value does not change.

✅ Advantages of Immutability

Safe to share across threads.

No unexpected changes in string content.

Works efficiently with string interning and caching.

✅ Common String Methods

ToUpper() → Converts to uppercase

ToLower() → Converts to lowercase

Substring(start, length) → Extracts part of a string

IndexOf('a') → Finds index of a character

Replace('a','x') → Replaces characters

Trim() → Removes leading and trailing spaces

Split(' ') → Splits string into an array
