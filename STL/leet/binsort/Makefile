# Variables
BIN_DIR = bin

# Default target
.PHONY: all
all: help

# Help target
.PHONY: help
help:
	@echo "Usage:"
	@echo "  make build <name>   - Create <name>.cc in the current directory"
	@echo "  make run <name>     - Compile and run <name>.cc"
	@echo "  make clean          - Remove all files in the bin/ directory"

# Pattern rule for build
build-%:
	@if [ -f "$*.cc" ]; then \
		echo "Error: File $*.cc already exists"; \
		exit 1; \
	fi
	@echo "// Auto-generated file: $*.cc" > $*.cc
	@echo "int main() { return 0; }" >> $*.cc
	@echo "Created file: $*.cc"

# Pattern rule for run
run-%:
	@if [ ! -f "$*.cc" ]; then \
		echo "Error: File $*.cc does not exist"; \
		exit 1; \
	fi
	@mkdir -p $(BIN_DIR)
	g++ -o $(BIN_DIR)/$* $*.cc
	@echo "Compiled $*.cc to $(BIN_DIR)/$*"
	@echo "Running $(BIN_DIR)/$*..."
	@./$(BIN_DIR)/$*

# Clean target: Remove all files in bin/
.PHONY: clean
clean:
	@if [ -d "$(BIN_DIR)" ]; then \
		echo "Cleaning bin/ directory..."; \
		rm -rf $(BIN_DIR)/*; \
		echo "Cleaned bin/ directory"; \
	else \
		echo "No bin/ directory found, nothing to clean."; \
	fi

# Remove specific file target: rm-<name>
.PHONY: rm-%
rm-%:
	@if [ -f "$*.cc" ]; then \
		echo "Removing $*.cc"; \
		rm -f $*.cc; \
	else \
		echo "Error: File $*.cc does not exist"; \
		exit 1; \
	fi