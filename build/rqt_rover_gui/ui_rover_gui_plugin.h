/********************************************************************************
** Form generated from reading UI file 'rover_gui_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROVER_GUI_PLUGIN_H
#define UI_ROVER_GUI_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "BWTabWidget.h"
#include "CameraFrame.h"
#include "IMUFrame.h"
#include "MapFrame.h"
#include "USFrame.h"

QT_BEGIN_NAMESPACE

class Ui_RoverGUI
{
public:
    BWTabWidget *tab_widget;
    QWidget *sensor_display_tab;
    rqt_rover_gui::IMUFrame *imu_frame;
    rqt_rover_gui::MapFrame *map_frame;
    rqt_rover_gui::USFrame *us_frame;
    rqt_rover_gui::CameraFrame *camera_frame;
    QFrame *map_settings_frame;
    QPushButton *map_popout_button;
    QCheckBox *ekf_checkbox;
    QCheckBox *encoder_checkbox;
    QCheckBox *gps_checkbox;
    QRadioButton *map_manual_radio_button;
    QRadioButton *map_auto_radio_button;
    QCheckBox *unique_rover_colors_checkbox;
    QCheckBox *global_offset_checkbox;
    QLabel *map_frame_views_label;
    QLabel *map_frame_views_label_2;
    QLabel *map_settings_label;
    QFrame *imu_frame_frame;
    QFrame *us_frame_frame;
    QLabel *IMU_label;
    QLabel *ultrasound_label;
    QFrame *camera_frame_frame;
    QFrame *map_frame_frame;
    QLabel *map_label;
    QLabel *map_label_2;
    QWidget *simulation_parameters_tab;
    QFrame *setup_group;
    QGroupBox *target_distribution_group_box;
    QRadioButton *uniform_distribution_radio_button;
    QRadioButton *powerlaw_distribution_radio_button;
    QRadioButton *clustered_distribution_radio_button;
    QRadioButton *custom_distribution_radio_button;
    QPushButton *custom_world_path_button;
    QGroupBox *round_type_button_group;
    QRadioButton *prelim_radio_button;
    QRadioButton *final_radio_button;
    QRadioButton *unbounded_radio_button;
    QLabel *unbounded_arena_size_label;
    QComboBox *unbounded_arena_size_combobox;
    QLabel *ground_texture_label;
    QComboBox *texture_combobox;
    QLabel *custom_world_path;
    QCheckBox *override_num_rovers_checkbox;
    QComboBox *custom_num_rovers_combobox;
    QComboBox *simulation_timer_combobox;
    QLabel *simulation_timer_label;
    QCheckBox *create_savable_world_checkbox;
    QComboBox *number_of_tags_combobox;
    QLabel *number_of_tags_label;
    QLabel *number_of_tags_label_2;
    QLabel *label_7;
    QLabel *label_11;
    QFrame *GPS_frame;
    QLabel *label_23;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *gps_update_rate;
    QLabel *gps_ref_lat;
    QLabel *gps_ref_long;
    QLabel *gps_ref_heading;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *gps_drift;
    QLabel *gps_drift_freq;
    QLabel *gps_noise;
    QLabel *label_52;
    QLabel *gps_ref_alt;
    QFrame *IMU_frame;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *imu_update_rate;
    QLabel *imu_rate_drift;
    QLabel *imu_rate_noise;
    QLabel *imu_heading_drift;
    QLabel *imu_heading_noise;
    QLabel *imu_accel_drift;
    QLabel *imu_accel_noise;
    QLabel *imu_rpy_offsets;
    QLabel *imu_noise;
    QLabel *label_63;
    QLabel *label_64;
    QFrame *camera_frame_status;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *camera_update_rate;
    QLabel *camera_width;
    QLabel *camera_height;
    QLabel *camera_format;
    QLabel *label_25;
    QLabel *camera_noise_mean;
    QLabel *label_45;
    QLabel *camera_noise_stdev;
    QFrame *ultrasound_frame;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *sonar_range_res;
    QLabel *sonar_max_angle;
    QLabel *sonar_min_angle;
    QLabel *sonar_max;
    QLabel *sonar_min;
    QLabel *sonar_horz_res;
    QLabel *label_65;
    QLabel *sonar_gaussian_noise;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_17;
    QFrame *button_frame;
    QCheckBox *start_visualization_on_build_checkbox;
    QLabel *start_visualization_on_build_label;
    QPushButton *build_simulation_button;
    QPushButton *clear_simulation_button;
    QPushButton *visualize_simulation_button;
    QFrame *control_frame;
    QGroupBox *control_group_box;
    QRadioButton *autonomous_control_radio_button;
    QRadioButton *joystick_control_radio_button;
    QPushButton *all_stop_button;
    QPushButton *all_autonomous_button;
    QFrame *joystick_frame;
    QLCDNumber *joy_lcd_drive_forward;
    QLCDNumber *joy_lcd_drive_left;
    QLCDNumber *joy_lcd_drive_right;
    QLCDNumber *joy_lcd_drive_back;
    QLCDNumber *joy_lcd_gripper_up;
    QLCDNumber *joy_lcd_gripper_open;
    QLCDNumber *joy_lcd_gripper_close;
    QLCDNumber *joy_lcd_gripper_down;
    QLabel *drive_label;
    QLabel *gripper_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *version_number_label;
    BWTabWidget *log_tab;
    QWidget *info_log_tab;
    QTextBrowser *info_log;
    QWidget *diag_log_tab;
    QTextBrowser *diag_log;
    QFrame *Rover_frame;
    QListWidget *rover_diags_list;
    QListWidget *rover_list;
    QListWidget *map_selection_list;
    QLabel *label_13;
    QLabel *map_list_label;
    QFrame *Simulation_Timer_Frame;
    QLabel *currentSimulationTimeTitle;
    QLabel *simulationTimerStartTitle;
    QLabel *simulationTimerStopTitle;
    QLabel *currentSimulationTimeLabel;
    QLabel *simulationTimerStartLabel;
    QLabel *simulationTimerStopLabel;
    QLabel *label_8;
    QLabel *num_targets_collected_label;
    QLabel *simulation_timer_frame_label;
    QFrame *status_frame;
    QLabel *rover_name;
    QLabel *gps_numSV_label;
    QLabel *label_9;
    QLabel *perc_of_time_avoiding_obstacles;
    QLabel *gps_numSV_title;
    QFrame *joystick_disabled_frame;
    QLabel *auto_enabled_label;
    QButtonGroup *rover_control_button_group;

    void setupUi(QWidget *RoverGUI)
    {
        if (RoverGUI->objectName().isEmpty())
            RoverGUI->setObjectName(QStringLiteral("RoverGUI"));
        RoverGUI->resize(1100, 725);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RoverGUI->sizePolicy().hasHeightForWidth());
        RoverGUI->setSizePolicy(sizePolicy);
        RoverGUI->setMinimumSize(QSize(1100, 725));
        RoverGUI->setMaximumSize(QSize(1100, 725));
        RoverGUI->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        tab_widget = new BWTabWidget(RoverGUI);
        tab_widget->setObjectName(QStringLiteral("tab_widget"));
        tab_widget->setGeometry(QRect(330, 10, 761, 521));
        sizePolicy.setHeightForWidth(tab_widget->sizePolicy().hasHeightForWidth());
        tab_widget->setSizePolicy(sizePolicy);
        tab_widget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #FFFFFF;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: #000000;\n"
"    border: 2px solid #FFFFFF;\n"
"    border-bottom-color: #FFFFFF; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background:  #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #000000;\n"
"    border-color: #FFFFFF;\n"
"    border-bottom-color: #FFFFFF; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"QTabBar::tab:selected {\n"
"    /* "
                        "expand/overlap to the left and right by 4px */\n"
"    margin-left: -4px;\n"
"    margin-right: -4px;\n"
"}\n"
"\n"
"QTabBar::tab:first:selected {\n"
"    margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"}\n"
"\n"
"QTabBar::tab:only-one {\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}\n"
""));
        sensor_display_tab = new QWidget();
        sensor_display_tab->setObjectName(QStringLiteral("sensor_display_tab"));
        sensor_display_tab->setStyleSheet(QStringLiteral(""));
        imu_frame = new rqt_rover_gui::IMUFrame(sensor_display_tab);
        imu_frame->setObjectName(QStringLiteral("imu_frame"));
        imu_frame->setGeometry(QRect(246, 306, 209, 179));
        sizePolicy.setHeightForWidth(imu_frame->sizePolicy().hasHeightForWidth());
        imu_frame->setSizePolicy(sizePolicy);
        imu_frame->setFrameShape(QFrame::StyledPanel);
        imu_frame->setFrameShadow(QFrame::Raised);
        map_frame = new rqt_rover_gui::MapFrame(sensor_display_tab);
        map_frame->setObjectName(QStringLiteral("map_frame"));
        map_frame->setGeometry(QRect(392, 26, 354, 249));
        map_frame->setStyleSheet(QStringLiteral("border-color: rgb(255, 255, 255);"));
        map_frame->setFrameShape(QFrame::StyledPanel);
        map_frame->setFrameShadow(QFrame::Raised);
        map_frame->setLineWidth(1);
        us_frame = new rqt_rover_gui::USFrame(sensor_display_tab);
        us_frame->setObjectName(QStringLiteral("us_frame"));
        us_frame->setGeometry(QRect(16, 306, 209, 179));
        us_frame->setFrameShape(QFrame::StyledPanel);
        us_frame->setFrameShadow(QFrame::Raised);
        camera_frame = new rqt_rover_gui::CameraFrame(sensor_display_tab);
        camera_frame->setObjectName(QStringLiteral("camera_frame"));
        camera_frame->setGeometry(QRect(16, 26, 354, 249));
        camera_frame->setFrameShape(QFrame::StyledPanel);
        camera_frame->setFrameShadow(QFrame::Raised);
        map_settings_frame = new QFrame(sensor_display_tab);
        map_settings_frame->setObjectName(QStringLiteral("map_settings_frame"));
        map_settings_frame->setGeometry(QRect(470, 300, 281, 191));
        map_settings_frame->setFrameShape(QFrame::StyledPanel);
        map_settings_frame->setFrameShadow(QFrame::Raised);
        map_popout_button = new QPushButton(map_settings_frame);
        map_popout_button->setObjectName(QStringLiteral("map_popout_button"));
        map_popout_button->setEnabled(true);
        map_popout_button->setGeometry(QRect(200, 145, 60, 25));
        map_popout_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
