Malicious Software Viruses, Worms and Trojans
===



---
2 Outline
---

- Introduction to Malwares
  + Virus
  + Worms and Trojan horses
- Preventive measures

---
3 Malware
---

- A Malware (malicious software) is a malicious program (set of instructions) that runs on your computer and make your system do something that an attacker wants it to do.

NIST 800-83 defines malware as:

 <blockquote>“a program that is inserted into a system, usually covertly, with the intent of compromising the confidentiality, integrity, or availability of the victim’s data, applications, or operating system or otherwise annoying or disrupting the victim.” </blockquote>



---
4 Taxonomy of Malicious Programs
---

![]()

---
5 What is a Virus?
---

Definition (s):

- A virus is a self-duplicating program that interferes with a computer’s hardware or operating system.
- A virus is a small piece of software that piggybacks on real programs in order to get executed
- Once it’s running, it spreads by inserting copies of itself into other executable code or documents 
- Defining characteristics:
  + A virus is a program that self-replicates
  + It is not data
  + You can only catch a virus by running a program
    + Your computer runs all kinds of programs


---
6 Virus example image
---

![]()

---
7 Example virus
---

A Virus program to delete contents of ‘C’ drive.
Simple virus can’t detected by any antivirus....
@Echo off Del C:\ *.* |y
And save that as .bat not .txt and RUN IT. It will delete the content of C:\ drive... 

---
8 Virus Phases
---

![]()

#### additional slide notes

During its lifetime, a typical virus goes through the following four phases:

• Dormant phase: The virus is idle. The virus will eventually be activated by
some event, such as a date, the presence of another program or file, or the
capacity of the disk exceeding some limit. Not all viruses have this stage.

• Propagation phase: The virus places a copy of itself into other programs or
into certain system areas on the disk. The copy may not be identical to the
propagating version; viruses often morph to evade detection. Each infected
program will now contain a clone of the virus, which will itself enter a propagation
phase.

• Triggering phase: The virus is activated to perform the function for which it
was intended. As with the dormant phase, the triggering phase can be caused
by a variety of system events, including a count of the number of times that
this copy of the virus has made copies of itself.

• Execution phase: The function is performed. The function may be harmless,
such as a message on the screen, or damaging, such as the destruction of
programs and data files.

Most viruses that infect executable program files carry out their work in a
manner that is specific to a particular operating system and, in some cases, specific
to a particular hardware platform. Thus, they are designed to take advantage of the
details and weaknesses of particular systems. Macro viruses though, target specific
document types, which are often supported on a variety of systems.

---
9 Functional Components of a Virus
---

Replication
Method of virus reproducing or duplicating itself
Concealment
Method of virus masking its existence
Bomb
Consequence of a virus

---
10 Virus Classifications
---

Classification by target

Classification by concealment strategy
Boot sector infector
Infects a master boot record or boot record and spreads when a system is booted from the disk containing the virus
File infector 
Infects files that the operating system or shell considers to be executable
Macro virus
Infects files with macro or scripting code that is interpreted by an application
Multipartite virus
Infects files in multiple ways
Encrypted virus
A portion of the virus creates a random encryption key and encrypts the remainder of the virus
Stealth virus
A form of virus explicitly designed to hide itself from detection by anti-virus software
Polymorphic virus
A virus that mutates with every infection
Metamorphic virus
A virus that mutates and rewrites itself completely at each iteration and may change behavior as well as appearance

#### additional slide notes

There has been a continuous arms race between virus writers and writers of
anti- virus software since viruses first appeared. As effective countermeasures are
developed for existing types of viruses, newer types are developed. There is no
simple or universally agreed upon classification scheme for viruses. In this section,
we follow [AYCO06] and classify viruses along two orthogonal axes: the type of
target the virus tries to infect and the method the virus uses to conceal itself from
detection by users and anti-virus software.

A virus classification by target includes the following categories:

