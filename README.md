Fractol
Overview
Fractol is a simple fractal visualization program written in C using the MiniLibX graphics library. It supports three types of fractals: Mandelbrot, Julia, and Tricorn. The program allows users to explore and interact with these fascinating mathematical patterns.

Table of Contents
Getting Started
Prerequisites
Compiling the Program
Running the Program
Usage
Choosing a Fractal
Julia Set Parameters
Controls
Mouse Controls
Keyboard Controls
Color Schemes
Implementation Details
File Structure
Fractal Generation
User Interaction
Contributing
License
Getting Started
Prerequisites
Ensure you have the MiniLibX library installed. The program relies on this library for graphics handling.

Compiling the Program
bash
Copy code
make
Running the Program
bash
Copy code
./fractol [fractal_type] [optional_parameters]
Usage
Choosing a Fractal
The program supports three types of fractals:

Mandelbrot (M)
Julia (J)
Tricorn (T)
Specify the fractal type as a command-line argument when running the program.

bash
Copy code
./fractol M   # Mandelbrot
./fractol J   # Julia
./fractol T   # Tricorn
Julia Set Parameters
For the Julia fractal, you can specify starting values as additional parameters. Example:

bash
Copy code
./fractol J -0.4 0.6
Controls
Mouse Controls
Scroll Up/Down: Zoom in/out at the mouse cursor position.
Keyboard Controls
Arrow Keys: Move the fractal in different directions.
Spacebar: Change the color scheme.
Color Schemes
The program provides various color schemes, and you can cycle through them using the spacebar.

Implementation Details
File Structure
fractol.h: Header file containing declarations and macros.
fractol.c: Main program file initializing the fractal and handling user input.
parse_args.c: Parses command-line arguments to determine the fractal type.
init.c: Initializes the fractal parameters and color scheme.
help_msg.c: Displays usage instructions and examples.
julia.c, mandelbrot.c, tricorn.c: Implementations of the fractal generation algorithms.
draw_fractals.c: Draws the fractal using the chosen algorithm.
colors.c: Handles color generation and manipulation.
keyboards.c, mouse.c: Handle keyboard and mouse input, respectively.
zoom.c, move.c: Implement zooming and panning functionalities.
color_shift.c: Implements color scheme shifting.
Fractal Generation
The program generates fractals using the Mandelbrot, Julia, and Tricorn algorithms. The draw_fractal function iterates through each pixel, calculates the corresponding complex coordinates, and determines the color based on the chosen fractal type.

User Interaction
The program responds to keyboard and mouse inputs for navigation and interaction. Keyboard controls move the fractal, while the mouse scroll controls zoom. Color schemes can be changed using the spacebar.

