all:
	g++ StdJsonLogic/json.cpp -static -o tests/testmjs.exe
	g++ StdParserGen/parser.cpp -static -o tests/parsergen.exe
	g++ Time/sleep.cpp -static -o tests/timer.exe
	g++ STDMakefiles/std_custom_buildfiles.cpp -static -o tests/std_custom_buildfiles.exe
	g++ BetterMath/bettermath.cpp -static -o tests/bettermath.exe