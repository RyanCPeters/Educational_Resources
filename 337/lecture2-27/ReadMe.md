Access Control and Operating Systems Security

---
2 Access Control Definitions 1/2
---

  NISTIR 7298 defines access control as:

      “the process of granting or denying specific requests to: (1) obtain and use information and related information processing services; and (2) enter specific physical facilities”

  #### extra slide notes
  Two definitions of access control are useful in understanding its scope.

  1.  NISTIR 7298 (Glossary of Key Information Security Terms , May 2013), defines
  access control as the process of granting or denying specific requests to: (1)
  obtain and use information and related information processing services; and
  (2) enter specific physical facilities.

---
3 Access Control Definitions 2/2
---

  RFC 4949 defines access control as:

      “a process by which use of system resources is regulated according to a security policy and is permitted only by authorized entities (users, programs, processes, or other systems) according to that policy”

  #### extra slide notes

  2. RFC 4949, Internet Security Glossary , defines access control as a process by
  which use of system resources is regulated according to a security policy and
  is permitted only by authorized entities (users, programs, processes, or other
  systems) according to that policy.

---
4 
---

  ^^4

  #### extra slide notes
   Table 4.1, from NIST SP 800-171 (Protecting Controlled Unclassified Information
  in Nonfederal Information Systems and Organizations , August 2016), provides
  a useful list of security requirements for access control services.

---
5 
---

  ^^5

  #### extra slide notes
  Figure 4.1 shows a broader context of access control. In addition to access
  control, this context involves the following entities and functions:

  • Authentication: Verification that the credentials of a user or other system
  entity are valid.

  Authorization: The granting of a right or permission to a system entity to
  access a system resource. This function determines who is trusted for a given
  purpose.

  • Audit: An independent review and examination of system records and activities
  in order to test for adequacy of system controls, to ensure compliance with
  established policy and operational procedures, to detect breaches in security,
  and to recommend any indicated changes in control, policy and procedures.

  An access control mechanism mediates between a user (or a process executing
  on behalf of a user) and system resources, such as applications, operating systems,
  firewalls, routers, files, and databases. The system must first authenticate an entity
  seeking access. Typically, the authentication function determines whether the user
  is permitted to access the system at all. Then the access control function determines
  if the specific requested access by this user is permitted. A security administrator
  maintains an authorization database that specifies what type of access to which
  resources is allowed for this user. The access control function consults this database
  to determine whether to grant access. An auditing function monitors and keeps a
  record of user accesses to system resources.

  In the simple model of Figure 4.1, the access control function is shown as
  a single logical module. In practice, a number of components may cooperatively
  share the access control function. All operating systems have at least a rudimentary,
  and in many cases a quite robust, access control component. Add-on security
  packages can supplement the native access control capabilities of the OS. Particular
  applications or utilities, such as a database management system, also incorporate
  access control functions. External devices, such as firewalls, can also provide access
  control services.

---
6 Access Control Policies
---

  Role-based access control (RBAC)
  Controls access based on the roles that users have within the system and on rules stating what accesses are allowed to users in given roles
  Attribute-based access control (ABAC)
  Controls access based on attributes of the user, the resource to be accessed, and current environmental conditions
  Discretionary access control (DAC)
  Controls access based on the identity of the requestor and on access rules (authorizations) stating what requestors are (or are not) allowed to do
  Mandatory access control (MAC)
  Controls access based on comparing security labels with security clearances 

  #### extra slide notes
  An access control policy, which can be embodied in an authorization database,
  dictates what types of access are permitted, under what circumstances, and by
  whom. Access control policies are generally grouped into the following categories:

  • Discretionary access control (DAC): Controls access based on the identity
  of the requestor and on access rules (authorizations) stating what requestors
  are (or are not) allowed to do. This policy is termed discretionary because an
  entity might have access rights that permit the entity, by its own volition, to
  enable another entity to access some resource.

  • Mandatory access control (MAC): Controls access based on comparing
  security labels (which indicate how sensitive or critical system resources are)
  with security clearances (which indicate system entities are eligible to access
  certain resources). This policy is termed mandatory because an entity that has
  clearance to access a resource may not, just by its own volition, enable another
  entity to access that resource.

  • Role-based access control (RBAC): Controls access based on the roles that
  users have within the system and on rules stating what accesses are allowed to
  users in given roles.

  • Attribute-based access control (ABAC): Controls access based on attributes
  of the user, the resource to be accessed, and current environmental
  conditions.

  DAC is the traditional method of implementing access control, and is examined
  in Sections 4.3 and 4.4. MAC is a concept that evolved out of requirements for
  military information security and is best covered in the context of trusted systems,
  which we deal with in Chapter 27. Both RBAC and ABAC have become increasingly
  popular, and are examined in Sections 4.5 and 4.6, respectively.

  These four policies are not mutually exclusive. An access control mechanism
  can employ two or even all three of these policies to cover different classes of system
  resources.

---
7 Subjects, Objects, and Access Rights
---

  ^^7

  Subject
    An entity capable of accessing objects
    Three classes
      Owner
      Group
      World 
  Object
    A resource to which access is controlled
    Entity used to contain and/or receive information
  Access right
    Describes the way in which a subject may access an object
    Could include:
      Read
      Write
      Execute
      Delete
      Create
      Search 


  #### extra slide notes
  The basic elements of access control are: subject, object, and access right.

  A subject is an entity capable of accessing objects. Generally, the concept of
  subject equates with that of process. Any user or application actually gains access to
  an object by means of a process that represents that user or application. The process
  takes on the attributes of the user, such as access rights.

  A subject is typically held accountable for the actions they have initiated,
  and an audit trail may be used to record the association of a subject with security relevant
  actions performed on an object by the subject.

  Basic access control systems typically define three classes of subject, with
  different access rights for each class:

  • Owner: This may be the creator of a resource, such as a file. For system resources,
  ownership may belong to a system administrator. For project resources, a project
  administrator or leader may be assigned ownership.

  • Group: In addition to the privileges assigned to an owner, a named group of
  users may also be granted access rights, such that membership in the group is
  sufficient to exercise these access rights. In most schemes, a user may belong
  to multiple groups.

  • World: The least amount of access is granted to users who are able to access the
  system but are not included in the categories owner and group for this resource.

  An object is a resource to which access is controlled. In general, an object
  is an entity used to contain and/or receive information. Examples include records,
  blocks, pages, segments, files, portions of files, directories, directory trees, mailboxes,
  messages, and programs. Some access control systems also encompass, bits,
  bytes, words, processors, communication ports, clocks, and network nodes.

  The number and types of objects to be protected by an access control system
  depends on the environment in which access control operates and the desired tradeoff
  between security on the one hand and complexity, processing burden, and ease
  of use on the other hand.

  An access right describes the way in which a subject may access an object.
  Access rights could include the following:

  • Read: User may view information in a system resource (e.g., a file, selected
  records in a file, selected fields within a record, or some combination). Read
  access includes the ability to copy or print.

  • Write: User may add, modify, or delete data in system resource (e.g., files,
  records, programs). Write access includes read access.

  • Execute: User may execute specified programs.

  • Delete: User may delete certain system resources, such as files or records.

  • Create: User may create new files, records, or fields.

  • Search: User may list the files in a directory or otherwise search the directory.