• Boot sector infector:  Infects a master boot record or boot record and spreads
when a system is booted from the disk containing the virus.

• File infector:  Infects files that the operating system or shell consider to be
executable.

• Macro virus:  Infects files with macro or scripting code that is interpreted by an
application.

• Multipartite virus:  Infects files in multiple ways. Typically, the multipartite
virus is capable of infecting multiple types of files, so that virus eradication
must deal with all of the possible sites of infection.

A virus classification by concealment strategy includes the following categories:

• Encrypted virus:  A form of virus that uses encryption to obscure it’s content.
A portion of the virus creates a random encryption key and encrypts
the remainder of the virus. The key is stored with the virus. When an infected
program is invoked, the virus uses the stored random key to decrypt the virus.
When the virus replicates, a different random key is selected. Because the bulk
of the virus is encrypted with a different key for each instance, there is no constant
bit pattern to observe.

• Stealth virus : A form of virus explicitly designed to hide itself from detection
by anti-virus software. Thus, the entire virus, not just a payload is hidden. It
may use code mutation, compression, or rootkit techniques to achieve this.

• Polymorphic virus:  A form of virus that creates copies during replication that
are functionally equivalent but have distinctly different bit patterns, in order
 to defeat programs that scan for viruses. In this case, the “signature” of the
virus will vary with each copy. To achieve this variation, the virus may randomly
insert superfluous instructions or interchange the order of independent
instructions. A more effective approach is to use encryption. The strategy of
the encryption virus is followed. The portion of the virus that is responsible
for generating keys and performing encryption/decryption is referred to as the
mutation engine . The mutation engine itself is altered with each use.

• Metamorphic virus:  As with a polymorphic virus, a metamorphic virus mutates
with every infection. The difference is that a metamorphic virus rewrites
itself completely at each iteration, using multiple transformation techniques, increasing
the difficulty of detection. Metamorphic viruses may change their behavior
as well as their appearance.

---
11 Replication
---

File Infection
Infection: Term used when virus reproduces itself in a file
This method relies on virus’s ability to attach to a file
They spread by attaching the virus code to an existing executable file
Viruses run when the program they are attached to is executed


---
12 Replication: Methods of file Infection
---

File Infection occurs through direct executable files
.COM, .BAT, .EXE, .PIF
Executable viruses are pieces of code attached to a legitimate program
Adds a piece of code to the beginning of the file
runs when the legitimate program gets executed 
When file is executed, the virus loads itself into memory before the actual application
Virus places remaining code within the file or at the end of the file

![]()

---
13 Replication: Methods of file Infection
---

File Infection occurs through Indirect Execution of commands
Files that provide some access to CPU cycles are more under a virus threat
Example: Word application can read Macros in word document and execute them in memory
Word document is infected; but it is the Word Application that provides the means for replication
Access to CPU through secondary application and not direct execution


---
14 Macro Virus
---

- A macro virus is a computer infection written in macro language, which is commonly built into word processing applications.  
- Macros is a series of commands and executions that help automate specific tasks. 
- Example: Melissa Virus
  + The Melissa virus took advantage of the programming language built into Microsoft Word called `VBA`, or Visual Basic for Applications. 
  + It is a complete programming language and it can be programmed to do things like modify files and send e-mail messages. 
  + It also has a useful but dangerous auto-execute feature. A programmer can insert a program into a document that runs instantly whenever the document is opened.


---
15 Melissa Virus Example
---

- The Melissa virus infected Word 97 and Word 98 documents on Windows and Macintosh systems.
- It is invoked when the program opens an infected file.
- It installs itself as the “open” macro and copies itself into the Normal template so that any files that are open are infected.
- Anyone who opened a document infected with Melissa would immediately activate the virus (due to auto execute feature ) 
- It then invokes a mail program and sends copies of itself to the first 50 addresses in the user’s address book that is associated with the program and then infect a central file called NORMAL.DOT so that any file saved later would also contain the virus.


