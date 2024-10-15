# Target to compile the object file
ExamResults: ExamResults.o
	g++ ExamResults.o -o ExamResults.exe

# Target to compile the C++ program
ExamResults.o: ExamResults.cpp
	g++ -c ExamResults.cpp -o ExamResults.o

# Target to run the program (interactively)
run: ExamResults
	./ExamResults.exe

# Target to compile the object Test file
ExamResultsTest: ExamResultsTest.o
	g++ ExamResultsTest.o -o ExamResultsTest.exe

# Target to compile the C++ Test program
ExamResultsTest.o: ExamResultsTest.cpp
	g++ -c ExamResultsTest.cpp -o ExamResultsTest.o

# Target to run the Test program
test: ExamResultsTest
	./ExamResultsTest.exe

# Target to clean up compiled files
clean:
   rm -f ExamResults.o ExamResultsTest.o ExamResults.exe ExamResultsTest.exe
