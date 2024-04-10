#!/usr/bin/env python3

import rclpy
from cpp_python_template_package.python_template_node import TemplateNode

def main(args=None):
    rclpy.init(args=args)
    node = TemplateNode()
    rclpy.spin(node)
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
    