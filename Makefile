NAME = see.a

SOURCE_DIRECTORY = sources
SOURCES =	see.cpp \
			Renderer.cpp \
			Camera.cpp \
			Polygon.cpp \
			Object.cpp \
			PixelDrawer.cpp

INCLUDES = includes
LIBRARIES =

BUILD_DIRECTORY = build
OBJECTS = $(addprefix $(BUILD_DIRECTORY)/, $(SOURCES:.cpp=.o))

TESTS_DIRECTORY = tests
TESTS = tests.cpp

PLUGINS_DIRECTORY = plugins
PLUGINS = sdl

all: $(NAME) build_plugins test

$(NAME): $(OBJECTS)
	ar rvs $(NAME) $(OBJECTS) $(LIBRARIES)

test: 
	make -C $(TESTS_DIRECTORY)/development
	./$(TESTS_DIRECTORY)/development/tests

$(OBJECTS):  $(BUILD_DIRECTORY)/%.o : $(SOURCE_DIRECTORY)/%.cpp | $(BUILD_DIRECTORY)
	g++ -g -c $(addprefix -I, $(INCLUDES)) $< -o $@

$(BUILD_DIRECTORY):
	mkdir $(BUILD_DIRECTORY)

build_plugins:
	for plugin in $(addprefix $(PLUGINS_DIRECTORY)/, $(PLUGINS)); do make -C $$plugin; done

clean:
	rm -f $(OBJECTS)
	make -C $(TESTS_DIRECTORY)/development clean

fclean: clean
	rm -f $(NAME)
	make -C $(TESTS_DIRECTORY)/development fclean
	for plugin in $(addprefix $(PLUGINS_DIRECTORY)/, $(PLUGINS)); do make -C $$plugin fclean; done

re: fclean all