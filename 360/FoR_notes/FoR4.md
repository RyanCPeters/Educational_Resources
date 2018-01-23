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
>called the requirements document for the system[†](#footnotes).

Some of the problems that arise during the requirements engineering process are a result of failing to make a clear separation between these different levels of description.

The text distinguishes between them by using the term `user requirements` to mean the high-level abstract requirements and `system requirements` to mean the detailed description of what the system should do.

- `User requirements` are defined as: 
  - Statements, in a natural language plus diagrams, of what services the system is expected to provide to system users and the constraints under which it must operate. The user requirements may vary from broad statements of the system features required to detailed, precise descriptions of the system functionality.
- `System requirements` are defined as:
  - Detailed descriptions of the software system’s functions, services, and operational constraints. The system requirements document (sometimes called a functional specification) should define exactly what is to be implemented. It may be part of the contract between the system buyer and the software developers.

#### Identifying reader groups for User and System Reqs.

<table>
    <tr>
        <th>User Requirements</th>
        <th>System Requirements</th>
    </tr>
    <tr>
        <th>Client managers</th> 
        <td>X</td>  
        <td></td>     
    </tr>
    <tr>
        <th>System end-users</th> 
        <td>X</td>  
        <td>X</td>
    </tr>
    <tr>
        <th>Contractor managers</th> 
        <td>X</td>  
        <td></td>
    </tr>
    <tr>
        <th>System architects</th> 
        <td>X</td>  
        <td>X</td>
    </tr>
    <tr>
        <th>Client engineers</th> 
        <td>X</td>  
        <td>X</td>
    </tr>
    <tr>
        <th>Software developers</th> 
        <td></td>  
        <td>X</td>
    </tr>    
</table>

---
#### system stakeholders example
For the Mentcare system include:

1. Patients whose information is recorded in the system and relatives of these patients.
2. Doctors who are responsible for assessing and treating patients.
3. Nurses who coordinate the consultations with doctors and administer some
treatments.
4. Medical receptionists who manage patients’ appointments.
5. IT staff who are responsible for installing and maintaining the system.
6. A medical ethics manager who must ensure that the system meets current ethical
guidelines for patient care.
7. Health care managers who obtain management information from the system.
8. Medical records staff who are responsible for ensuring that system information
can be maintained and preserved, and that record keeping procedures have been
properly implemented.

---
#### Early Stage Requirements engineering (RE) 

This early-stage RE establishes a high-level view of what the system might do and the benefits that it might provide. These may then be considered in a feasibility study, which tries to assess whether or not the system is technically and financially feasible.

###### Footnotes
>†Davis, A. M. 1993. Software Requirements: Objects, Functions and States. Englewood Cliffs, NJ: Prentice-Hall.



