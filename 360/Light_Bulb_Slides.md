
---
From Lecture Deck 1
===

---
1-28 CHANGING ROLE OF SOFTWARE
---

- Increasing role of software in all systems
- Increase of heterogeneous, networked, distributed, interdependent systems
- Implications of failure in these systems
- Pervasive collection, manipulation, and use of digital data and information
- Importance of software and intellectual property to the economy




---
From Lecture Deck 2
===


---
2-10 Large Scale IT Project
---

#### McKinsey & Company Report (2012) 

- IT Project (with budgets > $15million in 2010 dollars): 5,400 IT projects studied
  - 45%:  Cost Overrun (~$66 billion)
  - 7%: Schedule Overrun
  - 56%:  Benefits shortfall (i.e. delivering  56% less value than predicted)
- In 45% of IT Project Cost Overruns:
  - 13%: Missing Focus    
  - 9%:   Content Issues
  - 6%:   Skill Issues      
  - 11%:  Execution (e.g., scheduling)
  - 6%:   Unexplained



---
2-13 FOCUS OF SE
---

Software engineering includes
Organizing teams to cooperatively build systems
Determining what to build
Software architecture
Analysis and testing
Lifecycle system engineering

![](./lecture2/images/slide13_image.png)


---
2-19 ETHICAL PRINCIPLES
---
 
1. PUBLIC - Software engineers shall act consistently with the public interest.
2. CLIENT AND EMPLOYER - Software engineers shall act in a manner that is in the best interests of their client and employer consistent with the public interest.
3. PRODUCT - Software engineers shall ensure that their products and related modifications meet the highest professional standards possible.
4. JUDGMENT - Software engineers shall maintain integrity and independence in their professional judgment.
5. MANAGEMENT - Software engineering managers and leaders shall subscribe to and promote an ethical approach to the management of software development and maintenance.
6. PROFESSION - Software engineers shall advance the integrity and reputation of the profession consistent with the public interest.
7. COLLEAGUES - Software engineers shall be fair to and supportive of their colleagues.
8. SELF - Software engineers shall participate in lifelong learning regarding the practice of their profession and shall promote an ethical approach to the practice of the profession.


##### Extra Slide Notes

Which do you think may be the hardest to uphold in your professional life?  Why?

Note that corporations also have policies and ethical principles.

Press issues of bias, harassment, transparency about slowing down your old iPhone, Facebook and Twitter algorithms, etc.


---
2-24 EMPOYEE CONTRACTS: THE FINE PRINT
---

- Non-Disclosure Agreements (NDA)
  + Protects trade secrets, sales, and other proprietary information
- Non-Compete Agreements
  + One party (usually the employee) agrees not to compete with another party (usually the employer)
- “Work for Hire” – Vendor, Contractor
  + Assigns ownership/non-ownership of work products
  + May include prior disclosure exhibits


##### Extra Slide notes

What is the challenge?  When you move to a new job?  How do you handle it?

Note tools for companies to protect themselves.  Automatic searches and monitoring traffic.

Work for hire – freelancers or contractors
Note Microsoft story, and GE arrangements; implications for corporate budgets and management

Note Bonus/Stock footnotes


---
From Lecture Deck 3
===


---
3-8 Why is it difficult to get error free software systems?
---


- Four essential problems
  + Complexity
  + Conformity
  + Invisibility
  + Changeability
- And a bunch of accidental ones, for example:
  + Human error
  + Poor interfaces
  + Inadequate abstractions
  + Lack of solid mathematical/engineering foundation 
  

#### Extra Slide Notes

There are four essential difficulties that make the production of a software product difficult:
We’ll talk about each of these in turn

This and the next slides from Fred Brooks

In lecture, we identified the following. 1) Complexity: no two software parts are alike (or they would be unified into one), and complexity grows non-linearly with size. 2) Conformity: software is required to conform to its operating environment and hardware, which are often out of its control; this burden is especially difficult since software is often used to mask or fix problems in these underlying strata. 3) Changeability: software can change in nearly infinite ways, and can come from many sources: new applications, users, machines, standards, laws, hardware problems, and so on. 4) Intangibility: software has no physical form and therefore is not constrained by physical laws, per se. This also means that there is no natural or obvious representation of what software “looks” like. Software cannot be “observed” in a conventional sense.



---
3-20 LIFE CYCLE OVERVIEW
---


