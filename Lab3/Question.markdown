#Requirement 
###**Password Verifier**
Imagine you are developing a software package that requires users to enter their own passwords. Your software requires that users’ passwords meet the following criteria:

1. The password should be at least six characters long. You can set the maximum size and let the user know.
2. The password should contain at least one uppercase and at least one lowercase letter.
3. The password should have at least one digit.

Write a program that asks for a password into a c-string and then verifies that it meets the stated criteria. If it doesn’t, the program should display a message telling the user why. Write a separate function to validate the password. The main function should ask for a new password until the user enters one that is acceptable.

You will need to set the maximum number of characters that can be entered by the user because the c-string variable will have a static size. Define a constant to hold the size.
