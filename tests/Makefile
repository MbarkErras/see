NAME = a.out

SOURCE_DIRECTORY = .
SOURCES =	main.cpp

INCLUDES = ../includes ../plugins/sdl/includes
LIBRARIES =  ../see.a ../plugins/sdl/pSDL.a -lSDL2

BUILD_DIRECTORY = build
OBJECTS = $(addprefix $(BUILD_DIRECTORY)/, $(SOURCES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	g++ -o $(NAME) $(OBJECTS) $(LIBRARIES)

$(OBJECTS):  $(BUILD_DIRECTORY)/%.o : $(SOURCE_DIRECTORY)/%.cpp | $(BUILD_DIRECTORY)
	g++ -c $(addprefix -I, $(INCLUDES)) $< -o $@

$(BUILD_DIRECTORY):
	mkdir $(BUILD_DIRECTORY)
	
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all