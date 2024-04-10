import rclpy 
from rclpy.node import Node

class TemplateNode(Node):
    
    def __init__(self):
        super().__init__('template_node')
        self.get_logger().info('Template Python node has been initialized')