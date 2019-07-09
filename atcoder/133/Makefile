all:
	g++ -o a/a a/a.cpp
	g++ -o b/b b/b.cpp
	g++ -o c/c c/c.cpp
	g++ -o d/d d/d.cpp
	g++ -o e/e e/e.cpp
	g++ -o f/f f/f.cpp

.PHONY: a	
a:
	g++ -o a/a a/a.cpp

.PHONY: b
b: 
	g++ -o b/b b/b.cpp

.PHONY: c
c:
	g++ -o c/c c/c.cpp

.PHONY: d
d:
	g++ -o d/d d/d.cpp

.PHONY: e
e:
	g++ -o e/e e/e.cpp

.PHONY: f
f:
	g++ -o f/f f/f.cpp

clean:
	rm -f a/*.exe b/*.exe c/*.exe d/*.exe e/*.exe f/*.exe
	rm -f a/*.stackdump b/*.stackdump c/*.stackdump d/*.stackdump e/*.stackdump/ f/*.stackdump
