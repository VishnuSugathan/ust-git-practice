//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	truclient_step("1", "Add empty tab", "snapshot=Init_1.inf");
	truclient_step("2", "Activate tab #2", "snapshot=Init_2.inf");
	lr_start_transaction("Transaction 1");
	truclient_step("3", "Navigate to 'google.com'", "snapshot=Init_3.inf");
	truclient_step("4", "Type ust in Google Search textbox", "snapshot=Init_4.inf");
	truclient_step("5", "Press Enter key on Google Search textbox", "snapshot=Init_5.inf");

	return 0;
}