---
8 Discretionary Access Control (DAC) 
---

  Scheme in which an entity may be granted access rights that permit the entity, by its own violation, to enable another entity to access some resource
  Often provided using an access matrix
  One dimension consists of identified subjects that may attempt data access to the resources
  The other dimension lists the objects that may be accessed
  Each entry in the matrix indicates the access rights of a particular subject for a particular object

  #### extra slide notes
  As was previously stated, a discretionary access control scheme is one in which an
  entity may be granted access rights that permit the entity, by its own volition, to
  enable another entity to access some resource. A general approach to DAC, as
  exercised by an operating system or a database management system, is that of an
  access matrix. The access matrix concept was formulated by Lampson [LAMP69,
  LAMP71], and subsequently refined by Graham and Denning [GRAH72, DENN71]
  and by Harrison et al. [HARR76].

  One dimension of the matrix consists of identified subjects that may attempt
  data access to the resources. Typically, this list will consist of individual users or
  user groups, although access could be controlled for terminals, network equipment,
  hosts, or applications instead of or in addition to users. The other dimension lists
  the objects that may be accessed. At the greatest level of detail, objects may be
  individual data fields. More aggregate groupings, such as records, files, or even the
  entire database, may also be objects in the matrix. Each entry in the matrix indicates
  the access rights of a particular subject for a particular object.

---
9 
---

  ^^9

  #### extra slide notes
  Figure 4.2a, based on a figure in [SAND94], is a simple example of an access
  matrix. Thus, user A owns files 1 and 3 and has read and write access rights to those
  files. User B has read access rights to file 1, and so on.

---
10 
---

  ^^10

  #### extra slide notes
  In practice, an access matrix is usually sparse and is implemented by decomposition in one of two ways. The matrix may be decomposed by columns, yielding access control lists (ACLs); see Figure 4.2b. For each object, an ACL lists users and their permitted access rights. The ACL may contain a default, or public, entry. This allows users that are not explicitly listed as having special rights to have a default set of rights. The default set of rights should always follow the rule of least privilege or read-only access, whichever is applicable. Elements of the list may include individual users as well as groups of users.

  When it is desired to determine which subjects have which access rights to a particular resource, ACLs are convenient, because each ACL provides the information for a given resource. However, this data structure is not convenient for determining the access rights available to a specific user.

  Decomposition by rows yields capability tickets  (Figure 4.2c). A capability
  ticket specifies authorized objects and operations for a particular user. Each user
  has a number of tickets and may be authorized to loan or give them to others.
  Because tickets may be dispersed around the system, they present a greater
  security problem than access control lists. The integrity of the ticket must be
  protected, and guaranteed (usually by the operating system). In particular, the
  ticket must be unforgeable. One way to accomplish this is to have the operating
  system hold all tickets on behalf of users. These tickets would have to be held in
  a region of memory inaccessible to users. Another alternative is to include an
  unforgeable token in the capability. This could be a large random password, or a
  cryptographic message authentication code. This value is verified by the relevant
  resource whenever access is requested. This form of capability ticket is appropriate
  for use in a distributed environment, when the security of its contents cannot
  be guaranteed.

   The convenient and inconvenient aspects of capability tickets are the opposite
  of those for ACLs. It is easy to determine the set of access rights that a given user
  has, but more difficult to determine the list of users with specific access rights for a
  specific resource.

---
11 
---

  ^^11
  
  An authorization table contains one row for one access right of one subject to one resource.
  Sorting or accessing the table by subject is equivalent to a capability list. 
  Sorting or accessing the table by object is equivalent to an ACL.

  #### extra slide notes
  [SAND94] proposes a data structure that is not sparse, like the access matrix,
  but is more convenient than either ACLs or capability lists (Table 4.2). An authorization table contains one row for one access right of one subject to one resource. Sorting or accessing the table by subject is equivalent to a capability list. Sorting or accessing the table by object is equivalent to an ACL. A relational database can easily implement an authorization table of this type.

---
12 UNIX File Access Control
---

  ^^12

  Unique user identification number (user ID)
  Member of a primary group identified by a group ID
  When a file is created, it is designated as owned by a particular user and marked with that user’s ID. 
  Associated with each file is a set of 12 protection bits
  9 of the bits used to specify read, write, and execute permission for the owner of the file, members of the group and all other users

  #### extra slide notes
  Most UNIX systems depend on, or at least are based on, the file access control
  scheme introduced with the early versions of UNIX. Each UNIX user is assigned
  a unique user identification number (user ID). A user is also a member of a primary
  group, and possibly a number of other groups, each identified by a group ID.
  When a file is created, it is designated as owned by a particular user and marked
  with that user’s ID. It also belongs to a specific group, which initially is either its
  creator’s primary group, or the group of its parent directory if that directory has
  SetGID permission set. Associated with each file is a set of 12 protection bits. The
  owner ID, group ID, and protection bits are part of the file’s inode.

  Nine of the protection bits specify read, write, and execute permission for the
  owner of the file, other members of the group to which this file belongs, and all other
  users. These form a hierarchy of owner, group, and all others, with the highest relevant
  set of permissions being used. Figure 4.5a shows an example in which the file owner has
  read and write access; all other members of the file’s group have read access, and users
  outside the group have no access rights to the file. When applied to a directory, the read
  and write bits grant the right to list and to create/rename/delete files in the directory.
  The execute bit grants to right to descend into the directory or search it for a filename.

---
13 Traditional UNIX File Access Control
---

  Remaining three bits define special additional behavior for files or directories
  “Set user ID”(SetUID)
  When a user (with execute privileges for this file) executes the file, the system temporarily allocates the rights of the user’s ID of the file creator
   “Set group ID”(SetGID)
  System temporarily uses rights of the file owner/group in addition to the real user’s rights when making access control decisions
  Enables privileged programs to access files/resources not generally accessible
  Sticky bit 
  When applied to a directory it specifies that only the owner of any file in the directory can rename, move, or delete that file
  Superuser 
  Is exempt from usual access control restrictions
  Has system-wide access

  #### extra slide notes
  The remaining three bits define special additional behavior for files or directories.
  Two of these are the “set user ID” (SetUID) and “set group ID” (SetGID)
  permissions. If these are set on an executable file, the operating system functions as
  follows. When a user (with execute privileges for this file) executes the file, the system
  temporarily allocates the rights of the user’s ID of the file creator, or the file’s group,
  respectively, to those of the user executing the file. These are known as the “effective
  user ID” and “effective group ID” and are used in addition to the “real user ID” and
  “real group ID” of the executing user when making access control decisions for this
  program. This change is only effective while the program is being executed. This feature
  enables the creation and use of privileged programs that may use files normally
  inaccessible to other users. It enables users to access certain files in a controlled fashion.
  Alternatively, when applied to a directory, the SetGID permission indicates that newly
  created files will inherit the group of this directory. The SetUID permission is ignored.

  The final permission bit is the “Sticky” bit. When set on a file, this originally
  indicated that the system should retain the file contents in memory following execution.
  This is no longer used. When applied to a directory, though, it specifies that
  only the owner of any file in the directory can rename, move, or delete that file. This
  is useful for managing files in shared temporary directories.

  One particular user ID is designated as “superuser.” The superuser is
  exempt from the usual file access control constraints and has systemwide access.
  Any program that is owned by, and SetUID to, the “superuser” potentially grants
  unrestricted access to the system to any user executing that program. Hence great
  care is needed when writing such programs.

  This access scheme is adequate when file access requirements align with users
  and a modest number of groups of users. For example, suppose a user wants to give
  read access for file X to users A and B and read access for file Y to users B and C. We
  would need at least two user groups, and user B would need to belong to both groups
  in order to access the two files. However, if there are a large number of different
  groupings of users requiring a range of access rights to different files, then a very large
  number of groups may be needed to provide this. This rapidly becomes unwieldy and
  difficult to manage, even if possible at all. One way to overcome this problem is to use
  access control lists, which are provided in most modern UNIX systems.

  A final point to note is that the traditional UNIX file access control scheme
  implements a simple protection domain structure. A domain is associated with the
  user, and switching the domain corresponds to changing the user ID temporarily.

