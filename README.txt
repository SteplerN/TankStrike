// (C) Stepler 2025 - 2025 

/*


If you want to modify the code of my project, then read this.


///////////////////////////////////////////////////////////////

HOW TO NAME THE VARIABLES?

If you change the code (excpet "draw" method in the private sections), you must follow these naming rules
{

	classes/structures: PascalCase
	functions/methods: camelCase (I really hate it, but SFML uses it)
	static functions: s_camelCase
	private class members: m_PascalCase
	constants: c_PascalCase
	global variables: g_PascalCase
	parametrs: p_PascalCase
	local variables: snake_case (No prefixes for it!)

	{ always in the next line of code!!!


	VERY IMPORTANT!!! :

	1. \n before for/while/functions/class/ect(or etc, I dont remember)... and \n after them:

	2. Try to use modern C++ (for example: std::println instead of std::cout)!

	3. If body starts with \n it should ends with it. Anso if ends ... should starts with \n

	4. \n before and after protected/private/public:

	5. If its possible to use protected instead of private do it (I love this word)

	6. Do not make names shorter (like m_HP insted of m_HealthPoints, p_sth instead of p_Something)

	Example of the "Very Cool Code":

	class MyClass
	{

	private:

		int m_SomeUselessData = 52;

	public:

		void myFunction(int p_SomeUselessParametr = 52)
		{

			int x = 5;

			if (x == 5)
			{
				std::println("I got the best number: {}!", x);
			}

			for ...
			{
				// do something
			}

		}

	};

	using CAPSLOCK/camelCase(if its not a function) styles is a crime and must lead you to very awful aftermaths!!!

}

///////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////

WHAT TOOLS HAVE I TO USE?

You have to use these tools
{
	C++ 20+
	SFML 2.5.1 (ONLY it)
}

///////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////

OTHER:

try to follow SOLID and use smart pointers. Happy Coding!

///////////////////////////////////////////////////////////////


*/


// И помните: Слава C++, Python'исты тоже гуманитарии!