| Requirements Analysis and Specification | Find out what the customer wants and decide what will be developed |
|:-----:|:-----:|
| Architecture and Design | Plan how to build the system to meet requirements |
| Implementation | Execute your plan |
| Testing/QA and Validation | Check if you conformed to your plan (verification) and if you met customer expectations (validation) | 
| Deployment and Maintenance | Ongoing changes to the system |
| Repeat (Evolution) | |


<img src="./lecture3/images/slide20_image.png" width="800" height="300" />



---
3-21 Design Thinking Process
---


<img src="./lecture3/images/slide21_image.png" width="800" height="400" />



---
3-26 USER AND PRODUCT REQUIREMENTS TO SYSTEM SPECIFICATIONS
---


<img src="./lecture3/images/slide26_image.png" width="500" height="500" />

#### Extra Slide Notes

Note requirements walkthroughs at Bell Labs, and the problem intended to solve.

Clarify all aspects of the problem.  What input data?  Who will use it?  To do what?  In what context?  What user interface?  What level of error handling?

Will be diving deeper into requirements.

---
3-27 4+1 MODEL OF ARCHITECTURE
---


<img src="./lecture3/images/slide27_image.png" width="500" height="500" />

##### Searchable text boxes from image:
- Shows key abstractions as objects or object classes.
- Shows how, at run-time, the system is composed of interacting processes.
- Shows how the software is decomposed for development.
- Shows the system hardware and how software components are distributed across the processors in the system. 



---
3-41 SDLC PROCESS MODELS
---



A software life cycle model is a high level process

<ol>
  <li>Code-and-Fix (or Build-and-Fix)</li>
  <li>Waterfall Model</li>
  <li>Sashimi</li>
  <li>Kanban</li>
  <li>Staged delivery</li>
  <li>Spiral Model</li>
  <li>Spiral into waterfall</li>
  <li>Evolutionary prototyping</li>
  <li>eXtreme Programming (XP)</li>
  <li>SCRUM</li>
  <li>Lean</li>
  <li>Unified Process or Rational Unified Process</li>
  <li>DSDM</li>
  <li>Etc.</li>
</ol>

#### Extra Slide Notes
Need to check toc of Pressman’s book

Add the V-Model?


---
3-42 MODEL CATEGORIES
---


- Prescriptive Models (e.g., Waterfall) – “heavyweight”
  + Aka “planned” approach
  + An ordered approach to the software process with a defined structure and expected set of activities and work products
  + Promote controls that improve project acceptance, decision making, and project management
- Agile Models – “lightweight”
  + Simpler to learn
  + Adaptive software processes
  + Emphasize unique aspects of software development
  + Underlying social values or constructs


#### Extra Slide Notes
We can categorize the various models into two groups:

1. Prescriptive model, they are considered heavyweight approaches because of the highly structured process that the engineers follow.  
2. Agile models.  They are considered lightweight because there is minimal structured process that must be followed.


---
From Lecture Deck 4
===

---
4-5 SE’S KOBAYASHI MARU PROBLEM
---

<img src="./lecture4/images/slide5_image.png" width="220" height="200" />



---
4-8 The Waterfall Model
---


<img src="./lecture4/images/slide8_image.png" width="500" height="300" />


---
4-19 COST OF CHANGE
---

<img src="./lecture4/images/slide19_image.png" width="500" height="300" />

#### Extra Slide Notes
From http://www.agilemodeling.com/essays/costOfChange.htm

What are the implications of this for planning, prototyping and testing?
Why do you think the curve looks like this? Think the construction of a building and once the foundation is laid, and once the structure is built, etc.  The longer you wait the more constrained (cost effectively) the changes that can be easily made.



---
4-22 FOOTNOTES
---


- What goes in, doesn’t necessarily come out (without extra process)
- Observation: Waterfall is structurally adversarial
  + Change requests cost money
  + Documents may be used to shift costs to “the other guy”
  + Zero-sum games can create challenging working environments
  + Over time, pressure is on incremental improvement; constrained by previous development
- Process Improvement: Software 6 Sigma

<img src="./lecture4/images/slide22_image.png" width="500" height="400" />

#### Extra Slide Notes
Implications for team and organizational functioning
Meta-processes like requirements walkthroughs and sign-offs



---
4-31 Manifesto for Agile Software Development
---


