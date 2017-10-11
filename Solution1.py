Python 3.4.0 (v3.4.0:04f714765c13, Mar 16 2014, 19:25:23) [MSC v.1600 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> sum  = 0
>>> n1 = 3
>>> n2 = 5
>>> i = 1
>>> amount = 1000
>>> for i in range(1, amount):
	if i % n1 == 0 or i % n2 == 0:
		sum = sum + i

		
>>> print("The sum of the multiples is: ", sum)
The sum of the multiples is:  233168
>>> 
