# User registration refactoring kata

## Goal
Refactor the UserResgistrationController class to remove the couplings.

## First iteration: decouple from Framework

1. Do not write Business logic on the Controllers → Instead move the logic to a Use Case class.
2. Do not use the Inputs of the Framework as arguments of your Use Case class.
3. Create your own exceptions to handle errors.
4. Do not use the Framework response as the response of your Use Case class.

## Second iteration: decouple from emil Library

1. Define an Interface using DIP.
2. Evolve your legacy code to match the Interface.
3. Create an adapter that implements the Interface and uses the Library.
4. Remove the coupling with the infrastructure injecting the collaborator.

## Requisites
You need these modules to be installed in your system:
- [cURL](https://curl.haxx.se/download.html)
- [CppUnit](http://cppunit.sourceforge.net/doc/cvs/index.html)

## To run the application
    make

## To execute the tests
    make tests

## Authors
Luis Rovirosa [@luisrovirosa](https://www.twitter.com/luisrovirosa)

Jordi Anguela [@jordianguela](https://www.twitter.com/jordianguela)