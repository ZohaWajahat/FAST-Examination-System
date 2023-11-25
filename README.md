# FAST Examination System
# Course
CS1004	Object Oriented Programming
# Objective
In this project you are required to design and implement an examination system which will enable the instructor to set, conduct, mark and result preparation of the course evaluations. Moreover, additional analytics about the result will be compiled and shared with the instructor. <br/>
<br />
The system will be a console based application. There would be 2 kinds of users of the system, i.e. 1. Teacher, 2. Student. The teacher would create a question bank, then would create Quiz/Assignment and set the date/time for the quiz. Then after an evaluation is attempted by the student. The software would automatically mark the Quiz and generate marks report and another analytics report which will show some useful insights about the evaluation. The system will store the data permanently on the disk thru file reading/writing.
<br />

# Data Flow 
The system would implement the following data flow: <br />
1. Users creation: The system will generate logins of the instructor and the students by reading their names, from the text files. (Sample file provided, you can assume teacher’s names of your liking for the listed courses) <br />
2. Course offering: Courses are offered as per the details given in the course offering list. <br />
3. Course registration: The students will be registered as per the registration document provided. <br />
4. Question bank preparation by the instructor: Either enter the MCQs, True/False Questions, or subjective questions. The questions are divided into topics or read the questions from file to add to the question bank (Sample file provided). <br />
5. Quiz setting/generation: Quiz generation from the stored questions. The teacher selects the topics from where the quiz will be set. No. of questions from each topic and marks of each
will be set by the teacher accordingly with date/time setting with maximum time limit. The system can generate a quiz on its own by randomly selecting questions from the question bank from every topic by keeping intact the total no. of questions set by the instructor. <br />
6. Quiz conduct: The system will allow the registered students to attempt the quiz at the set time. The system will randomize the question sequence and answer options to increase security of the test. The quiz will be time bound, till the maximum time set by the instructor. You must implement the date/time checking to allow an attempt at the quiz. For example, if
the teacher has set a date of 29 Apr 2023 1600 Hrs as the quiz time and quiz duration upto 60 minutes, then the student will not be allowed to attempt the quiz after 29 Apr 2023 1700 Hrs. <br />
7. Answer Key generation: For each quiz the system will generate an answer key/solution from the stored answers. <br />
8. Result preparation: After conclusion of the quiz the result will be prepared by the system. The marks sheet of the whole class is prepared and shown/written to the disk. <br />
9. Quiz analytics for individual quiz and all quizzes of the course. In this section show the percentage of correct answers to each question during the test, this will enable the teacher to see a bar graph to measure the effectiveness of the questions, the bar will be low if none of the students get the question right, and it will be high in proportion to the number of students who get it right. (Normalize the graph to fit into a print area)
10. Generate attendance sheet of the quiz, i.e. Mark as absent the registered students who did not attempt the quiz. <br />

# Languages

1. C++

# Note

The Description.pdf contains the detailed description of this repository. <br />
