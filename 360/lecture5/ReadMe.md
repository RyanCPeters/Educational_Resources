Lecture 5: Requirement Design

---
Requirements
---

- What the users require, and nothing else

### Iso 9000 defines requirement as:
"A requirement is a need or expectation that is stated, generally implied or obligatory"

>#### Requirement
>A requirement is a need, expectation, or obligation. It can be stated or implied by an organiztion, its customers, or other interested parties. A specified requirement is one that has been stated ( in a document for example), ...

---
Misunderstandings
---
![](./images/misunderstanding-cartoon.png)<!-- cartoon slide -->

---
The Waterfall Model
---
![](./images/waterfall-model.png)<!-- Waterfall model diagram goes here -->

- Requirements definition
  - System and software design
    - Implementation and unit testing
      - Integration and system testing
        - bah, missed it :P

---
Kano Model
---
![](./images/kano-model.png) <!-- Kano Model image of design flow -->

---
Terms
---
I missed the deets here

---
Requirement: Analysis-Discovery-Engineering
---

3x3 table
<table>
    <tr>
        <th>

        </th>
    </tr>
    
</table>

---
Requirements Specification
---

Process of "writing down" the user and system requirements in a requirements document. Specification helps avoid "ambiguity."

- `User requirements` are defined as: 
  - Statements, in a natural language plus diagrams, of what services the system is expected to provide to system users and the constraints under which it must operate. The user requirements may vary from broad statements of the system features required to detailed, precise descriptions of the system functionality.
- `System requirements` are defined as:
  - Written in natural language, but also in formalized documentation languages. eg., UML
  - Detailed descriptions of the software system’s functions, services, and operational constraints. The system requirements document (sometimes called a functional specification) should define exactly what is to be implemented. It may be part of the contract between the system buyer and the software developers.

---
User Req. Examples
---

On the first try, within 15 minutes, 75% of govt employees should be able to figure out system.
-
-


---
System Req Examples
---

- Processes
  +Exampes:
    - The student records...
    - sd
- Performance
  + Examples:
    -
    -

---
Business, domain, Regulatory, and other Reqs and Constraints
---
![](./images/biz-reqs.png)

---
Requirements Exercise
---
Group exercise:

- Pair up and decide who is person A and who is person B
- Take 5 minutes to think about:
    + Person A: You will be imagining an AI-based Intelligent tutor
    + PersonB: you will be imagining an AI-based "guide dog" device for a blind person
- Now:
  + Person A interview person B for 5 minutes on what they want
  + Person B interview Person A for 5 minutes on what they want 
- Take 5 minutes to write down a set of user and system reqs

I am person B:
- User Reqs:
  + Must be conveniently portable
    * ie, should not be bigger than my phone.
    * should be reasonably descrete
    * should also have a means to declare or show to people around the user that they are being guided.
  + Must be able to record and track users surroundings without making their sensitive info insecure. 

Interviewing person A:
- Should be able to direct student to correct informational reference and location in that material for any given subject related question
- Accurately tell the student if their answer was correct
  + if wrong, give step-wise feed back on how to correctly solve
  + give source material references for where to go study up on the material related to said question
- must be able to handle voice or text input
  - needs to provide integration api for easy adaptation to systems like Canvas. 