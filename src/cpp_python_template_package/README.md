# Template ROS2 Package 

Template ROS2 package consisting of both C++ and Python nodes

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Installation

Run the following commands in a ROS container

- cd to workspace cpp_python_template_package
- Build and source the package
    - `colcon build`
    - `source install/setup.bash`
- Test the template nodes 
    - `ros2 run cpp_python_template_package spin_cpp_node`
    -- Confirm that output includes "Template CPP node has been initialized"
    - `ros2 run cpp_python_template_package spin_py_node.py`
    -- Confirm that output includes "Template Python node has been initialized"


## Usage

- Example template for a ROS2 package that include C++ and Python components. 
- Both components are built using colcon. 
- Each may be executed independently. 

## Contributing

Contributions are welcome. Send a pull request. 

## License

This project is licensed under the [Unlicense](https://unlicense.org/). For more information, see the [LICENSE](LICENSE) file