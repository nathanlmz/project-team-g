## Introduction 
HI ALL! Welcome to this project

All of you should create a file named `1155xxxxxx.md` (with your own SID) in the **`_stu`** folder, for grading (If I am correct).

The file you must read: It includes all the details and tasks you need to do. 
[CSCI3250+3251 Project Milestone #3](https://github.com/csci3250-2019/project-team-g/blob/master/tasks.md)

There are 5 issues in this project, here is a brief summary of all of them (You should refer to the link above for details)

- Task 1: Set up readme.md
   
    - Three headers should be set (Introduction, Code, Contributors), and a short summary in the **Introduction** header should be written regrading the task that we are going to work on. 
  
- Task 2: Include data into readme

     - In the  **`README.md`** file, under Contributors, use **`include_relative`** to include your own md file under the folder `_stu`
     - (read about **`include_relative`** on this page: https://jekyllrb.com/docs/includes/) 
     - At the bottom of the page, include the last updated time using **site.time**
     
- Task 3: Project board

   - Create a new project board (with any name), and use the Basic Kanban template
   - Also, Set up automations

      
- Task 4: Write C code

     - In **`code.c`**, write a piece of very simple C code
     - In **`README.md`**, include your code
     - Get the GitHub shield for Travis CI, and put it inside READ.md with your code
     - (Read about **`Travis CI** on this page: https://hackernoon.com/continuous-integration-using-travis-on-github-1f7f2314b6b7) 
      
- Task 5: Promote your repo

    - Go to the public repo of **`csci3250-2019.github.io`** in the CSCI3250 organization
    - Edit the file to add a link of your team (`https://csci3250-2019.github.io/(repo name)`), and request for review from @chuckjee

## Code 
{% highlight c %}
{% include_relative code.c %}
{% endhighlight %}

[![Build Status](https://travis-ci.org/csci3250-2019/project-team-g.svg?branch=master)](https://travis-ci.org/csci3250-2019/project-team-g)

## Contributors
1. {% include_relative _stu/1155053722.md %}
2. {% include_relative _stu/1155112411.md %}
3. {% include_relative _stu/1155108847.md %}
4. {% include_relative _stu/1155109885.md %}
5. {% include_relative _stu/1155110109.md %}
6. {% include_relative _stu/1155110042.md %}
7. {% include_relative _stu/1155110657.md %}
8. {% include_relative _stu/1155109318.md %}
9. {% include_relative _stu/1155109098.md %}


## Last Update Time
{{site.time}}