---
14 Access Control Lists (ACLs) in UNIX
---

  Modern UNIX systems support ACLs
    FreeBSD, OpenBSD, Linux, Solaris
  FreeBSD
    Setfacl command assigns a list of UNIX user IDs and groups
    Any number of users and groups can be associated with a file
    Read, write, execute protection bits
    A file does not need to have an ACL
    Includes an additional protection bit that indicates whether the file has an extended ACL
  When a process requests access to a file system object two steps are performed:
    Step 1 selects the most appropriate ACL
    Step 2 checks if the matching entry contains sufficient permissions


  #### extra slide notes
  Many modern UNIX and UNIX-based operating systems support access control
  lists, including FreeBSD, OpenBSD, Linux, and Solaris. In this section, we describe
  FreeBSD, but other implementations have essentially the same features and interface.
  The feature is referred to as extended access control list, while the traditional
  UNIX approach is referred to as minimal access control list.

  FreeBSD allows the administrator to assign a list of UNIX user IDs and groups
  to a file by using the setfacl command. Any number of users and groups can be
  associated with a file, each with three protection bits (read, write, execute), offering a
  flexible mechanism for assigning access rights. A file need not have an ACL but may be
  protected solely by the traditional UNIX file access mechanism. Free BSD files include
  an additional protection bit that indicates whether the file has an extended ACL.

---
15 Role Based Access Control
---

  Traditional DAC systems define the access rights of individual users and groups of users. 
  In contrast, RBAC is based on the roles that users assume in a system rather than the user’s identity. 
  Typically, RBAC models define a role as a job function within an organization. 
  RBAC systems assign access rights to roles instead of individual users. 
  In turn, users are assigned to different roles, either statically or dynamically, according to their responsibilities.


---
16 
---

  ^^16

  #### extra slide notes
  Traditional DAC systems define the access rights of individual users and groups
  of users. In contrast, RBAC is based on the roles that users assume in a system
  rather than the user’s identity. Typically, RBAC models define a role as a job function
  within an organization. RBAC systems assign access rights to roles instead of
  individual users. In turn, users are assigned to different roles, either statically or
  dynamically, according to their responsibilities.

  RBAC now enjoys widespread commercial use and remains an area of active
  research. The National Institute of Standards and Technology (NIST) has issued a
  standard, FIPS PUB 140-3, (Security Requirements for Cryptographic Modules September 2009), 
  that requires support for access control and administration through roles.

  The relationship of users to roles is many to many, as is the relationship of
  roles to resources, or system objects (Figure 4.6). The set of users changes, in some
  environments frequently, and the assignment of a user to one or more roles may
  also be dynamic. The set of roles in the system in most environments is relatively
  static, with only occasional additions or deletions. Each role will have specific access
  rights to one or more resources. The set of resources and the specific access rights
  associated with a particular role are also likely to change infrequently.

---
17 
---

  ^^17

  #### extra slide notes
  We can use the access matrix representation to depict the key elements of an
  RBAC system in simple terms, as shown in Figure 4.7. The upper matrix relates
  individual users to roles. Typically there are many more users than roles. Each matrix
  entry is either blank or marked, the latter indicating that this user is assigned to this
  role. Note that a single user may be assigned multiple roles (more than one mark in a
  row) and that multiple users may be assigned to a single role (more than one mark in
  a column). The lower matrix has the same structure as the DAC access control matrix,
  with roles as subjects. Typically, there are few roles and many objects, or resources.
  In this matrix the entries are the specific access rights enjoyed by the roles. Note that a
  role can be treated as an object, allowing the definition of role hierarchies.

  RBAC lends itself to an effective implementation of the principle of least
  privilege, referred to in Chapter 1. Each role should contain the minimum set of
  access rights needed for that role. A user is assigned to a role that enables him or her
  to perform only what is required for that role. Multiple users assigned to the same
  role, enjoy the same minimal set of access rights.


---
18 Attribute-Based Access Control (ABAC)
---

  ^^18

  #### extra slide notes
   A relatively recent development in access control technology is the attribute-based
  access control (ABAC) model. An ABAC model can define authorizations that
  express conditions on properties of both the resource and the subject. For example,
  consider a configuration in which each resource has an attribute that identifies the
  subject that created the resource. Then, a single access rule can specify the ownership
  privilege for all the creators of every resource. The strength of the ABAC
  approach is its flexibility and expressive power. [PLAT13] points out that the main
  obstacle to its adoption in real systems has been concern about the performance
   impact of evaluating predicates on both resource and user properties for each
  access. However, for applications such as cooperating Web services and cloud computing,
  this increased performance cost is less noticeable because there is already a
  relatively high performance cost for each access. Thus, Web services have been pioneering
  technologies for implementing ABAC models, especially through the introduction
  of the eXtensible Access Control Markup Language (XAMCL) [BEUC13],
  and there is considerable interest in applying the ABAC model to cloud services
  [IQBA12, YANG12].

   There are three key elements to an ABAC model: attributes, which are defined
  for entities in a configuration; a policy model, which defines the ABAC policies; and
  the architecture model, which applies to policies that enforce access control. We
  examine these elements in turn.

---
19 ABAC Model: Attributes
---

  Attributes contain information that indicates the class of information given by the attribute, a name, and a value 
  (e.g., Class=HospitalRecordsAccess, Name=PatientInformationAccess, Value=MFBusinessHoursOnly ).

  Subject attributes
    A subject is an active entity that causes information to flow among objects or changes the system state
    Attributes define the identity and characteristics of the subject
  Object attributes
    An object (or resource) is a passive information system-related entity containing or receiving information
    Objects have attributes that can be leverages to make access control decisions
    Ex: Word document (title, subject, date, author)
    
  Environment attributes
    Describe the operational, technical, and even situational environment or context in which the information access occurs
    These attributes have so far been largely ignored in most access control policies 
    Ex: current date and time, the current virus/hacker activities, and the network’s security level
    



  #### extra slide notes
  
  Attributes are characteristics that define specific aspects of the subject, object, environment
  conditions, and/or requested operations that are predefined and preassigned
  by an authority. Attributes contain information that indicates the class of information
  given by the attribute, a name, and a value (e.g., Class=HospitalRecordsAccess,
  Name=PatientInformationAccess, Value=MFBusinessHoursOnly).

  The following are the three types of attributes in the ABAC model:

  • Subject attributes:  A subject is an active entity (e.g., a user, an application, a
  process, or a device) that causes information to flow among objects or changes
  the system state. Each subject has associated attributes that define the identity
  and characteristics of the subject. Such attributes may include the subject’s
  identifier, name, organization, job title, and so on. A subject’s role can also be
  viewed as an attribute.

  • Object attributes:  An object, also referred to as a resource , is a passive (in the
  context of the given request) information system-related entity (e.g., devices,
  files, records, tables, processes, programs, networks, domains) containing or
  receiving information. As with subjects, objects have attributes that can be
  leveraged to make access control decisions. A Microsoft Word document, for
  example, may have attributes such as title, subject, date, and author. Object
  attributes can often be extracted from the metadata of the object. In particular,
  a variety of Web service metadata attributes may be relevant for access
  control purposes, such as ownership, service taxonomy, or even Quality of
  Service (QoS) attributes.

  • Environment attributes:  These attributes have so far been largely ignored in
  most access control policies. They describe the operational, technical, and even
  situational environment or context in which the information access occurs. For
  example, attributes, such as current date and time, the current virus/hacker
  activities, and the network’s security level (e.g., Internet vs. intranet), are not
  associated with a particular subject nor a resource, but may nonetheless be
  relevant in applying an access control policy.

