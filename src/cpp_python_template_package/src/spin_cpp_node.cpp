#include "rclcpp/rclcpp.hpp"
#include "cpp_python_template_package/cpp_template_node.hpp"

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TemplateNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}