""));
        ekf_checkbox = new QCheckBox(map_settings_frame);
        ekf_checkbox->setObjectName(QStringLiteral("ekf_checkbox"));
        ekf_checkbox->setGeometry(QRect(30, 40, 60, 22));
        ekf_checkbox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ekf_checkbox->setChecked(true);
        encoder_checkbox = new QCheckBox(map_settings_frame);
        encoder_checkbox->setObjectName(QStringLiteral("encoder_checkbox"));
        encoder_checkbox->setGeometry(QRect(130, 40, 75, 22));
        encoder_checkbox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        encoder_checkbox->setChecked(false);
        gps_checkbox = new QCheckBox(map_settings_frame);
        gps_checkbox->setObjectName(QStringLiteral("gps_checkbox"));
        gps_checkbox->setGeometry(QRect(30, 60, 91, 22));
        gps_checkbox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_checkbox->setChecked(false);
        map_manual_radio_button = new QRadioButton(map_settings_frame);
        map_manual_radio_button->setObjectName(QStringLiteral("map_manual_radio_button"));
        map_manual_radio_button->setEnabled(true);
        map_manual_radio_button->setGeometry(QRect(30, 110, 81, 20));
        map_manual_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        map_manual_radio_button->setChecked(false);
        map_auto_radio_button = new QRadioButton(map_settings_frame);
        map_auto_radio_button->setObjectName(QStringLiteral("map_auto_radio_button"));
        map_auto_radio_button->setEnabled(true);
        map_auto_radio_button->setGeometry(QRect(130, 110, 61, 20));
        map_auto_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        map_auto_radio_button->setChecked(true);
        unique_rover_colors_checkbox = new QCheckBox(map_settings_frame);
        unique_rover_colors_checkbox->setObjectName(QStringLiteral("unique_rover_colors_checkbox"));
        unique_rover_colors_checkbox->setGeometry(QRect(20, 145, 165, 25));
        unique_rover_colors_checkbox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        global_offset_checkbox = new QCheckBox(map_settings_frame);
        global_offset_checkbox->setObjectName(QStringLiteral("global_offset_checkbox"));
        global_offset_checkbox->setGeometry(QRect(130, 60, 121, 25));
        global_offset_checkbox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        map_frame_views_label = new QLabel(map_settings_frame);
        map_frame_views_label->setObjectName(QStringLiteral("map_frame_views_label"));
        map_frame_views_label->setGeometry(QRect(10, 20, 125, 20));
        map_frame_views_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        map_frame_views_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        map_frame_views_label->setWordWrap(true);
        map_frame_views_label_2 = new QLabel(map_settings_frame);
        map_frame_views_label_2->setObjectName(QStringLiteral("map_frame_views_label_2"));
        map_frame_views_label_2->setGeometry(QRect(10, 90, 131, 20));
        map_frame_views_label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        map_frame_views_label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        map_frame_views_label_2->setWordWrap(true);
        map_settings_label = new QLabel(sensor_display_tab);
        map_settings_label->setObjectName(QStringLiteral("map_settings_label"));
        map_settings_label->setGeometry(QRect(490, 290, 105, 20));
        map_settings_label->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        map_settings_label->setAlignment(Qt::AlignCenter);
        map_settings_label->setWordWrap(true);
        imu_frame_frame = new QFrame(sensor_display_tab);
        imu_frame_frame->setObjectName(QStringLiteral("imu_frame_frame"));
        imu_frame_frame->setGeometry(QRect(240, 300, 221, 191));
        imu_frame_frame->setFrameShape(QFrame::StyledPanel);
        imu_frame_frame->setFrameShadow(QFrame::Raised);
        us_frame_frame = new QFrame(sensor_display_tab);
        us_frame_frame->setObjectName(QStringLiteral("us_frame_frame"));
        us_frame_frame->setGeometry(QRect(10, 300, 221, 191));
        us_frame_frame->setFrameShape(QFrame::StyledPanel);
        us_frame_frame->setFrameShadow(QFrame::Raised);
        IMU_label = new QLabel(sensor_display_tab);
        IMU_label->setObjectName(QStringLiteral("IMU_label"));
        IMU_label->setGeometry(QRect(260, 290, 40, 20));
        IMU_label->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        IMU_label->setAlignment(Qt::AlignCenter);
        IMU_label->setWordWrap(true);
        ultrasound_label = new QLabel(sensor_display_tab);
        ultrasound_label->setObjectName(QStringLiteral("ultrasound_label"));
        ultrasound_label->setGeometry(QRect(30, 290, 90, 20));
        ultrasound_label->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        ultrasound_label->setAlignment(Qt::AlignCenter);
        camera_frame_frame = new QFrame(sensor_display_tab);
        camera_frame_frame->setObjectName(QStringLiteral("camera_frame_frame"));
        camera_frame_frame->setGeometry(QRect(10, 20, 366, 261));
        camera_frame_frame->setFrameShape(QFrame::StyledPanel);
        camera_frame_frame->setFrameShadow(QFrame::Raised);
        map_frame_frame = new QFrame(sensor_display_tab);
        map_frame_frame->setObjectName(QStringLiteral("map_frame_frame"));
        map_frame_frame->setGeometry(QRect(386, 20, 366, 261));
        map_frame_frame->setFrameShape(QFrame::StyledPanel);
        map_frame_frame->setFrameShadow(QFrame::Raised);
        map_label = new QLabel(sensor_display_tab);
        map_label->setObjectName(QStringLiteral("map_label"));
        map_label->setGeometry(QRect(406, 10, 40, 20));
        map_label->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        map_label->setAlignment(Qt::AlignCenter);
        map_label->setWordWrap(true);
        map_label_2 = new QLabel(sensor_display_tab);
        map_label_2->setObjectName(QStringLiteral("map_label_2"));
        map_label_2->setGeometry(QRect(30, 10, 65, 20));
        map_label_2->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        map_label_2->setAlignment(Qt::AlignCenter);
        map_label_2->setWordWrap(true);
        tab_widget->addTab(sensor_display_tab, QString());
        map_frame_frame->raise();
        camera_frame_frame->raise();
        us_frame_frame->raise();
        imu_frame_frame->raise();
        map_settings_frame->raise();
        imu_frame->raise();
        map_frame->raise();
        us_frame->raise();
        camera_frame->raise();
        map_settings_label->raise();
        map_label_2->raise();
        map_label->raise();
        ultrasound_label->raise();
        IMU_label->raise();
        simulation_parameters_tab = new QWidget();
        simulation_parameters_tab->setObjectName(QStringLiteral("simulation_parameters_tab"));
        setup_group = new QFrame(simulation_parameters_tab);
        setup_group->setObjectName(QStringLiteral("setup_group"));
        setup_group->setGeometry(QRect(10, 20, 531, 311));
        setup_group->setFrameShape(QFrame::StyledPanel);
        setup_group->setFrameShadow(QFrame::Raised);
        target_distribution_group_box = new QGroupBox(setup_group);
        target_distribution_group_box->setObjectName(QStringLiteral("target_distribution_group_box"));
        target_distribution_group_box->setGeometry(QRect(10, 20, 161, 111));
        target_distribution_group_box->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        uniform_distribution_radio_button = new QRadioButton(target_distribution_group_box);
        uniform_distribution_radio_button->setObjectName(QStringLiteral("uniform_distribution_radio_button"));
        uniform_distribution_radio_button->setEnabled(true);
        uniform_distribution_radio_button->setGeometry(QRect(20, 30, 91, 16));
        uniform_distribution_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        uniform_distribution_radio_button->setChecked(false);
        powerlaw_distribution_radio_button = new QRadioButton(target_distribution_group_box);
        powerlaw_distribution_radio_button->setObjectName(QStringLiteral("powerlaw_distribution_radio_button"));
        powerlaw_distribution_radio_button->setEnabled(true);
        powerlaw_distribution_radio_button->setGeometry(QRect(20, 70, 101, 16));
        powerlaw_distribution_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        clustered_distribution_radio_button = new QRadioButton(target_distribution_group_box);
        clustered_distribution_radio_button->setObjectName(QStringLiteral("clustered_distribution_radio_button"));
        clustered_distribution_radio_button->setEnabled(true);
        clustered_distribution_radio_button->setGeometry(QRect(20, 50, 101, 16));
        clustered_distribution_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        clustered_distribution_radio_button->setChecked(false);
        custom_distribution_radio_button = new QRadioButton(target_distribution_group_box);
        custom_distribution_radio_button->setObjectName(QStringLiteral("custom_distribution_radio_button"));
        custom_distribution_radio_button->setEnabled(true);
        custom_distribution_radio_button->setGeometry(QRect(20, 90, 121, 16));
        custom_distribution_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        custom_distribution_radio_button->setChecked(true);
        custom_world_path_button = new QPushButton(setup_group);
        custom_world_path_button->setObjectName(QStringLiteral("custom_world_path_button"));
        custom_world_path_button->setEnabled(false);
        custom_world_path_button->setGeometry(QRect(160, 105, 70, 25));
        custom_world_path_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