---
20 ABAC
---

  ^^20

  Distinguishable because it controls access to objects by evaluating rules against the attributes of entities, operations, and the environment relevant to a request
  Relies upon the evaluation of attributes of the subject, attributes of the object, and a formal relationship or access control rule defining the allowable operations for subject-object attribute combinations in a given environment
  Systems are capable of enforcing DAC, RBAC, and MAC concepts
  Allows an unlimited number of attributes to be combined to satisfy any access control rule


  #### extra slide notes
   ABAC is a logical access control model that is distinguishable because it controls
  access to objects by evaluating rules against the attributes of entities (subject
  and object), operations, and the environment relevant to a request. ABAC relies
   upon the evaluation of attributes of the subject, attributes of the object, and a formal
  relationship or access control rule defining the allowable operations for subject-object
  attribute combinations in a given environment. All ABAC solutions contain
  these basic core capabilities to evaluate attributes and enforce rules or relationships
  between those attributes. ABAC systems are capable of enforcing DAC, RBAC,
  and MAC concepts. ABAC enables fine-grained access control, which allows for a
  higher number of discrete inputs into an access control decision, providing a bigger
  set of possible combinations of those variables to reflect a larger and more definitive
  set of possible rules, policies, or restrictions on access. Thus, ABAC allows an
  unlimited number of attributes to be combined to satisfy any access control rule.
  Moreover, ABAC systems can be implemented to satisfy a wide array of requirements
  from basic access control lists through advanced expressive policy models
  that fully leverage the flexibility of ABAC.

---
21 
---

  ^^21

  #### extra slide notes
   Figure 4.10 illustrates in a logical architecture the essential components of an ABAC
  system. An access by a subject to an object proceeds according to the following steps:

  1.  A subject requests access to an object. This request is routed to an access control
  mechanism.

  2.  The access control mechanism is governed by a set of rules (2a) that are defined
  by a preconfigured access control policy. Based on these rules, the access control
  mechanism assesses the attributes of the subject (2b), object (2c), and current
  environmental conditions (2d) to determine authorization.

   3. The access control mechanism grants the subject access to the object if access
  is authorized and denies access if it is not authorized.

  It is clear from the logical architecture that there are four independent sources
  of information used for the access control decision. The system designer can decide
  which attributes are important for access control with respect to subjects, objects,
  and environmental conditions. The system designer or other authority can then
  define access control policies, in the form of rules, for any desired combination of
  attributes of subject, object, and environmental conditions. It should be evident that
  this approach is very powerful and flexible. However, the cost, both in terms of
  the complexity of the design and implementation and in terms of the performance
  impact, is likely to exceed that of other access control approaches. This is a tradeoff
  that the system authority must make.

---
22 ABAC Policies
---

  ^^22

  A policy is a set of rules and relationships that govern allowable behavior within an organization, based on the privileges of subjects and how resources or objects are to be protected under which environment conditions

  Typically written from the perspective of the object that needs protecting and the privileges available to subjects


  Privileges represent the authorized behavior of a subject and are defined by an authority and embodied in a policy

  Other terms commonly used instead of privileges are: rights, authorizations, and entitlements

  #### extra slide notes
   A policy  is a set of rules and relationships that govern allowable behavior within an
  organization, based on the privileges of subjects and how resources or objects are to
  be protected under which environment conditions. In turn, privileges  represent the
  authorized behavior of a subject; they are defined by an authority and embodied in
  a policy. Other terms that are commonly used instead of privileges are rights, authorizations,and entitlements . Policy is typically written from the perspective of the object that needs protecting and the privileges available to subjects.

---
23 Operating Systems Security
---

  New subject slide!!

---
24 Operating System Security
---

  Possible for a system to be compromised during the installation process before it can install the latest patches
  Building and deploying a system should be a planned process designed to counter this threat
  Process must:
  Assess risks and plan the system deployment
  Secure the underlying operating system and then the key applications
  Ensure any critical content is secured
  Ensure appropriate network protection mechanisms are used
  Ensure appropriate processes are used to maintain security

  #### extra slide notes
  As we noted above, computer client and server systems are central components
  of the IT infrastructure for most organizations, may hold critical data and
  applications, and are a necessary tool for the function of an organization.
  Accordingly, we need to be aware of the expected presence of vulnerabilities
  in operating systems and applications as distributed, and the existence of
  worms scanning for such vulnerabilities at high rates, such as we discussed in
  Section 6.3. Thus, it is quite possible for a system to be compromised during
  the installation process before it can install the latest patches or implement
  other hardening measures. Hence building and deploying a system should be
  a planned process designed to counter such a threat, and to maintain security
  during its operational lifetime.

   NIST SP 800-123 states that this process must:

  • Assess risks and plan the system deployment

  • Secure the underlying operating system and then the key applications

  • Ensure any critical content is secured

  • Ensure appropriate network protection mechanisms are used

  • Ensure appropriate processes are used to maintain security

  While we address the selection of network protection mechanisms in Chapter 9, we
  examine the other items in the rest of this chapter.

---
25 System Security Planning
---

  ^^25

  The first step in deploying a new system is planning
  Planning should include a wide security assessment of the organization
  Aim is to maximize security while minimizing costs
  Planning process needs to determine security requirements for the system, applications, data, and users
  Plan needs to identify appropriate personnel and training to install and manage the system

  #### extra slide notes
  The first step in deploying new systems is planning. Careful planning will help
  ensure that the new system is as secure as possible, and complies with any necessary
  policies. This planning should be informed by a wider security assessment of
  the organization, since every organization has distinct security requirements and
  concerns. We discuss this wider planning process in Chapters 14 and 15.

  The aim of the specific system installation planning process is to maximize
  security while minimizing costs. Wide experience shows that it is much more difficult
  and expensive to “retro-fit” security at a later time, than it is to plan and provide
  it during the initial deployment process. This planning process needs to determine
  the security requirements for the system, its applications and data, and of its users.
  This then guides the selection of appropriate software for the operating system and
  applications, and provides guidance on appropriate user configuration and access
  control settings. It also guides the selection of other hardening measures required.
  The plan also needs to identify appropriate personnel to install and manage the
  system, noting the skills required and any training needed.

---
26 System Security Planning Process
---

  ^^26

  #### extra slide notes
   NIST SP 800-123 provides a list of items that should be considered during the system
  security planning process. While its focus is on secure server deployment, much of
  the list applies equally well to client system design. This list includes consideration of:

  • The purpose of the system, the type of information stored, the applications and
  services provided, and their security requirements

  • The categories of users of the system, the privileges they have, and the types of
  information they can access

  • How the users are authenticated

  • How access to the information stored on the system is managed

  • What access the system has to information stored on other hosts, such as file or
  database servers, and how this is managed

  • Who will administer the system, and how they will manage the system (via
  local or remote access)

  • Any additional security measures required on the system, including the use of
  host firewalls, anti-virus or other malware protection mechanisms, and logging

---
27 Operating Systems Hardening
---

First critical step in securing a system is to secure the base operating system
Basic steps
Install and patch the operating system
Harden and configure the operating system to adequately address the indentified security needs of the system by:
Removing unnecessary services, applications, and protocols
Configuring users, groups, and permissions
Configuring resource controls
Install and configure additional security controls, such as anti-virus, host-based firewalls, and intrusion detection system (IDS)
Test the security of the basic operating system to ensure that the steps taken adequately address its security needs

#### extra slide notes

---
28 Initial Setup and Patching
---

^^28

#### extra slide notes

---
29 Remove Unnecessary Services, Applications, Protocols
---

  If fewer software packages are available to run, the risk is reduced
  System planning process should identify what is actually required for a given system
  When performing the initial installation the supplied defaults should not be used
  Default configuration is set to maximize ease of use and functionality rather than security
  If additional packages are needed later they can be installed when they are required

  #### extra slide notes
  Because any of the software packages running on a system may contain software
  vulnerabilities, clearly if fewer software packages are available to run, then the risk
  is reduced. There is clearly a balance between usability, providing all software that
  may be required at some time, with security and a desire to limit the amount of
  software installed. The range of services, applications, and protocols required will
  vary widely between organizations, and indeed between systems within an organization.
  The system planning process should identify what is actually required for a
  given system, so that a suitable level of functionality is provided, while eliminating
  software that is not required to improve security.

  The default configuration for most distributed systems is set to maximize ease
  of use and functionality, rather than security. When performing the initial installation,
  the supplied defaults should not be used, but rather the installation should be
  customized so that only the required packages are installed. If additional packages
  are needed later, they can be installed when they required.  NIST SP 800-123
  and many of the security hardening guides provide lists of services, applications, and protocols
  that should not be installed if not required.

   NIST SP 800-123 also states a strong preference for not installing unwanted software,
  rather than installing and then later removing or disabling it. It argues this preference
  because they note that many uninstall scripts fail to completely remove all
  components of a package. They also note that disabling a service means that while
  it is not available as an initial point of attack, should an attacker succeed in gaining
  some access to a system, then disabled software could be re-enabled and used to
  further compromise a system. It is better for security if unwanted software is not
  installed, and thus not available for use at all.