- **Individuals and interactions** over process and tools
- **Working software** over comprehensive documentation
- **Customer collaboration** over contract negotiation
- **Responding to change** over following a plan


#### Extra Slide Notes
Source: http://agilemanifesto.org/ 

“That is, while there is value in the items onthe right, we value the items on the left more.”

They emphasize the individuals on the team and the interactions between developers, rather than be guided by processes
They would rather spend time to get a working software, rather than a comprehensive documentation
They would rather have the customer be part of the team, rather than negotiating a formal contract with them
They would rather respond to change, rather than following a plan that may no longer apply



---
4-34 SCRUM KEY TERMINOLOGY
---

- Development Team
- Product Owner
- Scrum Master:
  + Responsible for ensuring that the Scrum process is followed and guides the team in the effective use of Scrum
- Scrum:
  + A daily meeting of the Scrum team that reviews progress and prioritizes work to be done that day
- Sprint:
  + A development iteration. Sprints are usually 2-4 weeks long.
  + Sprint 0 is a planning sprint.



---
4-58 Rule of 10
---


---
4-59 Principles of lean Thinking
---

<ol>
  <li>Eliminate Waste</li>
  <li>Increase Feedback</li>
  <li>Delay Commitment</li>
  <li>Deliver Fast</li>
  <li>Build-in Integrity</li>
  <li>Empower the Team</li>
  <li>See the Whole</li>
</ol>

<img src="./lecture4/images/slide59_image.png" width="600" height="400" />



---
From Lecture Deck 5
===


---
5-9 Reqs. Contd. (bulb)
---

<img src="../bulb.png" width="30" height="30" />

- Everything that must be true about the software in order for it to be acceptable
- And nothing else
- “What” but not “how”

**Where can they come from?**

#### Extra Slide Notes

Class discussion in teams.  Then across class.

And nothing else – impt to define the boundary
Focus on what needs to be done, what is the problem, instead of how it will be done



---
5-13 Kano Model (bulb)
---

<img src="../bulb.png" width="30" height="30" />

![](./images/slide13_image.png)



---
5-16 Requirements Specification (bulb)
---

<img src="../bulb.png" width="30" height="30" />

<img src="../keyword.png" width="30" height="30" />

Process of "writing down" the user and system requirements in a requirements document. Specification helps avoid "ambiguity."

- `User requirements` are defined as: 
  - Statements, in a natural language plus diagrams, of what services the system is expected to provide to system users and the constraints under which it must operate. The user requirements may vary from broad statements of the system features required to detailed, precise descriptions of the system functionality.
- `System requirements` are defined as:
  + Written in natural language, but also in formalized documentation languages. eg., UML
  + Detailed descriptions of the software system’s functions, services, and operational constraints. The system requirements document (sometimes called a functional specification) should define exactly what is to be implemented. It may be part of the contract between the system buyer and the software developers.



---
5-23 Functional Requirements
---

- Describe the functionality or services that the system is expected to provide.
Examples:
  + “The user shall be able to search either all of the initial set of databases or select a subset from it”
  + “The system shall provide appropriate viewers for the user to read documents in the document store”


Agile Story Framework

| "As a/an" (who) | "I want to..." (what) | "So that..." (why) |
|:-----:|:-----:|:-----:|
| Store Owner | Recieve an email when a customer submits an order | I can print the order, so it's ready to be filled |
| Customer | Be able to place an order for a quantity of widgets | I can fill my desire to own lots of widgets |
| Customer | View a history of orders I've placed. | I can print these out for tax purposes, and get an idea f my widget consumption over time |





---
From Lecture Deck 6
===




---
From Lecture Deck 7
===




---
From Lecture Deck 8
===


---
8-12
---

<img src="./lecture8/images/slide12_image.png" width="400" height="400" />

What do you think might be examples of architectural patterns in physical buildings?  
Design patterns in consumer products?

##### Extra Slide Notes
_**Pattern**_ in architecture is the idea of _capturing architectural_ design ideas as archetypal and reusable descriptions. The term "pattern" in this context is usually attributed to _Christopher Alexander_,<sup>[1]</sup> an Austrian born _American architect_. The patterns serve as an aid to design _cities_ and _buildings_. The concept of having collections of "patterns", or typical samples as such, is much older. One can think of these collections as forming a _pattern language_, whereas the elements of this language may be combined, governed by certain rules.

