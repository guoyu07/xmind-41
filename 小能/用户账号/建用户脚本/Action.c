Action()
{

	



	web_url("add_or_edit", 
		"URL=http://kpi3-test.ntalker.com/index.php/settingelse/add_or_edit?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&type=add&disp=account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);

	web_custom_request("add_account", 
		"URL=http://kpi3-test.ntalker.com/index.php/settingelse/add_account?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://kpi3-test.ntalker.com/index.php/settingelse/add_or_edit?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&type=add&disp=account", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body=usertype=0&pri=admin&gid=11054&accountName={accountName}&user_id=&externalName={accountName}&nickName={accountName}&pass={pass}&pass2={pass}&is_robot_welcome=0&welcome=&remLen1=&no_reply=&remLen=&maxreception=8&dealkfid=all&mobile=&email=&hand_day_num=5&hand_all_num=5&accountName={accountName}&usericon=http://kpi3-test.ntalker.com/application/static/setting/images/head.jpg", 
		LAST);



	return 0;
}