---
16 Forms of Replication
---

- Resident Virus
- A resident virus installs itself somewhere in memory (RAM) the first time an infected program is executed, and thereafter infects other programs when they are executed.
- When a virus goes memory resident, it will remain there until the computer is switched off or restarted (waiting for certain triggers to activate it, such as a specific date and time). 
- In the meantime it sits and waits in hiding, unless of course an antivirus can locate and eliminate it. 
- Examples include: `Randex` , `CMJ` , `Meve` , `MrKlunky` . 




---
17 Forms of Replication: Non-Resident Virus
---

- Non-Resident Virus :
- A computer virus that does not store or execute itself from the computer memory.
  + Executable viruses are an example of a non resident virus. 
- Nonresident viruses can be thought of as consisting of a finder module and a replication module. 
- The finder module is responsible for finding new files to infect. 
- For each new executable file the finder module encounters, it calls the replication module to infect that file.

---
18 Forms of Replication: Non-Resident Virus
---

- For simple viruses the replicator's task is to:
  + Open the new file
  + Check if the executable file has already been infected (if it is, return to the finder module)
  + Append the virus code to the executable file
  + Save the executable's starting point
  + Change the executable's starting point so that it points to the start location of the newly copied virus code
  + Save the old start location to the virus in a way so that the virus branches to that location right after its execution.
  + Save the changes to the executable file
  + Close the infected file
  + Return to the finder so that it can find new files for the replicator to infect.

---
19 Companion Virus
---

- The COMPANION virus is one that, instead of modifying (infecting) an existing file, creates a new program which is executed instead of the intended program. 
- It works by ensuring that its executable is launched before the legitimate file
- On exit, the new program executes the original program so that things appear normal. 
- On PCs this has usually been accomplished by creating an infected .COM file with the same name as an existing .EXE file.  
- Example: In DOS, if the target system has a file called accounts.exe, it is possible to introduce a file called accounts.com, which DOS will execute first

---
20 Boot Sector Replication
---

- A boot virus is a virus that infects the part of the computer called a system sector. (boot sector virus; boot strap virus)
- Boot Sector Replication viruses infect the system area of the disk that is read when the disk is initially accessed or booted.
- Virus typically takes system instructions it finds and moves them to some other area of the disk.
- Virus is then free to place its own code on the boot record
- When the system initializes, the virus loads into memory and simply points to the new location for the system instructions.
- The system then boots in normal fashion – with virus resident in the memory
- Relies on disk-disk contact for replication
  + Cannot spread through shared directory


---
21 Boot Sector Replication figure
---

![]()

---
22 Terminate and Stay Resident Virus
---

- TSR - terminate and stay resident virus - stays active in memory after the application has terminated (or bootstrapping, or disk mounting)
- TSR viruses can be boot sector infectors or executable infectors.
- Examples of TSR viruses:  all boot viruses, many file viruses, some macro viruses, some network viruses

---
23 Concealment
---

Methods through which a virus masks its existence to facilitate replication
Small footprint
Smaller Size of the virus enables easier concealment in files and storage media
Most viruses are coded in assembly language to ensure smaller size
Even larger virus can be less than 2 KB in size
Small virus can attach to a file without changing the overall file size. Ex: Cavity Virus
A CAVITY VIRUS is one which overwrites a part of the host file that is filled with a constant (usually nulls), without increasing the length of the file, but preserving its functionality.  
The Lehigh virus was an early example of a cavity virus. 


---
24 Concealment :Stealth Virus
---

Virus that hides its presence by making an infected file not appear infected .
When virus is loaded into memory, it monitors system calls to files and disk sectors (ex: read requests)
When a call is trapped, the virus modifies the information returned to the process making the call so that it sees the original, uninfected information 
Example:  virus returns the content of the original uninfected file
Can modify information reported by DIR and MEM. 
Report false file size, no loss of memory
Helps virus hide its existence on local storage medium and physical medium
Stealth virus requires virus actively running in the memory