---
30 Configure Users, Groups, and Authentication
---

  Not all users with access to a system will have the same access to all data and resources on that system
  Elevated privileges should be restricted to only those users that require them, and then only when they are needed to perform a task

  System planning process should consider: 
  Categories of users on the system
  Privileges they have
  Types of information they can access
  How and where they are defined and authenticated
  Default accounts included as part of the system installation should be secured
  Those that are not required should be either removed or disabled
  Policies that apply to authentication credentials configured

  #### extra slide notes
  Not all users with access to a system will have the same access to all data and
  resources on that system. All modern operating systems implement access controls
  to data and resources, as we discuss in Chapter 4 . Nearly all provide some form of
  discretionary access controls. Some systems may provide role-based or mandatory
  access control mechanisms as well.

   The system planning process should consider the categories of users on the
  system, the privileges they have, the types of information they can access, and how
  and where they are defined and authenticated. Some users will have elevated privileges
  to administer the system; others will be normal users, sharing appropriate access
  to files and other data as required; and there may even be guest accounts with very
  limited access. The last of the four key ASD mitigation strategies is to restrict elevated
  privileges to only those users that require them. Further, it is highly desirable that
  such users only access elevated privileges when needed to perform some task that
  requires them, and to otherwise access the system as a normal user. This improves
  security by providing a smaller window of opportunity for an attacker to exploit the
  actions of such privileged users. Some operating systems provide special tools or
  access mechanisms to assist administrative users to elevate their privileges only when
  necessary, and to appropriately log these actions.

  One key decision is whether the users, the groups they belong to, and their
  authentication methods are specified locally on the system or will use a centralized
  authentication server. Whichever is chosen, the appropriate details are now
  configured on the system.

  Also at this stage, any default accounts included as part of the system installation
  should be secured. Those which are not required should be either removed
  or at least disabled. System accounts that manage services on the system should
  be set so they cannot be used for interactive logins. And any passwords installed
  by default should be changed to new values with appropriate security.

  Any policy that applies to authentication credentials, and especially to
  password security, is also configured. This includes details of which authentication
  methods are accepted for different methods of account access. And it includes
  details of the required length, complexity, and age allowed for passwords. We
  discuss some of these issues in Chapter 3.

---
31 Configure Resource Controls / Install Additional Security Controls
---

  Once the users and groups are defined, appropriate permissions can be set on data and resources
  Many of the security hardening guides provide lists of recommended changes to the default access configuration
  Further security possible by installing and configuring additional security tools:
  Anti-virus software
  Host-based firewalls
  IDS or IPS software
  Application white-listing

  #### extra slide notes
  Once the users and their associated groups are defined, appropriate permissions
  can be set on data and resources to match the specified policy. This may be to limit
  which users can execute some programs, especially those that modify the system
  state. Or it may be to limit which users can read or write data in certain directory
  trees. Many of the security hardening guides provide lists of recommended changes
  to the default access configuration to improve security.

  Further security improvement may be possible by installing and configuring additional
  security tools such as anti-virus software, host-based firewalls, IDS or IPS
  software, or application white-listing. Some of these may be supplied as part of the
  operating systems installation, but not configured and enabled by default. Others
  are third-party products that are acquired and used.

   Given the widespread prevalence of malware, as we discussed in Chapter 6,
  appropriate anti-virus (which as noted addresses a wide range of malware types) is a
  critical security component on many systems. Anti-virus products have traditionally
  been used on Windows systems, since their high use made them a preferred target for
  attackers. However, the growth in other platforms, particularly smartphones, has led
  to more malware being developed for them. Hence, appropriate anti-virus products
  should be considered for any system as part of its security profile.

  Host-based firewalls, IDS, and IPS software also may improve security
  by limiting remote network access to services on the system. If remote access to
  a service is not required, though some local access is, then such restrictions help
  secure such services from remote exploit by an attacker. Firewalls are traditionally
  configured to limit access by port or protocol, from some or all external systems.
  Some may also be configured to allow access from or to specific programs on the
  systems, to further restrict the points of attack, and to prevent an attacker installing
  and accessing their own malware. IDS and IPS software may include additional
  mechanisms such as traffic monitoring, or file integrity checking to identify and
  even respond to some types of attack.

  Another additional control is to white-list applications. This limits the
  programs that can execute on the system to just those in an explicit list. Such a
  tool can prevent an attacker installing and running their own malware, and was
  the last of the four key ASD mitigation strategies. While this will improve security,
  it functions best in an environment with a predictable set of applications
  that users require. Any change in software usage would require a change in
  the configuration, which may result in increased IT support demands. Not all
  organizations or all systems will be sufficiently predictable to suit this type of
  control.

---
32 Test the System Security
---

  Final step in the process of initially securing the base operating system is security testing
  Goal:
  Ensure the previous security configuration steps are correctly implemented
  Identify any possible vulnerabilities

  Checklists are included in security hardening guides
  There are programs specifically designed to: 
  Review a system to ensure that a system meets the basic security requirements
  Scan for known vulnerabilities and poor configuration practices
  Should be done following the initial hardening of the system
  Repeated periodically as part of the security maintenance process

  #### extra slide notes
  The final step in the process of initially securing the base operating system is security
  testing. The goal is to ensure that the previous security configuration steps are
  correctly implemented, and to identify any possible vulnerabilities that must be corrected
  or managed.

  Suitable checklists are included in many security hardening guides. There
  are also programs specifically designed to review a system to ensure that a
  system meets the basic security requirements, and to scan for known vulnerabilities
  and poor configuration practices. This should be done following the initial
  hardening of the system, and then repeated periodically as part of the security
  maintenance process.

---
33 Application Security
---

  Once the base operating system is installed and appropriately secured, the required services and applications must next be installed and configured.
  Application configuration may include:
   Creating and specifying appropriate data storage areas for application
  Making appropriate changes to the application or service default configuration details
  Some applications or services may include:
  Default data
  Scripts
  User accounts
  Of particular concern with remotely accessed services such as Web and file transfer services
  Risk from this form of attack is reduced by ensuring that most of the files can only be read, but not written, by the server

  #### extra slide notes
  Any application specific configuration is then performed. This may include creating
  and specifying appropriate data storage areas for the application, and making
  appropriate changes to the application or service default configuration details.

  Some applications or services may include default data, scripts, or user
  accounts. These should be reviewed, and only retained if required, and suitably
  secured. A well-known example of this is found with Web servers, which often
  include a number of example scripts, quite a few of which are known to be insecure.
  These should not be used as supplied, but should be removed unless needed and secured.

  As part of the configuration process, careful consideration should be given to
  the access rights granted to the application. Again, this is of particular concern with
  remotely accessed services, such as Web and file transfer services. The server application
  should not be granted the right to modify files, unless that function is specifically
  required. A very common configuration fault seen with Web and file transfer
  servers is for all the files supplied by the service to be owned by the same “user”
  account that the server executes as. The consequence is that any attacker able to
  exploit some vulnerability in either the server software or a script executed by the
  server may be able to modify any of these files. The large number of “Web defacement”
  attacks is clear evidence of this type of insecure configuration. Much of the
  risk from this form of attack is reduced by ensuring that most of the files can only
  be read, but not written, by the server. Only those files that need to be modified, to
  store uploaded form data for example, or logging details, should be writeable by the
  server. Instead the files should mostly be owned and modified by the users on the
  system who are responsible for maintaining the information.