""));
        round_type_button_group = new QGroupBox(setup_group);
        round_type_button_group->setObjectName(QStringLiteral("round_type_button_group"));
        round_type_button_group->setGeometry(QRect(280, 120, 211, 131));
        round_type_button_group->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        prelim_radio_button = new QRadioButton(round_type_button_group);
        prelim_radio_button->setObjectName(QStringLiteral("prelim_radio_button"));
        prelim_radio_button->setEnabled(true);
        prelim_radio_button->setGeometry(QRect(10, 30, 111, 22));
        prelim_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        prelim_radio_button->setChecked(true);
        final_radio_button = new QRadioButton(round_type_button_group);
        final_radio_button->setObjectName(QStringLiteral("final_radio_button"));
        final_radio_button->setEnabled(true);
        final_radio_button->setGeometry(QRect(10, 50, 71, 22));
        final_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        unbounded_radio_button = new QRadioButton(round_type_button_group);
        unbounded_radio_button->setObjectName(QStringLiteral("unbounded_radio_button"));
        unbounded_radio_button->setEnabled(true);
        unbounded_radio_button->setGeometry(QRect(10, 70, 111, 22));
        unbounded_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        unbounded_arena_size_label = new QLabel(round_type_button_group);
        unbounded_arena_size_label->setObjectName(QStringLiteral("unbounded_arena_size_label"));
        unbounded_arena_size_label->setGeometry(QRect(40, 98, 81, 20));
        unbounded_arena_size_label->setStyleSheet(QStringLiteral("color: grey;"));
        unbounded_arena_size_combobox = new QComboBox(round_type_button_group);
        unbounded_arena_size_combobox->setObjectName(QStringLiteral("unbounded_arena_size_combobox"));
        unbounded_arena_size_combobox->setEnabled(false);
        unbounded_arena_size_combobox->setGeometry(QRect(125, 95, 71, 27));
        unbounded_arena_size_combobox->setStyleSheet(QLatin1String("color: grey;\n"
"border-color: grey;\n"
"border: 1px solid grey; \n"
"padding: 1px 0px 1px 3px; /*This makes text colour work*/\n"
""));
        ground_texture_label = new QLabel(setup_group);
        ground_texture_label->setObjectName(QStringLiteral("ground_texture_label"));
        ground_texture_label->setGeometry(QRect(20, 180, 111, 20));
        ground_texture_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ground_texture_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        texture_combobox = new QComboBox(setup_group);
        texture_combobox->setObjectName(QStringLiteral("texture_combobox"));
        texture_combobox->setGeometry(QRect(140, 180, 121, 27));
        texture_combobox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
"padding: 1px 0px 1px 3px; /*This makes text colour work*/\n"
""));
        custom_world_path = new QLabel(setup_group);
        custom_world_path->setObjectName(QStringLiteral("custom_world_path"));
        custom_world_path->setGeometry(QRect(58, 140, 203, 20));
        custom_world_path->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        override_num_rovers_checkbox = new QCheckBox(setup_group);
        override_num_rovers_checkbox->setObjectName(QStringLiteral("override_num_rovers_checkbox"));
        override_num_rovers_checkbox->setEnabled(true);
        override_num_rovers_checkbox->setGeometry(QRect(20, 220, 181, 22));
        override_num_rovers_checkbox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        override_num_rovers_checkbox->setChecked(false);
        custom_num_rovers_combobox = new QComboBox(setup_group);
        custom_num_rovers_combobox->setObjectName(QStringLiteral("custom_num_rovers_combobox"));
        custom_num_rovers_combobox->setEnabled(false);
        custom_num_rovers_combobox->setGeometry(QRect(200, 220, 61, 27));
        custom_num_rovers_combobox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
"padding: 1px 0px 1px 3px; /*This makes text colour work*/\n"
""));
        simulation_timer_combobox = new QComboBox(setup_group);
        simulation_timer_combobox->setObjectName(QStringLiteral("simulation_timer_combobox"));
        simulation_timer_combobox->setEnabled(true);
        simulation_timer_combobox->setGeometry(QRect(150, 260, 111, 27));
        simulation_timer_combobox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
"padding: 1px 0px 1px 3px; /*This makes text colour work*/\n"
""));
        simulation_timer_combobox->setEditable(false);
        simulation_timer_combobox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        simulation_timer_combobox->setMinimumContentsLength(0);
        simulation_timer_combobox->setIconSize(QSize(4, 4));
        simulation_timer_label = new QLabel(setup_group);
        simulation_timer_label->setObjectName(QStringLiteral("simulation_timer_label"));
        simulation_timer_label->setGeometry(QRect(20, 260, 130, 20));
        simulation_timer_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        simulation_timer_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        create_savable_world_checkbox = new QCheckBox(setup_group);
        create_savable_world_checkbox->setObjectName(QStringLiteral("create_savable_world_checkbox"));
        create_savable_world_checkbox->setEnabled(true);
        create_savable_world_checkbox->setGeometry(QRect(280, 260, 211, 22));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(create_savable_world_checkbox->sizePolicy().hasHeightForWidth());
        create_savable_world_checkbox->setSizePolicy(sizePolicy1);
        create_savable_world_checkbox->setMaximumSize(QSize(16777215, 22));
        QFont font;
        font.setPointSize(10);
        create_savable_world_checkbox->setFont(font);
        create_savable_world_checkbox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        create_savable_world_checkbox->setChecked(false);
        number_of_tags_combobox = new QComboBox(setup_group);
        number_of_tags_combobox->setObjectName(QStringLiteral("number_of_tags_combobox"));
        number_of_tags_combobox->setEnabled(false);
        number_of_tags_combobox->setGeometry(QRect(280, 55, 131, 27));
#ifndef QT_NO_TOOLTIP
        number_of_tags_combobox->setToolTip(QLatin1String("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The number of april tag cubes generated by the Uniform or Clustered distributions.</p></body></html>"));
