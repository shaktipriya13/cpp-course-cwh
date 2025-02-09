// DIFFERENCES 
// Unions and structures (structs) in C++ are both used to aggregate different data types together, but they have some fundamental differences in how they store and manage their members.

// ### Structures (structs):
// - **Members Storage:** In a struct, each member has its own allocated memory space.
// - **Memory Consumption:** The memory consumed by a struct is the sum of memory required for each member.
// - **Accessing Members:** You can access any member of a struct at any time, and changing one member doesn't affect others.

// Example:
// ```cpp
struct Person {
    int age;
    float height;
    char name[20];
};
// ```

// ### Unions:
// - **Shared Memory Space:** In a union, all members share the same memory space. Only one member can hold a value at any given time.
// - **Memory Consumption:** The memory consumed by a union is determined by the size of the largest member.
// - **Accessing Members:** Changing the value of one member affects the values of other members because they all share the same memory space.

// Example:
// ```cpp
union MyUnion {
    int i;
    float f;
    char c;
};
// ```

// ### Differences Summary:
// 1. **Memory Usage:** Unions use the same memory space for all members, while structs allocate separate memory for each member.
// 2. **Size:** Unions take up memory based on the largest member, while structs sum up memory for all members.
// 3. **Access:** With unions, modifying one member can affect the values of other members, unlike structs where members are independent.

// Unions are useful when you need to represent different data types in the same memory space, but they require caution in accessing members to avoid unintended consequences due to shared memory.

//  Structs, on the other hand, are more versatile and commonly used for organizing different types of data without restrictions on accessing members.