---
25 Concealment - Encryption
---

Form of virus that uses encryption to obscure it’s content.
An encrypted virus is a virus that is enciphered except for a small decryption routine.
A portion of the virus creates a random encryption key and encrypts the remainder of the virus. 
The key is stored with the virus. 
When an infected program is invoked, the virus uses the stored random key to decrypt the virus.
When the virus replicates, a different random key is selected. 
Because the bulk of the virus is encrypted with a different key for each instance, there is no constant bit pattern to observe


---
26 Concealment: Polymorphic Virus
---

A polymorphic virus is a virus that changes its form each time it inserts itself into another program.
From one infected file to another infected file
functionally equivalent but have distinctly different bit patterns
An encrypted virus will not be detected using known sequences of instructions. However, the decryption algorithm can be detected.
Polymorphic viruses are designed to change the instructions in the virus such that the decryption routine is the segment of the virus is changed.

---
27 Concealment: Polymorphic Virus
---

Polymorphic viruses are successors to the encrypted viruses and are often used in conjunction with them.
At the instruction level, the instructions are substituted.
At the algorithm level, different algorithms are used to achieve the same result
The portion of the virus that is responsible for generating keys and performing encryption/decryption is referred to as the mutation engine. 
The mutation engine itself is altered with each use


---
28 Concealment
---

Attribute Manipulation
Change attributes/file permissions and infect file
Can modify date/time stamp associated with the file

AntiVirus countermeasures
Viruses include countermeasures to fight against detection
Example: If active virus scan is found in the system, the virus attempts to fool the scanner by reporting the presence of some other virus in the system
Cleaning up the reported virus(that does not exist) may even result in trashing the system

---
29 Bomb (Or Payloads) 
---

Acting purpose of a virus
Most viruses are programmed to wait for a specific event to launch an action
Playing a tune in computers speakers
Wiping out the hard disk
A bomb is a program that resides silently in a computer's memory until it is triggered by a specific condition, such as a date, time
Time bomb; logic bomb
September 21st 2000 Virus with payload
Swiss bank UBS warned its customers of a virus that, if it infected their machines, would try to steal the passwords used to access its electronic home banking system 


---
30 Bomb (or Payload) – A Few Consequences
---

Make selective or random changes to the machine’s protection state 
Make selective or random changes to user data (e.g., trash the disk).
Lock the network (e.g., start replicating at maximum speed).
Steal resources for some nefarious task (e.g., use the CPU for DES  keysearch).
Steal or even publish your data, including your crypto keys.
Create a backdoor through which its creator can take over your system later, perhaps to launch a distributed denial of service attack.

---
31 Social engineering Viruses
---

Social engineering Viruses are like any other normal virus but relies on people to spread the infection.
Example: Good times virus hoax
Replication: relies on human traits for duplicating
Good intentions
Gullibility
Concealment: Use language more believable to average user
Use of well known companies name in the message : AOL, Microsoft
Bomb : 
Wasted bandwidth: Sense of urgency, message sent out en masse
Unnecessary fear: Warning of disaster if message is ignored


---
32 Worms
---

Worm: a piece of malware that uses the network to copy itself onto other computers
Unlike virus, it does not hide in another program
A worm exists on its own, as a computer program that has the ability to copy itself from machine to machine without any human action. 
A worm takes advantage of file or information transport features on your system, which is what allows it to travel unaided.
Computer time and network bandwidth used up during replication
A worm usually exploits some sort of security hole in a piece of software or the operating system.


---
33 Trojan Horse
---

A Trojan horse is a type of computer software that gets its name from the ancient Greek legend of the fall of Troy. 
In computing, trojan horse is a malicious piece of software designed to fool the users to think it is benign.
Unsuspecting users will allow the Trojan into their machine through a seemingly harmless and routine task, only to have their computer compromised.
Example: AOL4FREE.COM
Trojans are also known to create a 
    backdoor on your computer that gives 
    malicious users access to your system, 
    possibly allowing confidential or personal information to be compromised.

