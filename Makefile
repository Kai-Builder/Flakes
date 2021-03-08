# ALL Builds
all:
	g++ StdJsonLogic/json.cpp -static -o tests/testmjs.exe
	g++ StdParserGen/parser.cpp -static -o tests/parsergen.exe
	g++ Time/sleep.cpp -static -o tests/timer.exe
	g++ STDMakefiles/std_custom_buildfiles.cpp -static -o tests/std_custom_buildfiles.exe
	g++ BetterMath/bettermath.cpp -static -o tests/bettermath.exe
	g++ Prototypes/proto.cpp -static -o tests/template.exe
	g++ BetterSTdout/better_stdout.cpp -static -o tests/better_stdout.exe
	g++ FlakeData/FlakeMake.cxx -static -o tests/flakext.exe
	g++ FlakeData/include/Boolean.cpp -static -o tests/booltest.exe
	g++ FlakeData/include/String.cpp -static -o tests/string.exe
	g++ -c -o flakeslib.o FlakeData/FlakeMake.cxx
	ar ru linker/libFlakes.a flakemake.o
	g++ -c -o flakesintegers.o FlakeData/include/Integer.cpp
	ar ru linker/flakes_int.a flakesintegers.o
	g++ StdFlakeChecker/flake.cpp -static -o version.exe