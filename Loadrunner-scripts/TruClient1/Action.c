//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Add empty tab", "snapshot=Action_1.inf");
	truclient_step("2", "Activate tab #2", "snapshot=Action_2.inf");
	truclient_step("3", "Navigate to TC.getParam('url')", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Google Search textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type ust trivandrum in Google Search textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Press Enter key on Google Search textbox", "snapshot=Action_6.inf");
	lr_end_transaction("Transaction 1",0);

	return 0;
}