---
34 Virus or Worm?
---

Trojan horse programs cannot replicate themselves, in contrast to some other types of malware, like viruses or worms.
A Trojan is a stand-alone application that had its bomb included from the original source code. 
It did not become malicious because of the effects of another application.
 A Trojan horse can be deliberately attached to otherwise useful software, or it can be spread by tricking users into believing that it is a useful program. 
 
---
35 History of Viruses
---

1980’s: In the early 1980s, Fred Cohen did extensive theoretical research, as well as setting up and performing numerous practical experiments, regarding viral type programs. 
His dissertation was presented in 1986 as part of the requirements for a doctorate in electrical engineering from the University of Southern California. 
Dr. Cohen's definition of a computer virus was "a program that can 'infect' other programs by modifying them to include a version of itself


---
36 History of Malware
---

1987 In November, the Lehigh virus was discovered at Lehigh University in the U.S.
 It was the first "memory resident file infector". A file-infecting virus attacks executable files.
 It gets control when the file is opened. 
The Lehigh virus attacked a file called COMMAND.COM. 
When the file was run (usually by booting from an infected disk), the virus stayed in the resident memory.



---
37 History of Malware
---

1988 In March, the first anti-virus software was written. It was designed to detect and remove the Brain virus (first computer virus for MS DOS) and immunized disks against Brain infection

November 1988:  Great Morris Worm: the great Internet worm had been released onto the Internet

1989: Wank Worm that attacked DEC VMS computers over the DECnet
first major worm to have a political message




---
38 Great Internet Worm (Robert Morris)
---

In less than six hours, this 99-line program had effectively crippled all 6000 Sun and VAX systems connected to the Internet
Utilized several known vulnerabilities
Used password guessing to obtain access into the system
Once system was penetrated, a small bootstrap program was inserted which executed rest of the worm into the system
What the worm did do was to start a small process running in the background of every machine it encountered.
But it did not check if the system was already infected 
Hundreds of instances of the background processes created in already infected machines crashed the systems.

---
39 Wank Worm (Worms Against Nuclear Killers)
---

Sent e-mail (presumably to the worm’s creator) identifying which systems it penetrated along with the logon names and passwords used
Changed passwords on existing accounts
Left additional trapdoor access into the system
Infected local COM files so that the worm could reactivate later if it was cleaned from the system
Changed the announcement banner to indicate that the system had been “WANKed”
Modified the logon script to make it appear that all of a user’s files were being deleted
Hid the user’s files after logon so that the user would be convinced that the files had been deleted

---
40 History of Malware
---

- 1990 Viruses combining various characteristics spring up. They included Polymorphism (involves encrypted viruses where the decryption routine code is variable), and Multipartite (can infect both programs and boot sectors). 

![]()

---
41 History of Malware
---

- 1991 Symantec releases Norton Anti-Virus software.
- 1992 Media mayhem greeted the virus Michaelangelo in March. 
  + If an infected system is booted on March 6 of any year, the Michelangelo virus will overwrite parts of the hard disk with random data. This renders the hard disk of the system, and all of its information, inaccessible 
  + Predictions of massive disruptions were made and anti-virus software sales soared. As it turned out, the cases of the virus were far and few between.


---
42 History of Malware
---

- 1994 A virus called Kaos4 was posted on a pornography news group file. It was encoded as text and downloaded by a number of users.
- 1996 Concept, a macro-virus, becomes the most common virus in the world.
- 1998 - The "RedTeam" virus infects Windows executables dispatches the infected files through Eudora e-mail.


---
43 History of Malware
---

- 1999 The Melissa virus, a macro, appears. It uses Microsoft Word to infect computers and is passed on to others through Microsoft Outlook and Outlook Express e-mail programs
- 2000 The "I Love You Virus" wreaks havoc around the world. It is transmitted by e-mail and when opened, is automatically sent to everyone in the user's address book