---
34 Application Security
---

  ^^34

  Encryption Technology

  - Is a key enabling technology that may be used to secure data both in transit and when stored
  - Must be configured and appropriate cryptographic keys created, signed, and secured
  - If secure network services are provided using TLS or IPsec suitable public and private keys must be generated for each of them
  - If secure network services are provided using SSH, appropriate server and client keys must be created
  - Cryptographic file systems are another use of encryption

  #### extra slide notes
  Encryption is a key enabling technology that may be used to secure data both in
  transit and when stored, as we discuss in Chapter 2 and in Parts Four and Five.
  If such technologies are required for the system, then they must be configured, and
  appropriate cryptographic keys created, signed, and secured.

  If secure network services are provided, most likely using either TLS or IPsec,
  then suitable public and private keys must be generated for each of them. Then
  X.509 certificates are created and signed by a suitable certificate authority, linking
  each service identity with the public key in use, as we discuss in Section 23.2 . If
  secure remote access is provided using Secure Shell (SSH), then appropriate server,
  and possibly client keys, must be created.

  Cryptographic file systems are another use of encryption. If desired, then
  these must be created and secured with suitable keys.

---
35 Security Maintenance
---

  Process of maintaining security is continuous
  Security maintenance includes:
  Monitoring and analyzing logging information
  Performing regular backups
  Recovering from security compromises
  Regularly testing system security
  Using appropriate software maintenance processes to patch and update all critical software, and to monitor and revise configuration as needed

  #### extra slide notes
  Once the system is appropriately built, secured, and deployed, the process of maintaining
  security is continuous. This results from the constantly changing environment,
  the discovery of new vulnerabilities, and hence exposure to new threats.
   NISTSP 800-123 suggests that this process of security maintenance includes the following
  additional steps:

  • Monitoring and analyzing logging information

  • Performing regular backups

  • Recovering from security compromises

  • Regularly testing system security

  • Using appropriate software maintenance processes to patch and update all
  critical software, and to monitor and revise configuration as needed

  We have already noted the need to configure automatic patching and update where
  possible, or to have a process to manually test and install patches on configuration
  controlled systems, and that the system should be regularly tested using checklist
  or automated tools where possible. We discuss the process of incident response in
  Section 17.4.  We now consider the critical logging and backup procedures.

---
36 Logging
---

  ^^36

  Reactive: Can only inform you about bad things that have already happened
  In the event of a system breach or failure, system administrators can more quickly identify what happened
  Key is to ensure you capture the correct data and then appropriately monitor and analyze this data
  Information can be generated by the system, network and applications
  Range of data acquired should be determined during the system planning stage
  Generates significant volumes of information and it is important that sufficient space is allocated for them
  Automated analysis is preferred

  #### extra slide notes
   NISTSP 800-123 notes that “logging is a cornerstone of a sound security posture.” Logging
  is a reactive control that can only inform you about bad things that have already
  happened. But effective logging helps ensure that in the event of a system breach
  or failure, system administrators can more quickly and accurately identify what
  happened and thus most effectively focus their remediation and recovery efforts.
  The key is to ensure you capture the correct data in the logs, and are then able to
  appropriately monitor and analyze this data. Logging information can be generated
  by the system, network and applications. The range of logging data acquired should
  be determined during the system planning stage, as it depends on the security
  requirements and information sensitivity of the server.

  Logging can generate significant volumes of information. It is important that
  sufficient space is allocated for them. A suitable automatic log rotation and archive
  system should also be configured to assist in managing the overall size of the logging
  information.

  Manual analysis of logs is tedious and is not a reliable means of detecting
  adverse events. Rather, some form of automated analysis is preferred, as it is more
  likely to identify abnormal activity.

  We discuss the process of logging further in Chapter 18 .

---
37 Data Backup and Archive
---

  ^^37

  Performing regular backups of data is a critical control that assists with maintaining the integrity of the system and user data
    May be legal or operational requirements for the retention of data
  Backup
    The process of making copies of data at regular intervals
  Archive
    The process of retaining copies of data over extended periods of time in order to meet legal and operational requirements to access past data
  Needs and policy relating to backup and archive should be determined during the system planning stage
    Kept online or offline
    Stored locally or transported to a remote site
       Trade-offs include ease of implementation and cost versus greater security and robustness against different threats

  #### extra slide notes
  Performing regular backups of data on a system is another critical control that assists
  with maintaining the integrity of the system and user data. There are many reasons
  why data can be lost from a system, including hardware or software failures, or accidental
  or deliberate corruption. There may also be legal or operational requirements
  for the retention of data. Backup is the process of making copies of data
  at regular intervals, allowing the recovery of lost or corrupted data over relatively
  short time periods of a few hours to some weeks. Archive is the process of retaining
  copies of data over extended periods of time, being months or years, in order
  to meet legal and operational requirements to access past data. These processes are
  often linked and managed together, although they do address distinct needs.

  The needs and policy relating to backup and archive should be determined
  during the system planning stage. Key decisions include whether the backup copies
  are kept online or offline, and whether copies are stored locally or transported to a
  remote site. The trade-offs include ease of implementation and cost versus greater
  security and robustness against different threats.

  A good example of the consequences of poor choices here was seen in the
  attack on an Australian hosting provider in early 2011. The attackers destroyed
  not only the live copies of thousands of customer’s sites, but also all of the online
  backup copies. As a result, many customers who had not kept their own backup
  copies lost all of their site content and data, with serious consequences for many of
  them, and for the hosting provider as well. In other examples, many organizations
  that only retained onsite backups have lost all their data as a result of fire or flooding
  in their IT center. These risks must be appropriately evaluated.

---
38 Linux/Unix Security
---

  Patch management
  Keeping security patches up to date is a widely recognized and critical control for maintaining security
  Application and service configuration
  Most commonly implemented using separate text files for each application and service
  Generally located either in the /etc directory or in the installation tree for a specific application
  Individual user configurations that can override the system defaults are located in hidden “dot” files in each user’s home directory
  Most important changes needed to improve system security are to disable services and applications that are not required

  #### extra slide notes
  Ensuring that system and application code is kept up to date with security patches is
  a widely recognized and critical control for maintaining security.

  Modern Unix and Linux distributions typically include tools for automatically
  downloading and installing software updates, including security updates, which
  can minimize the time a system is vulnerable to known vulnerabilities for which
  patches exist. For example, Red Hat, Fedora, and CentOS include up2date or
  yum ; SuSE includes yast; and Debian uses apt-get , though you must run it as
  a cron job for automatic updates. It is important to configure whichever update tool
  is provided on the distribution in use, to install at least critical security patches in a
  timely manner.

   As noted earlier, high availability systems that do not run automatic updates,
  as they may possibly introduce instability, should validate all patches on test systems
  before deploying them to production systems.

  Configuration of applications and services on Unix and Linux systems is most
  commonly implemented using separate text files for each application and service.
  System-wide configuration details are generally located either in the /etc directory
  or in the installation tree for a specific application. Where appropriate, individual
  user configurations that can override the system defaults are located in hidden
  “dot” files in each user’s home directory. The name, format, and usage of these files
  are very much dependent on the particular system version and applications in use.
  Hence the systems administrators responsible for the secure configuration of such a
  system must be suitably trained and familiar with them.

  Traditionally, these files were individually edited using a text editor, with
  any changes made taking effect either when the system was next rebooted or when
  the relevant process was sent a signal indicating that it should reload its configuration
  settings. Current systems often provide a GUI interface to these configuration
  files to ease management for novice administrators. Using such a manager may be
  appropriate for small sites with a limited number of systems. Organizations with
  larger numbers of systems may instead employ some form of centralized management,
  with a central repository of critical configuration files that can be automatically
  customized and distributed to the systems they manage.

  The most important changes needed to improve system security are to disable
  services, especially remotely accessible services, and applications, that are not
  required, and to then ensure that applications and services that are needed are
  appropriately configured, following the relevant security guidance for each. We
  provide further details on this in Section 25.5 .

