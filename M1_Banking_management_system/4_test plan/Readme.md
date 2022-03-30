
## High level test plan
| Test ID	| Description|	Expected Input|	Expected Output|	Actual Output|	Type Of Test|
|-----| ---------------| -----------| -----------| -------------| ----------|
| H_01|	Check if the user selects an option from the available choices, if not from choice, given it will break|	Integers from menu|	Should display message asking user to select from given values|	Exact message configured as per the case|	Requirement based|
| H_02|	Check if the user selects an option from the available choices, and if yes they it will continue the case|	Integer from menu	Redirect to corresponding view|	Redirecting to corresponding view	|Requirement based|
|H_03|	User enters valid credentials during login|	Username and Password of the user|	If success, user will be redirected to the internal menu with different functions to perform|	User is getting redirected to the correct menu where all actions that can be performed are displayed|	Technical|
|H_04|	User enters Invalid credentials during login|	Username and Password of the user|	If invalid credentials are provided, process breaks and user will be forced to exit.|	SUCCESS	|Technical|
## Low level test plan
|Test ID|	Description|	Expected Input|	Expected Output|	Actual Output|	Type Of Test|
|---------| ------------| ----------| ------------| ------------| ------------|
| L_01|	Logout should be successful and redirect to login page again|	User integer input|	Redirection to Login page|	Page got redirected to Login page|	Scenario based|

## USAGE UNITY TEST FRAMEWORK:
The Unity Test Framework (UTF) enables Unity users to test their code in both Edit Mode and Play Mode, and also on target platforms such as Standalone, Android, iOS, etc.
UTF uses a Unity integration of NUnit library, which is an open-source unit testing library for .Net languages.
It is possible to extend the Unity Test Framework (UTF) in many ways, for custom workflows for your projects and for other packages to build on top of UTF.


## Best Practices

 - [x] Checked all the possibilities of output
 - [x] Mentioned all the inputs for better understanding
 - [x] Presented in tabular form for easy understanding
 - [x] Both High level and low level Test plans are shown
 
 
