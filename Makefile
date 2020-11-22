NAME = see.a

SOURCE_DIRECTORY = sources
SOURCES =	see.cpp \
			Renderer.cpp \
			Camera.cpp \
			Polygon.cpp \
			Shape.cpp

INCLUDES = includes
LIBRARIES = 

BUILD_DIRECTORY = build
OBJECTS = $(addprefix $(BUILD_DIRECTORY)/, $(SOURCES:.cpp=.o))

TESTS_DIRECTORY = tests
TESTS = tests.cpp

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rvs $(NAME) $(OBJECTS)

test: 
	make -C tests
	./$(TESTS_DIRECTORY)/tests

$(OBJECTS):  $(BUILD_DIRECTORY)/%.o : $(SOURCE_DIRECTORY)/%.cpp | $(BUILD_DIRECTORY)
	g++ -c $(addprefix -I, $(INCLUDES)) $< -o $@

$(BUILD_DIRECTORY):
	mkdir $(BUILD_DIRECTORY)
	
clean:
	rm $(OBJECTS)

fclean: clean
	rm $(NAME)