---
39 Linux/Unix Security
---

  Users, groups, and permissions
  Access is specified as granting read, write, and execute permissions to each of owner, group, and others for each resource
  Guides recommend changing the access permissions for critical directories and files
  Local exploit
  Software vulnerability that can be exploited by an attacker to gain elevated privileges
  Remote exploit
  Software vulnerability in a network server that could be triggered by a remote attacker

  #### extra slide notes
  As we describe in Sections 4.5 and 25.3 , Unix and Linux systems implement discretionary
  access control to all file system resources. These include not only files
  and directories but devices, processes, memory, and indeed most system resources.
  Access is specified as granting read, write, and execute permissions to each of
  owner, group, and others, for each resource, as shown in Figure 4.5. These are set
  using the chmod command. Some systems also support extended file attributes with
  access control lists that provide more flexibility, by specifying these permissions for
  each entry in a list of users and groups. These extended access rights are typically set
  and displayed using the getfacl and setfacl commands. These commands can
  also be used to specify set user or set group permissions on the resource.

  Information on user accounts and group membership are traditionally stored
  in the /etc/passwd and /etc/group files, though modern systems also have the
  ability to import these details from external repositories queried using LDAP or NIS
  for example. These sources of information, and indeed of any associated authentication
  credentials, are specified in the PAM (pluggable authentication module)
  configuration for the system, often using text files in the /etc/pam.d directory.

  In order to partition access to information and resources on the system, users
  need to be assigned to appropriate groups granting them any required access. The
  number and assignments to groups should be decided during the system security
  planning process, and then configured in the appropriate information repository,
  whether locally using the configuration files in /etc, or on some centralized database.
  At this time, any default or generic users supplied with the system should be
  checked, and removed if not required. Other accounts that are required, but are not
  associated with a user that needs to login, should have login capability disabled, and
  any associated password or authentication credential removed.

  Guides to hardening Unix and Linux systems also often recommend changing
  the access permissions for critical directories and files, in order to further limit
  access to them. Programs that set user (setuid) to root or set group (setgid) to a privileged
  group are key target for attackers. As we detail in Sections 4.5 and 25.3 , such
  programs execute with superuser rights, or with access to resources belonging to the
  privileged group, no matter which user executes them. A software vulnerability in
  such a program can potentially be exploited by an attacker to gain these elevated
  privileges. This is known as a local exploit. A software vulnerability in a network
  server could be triggered by a remote attacker. This is known as a remote exploit.

  It is widely accepted that the number and size of setuid root programs in particular
  should be minimized. They cannot be eliminated, as superuser privileges are
  required to access some resources on the system. The programs that manage user
  login, and allow network services to bind to privileged ports, are examples. However,
  other programs, that were once setuid root for programmer convenience, can function
  as well if made setgid to a suitable privileged group that has the necessary access to
  some resource. Programs to display system state, or deliver mail, have been modified
  in this way. System hardening guides may recommend further changes and indeed the
  removal of some such programs that are not required on a particular system.

---
40 Linux/Unix Security
---

  ^^40

  Remote access controls
    Several host firewall programs may be used
    Most systems provide an administrative utility to select which services will be permitted to access the system
  Logging and log rotation
    Should not assume that the default setting is necessarily appropriate

  #### extra slide notes
  Given that remote exploits are of concern, it is important to limit access to only
  those services required. This function may be provided by a perimeter firewall, as
  we discussed in Chapter 9. However, host-based firewall or network access control
  mechanisms may provide additional defenses. Unix and Linux systems support several
  alternatives for this.

  The TCP Wrappers library and tcpd daemon provide one mechanism that
  network servers may use. Lightly loaded services may be “wrapped” using tcpd, which
  listens for connection requests on their behalf. It checks that any request is permitted
  by configured policy before accepting it and invoking the server program to handle
  it. Requests that are rejected are logged. More complex and heavily loaded servers
  incorporate this functionality into their own connection management code, using the
  TCP Wrappers library, and the same policy configuration files. These files are /etc/
  hosts.allow and /etc/hosts.deny, which should be set as policy requires.

  There are several host firewall programs that may be used. Linux systems
  primarily now use the iptables program to configure the netfilter kernel
  module. This provides comprehensive, though complex, stateful packet filtering,
  monitoring, and modification capabilities. BSD-based systems (including MacOSX)
  typically use the ipfw program with similar, though less comprehensive, capabilities.
  Most systems provide an administrative utility to generate common configurations
  and to select which services will be permitted to access the system. These should
  be used unless there are non-standard requirements, given the skill and knowledge
  needed to edit these configuration files directly.

  Most applications can be configured to log with levels of detail ranging from “debugging”
  (maximum detail) to “none.” Some middle setting is usually the best choice,
  but you should not assume that the default setting is necessarily appropriate.

  In addition, many applications allow you to specify either a dedicated file
  to write application event data to or a syslog facility to use when writing log data
  to /dev/log (see Section 25.5 ). If you wish to handle system logs in a consistent,
  centralized manner, it’s usually preferable for applications to send their log data
  to /dev/log. Note, however, that logrotate (also discussed in Section 25.5 )
  can be configured to rotate any logs on the system, whether written by syslogd,
  Syslog-NG, or individual applications.

---
41 Linux/Unix Application Security Using a chroot jail
---

  Some network accessible services do not require access to the full file-system, but rather only need a limited set of data files and directories for their operation
  chroot jail
  Restricts the server’s view of the file system to just a specified portion
  Uses chroot system call to confine a process by mapping the root of the filesystem to some other directory
  File directories outside the chroot jail aren’t visible or reachable 
  Main disadvantage is added complexity

  #### extra slide notes
  Some network accessible services do not require access to the full file-system, but
  rather only need a limited set of data files and directories for their operation. FTP is
  a common example of such a service. It provides the ability to download files from,
  and upload files to, a specified directory tree. If such a server were compromised and
  had access to the entire system, an attacker could potentially access and compromise
  data elsewhere. Unix and Linux systems provide a mechanism to run such services in a
  chroot jail , which restricts the server’s view of the file system to just a specified portion.
  This is done using the chroot system call that confines a process to some subset of the file
  system by mapping the root of the filesystem “/” to some other directory (e.g., /srv/
  ftp/public). To the “chrooted” server, everything in this chroot jail appears to
  actually be in / (e.g., the “real” directory /srv/ftp/public/etc/myconfigfile
  appears as /etc/myconfigfile in the chroot jail). Files in directories outside the
  chroot jail (e.g., /srv/www or /etc.) aren’t visible or reachable at all.

  Chrooting therefore helps contain the effects of a given server being compromised
  or hijacked. The main disadvantage of this method is added complexity: a
  number of files (including all executable libraries used by the server), directories,
  and devices needed must be copied into the chroot jail. Determining just what needs
  to go into the jail for the server to work properly can be tricky, though detailed procedures
  for chrooting many different applications are available.

  Troubleshooting a chrooted application can also be difficult. Even if an application
  explicitly supports this feature, it may behave in unexpected ways when run
  chrooted. Note also that if the chrooted process runs as root, it can “break out” of
  the chroot jail with little difficulty. Still, the advantages usually far outweigh the
  disadvantages of chrooting network services.

  The system hardening guides such as those provided by the “NSA—Security
  Configuration Guides” include security checklists for a number of Unix and Linux
  distributions that may be followed.

  There are also a number of commercial and open-source tools available to perform
  system security scanning and vulnerability testing. One of the best known is
  “Nessus.” This was originally an open-source tool, which was commercialized in 2005,
  though some limited free-use versions are available. “Tripwire” is a well-known file
  integrity checking tool that maintains a database of cryptographic hashes of monitored
  files, and scans to detect any changes, whether as a result of malicious attack, or simply
  accidental or incorrectly managed update. This again was originally an open-source
  tool, which now has both commercial and free variants available. The “Nmap” network
  scanner is another well-known and deployed assessment tool that focuses on identifying
  and profiling hosts on the target network, and the network services they offer.