#endif // QT_NO_TOOLTIP
        number_of_tags_combobox->setStyleSheet(QLatin1String("color: grey;\n"
"border-color: grey;\n"
"border: 1px solid grey; \n"
"padding: 1px 0px 1px 3px; /*This makes text colour work*/\n"
""));
        number_of_tags_label = new QLabel(setup_group);
        number_of_tags_label->setObjectName(QStringLiteral("number_of_tags_label"));
        number_of_tags_label->setGeometry(QRect(280, 35, 121, 20));
        number_of_tags_label->setStyleSheet(QStringLiteral("color: grey;"));
        number_of_tags_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        number_of_tags_label_2 = new QLabel(setup_group);
        number_of_tags_label_2->setObjectName(QStringLiteral("number_of_tags_label_2"));
        number_of_tags_label_2->setGeometry(QRect(280, 80, 231, 20));
        number_of_tags_label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        number_of_tags_label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        round_type_button_group->raise();
        target_distribution_group_box->raise();
        custom_world_path_button->raise();
        ground_texture_label->raise();
        texture_combobox->raise();
        custom_world_path->raise();
        override_num_rovers_checkbox->raise();
        custom_num_rovers_combobox->raise();
        simulation_timer_combobox->raise();
        simulation_timer_label->raise();
        create_savable_world_checkbox->raise();
        number_of_tags_label->raise();
        number_of_tags_label_2->raise();
        number_of_tags_combobox->raise();
        label_7 = new QLabel(simulation_parameters_tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(205, 10, 140, 20));
        label_7->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(simulation_parameters_tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(220, 340, 40, 20));
        label_11->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        label_11->setAlignment(Qt::AlignCenter);
        GPS_frame = new QFrame(simulation_parameters_tab);
        GPS_frame->setObjectName(QStringLiteral("GPS_frame"));
        GPS_frame->setGeometry(QRect(200, 350, 201, 141));
        GPS_frame->setFrameShape(QFrame::StyledPanel);
        GPS_frame->setFrameShadow(QFrame::Raised);
        label_23 = new QLabel(GPS_frame);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 25, 61, 16));
        label_23->setFont(font);
        label_23->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_22 = new QLabel(GPS_frame);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 10, 61, 16));
        label_22->setFont(font);
        label_22->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_24 = new QLabel(GPS_frame);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 40, 61, 16));
        label_24->setFont(font);
        label_24->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_26 = new QLabel(GPS_frame);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 55, 61, 16));
        label_26->setFont(font);
        label_26->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_update_rate = new QLabel(GPS_frame);
        gps_update_rate->setObjectName(QStringLiteral("gps_update_rate"));
        gps_update_rate->setGeometry(QRect(79, 10, 111, 16));
        gps_update_rate->setFont(font);
        gps_update_rate->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_ref_lat = new QLabel(GPS_frame);
        gps_ref_lat->setObjectName(QStringLiteral("gps_ref_lat"));
        gps_ref_lat->setGeometry(QRect(79, 25, 111, 16));
        gps_ref_lat->setFont(font);
        gps_ref_lat->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_ref_long = new QLabel(GPS_frame);
        gps_ref_long->setObjectName(QStringLiteral("gps_ref_long"));
        gps_ref_long->setGeometry(QRect(79, 40, 111, 16));
        gps_ref_long->setFont(font);
        gps_ref_long->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_ref_heading = new QLabel(GPS_frame);
        gps_ref_heading->setObjectName(QStringLiteral("gps_ref_heading"));
        gps_ref_heading->setGeometry(QRect(79, 55, 111, 16));
        gps_ref_heading->setFont(font);
        gps_ref_heading->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_49 = new QLabel(GPS_frame);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(10, 85, 61, 16));
        label_49->setFont(font);
        label_49->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_50 = new QLabel(GPS_frame);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(10, 100, 61, 16));
        label_50->setFont(font);
        label_50->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_51 = new QLabel(GPS_frame);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(10, 115, 61, 16));
        label_51->setFont(font);
        label_51->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_drift = new QLabel(GPS_frame);
        gps_drift->setObjectName(QStringLiteral("gps_drift"));
        gps_drift->setGeometry(QRect(79, 85, 111, 16));
        gps_drift->setFont(font);
        gps_drift->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_drift_freq = new QLabel(GPS_frame);
        gps_drift_freq->setObjectName(QStringLiteral("gps_drift_freq"));
        gps_drift_freq->setGeometry(QRect(79, 100, 111, 16));
        gps_drift_freq->setFont(font);
        gps_drift_freq->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_noise = new QLabel(GPS_frame);
        gps_noise->setObjectName(QStringLiteral("gps_noise"));
        gps_noise->setGeometry(QRect(79, 115, 111, 16));
        gps_noise->setFont(font);
        gps_noise->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_52 = new QLabel(GPS_frame);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(10, 70, 61, 16));
        label_52->setFont(font);
        label_52->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gps_ref_alt = new QLabel(GPS_frame);
        gps_ref_alt->setObjectName(QStringLiteral("gps_ref_alt"));
        gps_ref_alt->setGeometry(QRect(79, 70, 111, 16));
        gps_ref_alt->setFont(font);
        gps_ref_alt->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        IMU_frame = new QFrame(simulation_parameters_tab);
        IMU_frame->setObjectName(QStringLiteral("IMU_frame"));
        IMU_frame->setGeometry(QRect(410, 350, 341, 141));
        IMU_frame->setFrameShape(QFrame::StyledPanel);
        IMU_frame->setFrameShadow(QFrame::Raised);
        label_27 = new QLabel(IMU_frame);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(170, 10, 60, 16));
        label_27->setFont(font);
        label_27->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_28 = new QLabel(IMU_frame);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 25, 60, 16));
        label_28->setFont(font);
        label_28->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_29 = new QLabel(IMU_frame);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 40, 60, 16));
        label_29->setFont(font);
        label_29->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_30 = new QLabel(IMU_frame);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 75, 60, 16));
        label_30->setFont(font);
        label_30->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_31 = new QLabel(IMU_frame);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(170, 25, 60, 16));
        label_31->setFont(font);
        label_31->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_32 = new QLabel(IMU_frame);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(170, 40, 60, 16));
        label_32->setFont(font);
        label_32->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_33 = new QLabel(IMU_frame);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 10, 60, 16));
        label_33->setFont(font);
        label_33->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_34 = new QLabel(IMU_frame);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(170, 75, 60, 16));
        label_34->setFont(font);
        label_34->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_35 = new QLabel(IMU_frame);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(170, 90, 60, 16));
        label_35->setFont(font);
        label_35->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_36 = new QLabel(IMU_frame);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(170, 60, 60, 16));
        label_36->setFont(font);
        label_36->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_37 = new QLabel(IMU_frame);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(10, 60, 60, 16));
        label_37->setFont(font);
        label_37->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_38 = new QLabel(IMU_frame);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(10, 95, 60, 16));
        label_38->setFont(font);
        label_38->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_update_rate = new QLabel(IMU_frame);
        imu_update_rate->setObjectName(QStringLiteral("imu_update_rate"));
        imu_update_rate->setGeometry(QRect(240, 10, 90, 16));
        imu_update_rate->setFont(font);
        imu_update_rate->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_rate_drift = new QLabel(IMU_frame);
        imu_rate_drift->setObjectName(QStringLiteral("imu_rate_drift"));
        imu_rate_drift->setGeometry(QRect(240, 25, 90, 16));
        imu_rate_drift->setFont(font);
        imu_rate_drift->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_rate_noise = new QLabel(IMU_frame);
        imu_rate_noise->setObjectName(QStringLiteral("imu_rate_noise"));
        imu_rate_noise->setGeometry(QRect(240, 40, 90, 16));
        imu_rate_noise->setFont(font);
        imu_rate_noise->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_heading_drift = new QLabel(IMU_frame);
        imu_heading_drift->setObjectName(QStringLiteral("imu_heading_drift"));
        imu_heading_drift->setGeometry(QRect(240, 75, 90, 16));
        imu_heading_drift->setFont(font);
        imu_heading_drift->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_heading_noise = new QLabel(IMU_frame);
        imu_heading_noise->setObjectName(QStringLiteral("imu_heading_noise"));
        imu_heading_noise->setGeometry(QRect(240, 90, 90, 16));
        imu_heading_noise->setFont(font);
        imu_heading_noise->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_accel_drift = new QLabel(IMU_frame);
        imu_accel_drift->setObjectName(QStringLiteral("imu_accel_drift"));
        imu_accel_drift->setGeometry(QRect(80, 25, 85, 16));
        imu_accel_drift->setFont(font);
        imu_accel_drift->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_accel_noise = new QLabel(IMU_frame);
        imu_accel_noise->setObjectName(QStringLiteral("imu_accel_noise"));
        imu_accel_noise->setGeometry(QRect(80, 40, 85, 16));
        imu_accel_noise->setFont(font);
        imu_accel_noise->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_rpy_offsets = new QLabel(IMU_frame);
        imu_rpy_offsets->setObjectName(QStringLiteral("imu_rpy_offsets"));
        imu_rpy_offsets->setGeometry(QRect(80, 75, 85, 16));
        imu_rpy_offsets->setFont(font);
        imu_rpy_offsets->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        imu_noise = new QLabel(IMU_frame);
        imu_noise->setObjectName(QStringLiteral("imu_noise"));
        imu_noise->setGeometry(QRect(80, 95, 85, 16));
        imu_noise->setFont(font);
        imu_noise->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_63 = new QLabel(IMU_frame);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setGeometry(QRect(10, 110, 60, 16));
        label_63->setFont(font);
        label_63->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_64 = new QLabel(IMU_frame);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(80, 110, 85, 16));
        label_64->setFont(font);
        label_64->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        camera_frame_status = new QFrame(simulation_parameters_tab);
        camera_frame_status->setObjectName(QStringLiteral("camera_frame_status"));
        camera_frame_status->setGeometry(QRect(560, 20, 191, 131));
        camera_frame_status->setFrameShape(QFrame::StyledPanel);
        camera_frame_status->setFrameShadow(QFrame::Raised);
        label_18 = new QLabel(camera_frame_status);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 15, 61, 17));
        label_18->setFont(font);
        label_18->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_19 = new QLabel(camera_frame_status);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 35, 61, 17));
        label_19->setFont(font);
        label_19->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_20 = new QLabel(camera_frame_status);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 50, 61, 17));
        label_20->setFont(font);
        label_20->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_21 = new QLabel(camera_frame_status);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 65, 61, 17));
        label_21->setFont(font);
        label_21->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        camera_update_rate = new QLabel(camera_frame_status);
        camera_update_rate->setObjectName(QStringLiteral("camera_update_rate"));
        camera_update_rate->setGeometry(QRect(120, 15, 60, 17));
        camera_update_rate->setFont(font);
        camera_update_rate->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        camera_width = new QLabel(camera_frame_status);
        camera_width->setObjectName(QStringLiteral("camera_width"));
        camera_width->setGeometry(QRect(120, 35, 60, 17));
        camera_width->setFont(font);
        camera_width->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        camera_height = new QLabel(camera_frame_status);
        camera_height->setObjectName(QStringLiteral("camera_height"));
        camera_height->setGeometry(QRect(120, 50, 60, 17));
        camera_height->setFont(font);
        camera_height->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        camera_format = new QLabel(camera_frame_status);
        camera_format->setObjectName(QStringLiteral("camera_format"));
        camera_format->setGeometry(QRect(120, 65, 60, 17));
        camera_format->setFont(font);
        camera_format->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_25 = new QLabel(camera_frame_status);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 85, 81, 17));
        label_25->setFont(font);
        label_25->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        camera_noise_mean = new QLabel(camera_frame_status);
        camera_noise_mean->setObjectName(QStringLiteral("camera_noise_mean"));
        camera_noise_mean->setGeometry(QRect(120, 85, 60, 17));
        camera_noise_mean->setFont(font);
        camera_noise_mean->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_45 = new QLabel(camera_frame_status);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(47, 100, 41, 17));
        label_45->setFont(font);
        label_45->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        camera_noise_stdev = new QLabel(camera_frame_status);
        camera_noise_stdev->setObjectName(QStringLiteral("camera_noise_stdev"));
        camera_noise_stdev->setGeometry(QRect(120, 100, 60, 17));
        camera_noise_stdev->setFont(font);
        camera_noise_stdev->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_19->raise();
        label_20->raise();
        label_21->raise();
        label_18->raise();
        camera_update_rate->raise();
        camera_width->raise();
        camera_height->raise();
        camera_format->raise();
        label_25->raise();
        camera_noise_mean->raise();
        label_45->raise();
        camera_noise_stdev->raise();
        ultrasound_frame = new QFrame(simulation_parameters_tab);
        ultrasound_frame->setObjectName(QStringLiteral("ultrasound_frame"));
        ultrasound_frame->setGeometry(QRect(560, 170, 191, 161));
        ultrasound_frame->setFrameShape(QFrame::StyledPanel);
        ultrasound_frame->setFrameShadow(QFrame::Raised);
        label_39 = new QLabel(ultrasound_frame);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(10, 10, 71, 17));
        label_39->setFont(font);
        label_39->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_40 = new QLabel(ultrasound_frame);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(10, 70, 71, 17));
        label_40->setFont(font);
        label_40->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_41 = new QLabel(ultrasound_frame);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(10, 90, 71, 17));
        label_41->setFont(font);
        label_41->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_42 = new QLabel(ultrasound_frame);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(10, 50, 71, 17));
        label_42->setFont(font);
        label_42->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_43 = new QLabel(ultrasound_frame);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(10, 30, 71, 17));
        label_43->setFont(font);
        label_43->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_44 = new QLabel(ultrasound_frame);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(10, 110, 131, 17));
        label_44->setFont(font);
        label_44->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        sonar_range_res = new QLabel(ultrasound_frame);
        sonar_range_res->setObjectName(QStringLiteral("sonar_range_res"));
        sonar_range_res->setGeometry(QRect(120, 110, 60, 17));
        sonar_range_res->setFont(font);
        sonar_range_res->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        sonar_max_angle = new QLabel(ultrasound_frame);
        sonar_max_angle->setObjectName(QStringLiteral("sonar_max_angle"));
        sonar_max_angle->setGeometry(QRect(120, 90, 60, 17));
        sonar_max_angle->setFont(font);
        sonar_max_angle->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        sonar_min_angle = new QLabel(ultrasound_frame);
        sonar_min_angle->setObjectName(QStringLiteral("sonar_min_angle"));
        sonar_min_angle->setGeometry(QRect(120, 70, 60, 17));
        sonar_min_angle->setFont(font);
        sonar_min_angle->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        sonar_max = new QLabel(ultrasound_frame);
        sonar_max->setObjectName(QStringLiteral("sonar_max"));
        sonar_max->setGeometry(QRect(120, 50, 60, 17));
        sonar_max->setFont(font);
        sonar_max->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        sonar_min = new QLabel(ultrasound_frame);
        sonar_min->setObjectName(QStringLiteral("sonar_min"));
        sonar_min->setGeometry(QRect(120, 30, 60, 17));
        sonar_min->setFont(font);
        sonar_min->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        sonar_horz_res = new QLabel(ultrasound_frame);
        sonar_horz_res->setObjectName(QStringLiteral("sonar_horz_res"));
        sonar_horz_res->setGeometry(QRect(120, 10, 60, 17));
        sonar_horz_res->setFont(font);
        sonar_horz_res->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_65 = new QLabel(ultrasound_frame);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setGeometry(QRect(10, 130, 121, 17));
        label_65->setFont(font);
        label_65->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        sonar_gaussian_noise = new QLabel(ultrasound_frame);
        sonar_gaussian_noise->setObjectName(QStringLiteral("sonar_gaussian_noise"));
        sonar_gaussian_noise->setGeometry(QRect(120, 130, 60, 17));
        sonar_gaussian_noise->setFont(font);
        sonar_gaussian_noise->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(simulation_parameters_tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(580, 160, 90, 20));
        label_10->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        label_10->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(simulation_parameters_tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(430, 340, 40, 20));
        label_12->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        label_12->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(simulation_parameters_tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(580, 10, 65, 20));
        label_17->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        label_17->setAlignment(Qt::AlignCenter);
        button_frame = new QFrame(simulation_parameters_tab);
        button_frame->setObjectName(QStringLiteral("button_frame"));
        button_frame->setGeometry(QRect(10, 350, 181, 141));
        button_frame->setFrameShape(QFrame::StyledPanel);
        button_frame->setFrameShadow(QFrame::Raised);
        start_visualization_on_build_checkbox = new QCheckBox(button_frame);
        start_visualization_on_build_checkbox->setObjectName(QStringLiteral("start_visualization_on_build_checkbox"));
        start_visualization_on_build_checkbox->setEnabled(true);
        start_visualization_on_build_checkbox->setGeometry(QRect(30, 105, 21, 22));
        sizePolicy1.setHeightForWidth(start_visualization_on_build_checkbox->sizePolicy().hasHeightForWidth());
        start_visualization_on_build_checkbox->setSizePolicy(sizePolicy1);
        start_visualization_on_build_checkbox->setMaximumSize(QSize(16777215, 22));
        start_visualization_on_build_checkbox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        start_visualization_on_build_checkbox->setChecked(true);
        start_visualization_on_build_label = new QLabel(button_frame);
        start_visualization_on_build_label->setObjectName(QStringLiteral("start_visualization_on_build_label"));
        start_visualization_on_build_label->setGeometry(QRect(55, 100, 91, 31));
        start_visualization_on_build_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        start_visualization_on_build_label->setAlignment(Qt::AlignCenter);
        start_visualization_on_build_label->setWordWrap(true);
        start_visualization_on_build_label->setIndent(0);
        build_simulation_button = new QPushButton(button_frame);
        build_simulation_button->setObjectName(QStringLiteral("build_simulation_button"));
        build_simulation_button->setGeometry(QRect(10, 10, 161, 27));
        build_simulation_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
