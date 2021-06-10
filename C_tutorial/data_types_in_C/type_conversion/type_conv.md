# Type Conversion(Casting) in C
   
Typecasting is converting one data type into another one. It is also called as data conversion or type conversion. It is one of the important concepts introduced in 'C' programming.

'C' programming provides two types of type casting operations:

## 1. Implicit Type Conversion

* Done by the compiler on its own, without any external trigger from the user.
* Generally takes place when in an expression more than one data type is present. In such condition type conversion (type promotion) takes place to avoid loss of data.
* All the data types of the variables are upgraded to the data type of the variable with largest data type.

* It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).

## 2. Explicit Type Conversion

This process is also called type casting and it is user defined. Here the user can type cast the result to make it of a particular data type.
