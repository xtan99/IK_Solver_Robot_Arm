/**
 * @file robot_parameters.cpp
 * @author Driver : Sanchit Kedia (sanchit@terpmail.umd.edu), Navigator: Tanmay Haldankar (tanmayh@umd.edu), Design Keeper: Qamar Syed (qsyed@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2022-10-13
 * @copyright MIT License (c)
 *
 */

#include <gtest/gtest.h>
#include "../include/robot_parameters.hpp"

TEST(Robot_Parameters, CheckAngles) {
    RobotParameters r1;
    std::vector<double> angles = r1.get_robot_angles();
    bool empty = angles.empty();
    EXPECT_FALSE(empty);
}

TEST(Robot_Parameters, CheckDH) {
    RobotParameters r1;
    Eigen::MatrixXd DH = r1.get_dh_parameters();
    EXPECT_EQ(DH.size(), 24);
}

TEST(Robot_Parameters, CheckSetAngles) {
    RobotParameters r1;
    std::vector<double> angles = {0, 0, 0, 0, 0, 0};
    r1.set_robot_angles(angles);
    std::vector<double> angles_o = r1.get_robot_angles();
    EXPECT_EQ(angles, angles_o);
}
