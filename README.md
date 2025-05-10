# Simple Banking System (C++)

This project is a simple command-line banking system implemented in C++ using object-oriented programming principles.

## Features

The system allows users to:

- Register a new account
- Log in with username and password (with 3 attempts limit)
- Perform a "first-time login" setup to configure IBAN and withdrawal PIN
- Add funds to account
- View account information
- Withdraw funds
- Log out

### Planned improvements (future features):

- Save and load user data from a file
- Delete account
- Password hashing
- Additional input validation


## Technologies Used

- C++17
- CMake for build configuration
- Modular multi-file project structure

## How to Compile and Run

This project uses **CMake** for cross-platform compilation.

### Steps:

1. Open a terminal in the project root directory.
2. Create a build directory:

   mkdir build
   cd build

3. Generate build files with CMake:

   cmake ..

4. Build the project:

   cmake --build .

5. Run the executable:

   ./skilltest

Alternatively, you can open the project in **CLion** build directly.

## Example Usage

1. Start the program.
2. Register a new user with name, age, and password.
3. Log in using the registered username and password.
4. On first login, set IBAN and withdrawal PIN.
5. Access the main menu to add funds or check account info.


## License

This project is provided for educational purposes. Feel free to use and modify for learning.
