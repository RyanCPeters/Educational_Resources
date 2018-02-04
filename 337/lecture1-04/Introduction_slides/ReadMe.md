Lecture 1: Secure Systems Introduction 
===


---
Introductions 
---

<ul>
  <il1>Who am I?</il1>
  <il2>Who are you?</il2>
  <il3>Why are you taking this class?</il3>
  <il4>Your expectations for this class</il4>
  <il5>Do you have any security background?</il5>
</ul>


---
Syllabus Discussion 
---

Course syllabus on canvas page!

---
What is security?
---

<ul>
  <il1>System correctness
    <ul>
            <il>If user supplies expected input, system generates desired output</il>
    </ul>
  </il1>
  <il2>Security
      <ul>  
            <il>If attacker supplies unexpected input, system does not fail in certain ways</il>
      </ul>
  </il2>
</ul>
---
What is security?
---

System correctness
Good input  Good output
Security
Bad input  Bad output

How Security Fails – Policy Factors
Overly strict policy – people circumvent strict policies and hide the evidence
No enforcement – policies without consequences
Lack of specifics – don’t do bad stuff
Policy that can’t be managed
No solution guidance – security team only knows how to say no
How Security Fails - Misconfiguration
Defaults might not be secure
‘temporary’ accounts and passwords
Not understanding what information is valuable to an attacker

How Security Fails – Poor Assumptions
Why would anyone do that?
But we’re on a trusted network
Not understanding attackers
How Security Fails – Patch Management
Patch Management can be hard
Core OS
Network devices
Not keeping yourself up to date
Some Required Questions
What are you securing?  Why?
Securing my current location has different requirements than securing a web server
How much is it worth to you?
Don’t spend $1,000,000 on security products to secure your pet’s Facebook page
What is the threat model?
Securing a system against script kiddies is different than securing it against the NSA.
Thinking about Security
Security is the result of holistic design
Sprinkling crypto or policies doesn’t make something secure
Attackers don’t follow the rules
Models
Models
These might be more useful to us
Security Models
A scheme for defining and enforcing security policies
Only the teacher can change grades
Students can only view grade assigned to them
Threat Models
Defines what an attacker wants to do and what the attacker can do to accomplish that
The attacker wants to launch a DoS attack with less than 1,000,000 bots
The student wants to change her grade without stealing the teacher’s password


Everything is Secure
Original systems were concerned with Safety/Correctness
Given good input, get good output
Why?   
Their threat model was mistakes, not attackers
Everything is secure if your threat model is weak.
Nothing is Secure
Given infinite time or resources
No encryption does any good
Somebody will make a mistake
Abandon all hope.  

The art of war teaches us to rely not on the likelihood of the enemy’s not coming,
but on our own readiness to receive him; not on the chance of his not attacking,
but rather on the fact that we have made our position unassailable.
—The Art of War, Sun Tzu

The Players
Attacker
Has value for various abilities to control other people’s assets
Learn about where you live
Steal credit card info
Shutdown uranium enrichment facility
Defender
Protect assets
Prevent attacker from gaining value?
Security Goals/Properties (The CIA)
Confidentiality
Information should not be available to people who shouldn’t know it
Alice can’t see Bob’s grades
Integrity
Information cannot be modified by people who shouldn’t be able to modify it
Bob can’t change his own grades
Availability
Information must be available when needed
Bob can always check his grades
General picture
Security is about
Honest user (e.g., Alice, Bob, …)
Dishonest Attacker
How the Attacker 
Disrupts honest user’s use of the system  (Integrity, Availability)
Learns information intended for Alice only (Confidentiality)




Tradeoffs
What is security worth?
Performance?
Usability?
Money?
Time?


The Relationships

Underground goods and services
Current Trends

Do you know 96% of tested 
   web applications have vulnerabilities?



https://www.riskbasedsecurity.com/2017/11/no-shock-worst-year-for-vulnerabilities-already-only-through-q3-2017/




Hospitals vulnerable to cyber attacks on just about everything
Pirates hacked shipping company to steal info for efficient hijackings
https://nakedsecurity.sophos.com/2016/03/07/pirates-hacked-shipping-company-to-steal-info-for-efficient-hijackings/


Major Apple Vulnerability Lets Anyone Log Into Macs Running Its Latest Operating System
http://fortune.com/2017/11/28/apple-security-flaw-vulnerability-bug-mac-high-sierra-root-password/


Why are there security vulnerabilities? 
Lots of buggy software...
Why do programmers write insecure code?
Awareness is the main issue
Some contributing factors
Few courses in computer security
Programming text books do not emphasize security
Few security audits 
Programmers have many other things to worry about
Legacy software  (some solutions, e.g. Sandboxing)
Consumers do not care about security
Security is expensive and takes time


   If you remember only one thing from this course:

   A vulnerability that is “too complicated for anyone to ever find” will be found !


I hope you remember more than one thing 
What do you do if you find a vulnerability?
1)  Find vulnerability
2)  ????????
Profit!!!

Unfortunately ??????? Often includes some jail time

Ethical use of security information
We discuss vulnerabilities and attacks
Most vulnerabilities have been fixed
Some attacks may still cause harm
Do not  try these at home or anyplace else
In this class, you will
Learn to prevent malicious attacks
Use knowledge for good purposes
Don’t do bad stuff
Pretty much anything you learn can be used for good, bad or neutral.
People are really sensitive about cybersecurity stuff right now though, so they make me tell you not to do bad stuff.
If you want to test out the attacker side of some of the things we learn in this class, do it on an isolated machine/network or you could end up in jail or sued.
UW does not pay me well enough to bail you out
Law enforcement
Sean Smith
Melissa virus: 5 years in prison, $150K fine
Ehud Tenenbaum (“The Analyzer”) 
Broke into US DoD computers
6 mos service, suspended prison, $18K fine
Dmitry Sklyarov
Broke Adobe ebooks
Prosecuted under DMCA 
Ethical Vulnerability Research
Disclose research intent
Seek legal counsel before beginning
If the vulnerability is systemic, seek a solution
Disclose vulnerabilities to those best able to correct them.  Sometimes this may mean taking them public (though often not with specific details) if a company will not acknowledge the issue
What is this class?
Security principles, solutions
Breadth, not Depth
Ways to think about security

What is this class not?
How to run security tools
How to “hack”
