#pragma once
#include <vector>
#include <opencv2/opencv.hpp>
#include "learnopengl/shader_s.h"
#include "Grid.h"


// shader data
Shader* DrawTextureShader;
Shader* SingleColorShader;

// texture data
unsigned int texture;

//Grid
Grid NormalGrid;
Grid DeformedGrid;

//��ʾ�ؼ������������������ܶ�
#define X_POINT_COUNT 41
#define Y_POINT_COUNT 41
#define X_SPACING 0.05
#define Y_SPACING 0.05
int obj = 2;//ѡ����һ�������㷨
bool objChanged = true;


//���Ƶ㼯 �Լ� ���Ƶ㼯�ı���
std::vector<cv::Point2f> ControlPointsP = {cv::Point2f(-1, -1),cv::Point2f(-1, 1), cv::Point2f(1, 1), cv::Point2f(1, -1), cv::Point2f(0.51, 0.0),cv::Point2f(-0.51, -0.0)};
std::vector<cv::Point2f> ControlPointsQ = {cv::Point2f(-1, -1),cv::Point2f(-1, 1), cv::Point2f(1, 1), cv::Point2f(1, -1), cv::Point2f(0.6, 0.0),cv::Point2f(-0.6, -0.0)};
//std::vector<cv::Point2f> ControlPointsP = { cv::Point2f(0.51, 0.0),cv::Point2f(-0.51, -0.0) };
//std::vector<cv::Point2f> ControlPointsQ = { cv::Point2f(0.4, 0.0),cv::Point2f(-0.4, -0.0)  };


