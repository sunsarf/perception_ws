#include "rclcpp/rclcpp.hpp"

class TemplateNode : public rclcpp::Node
{
    public:
        TemplateNode() : Node("my_node") {
            RCLCPP_INFO(this->get_logger(), "Template CPP node has been initialized.");
        }
        
    private:
};
