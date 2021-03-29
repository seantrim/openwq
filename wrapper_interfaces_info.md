# Wrapper Interfaces for OpenWQ
## Table of Contents
* [Introduction](#introduction)
* [OpenWQ Algorithm](#openwq-algorithm)
* [Wrapper Interfaces](#wrapper-interfaces)
* [Floating Point Arithmetic](#floating-point-arithmetic)
* [Test Problems](#test-problems)

## Introduction
* We wish to integrate the biogeochemical OpenWQ model into the hydrological modeling codes SUMMA, MESH, and CHM.
* OpenWQ and CHM are written in C++.
* However, SUMMA and MESH are written in Fortran.
* Accordingly, we require the creation of wrapper interfaces that allow interaction between C++ and Fortran at runtime.

## OpenWQ Algorithm
* Two major components:
  * Advection of solutes: routine needs to be called multiple times during each time step.
  * Transformation due to biogeochemistry: routine needs to be called only once at the end of each time step.

## Wrapper Interfaces
* We will need to call C++ routines from OpenWQ from Fortran programs such as SUMMA and MESH.
* The preferred option will be to use [SWIG](http://www.swig.org/) to automatically handle interaction between C++ anf Fortran
* However, SWIG may not be compatible with certain classes of C++.
* Another alternative is to use the [iso_C_binding](https://gcc.gnu.org/onlinedocs/gfortran/ISO_005fC_005fBINDING.html) module in Fortran
  * Manual control of interactions between Fortran and C++.
  * A simple [example](https://modelingguru.nasa.gov/docs/DOC-2642) 

## Floating Point Arithmetic
* The accuracy of mass balance calculations is impacted by difficulties encountered in floating point arithmetic 
  * Numerical overflow due to division by zero
  * Cancellation errors produced by floating point subtraction
* We can rewrite our formulas in a way that best handles these challenges.  

## Test Problems
* Create our own simple mass balance problem for quality control.
* If available, it may be worthwhile to compare with an example from the literature.