""));
        clear_simulation_button = new QPushButton(button_frame);
        clear_simulation_button->setObjectName(QStringLiteral("clear_simulation_button"));
        clear_simulation_button->setEnabled(true);
        clear_simulation_button->setGeometry(QRect(10, 40, 161, 27));
        clear_simulation_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
""));
        visualize_simulation_button = new QPushButton(button_frame);
        visualize_simulation_button->setObjectName(QStringLiteral("visualize_simulation_button"));
        visualize_simulation_button->setEnabled(true);
        visualize_simulation_button->setGeometry(QRect(10, 70, 161, 27));
        visualize_simulation_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
""));
        tab_widget->addTab(simulation_parameters_tab, QString());
        button_frame->raise();
        setup_group->raise();
        label_7->raise();
        GPS_frame->raise();
        label_11->raise();
        IMU_frame->raise();
        camera_frame_status->raise();
        ultrasound_frame->raise();
        label_10->raise();
        label_12->raise();
        label_17->raise();
        control_frame = new QFrame(RoverGUI);
        control_frame->setObjectName(QStringLiteral("control_frame"));
        control_frame->setEnabled(true);
        control_frame->setGeometry(QRect(650, 547, 211, 163));
        control_frame->setFrameShape(QFrame::StyledPanel);
        control_frame->setFrameShadow(QFrame::Raised);
        control_group_box = new QGroupBox(control_frame);
        control_group_box->setObjectName(QStringLiteral("control_group_box"));
        control_group_box->setGeometry(QRect(24, 10, 161, 141));
        control_group_box->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        autonomous_control_radio_button = new QRadioButton(control_group_box);
        rover_control_button_group = new QButtonGroup(RoverGUI);
        rover_control_button_group->setObjectName(QStringLiteral("rover_control_button_group"));
        rover_control_button_group->addButton(autonomous_control_radio_button);
        autonomous_control_radio_button->setObjectName(QStringLiteral("autonomous_control_radio_button"));
        autonomous_control_radio_button->setEnabled(false);
        autonomous_control_radio_button->setGeometry(QRect(10, 50, 121, 30));
        autonomous_control_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        joystick_control_radio_button = new QRadioButton(control_group_box);
        rover_control_button_group->addButton(joystick_control_radio_button);
        joystick_control_radio_button->setObjectName(QStringLiteral("joystick_control_radio_button"));
        joystick_control_radio_button->setEnabled(false);
        joystick_control_radio_button->setGeometry(QRect(10, 30, 117, 20));
        joystick_control_radio_button->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        joystick_control_radio_button->setChecked(true);
        all_stop_button = new QPushButton(control_group_box);
        all_stop_button->setObjectName(QStringLiteral("all_stop_button"));
        all_stop_button->setEnabled(true);
        all_stop_button->setGeometry(QRect(10, 110, 150, 22));
        all_stop_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
""));
        all_autonomous_button = new QPushButton(control_group_box);
        all_autonomous_button->setObjectName(QStringLiteral("all_autonomous_button"));
        all_autonomous_button->setEnabled(true);
        all_autonomous_button->setGeometry(QRect(10, 85, 150, 22));
        all_autonomous_button->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border: 1px solid white; \n"
""));
        joystick_frame = new QFrame(RoverGUI);
        joystick_frame->setObjectName(QStringLiteral("joystick_frame"));
        joystick_frame->setGeometry(QRect(870, 547, 211, 163));
        joystick_frame->setFrameShape(QFrame::StyledPanel);
        joystick_frame->setFrameShadow(QFrame::Raised);
        joy_lcd_drive_forward = new QLCDNumber(joystick_frame);
        joy_lcd_drive_forward->setObjectName(QStringLiteral("joy_lcd_drive_forward"));
        joy_lcd_drive_forward->setGeometry(QRect(118, 70, 41, 16));
        QFont font1;
        font1.setPointSize(18);
        joy_lcd_drive_forward->setFont(font1);
        joy_lcd_drive_left = new QLCDNumber(joystick_frame);
        joy_lcd_drive_left->setObjectName(QStringLiteral("joy_lcd_drive_left"));
        joy_lcd_drive_left->setGeometry(QRect(98, 90, 41, 16));
        joy_lcd_drive_left->setFont(font1);
        joy_lcd_drive_right = new QLCDNumber(joystick_frame);
        joy_lcd_drive_right->setObjectName(QStringLiteral("joy_lcd_drive_right"));
        joy_lcd_drive_right->setGeometry(QRect(138, 90, 41, 16));
        joy_lcd_drive_right->setFont(font1);
        joy_lcd_drive_back = new QLCDNumber(joystick_frame);
        joy_lcd_drive_back->setObjectName(QStringLiteral("joy_lcd_drive_back"));
        joy_lcd_drive_back->setGeometry(QRect(118, 110, 41, 16));
        joy_lcd_drive_back->setFont(font1);
        joy_lcd_gripper_up = new QLCDNumber(joystick_frame);
        joy_lcd_gripper_up->setObjectName(QStringLiteral("joy_lcd_gripper_up"));
        joy_lcd_gripper_up->setGeometry(QRect(24, 70, 41, 16));
        joy_lcd_gripper_up->setFont(font1);
        joy_lcd_gripper_open = new QLCDNumber(joystick_frame);
        joy_lcd_gripper_open->setObjectName(QStringLiteral("joy_lcd_gripper_open"));
        joy_lcd_gripper_open->setGeometry(QRect(44, 90, 41, 16));
        joy_lcd_gripper_open->setFont(font1);
        joy_lcd_gripper_close = new QLCDNumber(joystick_frame);
        joy_lcd_gripper_close->setObjectName(QStringLiteral("joy_lcd_gripper_close"));
        joy_lcd_gripper_close->setGeometry(QRect(5, 90, 41, 16));
        joy_lcd_gripper_close->setFont(font1);
        joy_lcd_gripper_down = new QLCDNumber(joystick_frame);
        joy_lcd_gripper_down->setObjectName(QStringLiteral("joy_lcd_gripper_down"));
        joy_lcd_gripper_down->setGeometry(QRect(24, 110, 41, 16));
        joy_lcd_gripper_down->setFont(font1);
        drive_label = new QLabel(joystick_frame);
        drive_label->setObjectName(QStringLiteral("drive_label"));
        drive_label->setGeometry(QRect(128, 30, 51, 20));
        drive_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        drive_label->setAlignment(Qt::AlignCenter);
        gripper_label = new QLabel(joystick_frame);
        gripper_label->setObjectName(QStringLiteral("gripper_label"));
        gripper_label->setGeometry(QRect(20, 30, 81, 20));
        gripper_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gripper_label->setAlignment(Qt::AlignCenter);
        label = new QLabel(RoverGUI);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 111, 16));
        label_2 = new QLabel(RoverGUI);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 51, 17));
        label_3 = new QLabel(RoverGUI);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 121, 16));
        label_4 = new QLabel(RoverGUI);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 67, 17));
        version_number_label = new QLabel(RoverGUI);
        version_number_label->setObjectName(QStringLiteral("version_number_label"));
        version_number_label->setGeometry(QRect(80, 50, 91, 17));
        log_tab = new BWTabWidget(RoverGUI);
        log_tab->setObjectName(QStringLiteral("log_tab"));
        log_tab->setGeometry(QRect(10, 520, 631, 201));
        log_tab->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #FFFFFF;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: #000000;\n"