---
44 The Code Red Worm
---

The Code Red worm replicated itself more than 250,000 times in approximately nine hours on July 19, 2001
Each copy of the worm scanned the Internet for Windows NT or Windows 2000 servers that did not have the Microsoft security patch installed. 
Each time it found an unsecured server, the worm copied itself to that server. 
The new copy then scanned for other servers to infect. 
Depending on the number of unsecured servers, a worm could conceivably create hundreds of thousands of copies.


---
45 The Code Red Worm 
---

Web server defaced by `Code Red`

![]()

Goals: 
Launch a concerted attack on the White House Web site in an attempt to overwhelm it
 This attack would consist of the infected systems simultaneously sending 100 connections to port 80 of www.whitehouse.gov (198.137.240.91)


---
46 Blaster Worm
---

- One of several high-profile worms that impacted the Microsoft platform on a large scale in 2003
  + affected more than 100,000 Microsoft computers
- Caused a system to reboot every 60 seconds 

![]()

---
47 Slammer Worm
---

- 2003- The fastest spread worm to date called the "Slammer" infects over 75,000 PCs in just minutes. It was also capable of doubling its numbers every 8 seconds during the first initial minute of infection.
- Crashed Internet in 15 minutes
- Used UDP protocol vulnerability
- The worm takes advantage of a common software bug called a buffer overflow.
- Microsoft's SQL Server 2000 software has a UDP-powered directory service that lets applications automatically find the right database. 
- Moreover, SQL code comes built into other programs the company sells.

---
48 Slammer Worm
---

- Slammer masquerades as a single UDP packet, one that would normally be a harmless request to find a specific database service. 
- The first byte in the string - 04 - tells SQL Server that the data following it is the name of the online database being sought. 
- Microsoft's tech specs dictate that this name be at most 16 bytes long and end in a telltale 00.
  + But in the Slammer packet, the bytes run on, craftily coded so there is no 00 among them. 
As a result, the SQL software pastes the whole thing into memory.

---
49 Samy Worm (The MySpace Worm)
---

In 2005, a clever MySpace user looking to expand his friends list created the first self-propagating cross-site scripting (XSS) worm.
 In less than a day, the worm had gone viral and user Samy had amassed more than 1 million friends on the popular online community.
 The worm’s code, now posted at http://namb.la/popular/tech.html, used a fairly sophisticated JavaScript script. 
Fortunately the script was written for fun and didn’t try to take advantage of unpatched security holes in Internet Explorer to create a massive MySpace botnet.
 MySpace was taken down because the worm replicated too efficiently, eventually surpassing several thousand replications per second.


---
50 History of Malware
---

2005- A cell phone virus called Commwarrior-A spread from cell phone to cell phone via text message.
2007 – Storm Worm: This was a fast spreading email spamming threat against Microsoft systems that compromised millions of systems.
Zeus: This is a type of Trojan that infects used capture login credentials from banking web sites and commit financial fraud.
2010- A Windows trojan called the Stuxnet was the first worm to hit the SCADA systems.
2011- SpyEye and ZeuS have merged to form a new way to attack mobile phones to gain banking information
2013 – Cryptolocker: This is trojan horse encrypts the files infected  machine and demands a ransom to unlock the files.

---
51 WannaCry
---

![]()

#### additional slide notes

 In May 2017, the WannaCry ransomware attack spread extremely rapidly over a
period of hours to days, infecting hundreds of thousands of systems belonging to both
public and private organisations in more than 150 countries (US-CERT Alert TA17-
132A) [GOOD17]. It spread as a worm by aggressively scanning both local and random
remote networks, attempting to exploit a vulnerability in the SMB file sharing service on
unpatched Windows systems. This rapid spread was only slowed by the accidental activation
of a “kill-switch” domain by a UK security researcher, whose existence was checked
for in the initial versions of this malware. Once installed on infected systems, it also
encrypted files, demanding a ransom payment to recover them, as we will discuss later.


