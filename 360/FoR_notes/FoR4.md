Chapter 4: Requirements Engineering (RE)
===

#### Defining "Requirements"

The term _requirement_ is not used consistently in the software industry. 

In some cases, a requirement is simply a high-level, abstract statement describing a service that a system should provide, or the constraints on that system. 

At the other extreme, it is a detailed, formal definition of a system function. 

Davis (Davis 1993) explains why these differences exist:

>If a company wishes to let a contract for a large software development project, 
>it must define its needs in a sufficiently abstract way that a solution is not predefined.
>The requirements must be written so that several contractors can bid
>for the contract, offering, perhaps, different ways of meeting the client organization’s
>needs. Once a contract has been awarded, the contractor must write a
>system definition for the client in more detail so that the client understands
>and can validate what the software will do. Both of these documents may be
>called the requirements document for the system[†](#).

Some of the problems that arise during the requirements engineering process are a result of failing to make a clear separation between these different levels of description.

The text distinguishes between them by using the term `user requirements` to mean the high-level abstract requirements and `system requirements` to mean the detailed description of what the system should do.

- `User requirements` are defined as: 
  - Statements, in a natural language plus diagrams, of what services the system is expected to provide to system users and the constraints under which it must operate. The user requirements may vary from broad statements of the system features required to detailed, precise descriptions of the system functionality.
- `System requirements` are defined as:
  - Detailed descriptions of the software system’s functions, services, and operational constraints. The system requirements document (sometimes called a functional specification) should define exactly what is to be implemented. It may be part of the contract between the system buyer and the software developers.

<table>
    <tr>
        <td>Foo</td>
    </tr>
</table>

###### †
>†Davis, A. M. 1993. Software Requirements: Objects, Functions and States. Englewood Cliffs, NJ: Prentice-Hall.