"    border: 2px solid #FFFFFF;\n"
"    border-bottom-color: #FFFFFF; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background:  #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #000000;\n"
"    border-color: #FFFFFF;\n"
"    border-bottom-color: #FFFFFF; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"QTabBar::tab:selected {\n"
"    /* "
                        "expand/overlap to the left and right by 4px */\n"
"    margin-left: -4px;\n"
"    margin-right: -4px;\n"
"}\n"
"\n"
"QTabBar::tab:first:selected {\n"
"    margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"}\n"
"\n"
"QTabBar::tab:only-one {\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}\n"
""));
        info_log_tab = new QWidget();
        info_log_tab->setObjectName(QStringLiteral("info_log_tab"));
        info_log = new QTextBrowser(info_log_tab);
        info_log->setObjectName(QStringLiteral("info_log"));
        info_log->setGeometry(QRect(0, 0, 631, 161));
        log_tab->addTab(info_log_tab, QString());
        diag_log_tab = new QWidget();
        diag_log_tab->setObjectName(QStringLiteral("diag_log_tab"));
        diag_log = new QTextBrowser(diag_log_tab);
        diag_log->setObjectName(QStringLiteral("diag_log"));
        diag_log->setGeometry(QRect(0, 0, 631, 161));
        log_tab->addTab(diag_log_tab, QString());
        Rover_frame = new QFrame(RoverGUI);
        Rover_frame->setObjectName(QStringLiteral("Rover_frame"));
        Rover_frame->setGeometry(QRect(10, 90, 311, 201));
        Rover_frame->setFrameShape(QFrame::StyledPanel);
        Rover_frame->setFrameShadow(QFrame::Raised);
        rover_diags_list = new QListWidget(Rover_frame);
        rover_diags_list->setObjectName(QStringLiteral("rover_diags_list"));
        rover_diags_list->setGeometry(QRect(150, 0, 121, 201));
        rover_diags_list->setFrameShape(QFrame::StyledPanel);
        rover_diags_list->setLineWidth(0);
        rover_list = new QListWidget(Rover_frame);
        rover_list->setObjectName(QStringLiteral("rover_list"));
        rover_list->setGeometry(QRect(0, 0, 151, 201));
        rover_list->setStyleSheet(QStringLiteral(""));
        rover_list->setFrameShadow(QFrame::Plain);
        rover_list->setLineWidth(1);
        map_selection_list = new QListWidget(Rover_frame);
        map_selection_list->setObjectName(QStringLiteral("map_selection_list"));
        map_selection_list->setGeometry(QRect(270, 0, 41, 201));
        map_selection_list->setFrameShape(QFrame::StyledPanel);
        map_selection_list->setLineWidth(0);
        label_13 = new QLabel(RoverGUI);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(160, 70, 111, 20));
        label_13->setStyleSheet(QStringLiteral("font: 63 8pt \"Ubuntu\";"));
        map_list_label = new QLabel(RoverGUI);
        map_list_label->setObjectName(QStringLiteral("map_list_label"));
        map_list_label->setGeometry(QRect(290, 70, 31, 20));
        map_list_label->setStyleSheet(QStringLiteral("font: 63 8pt \"Ubuntu\";"));
        Simulation_Timer_Frame = new QFrame(RoverGUI);
        Simulation_Timer_Frame->setObjectName(QStringLiteral("Simulation_Timer_Frame"));
        Simulation_Timer_Frame->setEnabled(true);
        Simulation_Timer_Frame->setGeometry(QRect(10, 404, 311, 101));
        Simulation_Timer_Frame->setFrameShape(QFrame::StyledPanel);
        Simulation_Timer_Frame->setFrameShadow(QFrame::Raised);
        currentSimulationTimeTitle = new QLabel(Simulation_Timer_Frame);
        currentSimulationTimeTitle->setObjectName(QStringLiteral("currentSimulationTimeTitle"));
        currentSimulationTimeTitle->setGeometry(QRect(10, 40, 80, 17));
        currentSimulationTimeTitle->setFont(font);
        currentSimulationTimeTitle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        simulationTimerStartTitle = new QLabel(Simulation_Timer_Frame);
        simulationTimerStartTitle->setObjectName(QStringLiteral("simulationTimerStartTitle"));
        simulationTimerStartTitle->setGeometry(QRect(10, 55, 80, 17));
        simulationTimerStartTitle->setFont(font);
        simulationTimerStartTitle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        simulationTimerStopTitle = new QLabel(Simulation_Timer_Frame);
        simulationTimerStopTitle->setObjectName(QStringLiteral("simulationTimerStopTitle"));
        simulationTimerStopTitle->setGeometry(QRect(10, 70, 80, 17));
        simulationTimerStopTitle->setFont(font);
        simulationTimerStopTitle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        currentSimulationTimeLabel = new QLabel(Simulation_Timer_Frame);
        currentSimulationTimeLabel->setObjectName(QStringLiteral("currentSimulationTimeLabel"));
        currentSimulationTimeLabel->setGeometry(QRect(100, 40, 205, 17));
        currentSimulationTimeLabel->setFont(font);
        simulationTimerStartLabel = new QLabel(Simulation_Timer_Frame);
        simulationTimerStartLabel->setObjectName(QStringLiteral("simulationTimerStartLabel"));
        simulationTimerStartLabel->setGeometry(QRect(100, 55, 205, 17));
        simulationTimerStartLabel->setFont(font);
        simulationTimerStopLabel = new QLabel(Simulation_Timer_Frame);
        simulationTimerStopLabel->setObjectName(QStringLiteral("simulationTimerStopLabel"));
        simulationTimerStopLabel->setGeometry(QRect(100, 70, 205, 17));
        simulationTimerStopLabel->setFont(font);
        label_8 = new QLabel(Simulation_Timer_Frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 20, 181, 16));
        label_8->setFont(font);
        num_targets_collected_label = new QLabel(Simulation_Timer_Frame);
        num_targets_collected_label->setObjectName(QStringLiteral("num_targets_collected_label"));
        num_targets_collected_label->setGeometry(QRect(192, 20, 110, 15));
        num_targets_collected_label->setFont(font);
        simulation_timer_frame_label = new QLabel(RoverGUI);
        simulation_timer_frame_label->setObjectName(QStringLiteral("simulation_timer_frame_label"));
        simulation_timer_frame_label->setGeometry(QRect(29, 394, 271, 20));
        simulation_timer_frame_label->setFont(font);
        simulation_timer_frame_label->setStyleSheet(QLatin1String("color: white;\n"
"border: 1px solid white;\n"
"padding: 1px;"));
        simulation_timer_frame_label->setAlignment(Qt::AlignCenter);
        status_frame = new QFrame(RoverGUI);
        status_frame->setObjectName(QStringLiteral("status_frame"));
        status_frame->setEnabled(true);
        status_frame->setGeometry(QRect(10, 300, 311, 81));
        status_frame->setFrameShape(QFrame::StyledPanel);
        status_frame->setFrameShadow(QFrame::Raised);
        rover_name = new QLabel(status_frame);
        rover_name->setObjectName(QStringLiteral("rover_name"));
        rover_name->setGeometry(QRect(10, 10, 191, 15));
        rover_name->setFont(font);
        gps_numSV_label = new QLabel(status_frame);
        gps_numSV_label->setObjectName(QStringLiteral("gps_numSV_label"));
        gps_numSV_label->setGeometry(QRect(170, 30, 120, 16));
        gps_numSV_label->setFont(font);
        gps_numSV_label->setMouseTracking(true);
        gps_numSV_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(status_frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 50, 150, 16));
        label_9->setFont(font);
        perc_of_time_avoiding_obstacles = new QLabel(status_frame);
        perc_of_time_avoiding_obstacles->setObjectName(QStringLiteral("perc_of_time_avoiding_obstacles"));
        perc_of_time_avoiding_obstacles->setGeometry(QRect(170, 50, 120, 16));
        perc_of_time_avoiding_obstacles->setFont(font);
        gps_numSV_title = new QLabel(status_frame);
        gps_numSV_title->setObjectName(QStringLiteral("gps_numSV_title"));
        gps_numSV_title->setGeometry(QRect(10, 30, 150, 16));
        gps_numSV_title->setFont(font);
        gps_numSV_title->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        joystick_disabled_frame = new QFrame(RoverGUI);
        joystick_disabled_frame->setObjectName(QStringLiteral("joystick_disabled_frame"));
        joystick_disabled_frame->setGeometry(QRect(870, 547, 211, 163));
        joystick_disabled_frame->setFrameShape(QFrame::StyledPanel);
        joystick_disabled_frame->setFrameShadow(QFrame::Raised);
        auto_enabled_label = new QLabel(joystick_disabled_frame);
        auto_enabled_label->setObjectName(QStringLiteral("auto_enabled_label"));
        auto_enabled_label->setGeometry(QRect(20, 55, 171, 51));
        QFont font2;
        font2.setPointSize(12);
        auto_enabled_label->setFont(font2);
        auto_enabled_label->setAlignment(Qt::AlignCenter);
        auto_enabled_label->setWordWrap(true);
        joystick_disabled_frame->raise();
        joystick_frame->raise();
        tab_widget->raise();
        control_frame->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        version_number_label->raise();
        log_tab->raise();
        Rover_frame->raise();
        label_13->raise();
        map_list_label->raise();
        Simulation_Timer_Frame->raise();
        simulation_timer_frame_label->raise();
        status_frame->raise();

        retranslateUi(RoverGUI);

        tab_widget->setCurrentIndex(1);
        simulation_timer_combobox->setCurrentIndex(0);
        log_tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RoverGUI);
    } // setupUi

    void retranslateUi(QWidget *RoverGUI)
    {
        RoverGUI->setWindowTitle(QApplication::translate("RoverGUI", "    Rover Interface", 0));
        map_popout_button->setText(QApplication::translate("RoverGUI", "Popout", 0));
#ifndef QT_NO_TOOLTIP
        ekf_checkbox->setToolTip(QApplication::translate("RoverGUI", "<html><head/><body><p>EKF combination of IMU, Encoders and GPS (mutually recursive with NAVSAT)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ekf_checkbox->setText(QApplication::translate("RoverGUI", "MAP", 0));
#ifndef QT_NO_TOOLTIP
        encoder_checkbox->setToolTip(QApplication::translate("RoverGUI", "<html><head/><body><p>EKF combination of IMU and Encoders</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        encoder_checkbox->setText(QApplication::translate("RoverGUI", "ODOM", 0));
#ifndef QT_NO_TOOLTIP
        gps_checkbox->setToolTip(QApplication::translate("RoverGUI", "<html><head/><body><p>GPS aligned with the map output (mutually recursive with MAP)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gps_checkbox->setText(QApplication::translate("RoverGUI", "NAVSAT", 0));
        map_manual_radio_button->setText(QApplication::translate("RoverGUI", "Manual", 0));
        map_auto_radio_button->setText(QApplication::translate("RoverGUI", "Auto", 0));
        unique_rover_colors_checkbox->setText(QApplication::translate("RoverGUI", "Unique Rover Colors", 0));
        global_offset_checkbox->setText(QApplication::translate("RoverGUI", "Global Frame", 0));
        map_frame_views_label->setText(QApplication::translate("RoverGUI", "Frame Views", 0));
        map_frame_views_label_2->setText(QApplication::translate("RoverGUI", "Panning and Zoom", 0));
        map_settings_label->setText(QApplication::translate("RoverGUI", "Map Settings", 0));
        IMU_label->setText(QApplication::translate("RoverGUI", "IMU", 0));
        ultrasound_label->setText(QApplication::translate("RoverGUI", "Ultrasound", 0));
        map_label->setText(QApplication::translate("RoverGUI", "Map", 0));
        map_label_2->setText(QApplication::translate("RoverGUI", "Camera", 0));
        tab_widget->setTabText(tab_widget->indexOf(sensor_display_tab), QApplication::translate("RoverGUI", "Sensor Display", 0));
        target_distribution_group_box->setTitle(QApplication::translate("RoverGUI", "Target Distribution", 0));
        uniform_distribution_radio_button->setText(QApplication::translate("RoverGUI", "Uniform", 0));
        powerlaw_distribution_radio_button->setText(QApplication::translate("RoverGUI", "Power Law", 0));
        clustered_distribution_radio_button->setText(QApplication::translate("RoverGUI", "Clustered", 0));
#ifndef QT_NO_TOOLTIP
        custom_distribution_radio_button->setToolTip(QApplication::translate("RoverGUI", "Select a custom target distribution", 0));
#endif // QT_NO_TOOLTIP
        custom_distribution_radio_button->setText(QApplication::translate("RoverGUI", "Custom World", 0));
#ifndef QT_NO_TOOLTIP
        custom_world_path_button->setToolTip(QApplication::translate("RoverGUI", "<html><head/><body><p>Select custom target distribution</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        custom_world_path_button->setText(QApplication::translate("RoverGUI", "Select", 0));
        round_type_button_group->setTitle(QApplication::translate("RoverGUI", "Round Type", 0));
        prelim_radio_button->setText(QApplication::translate("RoverGUI", "Preliminary", 0));
        final_radio_button->setText(QApplication::translate("RoverGUI", "Final ", 0));
        unbounded_radio_button->setText(QApplication::translate("RoverGUI", "Unbounded", 0));
        unbounded_arena_size_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p align=\"center\">Arena Size</p></body></html>", 0));
        unbounded_arena_size_combobox->clear();
        unbounded_arena_size_combobox->insertItems(0, QStringList()
         << QApplication::translate("RoverGUI", "15", 0)
         << QApplication::translate("RoverGUI", "20", 0)
         << QApplication::translate("RoverGUI", "25", 0)
         << QApplication::translate("RoverGUI", "30", 0)
         << QApplication::translate("RoverGUI", "35", 0)
         << QApplication::translate("RoverGUI", "40", 0)
         << QApplication::translate("RoverGUI", "45", 0)
         << QApplication::translate("RoverGUI", "50", 0)
        );
        ground_texture_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p>Ground Texture</p></body></html>", 0));
        texture_combobox->clear();
        texture_combobox->insertItems(0, QStringList()
         << QApplication::translate("RoverGUI", "KSC Concrete", 0)
         << QApplication::translate("RoverGUI", "Gravel", 0)
         << QApplication::translate("RoverGUI", "Car park", 0)
        );
        custom_world_path->setText(QString());
        override_num_rovers_checkbox->setText(QApplication::translate("RoverGUI", "Set Number of Rovers", 0));
        custom_num_rovers_combobox->clear();
        custom_num_rovers_combobox->insertItems(0, QStringList()
         << QApplication::translate("RoverGUI", "0", 0)
         << QApplication::translate("RoverGUI", "1", 0)
         << QApplication::translate("RoverGUI", "2", 0)
         << QApplication::translate("RoverGUI", "3", 0)
         << QApplication::translate("RoverGUI", "4", 0)
         << QApplication::translate("RoverGUI", "5", 0)
         << QApplication::translate("RoverGUI", "6", 0)
         << QApplication::translate("RoverGUI", "7", 0)
         << QApplication::translate("RoverGUI", "8", 0)
        );
        simulation_timer_combobox->clear();
        simulation_timer_combobox->insertItems(0, QStringList()
         << QApplication::translate("RoverGUI", "no time limit", 0)
         << QApplication::translate("RoverGUI", "10 min (Testing)", 0)
         << QApplication::translate("RoverGUI", "20 min (Preliminary)", 0)
         << QApplication::translate("RoverGUI", "30 min (Preliminary)", 0)
         << QApplication::translate("RoverGUI", "60 min (Final)", 0)
        );
        simulation_timer_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p>Simulation Length</p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        create_savable_world_checkbox->setToolTip(QApplication::translate("RoverGUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When checked, a Gazebo world without rovers, walls, ground texture, or a collection zone will be created. The purpose of this option is to generate tag distributions using the Uniform, Clustered, or Power Law in a way that you can save the world file from Gazebo and re-use that same distribution later using the Custom world option. It will also load much faster as well when loading a pre-built distribution.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        create_savable_world_checkbox->setWhatsThis(QApplication::translate("RoverGUI", "<html><head/><body><p>When checked, a Gazebo world without rovers, walls, ground texture, or a collection zone will be created. The purpose of this option is to generate tag distributions using the Uniform, Clustered, or Power Law in a way that you can save the world file from Gazebo and re-use that same distribution later using the Custom world option. It will also load much faster as well when loading a pre-built distribution.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        create_savable_world_checkbox->setText(QApplication::translate("RoverGUI", "Create Savable Gazebo World", 0));
        number_of_tags_combobox->clear();
        number_of_tags_combobox->insertItems(0, QStringList()
         << QApplication::translate("RoverGUI", "256", 0)
         << QApplication::translate("RoverGUI", "128", 0)
         << QApplication::translate("RoverGUI", "64", 0)
         << QApplication::translate("RoverGUI", "32", 0)
         << QApplication::translate("RoverGUI", "16", 0)
         << QApplication::translate("RoverGUI", "0", 0)
        );
#ifndef QT_NO_WHATSTHIS
        number_of_tags_combobox->setWhatsThis(QApplication::translate("RoverGUI", "<html><head/><body><p>The number of april tag cubes generated by the Uniform or Clustered distributions.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        number_of_tags_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p align=\"center\">Number of Cubes</p></body></html>", 0));
        number_of_tags_label_2->setText(QApplication::translate("RoverGUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">*not available for Power Law or Custom World</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">Simulation Setup</span></p></body></html>", 0));
        label_11->setText(QApplication::translate("RoverGUI", "GPS", 0));
        label_23->setText(QApplication::translate("RoverGUI", "Ref. Lat.", 0));
        label_22->setText(QApplication::translate("RoverGUI", "Rate", 0));
        label_24->setText(QApplication::translate("RoverGUI", "Ref. Long.", 0));
        label_26->setText(QApplication::translate("RoverGUI", "Ref. Head.", 0));
        gps_update_rate->setText(QApplication::translate("RoverGUI", "val", 0));
        gps_ref_lat->setText(QApplication::translate("RoverGUI", "val", 0));
        gps_ref_long->setText(QApplication::translate("RoverGUI", "val", 0));
        gps_ref_heading->setText(QApplication::translate("RoverGUI", "val", 0));
        label_49->setText(QApplication::translate("RoverGUI", "Drift", 0));
        label_50->setText(QApplication::translate("RoverGUI", "Drift Freq.", 0));
        label_51->setText(QApplication::translate("RoverGUI", "Noise", 0));
        gps_drift->setText(QApplication::translate("RoverGUI", "val", 0));
        gps_drift_freq->setText(QApplication::translate("RoverGUI", "val", 0));
        gps_noise->setText(QApplication::translate("RoverGUI", "val", 0));
        label_52->setText(QApplication::translate("RoverGUI", "Ref. Alt.", 0));
        gps_ref_alt->setText(QApplication::translate("RoverGUI", "val", 0));
        label_27->setText(QApplication::translate("RoverGUI", "Rate", 0));
        label_28->setText(QApplication::translate("RoverGUI", "Drift", 0));
        label_29->setText(QApplication::translate("RoverGUI", "Noise", 0));
        label_30->setText(QApplication::translate("RoverGUI", "Offsets", 0));
        label_31->setText(QApplication::translate("RoverGUI", "Drift", 0));
        label_32->setText(QApplication::translate("RoverGUI", "Noise", 0));
        label_33->setText(QApplication::translate("RoverGUI", "Accel.", 0));
        label_34->setText(QApplication::translate("RoverGUI", "Drift", 0));
        label_35->setText(QApplication::translate("RoverGUI", "Noise", 0));
        label_36->setText(QApplication::translate("RoverGUI", "Heading", 0));
        label_37->setText(QApplication::translate("RoverGUI", "RPY", 0));
        label_38->setText(QApplication::translate("RoverGUI", "Noise", 0));
        imu_update_rate->setText(QApplication::translate("RoverGUI", "val", 0));
        imu_rate_drift->setText(QApplication::translate("RoverGUI", "val", 0));
        imu_rate_noise->setText(QApplication::translate("RoverGUI", "val", 0));
        imu_heading_drift->setText(QApplication::translate("RoverGUI", "val", 0));
        imu_heading_noise->setText(QApplication::translate("RoverGUI", "val", 0));
        imu_accel_drift->setText(QApplication::translate("RoverGUI", "val", 0));
        imu_accel_noise->setText(QApplication::translate("RoverGUI", "val", 0));
        imu_rpy_offsets->setText(QApplication::translate("RoverGUI", "val", 0));
        imu_noise->setText(QApplication::translate("RoverGUI", "val", 0));
#ifndef QT_NO_TOOLTIP
        label_63->setToolTip(QApplication::translate("RoverGUI", "<html><head/><body><p>Magnetic Declination</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_63->setText(QApplication::translate("RoverGUI", "Mag. Dec.", 0));
        label_64->setText(QApplication::translate("RoverGUI", "val", 0));
        label_18->setText(QApplication::translate("RoverGUI", "Rate", 0));
        label_19->setText(QApplication::translate("RoverGUI", "Width", 0));
        label_20->setText(QApplication::translate("RoverGUI", "Height", 0));
        label_21->setText(QApplication::translate("RoverGUI", "Format", 0));
        camera_update_rate->setText(QApplication::translate("RoverGUI", "val", 0));
        camera_width->setText(QApplication::translate("RoverGUI", "val", 0));
        camera_height->setText(QApplication::translate("RoverGUI", "val", 0));
        camera_format->setText(QApplication::translate("RoverGUI", "val", 0));
        label_25->setText(QApplication::translate("RoverGUI", "Noise Mean", 0));
        camera_noise_mean->setText(QApplication::translate("RoverGUI", "val", 0));
        label_45->setText(QApplication::translate("RoverGUI", "Stdev", 0));
        camera_noise_stdev->setText(QApplication::translate("RoverGUI", "val", 0));
        label_39->setText(QApplication::translate("RoverGUI", "Horz. Res", 0));
        label_40->setText(QApplication::translate("RoverGUI", "Min Ang.", 0));
        label_41->setText(QApplication::translate("RoverGUI", "Max Ang.", 0));
        label_42->setText(QApplication::translate("RoverGUI", "Max", 0));
        label_43->setText(QApplication::translate("RoverGUI", "Min", 0));
        label_44->setText(QApplication::translate("RoverGUI", "Range Resolution", 0));
        sonar_range_res->setText(QApplication::translate("RoverGUI", "val", 0));
        sonar_max_angle->setText(QApplication::translate("RoverGUI", "val", 0));
        sonar_min_angle->setText(QApplication::translate("RoverGUI", "val", 0));
        sonar_max->setText(QApplication::translate("RoverGUI", "val", 0));
        sonar_min->setText(QApplication::translate("RoverGUI", "val", 0));
        sonar_horz_res->setText(QApplication::translate("RoverGUI", "val", 0));
        label_65->setText(QApplication::translate("RoverGUI", "Gaussian Noise", 0));
        sonar_gaussian_noise->setText(QApplication::translate("RoverGUI", "val", 0));
        label_10->setText(QApplication::translate("RoverGUI", "Ultrasound", 0));
        label_12->setText(QApplication::translate("RoverGUI", "IMU", 0));
        label_17->setText(QApplication::translate("RoverGUI", "Camera", 0));
#ifndef QT_NO_TOOLTIP
        start_visualization_on_build_checkbox->setToolTip(QApplication::translate("RoverGUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        start_visualization_on_build_checkbox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        start_visualization_on_build_checkbox->setText(QString());
        start_visualization_on_build_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">Start Visualization On Build</span></p></body></html>", 0));
        build_simulation_button->setText(QApplication::translate("RoverGUI", "Build Simulation", 0));
        clear_simulation_button->setText(QApplication::translate("RoverGUI", "End Simulation", 0));
        visualize_simulation_button->setText(QApplication::translate("RoverGUI", "Toggle Visualization", 0));
        tab_widget->setTabText(tab_widget->indexOf(simulation_parameters_tab), QApplication::translate("RoverGUI", "Simulation Control", 0));
        control_group_box->setTitle(QApplication::translate("RoverGUI", "Rover Control", 0));
        autonomous_control_radio_button->setText(QApplication::translate("RoverGUI", "Autonomous", 0));
        joystick_control_radio_button->setText(QApplication::translate("RoverGUI", "Manual", 0));
        all_stop_button->setText(QApplication::translate("RoverGUI", "Stop All Rovers", 0));
        all_autonomous_button->setText(QApplication::translate("RoverGUI", "All Autonomous", 0));
        drive_label->setText(QApplication::translate("RoverGUI", "Drive", 0));
        gripper_label->setText(QApplication::translate("RoverGUI", "Gripper", 0));
        label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">Swarmathon </span></p></body></html>", 0));
        label_2->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">Rovers</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">Rover Interface</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">Version: </span></p></body></html>", 0));
        version_number_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">version</span></p></body></html>", 0));
        log_tab->setTabText(log_tab->indexOf(info_log_tab), QApplication::translate("RoverGUI", "Info", 0));
        log_tab->setTabText(log_tab->indexOf(diag_log_tab), QApplication::translate("RoverGUI", "Diagnostics", 0));
        label_13->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" font-size:9pt; color:#ffffff;\">Link Quality | Bitrate</span></p></body></html>", 0));
        map_list_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" font-size:9pt; color:#ffffff;\">Map</span></p></body></html>", 0));
        currentSimulationTimeTitle->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#fefefe;\">Current Time:</span></p></body></html>", 0));
        simulationTimerStartTitle->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#fefefe;\">Timer Start:</span></p></body></html>", 0));
        simulationTimerStopTitle->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#fefefe;\">Timer Stop:</span></p></body></html>", 0));
        currentSimulationTimeLabel->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">---</span></p></body></html>", 0));
        simulationTimerStartLabel->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">---</span></p></body></html>", 0));
        simulationTimerStopLabel->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">---</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">Number of Targets Collected:</span></p></body></html>", 0));
        num_targets_collected_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">0</span></p></body></html>", 0));
        simulation_timer_frame_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#fefefe;\">Sim Timer And Status (simulated rovers only)</span></p></body></html>", 0));
        rover_name->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">Not Connected</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        gps_numSV_label->setToolTip(QApplication::translate("RoverGUI", "<html><head/><body><p>Displays the number of GPS Satellites detected by the selected physical rover. Simulated rovers will not display a value here.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gps_numSV_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p>---</p></body></html>", 0));
        label_9->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#fefefe;\">Obstacle Avoidance Calls:</span></p></body></html>", 0));
        perc_of_time_avoiding_obstacles->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">0</span></p></body></html>", 0));
        gps_numSV_title->setText(QApplication::translate("RoverGUI", "<html><head/><body><p>Number of GPS Satellites:</p></body></html>", 0));
        auto_enabled_label->setText(QApplication::translate("RoverGUI", "<html><head/><body><p><span style=\" color:#ffffff;\">Autonomous Control Enabled</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class RoverGUI: public Ui_RoverGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROVER_GUI_PLUGIN_H
