NAME = pSDL.a

SOURCE_DIRECTORY = sources
SOURCES =	pSDL.cpp

INCLUDES = includes ../../includes
LIBRARIES = -lSDL2 ../../see.a

BUILD_DIRECTORY = build
OBJECTS = $(addprefix $(BUILD_DIRECTORY)/, $(SOURCES:.cpp=.o))

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
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all