/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <stdbool.h>
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#define DELAY_TIME 3
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void highZAll(void);
void pinInput(uint16_t GPIO_Pin);
void pinOutput(uint16_t GPIO_Pin);
void pinGrid(uint8_t grid[5][4], int loop);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */

// SleepOnExit will be disabled when the MCU is wake up by EXTI
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == GPIO_PIN_2)
  {
	  SystemClock_Config ();
	  HAL_ResumeTick();
	  HAL_PWR_DisableSleepOnExit();
  }
}
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();





  /* USER CODE BEGIN 2 */
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  //int i = 1;
  highZAll();
  uint8_t h[5][4] = {{1,0,0,1}, {1,0,0,1}, {1,1,1,1}, {1,0,0,1}, {1,0,0,1}};
  uint8_t i[5][4] = {{1,1,1,1}, {0,1,1,0}, {0,1,1,0}, {0,1,1,0}, {1,1,1,1}};
  uint8_t e[5][4] = {{0,1,1,0}, {0,1,1,0}, {0,1,1,0}, {0,0,0,0}, {0,1,1,0}};
  for (int x = 0; x < 6; x++) {
  		pinGrid(h,20);
  		pinGrid(i,20);
  		pinGrid(e,20);
  	}
  //bool pressed = false;
  while (1)
  {

  }

//    /* USER CODE END WHILE */
//
//    /* USER CODE BEGIN 3 */


  /* USER CODE END 3 */
}

void pinGrid(uint8_t grid[5][4], int loops) {
	while (loops > 0) {
		for (int i = 1; i <=5; i++) {
			switch (i) {
				case 1:
					//[2,3,4,5]
					pinOutput(GPIO_PIN_1);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
					if (grid[0][0] == 1) {
						pinOutput(GPIO_PIN_2);
					}
					if (grid[0][1] == 1) {
						pinOutput(GPIO_PIN_3);
					}
					if (grid[0][2] == 1) {
						pinOutput(GPIO_PIN_4);
					}
					if (grid[0][3] == 1) {
						pinOutput(GPIO_PIN_5);
					}
					HAL_Delay(DELAY_TIME);
					highZAll();
					break;
				case 2:
					//[1,3,4,5]
					pinOutput(GPIO_PIN_2);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
					if (grid[1][0] == 1) {
						pinOutput(GPIO_PIN_1);
					}
					if (grid[1][1] == 1) {
						pinOutput(GPIO_PIN_3);
					}
					if (grid[1][2] == 1) {
						pinOutput(GPIO_PIN_4);
					}
					if (grid[1][3] == 1) {
						pinOutput(GPIO_PIN_5);
					}
					HAL_Delay(DELAY_TIME);
					highZAll();
					break;
				case 3:
					//[1,2,4,5]
					pinOutput(GPIO_PIN_3);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
					if (grid[2][0] == 1) {
						pinOutput(GPIO_PIN_1);
					}
					if (grid[2][1] == 1) {
						pinOutput(GPIO_PIN_2);
					}
					if (grid[2][2] == 1) {
						pinOutput(GPIO_PIN_4);
					}
					if (grid[2][3] == 1) {
						pinOutput(GPIO_PIN_5);
					}
					HAL_Delay(DELAY_TIME);
					highZAll();
					break;
				case 4:
					//[1,2,3,5]
					pinOutput(GPIO_PIN_4);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
					if (grid[3][0] == 1) {
						pinOutput(GPIO_PIN_1);
					}
					if (grid[3][1] == 1) {
						pinOutput(GPIO_PIN_2);
					}
					if (grid[3][2] == 1) {
						pinOutput(GPIO_PIN_3);
					}
					if (grid[3][3] == 1) {
						pinOutput(GPIO_PIN_5);
					}
					HAL_Delay(DELAY_TIME);
					highZAll();
					break;
				case 5:
					//[1,2,3,4]
					pinOutput(GPIO_PIN_5);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
					if (grid[4][0] == 1) {
						pinOutput(GPIO_PIN_1);
					}
					if (grid[4][1] == 1) {
						pinOutput(GPIO_PIN_2);
					}
					if (grid[4][2] == 1) {
						pinOutput(GPIO_PIN_3);
					}
					if (grid[4][3] == 1) {
						pinOutput(GPIO_PIN_4);
					}
					HAL_Delay(DELAY_TIME);
					highZAll();
					break;
				default:
					highZAll();
					HAL_Delay(DELAY_TIME);
			}
		}
	loops--;
	}
}


void pinOutput(uint16_t GPIO_Pin) {
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    // Configure the pin as Output Push-Pull
    GPIO_InitStruct.Pin = GPIO_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL; // Or GPIO_PULLUP/PULLDOWN as needed
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW; // Adjust speed as necessary

    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // Optional: Set an initial state (e.g., LOW)
    HAL_GPIO_WritePin(GPIOA, GPIO_Pin, GPIO_PIN_RESET);
}

void pinInput(uint16_t GPIO_Pin) {
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    // Configure the pin as Input
    GPIO_InitStruct.Pin = GPIO_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL; // Or GPIO_PULLUP/PULLDOWN as needed

    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

void highZAll(void) {
	pinInput(GPIO_PIN_1);
	pinInput(GPIO_PIN_2);
	pinInput(GPIO_PIN_3);
	pinInput(GPIO_PIN_4);
	pinInput(GPIO_PIN_5);
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  __HAL_FLASH_SET_LATENCY(FLASH_LATENCY_0);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSIDiv = RCC_HSI_DIV4;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  /* USER CODE BEGIN MX_GPIO_Init_1 */

  /* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5|GPIO_PIN_4| GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, GPIO_PIN_RESET);

  /*Configure GPIO pins : PA0 PA4 */
  GPIO_InitStruct.Pin = GPIO_PIN_5|GPIO_PIN_4| GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PA1 PA2 PA3 PA6 */
//  HAL_PWR_EnableWakeUpPin();
  GPIO_InitStruct.Pin = GPIO_PIN_2;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /* USER CODE BEGIN MX_GPIO_Init_2 */

  /* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