---
42 Windows Security
---

  ^^42

  Patch management
    “Windows Update” and “Windows Server Update Service” assist with regular maintenance and should be used
    Third party applications also provide automatic update support
  Users administration and access controls
    Systems implement discretionary access controls resources
    Include mandatory integrity controls
    Objects are labeled as being of low, medium, high, or system integrity level 
    System ensures the subject’s integrity is equal or higher than the object’s level

  #### extra slide notes
  We now consider some specific issues with the secure installation, configuration,
  and management of Microsoft Windows systems. These systems have for many
  years formed a significant portion of all “general purpose” system installations.
  Hence, they have been specifically targeted by attackers, and consequently security
  countermeasures are needed to deal with these challenges. The process of providing
  appropriate levels of security still follows the general outline we describe in this
  chapter. Beyond the general guidance in this section, we provide more detailed discussion
  of Windows security mechanisms later in Chapter 26.

  Again, there are a large range of resources available to assist administrators
  of these systems, including online resources such as the
  “Microsoft Security Tools & Checklists,” and specific system hardening guides such
  as those provided by the “NSA—Security Configuration Guides.”

  The “Windows Update” service and the “Windows Server Update Services” assist
  with the regular maintenance of Microsoft software, and should be configured and
  used. Many other third-party applications also provide automatic update support,
  and these should be enabled for selected applications.

  Users and groups in Windows systems are defined with a Security ID (SID). This
  information may be stored and used locally, on a single system, in the Security
  Account Manager (SAM). It may also be centrally managed for a group of systems
  belonging to a domain, with the information supplied by a central Active Directory
  (AD) system using the LDAP protocol. Most organizations with multiple systems
  will manage them using domains. These systems can also enforce common policy
  on users on any system in the domain. We further explore the Windows security
  architecture in Section 26.1 .

  Windows systems implement discretionary access controls to system resources
  such as files, shared memory, and named pipes. The access control list has a number of
  entries that may grant or deny access rights to a specific SID, which may be for an individual
  user or for some group of users. Windows Vista and later systems also include
  mandatory integrity controls. These label all objects, such as processes and files, and
  all users, as being of low, medium, high, or system integrity level. Then whenever data
  is written to an object, the system first ensures that the subject’s integrity is equal or
  higher than the object’s level. This implements a form of the Biba Integrity model
  we discuss in Section 27.2 that specifically targets the issue of untrusted remote code
  executing in, for example Windows Internet Explorer, trying to modify local resources.

---
43 Windows Security Users Administration and Access Controls
---

  ^^43

  Windows systems also define privileges
    System wide and granted to user accounts
  Combination of share and NTFS permissions may be used to provide additional security and granularity when accessing files on a shared resource
  User Account Control (UAC)
    Provided in Vista and later systems
    Assists with ensuring users with administrative rights only use them when required, otherwise accesses the system as a normal user 
  Low Privilege Service Accounts
    Used for long-lived service processes such as file, print, and DNS services

  #### extra slide notes
  Windows systems also define privileges, which are system wide and granted
  to user accounts. Examples of privileges include the ability to backup the computer
  (which requires overriding the normal access controls to obtain a complete backup),
  or the ability to change the system time. Some privileges are considered dangerous,
  as an attacker may use them to damage the system. Hence they must be granted with
  care. Others are regarded as benign, and may be granted to many or all user accounts.

  As with any system, hardening the system configuration can include further
  limiting the rights and privileges granted to users and groups on the system. As
  the access control list gives deny entries greater precedence, you can set an explicit
  deny permission to prevent unauthorized access to some resource, even if the user is
  a member of a group that otherwise grants access.

  When accessing files on a shared resource, a combination of share and NTFS
  permissions may be used to provide additional security and granularity. For example,
  you can grant full control to a share, but read-only access to the files within it. If
  access-based enumeration is enabled on shared resources, it can automatically hide
  any objects that a user is not permitted to read. This is useful with shared folders
  containing many users’ home directories, for example.

  You should also ensure users with administrative rights only use them when
  required, and otherwise access the system as a normal user. The User Account Control
  (UAC) provided in Vista and later systems assists with this requirement. These systems
  also provide Low Privilege Service Accounts that may be used for long-lived service
  processes, such as file, print, and DNS services that do not require elevated privileges.

---
44 Windows Security
---

  ^^44

  Application and service configuration
    Much of the configuration information is centralized in the Registry
      Forms a database of keys and values that may be queried and interpreted by applications
    Registry keys can be directly modified using the “Registry Editor”
      More useful for making bulk changes

  #### extra slide notes
  Unlike Unix and Linux systems, much of the configuration information in Windows
  systems is centralized in the Registry, which forms a database of keys and values
  that may be queried and interpreted by applications on these systems.

  Changes to these values can be made within specific applications, setting preferences
  in the application that are then saved in the registry using the appropriate keys
  and values. This approach hides the detailed representation from the administrator.
  Alternatively, the registry keys can be directly modified using the “Registry Editor.”
  This approach is more useful for making bulk changes, such as those recommended
  in hardening guides. These changes may also be recorded in a central repository, and
  pushed out whenever a user logs in to a system within a network domain.

  Given the predominance of malware that targets Windows systems, it is essential
  that suitable anti-virus, anti-spyware, personal firewall, and other malware and
  attack detection and handling software packages are installed and configured on
  such systems. This is clearly needed for network connected systems, as shown by
  the high-incidence numbers in reports such as [SYMA16]. However, as the Stuxnet
  attacks in 2010 show, even isolated systems updated using removable media are
  vulnerable, and thus must also be protected.

---
45 Windows Security
---

  ^^45

  Other security controls
    Essential that anti-virus, anti-spyware, personal firewall, and other malware and attack detection and handling software packages are installed and configured
    Current generation Windows systems include basic firewall and malware countermeasure capabilities
    Important to ensure the set of products in use are compatible
  Windows systems also support a range of cryptographic functions:
    Encrypting files and directories using the Encrypting File System (EFS)
    Full-disk encryption with AES using BitLocker
  “Microsoft Baseline Security Analyzer”
    Free, easy to use tool that checks for compliance with Microsoft’s security recommendations

  #### extra slide notes
  Current generation Windows systems include some basic firewall and malware
  countermeasure capabilities, which should certainly be used at a minimum.
  However, many organizations find that these should be augmented with one or
  more of the many commercial products available. One issue of concern is undesirable
  interactions between anti-virus and other products from multiple vendors. Care
  is needed when planning and installing such products to identify possible adverse
  interactions, and to ensure the set of products in use are compatible with each other.

  Windows systems also support a range of cryptographic functions that may
  be used where desirable. These include support for encrypting files and directories
  using the Encrypting File System (EFS), and for full-disk encryption with AES
  using BitLocker.

  The system hardening guides such as those provided by the “NSA—Security
  Configuration Guides” also include security checklists for various versions of
  Windows.

  There are also a number of commercial and open-source tools available to
  perform system security scanning and vulnerability testing of Windows systems. The
  “Microsoft Baseline Security Analyzer” is a simple, free, easy-to-use tool that aims
  to help small- to medium-sized businesses improve the security of their systems by
  checking for compliance with Microsoft’s security recommendations. Larger organizations
  are likely better served using one of the larger, centralized, commercial
  security analysis suites available.

