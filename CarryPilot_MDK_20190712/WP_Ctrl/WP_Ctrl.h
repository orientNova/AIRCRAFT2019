#ifndef _WP_CTRL_
#define _WP_CTRL_

#define Aerocraft_Axis_Mode_Default  4
#define Aerocraft_Axis_Mode Aerocraft_Axis_Mode_Default
          
#if (Aerocraft_Axis_Mode==6)//������������ӳ���
/*
     ��ͷ
    3   1
    *   *   
      
5 *   *   * 6

    *   *
    2   4
���У�1��4��5��ʱ��ת��
     2��3��6��ʱ��ת��
*/
#define Moter1_Thr_Scale 1.0f
#define Moter2_Thr_Scale 1.0f
#define Moter3_Thr_Scale 1.0f
#define Moter4_Thr_Scale 1.0f
#define Moter5_Thr_Scale 1.0f
#define Moter6_Thr_Scale 1.0f


#define Moter1_Roll_Scale -0.75f//-0.5f
#define Moter2_Roll_Scale  0.75f//0.5f
#define Moter3_Roll_Scale  0.75f//0.5f
#define Moter4_Roll_Scale -0.75f//-0.5f
#define Moter5_Roll_Scale  0.75f//1.0f
#define Moter6_Roll_Scale -0.75f//-1.0f
          
#define Moter1_Pitch_Scale  0.866025f
#define Moter2_Pitch_Scale -0.866025f
#define Moter3_Pitch_Scale  0.866025f
#define Moter4_Pitch_Scale -0.866025f
#define Moter5_Pitch_Scale  0.0f
#define Moter6_Pitch_Scale  0.0f
          
#define Moter1_Yaw_Scale -1.0f
#define Moter2_Yaw_Scale 1.0f
#define Moter3_Yaw_Scale 1.0f
#define Moter4_Yaw_Scale -1.0f
#define Moter5_Yaw_Scale -1.0f
#define Moter6_Yaw_Scale 1.0f

#else//������������ӳ���
/*
      ��ͷ
    3     1
    *     *   
       * 
    *     *
    2     4
���У�1��2��ʱ��ת��
      3��4��ʱ��ת��
*/
#define Moter1_Thr_Scale 1.0f
#define Moter2_Thr_Scale 1.0f
#define Moter3_Thr_Scale 1.0f
#define Moter4_Thr_Scale 1.0f
#define Moter5_Thr_Scale 0.0f
#define Moter6_Thr_Scale 0.0f

#define Moter1_Roll_Scale -1.0f
#define Moter2_Roll_Scale 1.0f
#define Moter3_Roll_Scale 1.0f
#define Moter4_Roll_Scale -1.0f
#define Moter5_Roll_Scale 0.0f
#define Moter6_Roll_Scale 0.0f
          
#define Moter1_Pitch_Scale 1.0f
#define Moter2_Pitch_Scale -1.0f
#define Moter3_Pitch_Scale 1.0f
#define Moter4_Pitch_Scale -1.0f
#define Moter5_Pitch_Scale 0.0f
#define Moter6_Pitch_Scale 0.0f
          
#define Moter1_Yaw_Scale -1.0f
#define Moter2_Yaw_Scale -1.0f
#define Moter3_Yaw_Scale 1.0f
#define Moter4_Yaw_Scale 1.0f
#define Moter5_Yaw_Scale 0.0f
#define Moter6_Yaw_Scale 0.0f
#endif
          
          
//ע�������п�����������ģʽ������ֱ�߶�λ��+��ֱ�ٶ�+��ֱ���ٶ�
#define YAW_Pos_Control_Accel_Disable  0
#define YAW_VEL_FEEDFORWARD  0//��ֱ�ٶ�ǰ��������

#define Optical_Enable  1//����������ͣ��־

#define ADRC_MODE  0
#define PID_MODE   1
#define TEST_MODE  2
//#define GYRO_CONTROL_MODE  TEST_MODE
#define GYRO_CONTROL_MODE  PID_MODE
//#define GYRO_CONTROL_MODE  ADRC_MODE


//#define SDK_Take_Over_Ctrl  1//SDK���ƽӹ���Դ��OPENMV����������
#define SDK_Take_Over_Ctrl  2//SDK���ƽӹ���Դ����Ϊ����ָ��


void Total_Control(void);
void Control_Output(void);
void Landon_Earth_Check(void);//�Լ촥�ؽ��뵡��ģʽ
void CarryPilot_Control(void);
	


extern float LPButter_Vel_Error(float curr_input);
extern uint8_t Controler_High_Mode,SDK_Ctrl_Mode;
extern uint8_t Controler_Horizontal_Mode,Last_Controler_Horizontal_Mode;
extern uint16_t High_Hold_Throttle;
extern uint8_t Landon_Earth_Flag;
extern uint16 Throttle;
extern uint8_t Last_Landon_Earth_Flag,Landon_Earth_Flag;
extern uint16_t Landon_Earth_Cnt;
extern uint16_t Throttle_Output;
extern float Active_Para1,Active_Para2;
extern uint8_t Landon_Earth_Flag;
extern uint8_t  Pos_Hold_SetFlag;
extern uint16 Motor_PWM_1,Motor_PWM_2,Motor_PWM_3,Motor_PWM_4,Motor_PWM_5,Motor_PWM_6;//�ĸ�������PWM
extern uint8_t Reserve_Mode_Fast_Exchange_Flag;
extern Vector2_Ang Body_Frame_Pos_Err;
extern Vector3_Nav Earth_Frame_Pos_Err;
#endif