---
52 More Malware
---

Botnets: A botnet, also known as a zombie army, is a computer connected to the Internet that has been set up to forward transmissions (including spam or viruses) to other computers on the Internet, without the knowledge of the computer owner.
Spyware: software that monitors activity of a system or its users without their consent
Keyloggers: spyware that monitors user keyboard or mouse input, used to steal usernames, passwords, credit card #s, etc…
Adware: shows ads to users w/o their consent


---
53 Malware Terminology
---

![]()

#### additional slide notes
The terminology in this area presents problems because of a lack of universal agreement
on all of the terms and because some of the categories overlap. Table 6.1 is a
useful guide to some of the terms in use.


---
54 Preventive Measures
---

Access Control:
Controls access to the systems and networks
Helps prevent the spread of rogue programs
True access needs to be managed through  multiuser operating system that allows the system administrator to set up file permission levels on a user-by-user basis
Access control will not remove or even detect the existence of a rogue program.
Only resists the infection
Preventive Measures
Checksum Verification
A checksum, or cyclic redundancy check (CRC), is a mathematical verification of the data within a file.
A checksum allows the contents of the file to be expressed as a numeric quantity. 
If a single byte of data within the file changes, the checksum value changes, even if the file size remains constant. 
Helpful against cavity viruses
CRC is then performed at regular intervals to look for file changes.
Drawbacks: cannot detect or clean file infection
Preventive Measures
Process Monitoring
Process monitoring observes system activity and intercepts anything that looks suspicious.
Example: BIOS Virus warning
When enabled, this setting allows the computer to intercept all write attempts to the master boot record. 
If a boot sector virus attempts to save itself to this area, the BIOS interrupts the request and prompts the user for approval.
Preventive Measures
Problems with Process Monitoring
Viruses and normal programs share a lot of similar attributes
Difficult to distinguish
Requires user intervention and proficiency


Preventive Measures
Virus Scanners
Virus scanners use signature files to locate viruses in infected files.
 A signature file is simply a database that lists all known viruses, along with their specific attributes. 
Attributes include samples of each virus’s code, the types of files it infects
When a scanner checks a file, it looks to see if any of the code in the file matches any of the entries in the signature file.
If a match is found, the virus scanner notifies the user that a virus has been detected. 
Most scanners can then run a separate process that can clean the virus, as well.
Preventive Measures
Virus Scanners
Drawbacks:
Can detect only known viruses
Difficult to detect encrypted or polymorphic viruses
Two basic types of virus scanners:
On-demand
 Memory-resident

Tested AV sites: http://av-comparatives.org/
Preventive Measures
Virus Scanners
On-demand scanners:
Manual or automatic process that typically searches an entire drive or system for viruses.
Memory resident scanners:
programs that run in the background of a system. 
They are typically initialized at system startup and stay active at all times. 
Whenever a file is accessed, a memory resident scanner intercepts the file call and verifies that no viruses are present before allowing the file to be loaded into memory.
On demand scanners work after the virus is detected
Memory resident has a tradeoff with cost and performance

Preventive Measures
Heuristic Scanners
Heuristic scanners perform a statistical analysis to determine the likelihood that a file contains program code that may indicate a virus. 
A heuristic scanner does not compare code with a signature file as a virus scanner does; it uses a grading system to determine the probability that the program code being analyzed is a virus. 
If the program code scores enough points, the heuristic scanner notifies the user that a virus has been detected.
Advantage: Can detect new unknown viruses
Disadvantage: High false positives rate
Preventive Measures
Application-Level Virus Scanners
Responsible for securing a specific service throughout an organization.
InterScan VirusWall (in SMTP) can perform a full virus scan of all attachments before relaying them to an internal mail host.
