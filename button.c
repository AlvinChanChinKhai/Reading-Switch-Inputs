void EXTI15_10_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI15_10_IRQn 0 */
   for(int i =0; i < 65535;i++);
   if(!(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13))){
//	   if(leddelay==250)
//		  leddelay=1000;
//	   else
//		   leddelay=250;

	   uint32_t bit3;
	   uint32_t bit2;
	   uint32_t bit1;
	   uint32_t bit0;
	   uint32_t value0;
	   uint32_t value1;
	   uint32_t value2;
	   uint32_t value3;

	   bit0=!(HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_4));
	   bit1=!(HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_5));
	   bit2=!(HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_6));
	   bit3=!(HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7));
	   		if(bit0) {
	   			value0 = 1;}
	   		else{
	   			value0 = 0;}

	   		if(bit1){
	   			value1 = 2;}
	   		else{
	   			value1 = 0;}

	   		if(bit2){
	   			value2 = 4;}
	   		else{
	   			value2 = 0;}

	   		if(bit3) {
	   			value3 = 8;}
	   		else {
	   			value3 = 0;}

	   		leddelay = 1062-((value0+value1+value2+value3)*62);
   }
